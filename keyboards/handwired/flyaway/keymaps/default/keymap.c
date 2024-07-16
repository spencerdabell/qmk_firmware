#include "keycodes.h"
#include "send_string_keycodes.h"
#include QMK_KEYBOARD_H

#include "common_modkeys.h"
#include "password.h"

enum layer {
    L_ALPHA = 0,
    L_NUMSYM,
    L_NAVI,
    L_FN,
    L_MOUSE
};

// LAYER SWITCHING
#define TO_ALPH TO(L_ALPHA)
#define TO_MOUS TO(L_MOUSE)
#define TO_NAVI TO(L_NAVI)
#define TG_GAME TG(L_GAME)
#define TG_NV TG(L_NAVI)
#define TG_MS TG(L_MOUSE)
#define NV_H LT(L_NAVI, KC_H)
#define NV_M LT(L_NAVI, KC_M)
#define MS_D LT(L_MOUSE, KC_D)
#define MS_ESC LT(L_MOUSE, KC_ESC)
#define FN_L LT(L_FN, KC_L)
#define FN_SPC LT(L_FN, KC_SPC)
#define NS_R LT(L_NUMSYM, KC_R)

// nav
#define CA_LEFT LCA(KC_LEFT)
#define CA_DOWN LCA(KC_DOWN)
#define CA_UP LCA(KC_UP)
#define CA_RGHT LCA(KC_RGHT)


// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[L_ALPHA] = LAYOUT_split_3x5_3(
    KC_Z,    KC_W,    KC_G,    KC_F,    KC_K,           KC_QUOT, KC_J,    KC_U,    KC_Y,    KC_Q,
    CT_N,    AT_S,    ST_T,    NV_H,    KC_V,           KC_DOT,  KC_A,    ST_E,    AT_I,    CT_O,
    GT_P,    GT_C,    NV_M,    MS_D,    KC_B,           KC_COMM, KC_X,    KC_SLSH, GT_TAB,  GT_ENT,
                      U______, FN_SPC,  KC_ESC,         KC_L,    NS_R,    U______
),
[L_NUMSYM] = LAYOUT_split_3x5_3(
    KC_LBRC, KC_LT,   KC_GT,   KC_RBRC, KC_DLR,         KC_ASTR, KC_AMPR, KC_HASH, KC_DQUO, KC_GRV,
    KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_PIPE,        KC_PLUS, KC_MINS, KC_COLN, KC_SCLN, KC_EQL,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_BSLS,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
                      U______, KC_UNDS, KC_5,           U______, ___H___, U______
),
[L_NAVI] = LAYOUT_split_3x5_3(
    U______, KC_MCTL, U______, U______, U______,        Ct_HOME, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    Ct_BSPC, Ct_Z,    Ct_Y,    ___H___, U______,        U______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U______, Ct_DEL,  U______, U______, U______,        Ct_END,  Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT,
                      U______, ST_____, _______,        Ct_BSPC, KC_BSPC, U______
),

[L_FN] = LAYOUT_split_3x5_3(
    U______, KC_MPRV, KC_MPLY, KC_MNXT, U______,        U______, Gu_END,  CW_TOGG, KC_CAPS, KC_PSCR,
    CT_F1,   AT_F2,   ST_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   ST_F8,   AT_F9,   CT_F10,
    KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD, U______,        U______, Ct_PGUP, CA_DOWN, CA_UP,   Ct_PGDN,
                      U______, ___H___, U______,        KC_F11,  KC_F12,  U______
),
[L_MOUSE] = LAYOUT_split_3x5_3(
    U______, U______, U______, U______, U______,        U______, U______, KC_BTN1, KC_BTN2, U______,
    CT_BTN3, AT_BTN2, KC_BTN1, KC_BTN1, U______,        U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    CT_BTN3, AT_BTN2, KC_BTN1, KC_BTN1, U______,        U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                      U______, ST_____, U______,        U______, U______, U______
),
};

enum combos {
    CB_BOOT
    , CB_Name
    , CB_Email
    , CB_PassLinux
    , CB_Tilde
    , CB_RL
    , CB_LENGTH
};
uint16_t COMBO_LEN = CB_LENGTH;
#define COMBO_2(NAME, KEY1, KEY2)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, COMBO_END};
#define COMBO_3(NAME, KEY1, KEY2, KEY3)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, KEY3, COMBO_END};
COMBO_3(BOOT,      KC_G, KC_F, KC_K);
COMBO_2(PassLinux, KC_J, KC_Y);
COMBO_2(Name,      AT_S, GT_P);
COMBO_2(Email,     NV_M, KC_L);
COMBO_2(Tilde,     KC_SLSH, GT_TAB);
COMBO_2(BigramRL,  KC_L, NS_R);
combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER),
    [CB_PassLinux] =    COMBO_ACTION(PassLinux),
    [CB_Name] =         COMBO_ACTION(Name),
    [CB_Email] =        COMBO_ACTION(Email),
    [CB_Tilde] =        COMBO(Tilde, KC_TILD),
    [CB_RL] =           COMBO_ACTION(BigramRL),
};

#define UNICODEZ(UCODE) SEND_STRING( SS_DOWN(X_LEFT_CTRL)SS_DOWN(X_LEFT_SHIFT)"u"  SS_DELAY(50)SS_UP(X_LEFT_CTRL)SS_UP(X_LEFT_SHIFT) SS_DELAY(100) UCODE SS_TAP(X_ENTER));

// combo complex actions
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CB_PassLinux: if (pressed) { SEND_STRING(PW_LINUX); } break;
    case CB_Name:      if (pressed) { SEND_STRING("spencerdabell"); } break;
    case CB_Email:     if (pressed) { SEND_STRING("spencerdabell@gmail.com"); } break;
    case CB_RL:        if (pressed) { SEND_STRING("rl"); } break;
    default: break;
  }
}


const key_override_t left_angle_bracket_override  = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, S(KC_SLSH));
const key_override_t right_angle_bracket_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, S(KC_1));
const key_override_t ctrl_q_accident_override = ko_make_basic(MOD_BIT(KC_RIGHT_CTRL), KC_Q, KC_NO);

const key_override_t **key_overrides = (const key_override_t *[]){
    &left_angle_bracket_override,
    &right_angle_bracket_override,
    &ctrl_q_accident_override,
    NULL
};
