#include QMK_KEYBOARD_H

#define _BASE 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
KC_ESC , _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_MPLY, _______,       KC_F5  , KC_F6,   KC_F7,   KC_F8,   _______, KC_F9,   KC_F10,  KC_F11,  KC_F12 ,
_______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MPRV, _______,       KC_VOLU, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL , KC_BSPC,
_______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MNXT, _______,       KC_VOLD, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
_______, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______,       _______, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT , KC_PGUP,
_______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______,       _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP  , KC_PGDN,
KC_LCTL, KC_LCTL, _______, KC_LGUI, KC_LALT, KC_LALT, KC_BSPC, KC_DEL , _______,       KC_ENT , KC_SPC,  KC_BSPC, _______, KC_HOME, KC_END , KC_LEFT, KC_DOWN, KC_RGHT
)
};








// [_BASE] = LAYOUT(
//     KC_ESC,  KC_VOLU, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,         KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
//     KC_HOME, KC_VOLD, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,          KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
//     KC_END,  KC_TAB,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,          KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
//     KC_PGUP, KC_CAPS, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,          KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,
//     KC_PGDN, KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,          KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   XXXXXXX,
//     KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_ENT,        KC_BSPC, KC_SPC,  KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
// )
// };