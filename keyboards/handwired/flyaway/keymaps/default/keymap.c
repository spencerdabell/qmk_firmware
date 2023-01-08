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
        KC_1, KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_2, KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_3, KC_Z, KC_X, KC_C, KC_V, KC_B,
                          KC_4, KC_5, KC_6
    )
};

enum combos {
    CB_BOOT
    , CB_LENGTH
};
uint16_t COMBO_LEN = CB_LENGTH;

const uint16_t PROGMEM BOOT[] =         {KC_R, KC_T, COMBO_END};
combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER)
};
