#include QMK_KEYBOARD_H


// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     LAYOUT_ortho_1x1(KC_A)
// };


// #define _BASE 0
enum {
    L_BASE = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE] = LAYOUT(
        KC_A, KC_B,
        KC_C, KC_D
    )
};
