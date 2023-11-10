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
