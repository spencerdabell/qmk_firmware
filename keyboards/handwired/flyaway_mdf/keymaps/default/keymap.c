// #include "keycodes.h"
#include "keycodes.h"
#include "send_string_keycodes.h"
#include QMK_KEYBOARD_H
#include "common_modkeys.h"
#include "password.h"

enum layer {
    L_ALPHA = 0, //
    L_NUMSYM,
    L_NAVI,
    L_FN,
    L_MOUSE,
    L_GAME
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
#define NV2_D LT(L_NAVI2, KC_D)
#define NV2_SPC LT(L_NAVI2, KC_SPC)
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

// make compiler warnings go away
#ifndef MATRIX_COLS
#    define MATRIX_COLS
#endif
#ifndef MATRIX_ROWS
#    define MATRIX_ROWS
#endif
#ifndef LAYOUT_split_5x3_2_info
#    define LAYOUT_split_5x3_2_info(L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25) \
        {}
#endif
// make compiler warnings go away

// clang-format off
#include "layout.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[L_ALPHA] = LAYOUT_532(
    KC_Z,    KC_W,    KC_G,    KC_F,    KC_K,           KC_QUOT, KC_J,    KC_U,    KC_Y,    KC_Q,
    CT_N,    AT_S,    ST_T,    NV_H,    KC_V,           KC_DOT,  KC_A,    ST_E,    AT_I,    CT_O,
    GT_P,    GT_C,    NV_M,    MS_D,    KC_B,           KC_COMM, KC_X,    KC_ENT,  GT_TAB,  GT_SLSH,
                               FN_SPC,  KC_ESC,         KC_L,    NS_R
),
/*
[<>]$ *&#"`
{()}| +-:;=
1234\ 67890
   _5

1234567890
!@#$%^&*()


[<>]. ..#"`
1234\ 67890
{()}| +-:;=
   _5
*/

[L_NUMSYM] = LAYOUT_532(
    KC_LBRC, KC_LT,   KC_GT,   KC_RBRC, KC_DLR,         KC_ASTR, KC_AMPR, KC_HASH, KC_DQUO, KC_GRV,
    KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_PIPE,        KC_PLUS, KC_MINS, KC_COLN, KC_SCLN, KC_EQL,
    KC_1,    KC_2,    KC_3,    KC_4,    KC_BSLS,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
                               KC_UNDS, KC_5,           U______, ___H___
),
[L_NAVI] = LAYOUT_532(
    U______, KC_MCTL, U______, U______, U______,        Ct_HOME, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    Ct_BSPC, Ct_Z,    Ct_Y,    ___H___, U______,        U______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    U______, Ct_DEL,  U______, U______, U______,        Ct_END,  Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT,
                               ST_____, U______,        Ct_BSPC, KC_BSPC
),
[L_FN] = LAYOUT_532(
    U______, KC_MPRV, KC_MPLY, KC_MNXT, U______,        U______, Gu_END,  CW_TOGG, KC_CAPS, KC_PSCR,
    KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD, U______,        U______, Ct_PGUP, CA_DOWN, CA_UP,   Ct_PGDN,
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
                               ___H___, U______,        KC_F11,  KC_F12
),
[L_MOUSE] = LAYOUT_532(
    U______, U______, U______, U______, U______,        U______, U______, KC_BTN1, KC_BTN2, U______,
    KC_BTN3, KC_BTN2, KC_BTN1, KC_BTN1, U______,        U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_BTN3, KC_BTN2, KC_BTN1, KC_BTN1, U______,        U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                               ST_____, U______,        TG_GAME, U______
),
[L_GAME] = LAYOUT_532(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,           KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,           KC_H, KC_J, KC_K, KC_L, KC_G,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,           KC_N, KC_M, KC_B, KC_T, KC_ENT,
                               KC_SPC,  KC_LALT,        TG_GAME, KC_ESC
),
};

enum combos {
    CB_BOOT
    , CB_Name
    , CB_Email
    , CB_PassLinux
    , CB_Tilde
    // , CB_Caps
    // , CB_CapsWord
    , CB_RL
    // , CB_UE
    // , CB_SC
    , CB_SW
    , CB_LENGTH
};
uint16_t COMBO_LEN = CB_LENGTH;
#define COMBO_2(NAME, KEY1, KEY2)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, COMBO_END};
#define COMBO_3(NAME, KEY1, KEY2, KEY3)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, KEY3, COMBO_END};
COMBO_3(BOOT,      KC_G, KC_F, KC_K);
COMBO_2(Name,      AT_S, GT_P);
COMBO_2(Email,     NV_M, KC_L);
COMBO_2(PassLinux, KC_J, KC_Y);
COMBO_2(Tilde,     KC_SLSH, GT_TAB);
// COMBO_2(Caps,      KC_J, KC_Q);
// COMBO_2(CapsWord,  KC_J, KC_Y);
COMBO_2(BigramRL,  KC_L, NS_R);
COMBO_2(BigramSW,  KC_W, AT_S);
combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER),
    [CB_Name] =         COMBO_ACTION(Name),
    [CB_Email] =        COMBO_ACTION(Email),
    [CB_PassLinux] =    COMBO_ACTION(PassLinux),
    [CB_Tilde] =        COMBO(Tilde, KC_TILD),
    [CB_RL] =           COMBO_ACTION(BigramRL),
    [CB_SW] =           COMBO_ACTION(BigramSW),
    // [CB_Caps] =         COMBO(Caps, KC_CAPS),
    // [CB_CapsWord] =     COMBO(CapsWord, CW_TOGG),
};

#define UNICODEZ(UCODE) SEND_STRING( SS_DOWN(X_LEFT_CTRL)SS_DOWN(X_LEFT_SHIFT)"u"  SS_DELAY(50)SS_UP(X_LEFT_CTRL)SS_UP(X_LEFT_SHIFT) SS_DELAY(100) UCODE SS_TAP(X_ENTER));

// combo complex actions
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CB_PassLinux: if (pressed) { SEND_STRING(PW_LINUX); } break;
    case CB_Name:      if (pressed) { SEND_STRING("spencerdabell"); } break;
    case CB_Email:     if (pressed) { SEND_STRING("spencerdabell@gmail.com"); } break;
    case CB_RL:        if (pressed) { SEND_STRING("rl"); } break;
    case CB_SW:        if (pressed) { SEND_STRING("sw"); } break;
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
