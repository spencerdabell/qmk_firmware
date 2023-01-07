#pragma once

#include "config_common.h"

#define MATRIX_ROWS 2
#define MATRIX_COLS 2

#define DIODE_DIRECTION COL2ROW

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

#define TAPPING_TERM 500
#define PERMISSIVE_HOLD


// #define MATRIX_COL_PINS { GP4 }
// #define MATRIX_ROW_PINS { GP5 }

// // Left side (front)
// D3 D0    D1
// D2 1U    D0
// GND      D10
// GND      D11
// D1 2U    
// D0 3U
// D4 4U
// C6 5U
// D7 6U
// E6 7U
// B4 8U
// B5 9U

// // Right side (front)
// //      RAW
// //      GND
// //      RESET
// //      VCC
// F4 29U
// F5 28U
// F6 27U
// F7 26U
// B1 22U
// B3 20U
// B2 23U
// B6 21U

// // LEDs (Mapped to QT connector to avoid collisions with button/neopixel)
// D5 17U
// B0 16U



// A0-A3
#define MATRIX_ROW_PINS { GP29, GP28 }
// D2-D9
#define MATRIX_COL_PINS { GP2, GP3 }

#define DEBUG_MATRIX_SCAN_RATE

#define QMK_WAITING_TEST_BUSY_PIN GP8
#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN A1

