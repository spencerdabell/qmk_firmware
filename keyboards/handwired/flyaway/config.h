#pragma once

#include "config_common.h"



#pragma once

/* key matrix size */
#define MATRIX_ROWS 1
#define MATRIX_COLS 1

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5


#define TAPPING_TERM 500
#define PERMISSIVE_HOLD


#define MATRIX_COL_PINS \
    { GP4 }
#define MATRIX_ROW_PINS \
    { GP5 }
#define DEBUG_MATRIX_SCAN_RATE

#define QMK_WAITING_TEST_BUSY_PIN GP8
#define QMK_WAITING_TEST_YIELD_PIN GP9

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define RGB_DI_PIN A1

