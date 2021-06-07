package main

/*
#include "proto.h"
extern void* nox_server_objects_1556844;
extern void* nox_server_objects_uninited_1556860;
*/
import "C"
import (
	"fmt"
	"strings"
	"unsafe"

	"nox/v1/common/alloc"
	"nox/v1/common/object"
	"nox/v1/common/types"
	"nox/v1/server/script"
)

func asObject(p unsafe.Pointer) *Object {
	return (*Object)(p)
}
func asObjectC(p *C.nox_object_t) *Object {
	return (*Object)(unsafe.Pointer(p))
}

func firstServerObject() *Object {
	return asObject(C.nox_server_objects_1556844)
}

func firstServerObjectUninited() *Object {
	return asObject(C.nox_server_objects_uninited_1556860)
}

func getObjects() []*Object {
	var out []*Object
	for p := firstServerObject(); p != nil; p = p.Next() {
		out = append(out, p)
	}
	return out
}

func getObjectsUninited() []*Object {
	var out []*Object
	for p := firstServerObjectUninited(); p != nil; p = p.Next() {
		out = append(out, p)
	}
	return out
}

func getObjectByID(id string) *Object {
	for obj := firstServerObject(); obj != nil; obj = obj.Next() {
		if p := obj.findByID(id); p != nil {
			return p
		}
	}
	for obj := firstServerObjectUninited(); obj != nil; obj = obj.Next() {
		if p := obj.findByID(id); p != nil {
			return p
		}
	}
	return nil
}

func getObjectByInd(ind int) *Object {
	for p := firstServerObject(); p != nil; p = p.Next() {
		if p.flags16()&0x20 == 0 && p.Ind() == ind {
			return p
		}
	}
	return nil
}

func getObjectGroupByID(id string) *script.ObjectGroup {
	g := getMapGroupByID(id, 0)
	if g == nil {
		return nil
	}
	// may contain map name, so we load it again
	id = g.ID()
	var list []script.Object
	for wp := g.FirstItem(); wp != nil; wp = wp.Next() {
		ind := int(*(*int32)(wp.Payload()))
		if wl := getObjectByInd(ind); wl != nil {
			list = append(list, wl)
		}
	}
	return script.NewObjectGroup(id, list...)
}

type nox_object_t = C.nox_object_t

type noxObject interface {
	CObj() *nox_object_t
}

type Object nox_object_t

func (obj *Object) UniqueKey() uintptr {
	return uintptr(unsafe.Pointer(obj))
}

func (obj *Object) CObj() *nox_object_t {
	return (*nox_object_t)(unsafe.Pointer(obj))
}

func (obj *Object) field(dp uintptr) unsafe.Pointer {
	return unsafe.Pointer(uintptr(unsafe.Pointer(obj)) + dp)
}

func (obj *Object) ID() string {
	return GoString(obj.id)
}

func (obj *Object) Ind() int {
	return int(*(*int32)(obj.field(40)))
}

func (obj *Object) objTypeInd() int {
	return int(obj.typ_ind)
}

func (obj *Object) stringAs(typ string) string {
	if obj == nil {
		return fmt.Sprintf("%s(<nil>)", typ)
	}
	var oid string
	if id := obj.ID(); id != "" {
		oid = fmt.Sprintf("%q", id)
	} else if ind := obj.Ind(); ind != 0 {
		oid = fmt.Sprintf("#%d", ind)
	}
	if obj.Class().Has(object.ClassPlayer) {
		// TODO: better way
		for _, p := range getPlayers() {
			if u := p.UnitC(); u != nil && u.CObj() == obj.CObj() {
				oid += fmt.Sprintf(",P:%q", p.Name())
			}
		}
	}
	if t := obj.ObjectTypeC(); t != nil {
		return fmt.Sprintf("%s(%s,T:%q)", typ, oid, t.ID())
	}
	return fmt.Sprintf("%s(%s)", typ, oid)
}

func (obj *Object) String() string {
	return obj.stringAs("Object")
}

func (obj *Object) GetObject() script.Object {
	if obj == nil {
		return nil
	}
	return obj
}

