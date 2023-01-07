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
	K000, K001, K002, K003,  \
	K100, K101, K102, K103,  \
	K200, K201, K202, K203,  \
	K300, K301, K302, K303  \
) \
{ \
	{ K000,  K001, K002, K003 }, \
	{ K100,  K101, K102, K103 }, \
	{ K200,  K201, K202, K203 }, \
	{ K300,  K301, K302, K303 } \
}
