#pragma once

#include "config_common.h"

#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define DIODE_DIRECTION COL2ROW

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

#define TAPPING_TERM 500
#define PERMISSIVE_HOLD


#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26 }
#define MATRIX_COL_PINS { GP7, GP6, GP5, GP4, GP3, GP2 }

// "cols": ["GP2",  "GP3",  "GP4",  "GP5",  "GP6",  "GP7"],
// "rows": ["GP14", "GP15", "GP16", "GP17", "GP18"]

#define DEBUG_MATRIX_SCAN_RATE

#define QMK_WAITING_TEST_BUSY_PIN GP8
#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U


// #define SERIAL_USART_FULL_DUPLEX
// #define SERIAL_USART_TX_PIN GP0
// #define SERIAL_USART_RX_PIN GP1
// #define SOFT_SERIAL_PIN     SERIAL_USART_TX_PIN
#define SOFT_SERIAL_PIN     GP0
// #define USE_SERIAL
