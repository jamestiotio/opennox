#ifndef NOX_PORT_CLIENT_DRAW_MONDRAW
#define NOX_PORT_CLIENT_DRAW_MONDRAW

#include "defs.h"

char __cdecl sub_4BC490(int a1);
int __cdecl nox_thing_monster_draw(int* a1, nox_drawable* dr);
bool __cdecl nox_things_monster_draw_parse(nox_thing* obj, nox_memfile* f, char* attr_value);

#endif // NOX_PORT_CLIENT_DRAW_MONDRAW