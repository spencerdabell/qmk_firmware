// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD

#define COMBO_TERM 40

// #define MK_3_SPEED
// #define MK_MOMENTARY_ACCEL
// // #define MK_COMBINED

// // MK_C_OFFSET_UNMOD	16	Cursor offset per movement (unmodified)
// // MK_C_INTERVAL_UNMOD	16	Time between cursor movements (unmodified)

// // MK_C_OFFSET_0	1	Cursor offset per movement (KC_ACL0)
// #define MK_C_OFFSET_0 2
// // MK_C_INTERVAL_0	32	Time between cursor movements (KC_ACL0)
// #define MK_C_INTERVAL_0 16

// // MK_C_OFFSET_1	4	Cursor offset per movement (KC_ACL1)
// #define MK_C_OFFSET_1 8
// // MK_C_INTERVAL_1	16	Time between cursor movements (KC_ACL1)

// // MK_C_OFFSET_2	32	Cursor offset per movement (KC_ACL2)
// // MK_C_INTERVAL_2	16	Time between cursor movements (KC_ACL2)




/*

{
    "manufacturer": "svenwulf",
    "keyboard_name": "flyaway-2040",
    "maintainer": "svenwulf",
    "bootloader": "rp2040",
    "features": {
        "bootmagic": true,
        "command": false,
        "console": false,
        "extrakey": true,
        "mousekey": true,
        "combo": true,
        "nkro": true,
        "caps_word": true
    },
    "processor": "RP2040",
    "url": "",
    "usb": {
        "device_version": "0.4.0",
        "pid": "0x0001",
        "vid": "0xF01D"
    },
    "diode_direction": "COL2ROW",
    "matrix_pins": {
        "cols": ["GP7", "GP6", "GP5", "GP4", "GP3", "GP2"],
        "rows": ["GP28", "GP27", "GP26"]
    },
    "split": {
        "enabled": true,
        "matrix_pins": {
            "right": {
                "cols": ["GP2", "GP3", "GP4", "GP5", "GP6", "GP7"],
                "rows": ["GP28", "GP27", "GP26"]
            }
        }
    },
    "layouts": {
        "LAYOUT_split_5x3_2": {
            "layout": [
                { "matrix": [0, 0], "x": 0, "y": 0 },
                { "matrix": [0, 1], "x": 0, "y": 0 },
                { "matrix": [0, 2], "x": 0, "y": 0 },
                { "matrix": [0, 3], "x": 0, "y": 0 },
                { "matrix": [0, 4], "x": 0, "y": 0 },
                { "matrix": [0, 5], "x": 0, "y": 0 },


                { "matrix": [3, 0], "x": 0, "y": 0 },
                { "matrix": [3, 1], "x": 0, "y": 0 },
                { "matrix": [3, 2], "x": 0, "y": 0 },
                { "matrix": [3, 3], "x": 0, "y": 0 },
                { "matrix": [3, 4], "x": 0, "y": 0 },
                { "matrix": [3, 5], "x": 0, "y": 0 },


                { "matrix": [1, 0], "x": 0, "y": 0 },
                { "matrix": [1, 1], "x": 0, "y": 0 },
                { "matrix": [1, 2], "x": 0, "y": 0 },
                { "matrix": [1, 3], "x": 0, "y": 0 },
                { "matrix": [1, 4], "x": 0, "y": 0 },
                { "matrix": [1, 5], "x": 0, "y": 0 },


                { "matrix": [4, 0], "x": 0, "y": 0 },
                { "matrix": [4, 1], "x": 0, "y": 0 },
                { "matrix": [4, 2], "x": 0, "y": 0 },
                { "matrix": [4, 3], "x": 0, "y": 0 },
                { "matrix": [4, 4], "x": 0, "y": 0 },
                { "matrix": [4, 5], "x": 0, "y": 0 },


                { "matrix": [2, 0], "x": 0, "y": 0 },
                { "matrix": [2, 1], "x": 0, "y": 0 },
                { "matrix": [2, 2], "x": 0, "y": 0 },
                { "matrix": [2, 3], "x": 0, "y": 0 },
                { "matrix": [2, 4], "x": 0, "y": 0 },
                { "matrix": [2, 5], "x": 0, "y": 0 },


                { "matrix": [5, 0], "x": 0, "y": 0 },
                { "matrix": [5, 1], "x": 0, "y": 0 },
                { "matrix": [5, 2], "x": 0, "y": 0 },
                { "matrix": [5, 3], "x": 0, "y": 0 },
                { "matrix": [5, 4], "x": 0, "y": 0 },
                { "matrix": [5, 5], "x": 0, "y": 0 }
            ]
        }
    }
}







*/


