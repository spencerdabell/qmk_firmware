#include QMK_KEYBOARD_H

#define OSM_LST OSM(MOD_LSFT)

enum {
    L_BASE = 0
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [L_BASE] = LAYOUT_split_3x6_3(
        KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T,      KC_Y,  KC_U,  KC_I,    KC_O,  KC_P,    KC_GRV,
        KC_ENT, KC_A, KC_S, KC_D, KC_F, KC_G,      KC_H,  KC_J,  KC_K,    KC_L,  KC_SCLN, KC_QUOT,
        KC_NO,  KC_Z, KC_X, KC_C, KC_V, KC_B,      KC_N,  KC_M,  KC_COMM, KC_DOT,KC_SLSH, KC_NO,
                            KC_4,OSM_LST,KC_LGUI,  KC_TAB,KC_SPC,KC_ENT
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
