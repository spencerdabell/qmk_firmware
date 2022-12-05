/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C

/* Select hand configuration */
// #define MASTER_RIGHT
// #define EE_HANDS

#define TAPPING_TERM 200

#define IGNORE_MOD_TAP_INTERRUPT

#define COMBO_TERM 10


#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL
// #define MK_COMBINED

// MK_C_OFFSET_UNMOD	16	Cursor offset per movement (unmodified)
// MK_C_INTERVAL_UNMOD	16	Time between cursor movements (unmodified)

// MK_C_OFFSET_0	1	Cursor offset per movement (KC_ACL0)
#define MK_C_OFFSET_0   2
// MK_C_INTERVAL_0	32	Time between cursor movements (KC_ACL0)
#define MK_C_INTERVAL_0 16

// MK_C_OFFSET_1	4	Cursor offset per movement (KC_ACL1)
#define MK_C_OFFSET_1   8
// MK_C_INTERVAL_1	16	Time between cursor movements (KC_ACL1)

// MK_C_OFFSET_2	32	Cursor offset per movement (KC_ACL2)
// MK_C_INTERVAL_2	16	Time between cursor movements (KC_ACL2)



