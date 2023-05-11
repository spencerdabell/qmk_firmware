#include QMK_KEYBOARD_H

#define U______ KC_NO

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    U______, KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    U______, U______,       U______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, U______, U______,
    U______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    U______, U______,       U______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, U______,
    U______, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    U______, U______,       U______, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  U______,
    U______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    U______, U______,       U______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   KC_BSLS, U______,
    U______, KC_LCTL, U______, KC_LALT, KC_LGUI, KC_SPC,  U______, U______, U______,       U______, U______, KC_SPC,  KC_MINS, KC_EQL,  KC_LEFT, KC_DOWN, KC_RGHT, U______,
    U______, U______, U______, U______, U______, U______, U______, U______, U______,       U______, U______, U______, U______, U______, U______, U______, U______, U______
)
};
