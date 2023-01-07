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

enum combos {
    CB_BOOT
    , CB_LENGTH
};
uint16_t COMBO_LEN = CB_LENGTH;

const uint16_t PROGMEM BOOT[] =         {KC_A, KC_D, COMBO_END};
combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER)
};
