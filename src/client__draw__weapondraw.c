#include "client__draw__weapondraw.h"
#include "client__draw__staticdraw.h"
#include "client__draw__animdraw.h"
#include "proto.h"

//----- (004B9690) --------------------------------------------------------
int __cdecl nox_thing_weapon_draw(int* a1, nox_drawable* dr) {
	sub_4B95D0(dr);
	return nox_thing_static_draw(a1, dr);
}

//----- (004B96B0) --------------------------------------------------------
int __cdecl nox_thing_weapon_animate_draw(int* a1, nox_drawable* dr) {
	sub_4B95D0(dr);
	return nox_thing_animate_draw(a1, dr);
}

//----- (004B8020) --------------------------------------------------------
int __cdecl nox_thing_spherical_shield_draw(int* a1, nox_drawable* dr) {
	int v2;     // esi
	int v3;     // eax
	_DWORD* v4; // eax
	int v5;     // eax
	int result; // eax

	_DWORD* a2 = dr;

	v2 = a2[108];
	if (nox_xxx_netTestHighBit_578B70(a2[108])) {
		v3 = nox_xxx_netClearHighBit_578B30(v2);
		v4 = nox_xxx_netSpriteByCodeStatic_45A720(v3);
	} else {
		v5 = nox_xxx_netClearHighBit_578B30(v2);
		v4 = nox_xxx_netSpriteByCodeDynamic_45A6F0(v5);
	}
	if (v4) {
		nox_xxx_updateSpritePosition_49AA90(dr, v4[3], v4[4] + 3);
		result = nox_thing_animate_draw(a1, dr);
	} else {
		nox_xxx_spriteDeleteStatic_45A4E0_drawable(dr);
		result = 0;
	}
	return result;
}