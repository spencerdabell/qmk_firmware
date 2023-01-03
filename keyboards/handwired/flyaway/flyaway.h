#pragma once

#include "quantum.h"

/*
#define LAYOUT_ortho_1x1( \
    k00 \
) { \
    { k00 } \
}
*/

#define LAYOUT( \
	K000, K001, \
	K100, K101 \
) \
{ \
	{ K000,  K001 }, \
	{ K100,  K101 } \
}