func (obj *Object) Class() object.Class {
	return object.Class(obj.obj_class)
}

func (obj *Object) flags16() byte {
	return *(*byte)(obj.field(16))
}

func (obj *Object) findByID(id string) *Object {
	if obj.equalID(id) {
		return obj
	}
	for p := obj.FirstXxx(); p != nil; p = p.NextXxx() {
		if p.equalID(id) {
			return p
		}
	}
	return nil
}

func (obj *Object) equalID(id2 string) bool {
	id := obj.ID()
	if id == "" {
		return false
	}
	return id == id2 || strings.HasSuffix(id, ":"+id2)
}

func (obj *Object) Next() *Object {
	p := *(*unsafe.Pointer)(obj.field(444))
	return asObject(p)
}

func (obj *Object) FirstXxx() *Object {
	p := *(*unsafe.Pointer)(obj.field(504))
	return asObject(p)
}

func (obj *Object) NextXxx() *Object {
	p := *(*unsafe.Pointer)(obj.field(496))
	return asObject(p)
}

func (obj *Object) GetXxx() []*Object {
	var out []*Object
	for p := obj.FirstXxx(); p != nil; p = p.NextXxx() {
		out = append(out, p)
	}
	return out
}

func (obj *Object) AsUnit() *Unit {
	// TODO: check somehow
	return asUnit(unsafe.Pointer(obj))
}

func (obj *Object) ObjectTypeC() *ObjectType {
	if obj == nil {
		return nil
	}
	ind := obj.objTypeInd()
	return getObjectTypeByInd(ind)
}

func (obj *Object) ObjectType() script.ObjectType {
	t := obj.ObjectTypeC()
	if t == nil {
		return nil
	}
	return t
}

func (obj *Object) OwnerC() *Object {
	p := *(*unsafe.Pointer)(obj.field(508))
	return asObject(p)
}

func (obj *Object) Owner() script.Object {
	p := obj.OwnerC()
	if p == nil {
		return nil
	}
	return p
}

func (obj *Object) SetOwner(owner script.ObjectWrapper) {
	if owner == nil {
		C.nox_xxx_unitClearOwner_4EC300(obj.CObj())
		return
	}
	own := owner.GetObject().(noxObject)
	C.nox_xxx_unitSetOwner_4EC290(own.CObj(), obj.CObj())
}

func (obj *Object) Pos() types.Pointf {
	if obj == nil {
		return types.Pointf{}
	}
	return types.Pointf{
		X: float32(obj.x),
		Y: float32(obj.y),
	}
}

func (obj *Object) SetPos(p types.Pointf) {
	cp := (*C.float2)(alloc.Malloc(unsafe.Sizeof(C.float2{})))
	defer alloc.Free(unsafe.Pointer(cp))
	cp.field_0 = C.float(p.X)
	cp.field_4 = C.float(p.Y)
	C.nox_xxx_unitMove_4E7010(obj.CObj(), cp)
}

func (obj *Object) Z() float32 {
	return float32(*(*C.int)(obj.field(104)))
}

func (obj *Object) SetZ(z float32) {
	C.nox_xxx_unitRaise_4E46F0(obj.CObj(), C.float(z))
}

func (obj *Object) Push(vec types.Pointf, force float32) {
	panic("implement me")
}

func (obj *Object) PushTo(p types.Pointf) {
	panic("implement me")
}

func (obj *Object) IsEnabled() bool {
	if obj == nil {
		return false
	}
	return *(*uint32)(obj.field(16))&0x1000000 != 0
}

func (obj *Object) Enable(enable bool) {
	if obj == nil {
		return
	}
	if enable {
		C.nox_xxx_objectSetOn_4E75B0(obj.CObj())
	} else {
		C.nox_xxx_objectSetOff_4E7600(obj.CObj())
	}
}

func (obj *Object) Delete() {
	C.nox_xxx_delayedDeleteObject_4E5CC0(obj.CObj())
}

func (obj *Object) Destroy() {
	panic("implement me")
}