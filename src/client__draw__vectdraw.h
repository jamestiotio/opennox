#ifndef NOX_PORT_CLIENT_DRAW_VECTDRAW
#define NOX_PORT_CLIENT_DRAW_VECTDRAW

#include "defs.h"

int __cdecl sub_4BC5D0(nox_drawable* dr, int a2);
int __cdecl nox_thing_vector_animate_draw(int* a1, nox_drawable* dr);
bool __cdecl nox_things_vector_animate_draw_parse(nox_thing* obj, nox_memfile* f, char* attr_value);

#endif // NOX_PORT_CLIENT_DRAW_VECTDRAW