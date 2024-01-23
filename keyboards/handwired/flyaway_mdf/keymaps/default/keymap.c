// #include "keycodes.h"
#include "send_string_keycodes.h"
#include QMK_KEYBOARD_H

#include "common_modkeys.h"
#include "password.h"

enum layer {
    // base
    L_ALPHA = 0,
    L_PUNCT,
    L_NUMBER,
    L_FN,
    L_NAVI,
    L_NAVI2,
    L_MOUSE,
    L_SOUND
};

// LAYER SWITCHING
#define TO_ALPH TO(L_ALPHA)
#define TO_MOUS TO(L_MOUSE)
#define TO_QT TO(L_QT)
#define TG_LY TG(L_LAYER)
#define TG_PT TG(L_PUNCT)
#define OSL_PT OSL(L_PUNCT)
#define TG_NV TG(L_NAVI)
#define TG_MS TG(L_MOUSE)
#define TG_NU TG(L_NUMBER)

#define MO_PT MO(L_PUNCT)

// #define LY_E LT(L_LAYER, KC_E)
// #define LY_H LT(L_LAYER, KC_H)
// #define LY_J LT(L_LAYER, KC_J)
// #define LY_L LT(L_LAYER, KC_L)
// #define LY_M LT(L_LAYER, KC_M)
// #define LY_Q LT(L_LAYER, KC_Q)
// #define LY_R LT(L_LAYER, KC_R)
// #define LY_U LT(L_LAYER, KC_U)
// #define LY_Y LT(L_LAYER, KC_Y)
// #define LY_Z LT(L_LAYER, KC_Z)
// #define LY_6 LT(L_LAYER, KC_6)
// #define LY_9 LT(L_LAYER, KC_9)
// #define LY_ENT LT(L_LAYER, KC_ENT)
// #define LY_TAB LT(L_LAYER, KC_TAB)
// #define LY_ESC LT(L_LAYER, KC_ESC)
// // #define LY__ LT(L_LAYER, KC_NO)
// #define LY_____ LT(L_LAYER, KC_NO)

// nav
#define NV_A LT(L_NAVI, KC_A)
#define NV_B LT(L_NAVI, KC_B)
#define NV_C LT(L_NAVI, KC_C)
#define NV_D LT(L_NAVI, KC_D)
#define NV_E LT(L_NAVI, KC_E)
#define NV_F LT(L_NAVI, KC_F)
#define NV_G LT(L_NAVI, KC_G)
#define NV_H LT(L_NAVI, KC_H)
#define NV_I LT(L_NAVI, KC_I)
#define NV_J LT(L_NAVI, KC_J)
#define NV_K LT(L_NAVI, KC_K)
#define NV_L LT(L_NAVI, KC_L)
#define NV_M LT(L_NAVI, KC_M)
#define NV_N LT(L_NAVI, KC_N)
#define NV_O LT(L_NAVI, KC_O)
#define NV_P LT(L_NAVI, KC_P)
#define NV_Q LT(L_NAVI, KC_Q)
#define NV_R LT(L_NAVI, KC_R)
#define NV_S LT(L_NAVI, KC_S)
#define NV_T LT(L_NAVI, KC_T)
#define NV_U LT(L_NAVI, KC_U)
#define NV_V LT(L_NAVI, KC_V)
#define NV_W LT(L_NAVI, KC_W)
#define NV_X LT(L_NAVI, KC_X)
#define NV_Y LT(L_NAVI, KC_Y)
#define NV_Z LT(L_NAVI, KC_Z)
#define NV_0 LT(L_NAVI, KC_0)
#define NV_4 LT(L_NAVI, KC_4)
#define NV_F4 LT(L_NAVI, KC_F4)
#define NV__ LT(L_NAVI, KC_NO)

#define NV2_D LT(L_NAVI2, KC_D)
#define NV2_T LT(L_NAVI2, KC_T)

// mouse
#define MS_A LT(L_MOUSE, KC_A)
#define MS_B LT(L_MOUSE, KC_B)
#define MS_C LT(L_MOUSE, KC_C)
#define MS_D LT(L_MOUSE, KC_D)
#define MS_E LT(L_MOUSE, KC_E)
#define MS_F LT(L_MOUSE, KC_F)
#define MS_G LT(L_MOUSE, KC_G)
#define MS_H LT(L_MOUSE, KC_H)
#define MS_I LT(L_MOUSE, KC_I)
#define MS_J LT(L_MOUSE, KC_J)
#define MS_K LT(L_MOUSE, KC_K)
#define MS_L LT(L_MOUSE, KC_L)
#define MS_M LT(L_MOUSE, KC_M)
#define MS_N LT(L_MOUSE, KC_N)
#define MS_O LT(L_MOUSE, KC_O)
#define MS_P LT(L_MOUSE, KC_P)
#define MS_Q LT(L_MOUSE, KC_Q)
#define MS_R LT(L_MOUSE, KC_R)
#define MS_S LT(L_MOUSE, KC_S)
#define MS_T LT(L_MOUSE, KC_T)
#define MS_U LT(L_MOUSE, KC_U)
#define MS_V LT(L_MOUSE, KC_V)
#define MS_W LT(L_MOUSE, KC_W)
#define MS_X LT(L_MOUSE, KC_X)
#define MS_Y LT(L_MOUSE, KC_Y)
#define MS_Z LT(L_MOUSE, KC_Z)
#define MS__ LT(L_MOUSE, KC_NO)
#define MS_ESC LT(L_MOUSE, KC_ESC)

// number
#define NU_E LT(L_NUMBER, KC_E)
#define NU_I LT(L_NUMBER, KC_I)
#define NU_L LT(L_NUMBER, KC_L)
#define NU_N LT(L_NUMBER, KC_N)
#define NU_R LT(L_NUMBER, KC_R)
#define NU_U LT(L_NUMBER, KC_U)
#define NU_TAB LT(L_NUMBER, KC_TAB)
#define NU_SPC LT(L_NUMBER, KC_SPC)
#define NU_ESC LT(L_NUMBER, KC_ESC)

// fn
// #define FN_ENT  LT(L_FN, KC_ENT)

// punctuation
#define PT_C LT(L_PUNCT, KC_C)
#define PT_E LT(L_PUNCT, KC_E)
#define PT_H LT(L_PUNCT, KC_H)
#define PT_O LT(L_PUNCT, KC_O)
#define PT_R LT(L_PUNCT, KC_R)
#define PT_X LT(L_PUNCT, KC_X)
#define PT__ LT(L_PUNCT, KC_NO)
#define PT_5 LT(L_PUNCT, KC_5)
#define PT_F12 LT(L_PUNCT, KC_F12)
#define PT_BSPC LT(L_PUNCT, KC_BSPC)
#define PT_SPC LT(L_PUNCT, KC_SPC)
#define PT_TAB LT(L_PUNCT, KC_TAB)
#define PT_ESC LT(L_PUNCT, KC_ESC)

// sound
#define SD_MPLY LT(L_SOUND, KC_MPLY)
#define SD_F LT(L_SOUND, KC_F)
#define SD_L LT(L_SOUND, KC_L)
#define SD_Q LT(L_SOUND, KC_Q)
#define SD_R LT(L_SOUND, KC_R)
#define SD_Z LT(L_SOUND, KC_Z)
#define SD_ESC LT(L_SOUND, KC_ESC)
#define SD_COMM LT(L_SOUND, KC_COMM)

// nav

#define Gu_GRV G(KC_GRV)
#define At_TAB A(KC_TAB)
#define AS_TAB LSA(KC_TAB)
// ctrl+alt [up, down]
#define CA_LEFT LCA(KC_LEFT)
#define CA_DOWN LCA(KC_DOWN)
#define CA_UP LCA(KC_UP)
#define CA_RGHT LCA(KC_RGHT)

#define ACA_DOWN ALT_T(LCA(KC_DOWN))
// #define CA_UP LCA(KC_UP)

// shortcuts for, wait these don't work
#define A_CtPUP ALT_T(Ct_PGUP)
#define S_CtPDN SFT_T(Ct_PGDN)
#define DESK_LT LCTL(LGUI(KC_LEFT))
#define DESK_RT LCTL(LGUI(KC_RGHT))

#define U_ KC_NO

// make compiler warnings go away
#ifndef MATRIX_COLS
#    define MATRIX_COLS 6
#endif
#ifndef MATRIX_ROWS
#    define MATRIX_ROWS 6
#endif
#ifndef LAYOUT_split_5x3_2_info
#    define LAYOUT_split_5x3_2_info(L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25) \
        {}
#endif
// make compiler warnings go away

// clang-format off

#define LAYOUT_split_5x3_2( \
    L00, L01, L02, L03, L04, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, R21, R22, R23, R24, R25, \
                   L25, L15, R10, R20   \
    ) \
LAYOUT_split_5x3_2_info( \
    L00, L01, L02, L03, L04, U_,  U_,  R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25 \
    ) \


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {



/*
zwgfb 'juyq
nsthv .aeio
pcmdk ,x/__
       lr

 []|# ''`"
{()}& ._:;=
\<>/$ ,-*!?


12345 67890
       -+*

*/
[L_ALPHA] = LAYOUT_split_5x3_2(
    KC_Z,    KC_W,    KC_G,    KC_F,    KC_K,           KC_QUOT, KC_J,    KC_U,    KC_Y,    KC_Q,
    CT_N,    AT_S,    NV2_T,   NV_H,    KC_V,           KC_DOT,  KC_A,    KC_E,    AT_I,    CT_O,
    GT_P,    ST_C,    KC_M,    MS_D,    KC_B,           SD_COMM, KC_X,    KC_SLSH, ST_TAB,  GT_ENT,
                               ST_SPC,  NU_ESC,         SD_L,    PT_R
),
[L_PUNCT] = LAYOUT_split_5x3_2(
    U______, KC_LBRC, KC_RBRC, KC_PIPE, KC_HASH,        _______, KC_QUOT, KC_GRV,  KC_DQUO, U______,
    KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_AMPR,        _______, KC_UNDS, KC_SCLN, KC_COLN, KC_EQL,
    KC_BSLS, KC_LT,   KC_GT,   KC_SLSH, KC_DLR,         _______, KC_MINS, KC_PLUS, KC_EXLM, KC_QUES,
                               _______, KC_UNDS,        U______, U______
),
[L_NUMBER] = LAYOUT_split_5x3_2(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    CT_1,    AT_2,    KC_3,    NV_4,    KC_5,           KC_6,    KC_7,    KC_8,    AT_9,    CT_0,
    KC_F11,  KC_F12,  KC_CAPS, CW_TOGG, U______,        U______, KC_MINS, KC_PLUS, KC_ASTR, _______,
                               _______, KC_5,           U______, KC_6
),
[L_NAVI] = LAYOUT_split_5x3_2(
    U______, AS_TAB,  At_TAB,  U______, U______,        U______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    CT_ESC,  Ct_Z,    Ct_Y,    U______, U______,        U______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_LGUI, Ct_SLSH, U______, U______, U______,        U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT,
                               ST_____, Ct_DEL,         Ct_BSPC, KC_END
),
[L_NAVI2] = LAYOUT_split_5x3_2(
    U______, U______, U______, U______, U______,        U______, U______, U______, U______, U______,
    U______, U______, U______, U______, U______,        U______, Ct_PGUP, CA_DOWN, CA_UP,   Ct_PGDN,
    U______, U______, U______, U______, U______,        U______, U______, CA_LEFT, CA_RGHT, U______,
                               ST_____, U______,        U______, U______
),
[L_MOUSE] = LAYOUT_split_5x3_2(
    U______, U______, U______, U______, U______,        U______, U______, KC_BTN1, KC_BTN2, U______,
    CT_BTN3, AT_BTN2, KC_BTN1, KC_BTN1, U______,        U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    KC_ACL0, KC_ACL1, KC_ACL2, U______, U______,        U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                               ST_____, U______,        U______, U______
),
[L_SOUND] = LAYOUT_split_5x3_2(
    U______, U______, U______, U______, U______,        U______, U______, KC_MPLY, U______, U______,
    U______, U______, U______, U______, U______,        U______, KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD,
    U______, U______, U______, U______, U______,        U______, KC_MPRV, U______, U______, KC_MNXT,
                               U______, U______,        U______, U______
),
};


// combo indexes
enum combos {
    CB_BOOT
    , CB_Name
    , CB_Email
    , CB_PassLinux
    , CB_Tilde
    // , CB_Escape
    // , CB_Enter
    // , CB_Tab
    // , CB_P
    , CB_K
    // , CB_Omega
    // , CB_Micro
    // , CB_Degree
    , CB_LENGTH
};

uint16_t COMBO_LEN = CB_LENGTH;

// combo key combinations
#define COMBO_2(NAME, KEY1, KEY2)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, COMBO_END};
#define COMBO_3(NAME, KEY1, KEY2, KEY3)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, KEY3, COMBO_END};

COMBO_3(BOOT,      KC_G, KC_F, KC_K);
COMBO_2(PassLinux, NV_H, CT_N);
COMBO_2(Name,      KC_M, CT_N);
COMBO_2(Email,     GT_M, SD_L);
COMBO_2(Tilde,     KC_SLSH, ST_TAB);
// COMBO_2(Escape,    AT_S, NV2_T);
// COMBO_2(Enter,     KC_E, AT_I);
// COMBO_2(Tab,       KC_U, KC_Y);
// COMBO_2(K_P,       KC_G, KC_F);
COMBO_2(K_K,       KC_M, MS_D);
// COMBO_2(K_OMEGA,   ST_SPC, CT_O);
// COMBO_2(K_MICRO,   ST_SPC, KC_M);
// COMBO_2(K_Degree,  ST_SPC, MS_D);

// combo behavior
combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER),
    [CB_PassLinux] =    COMBO_ACTION(PassLinux),
    [CB_Name] =         COMBO_ACTION(Name),
    [CB_Email] =        COMBO_ACTION(Email),
    [CB_Tilde] =        COMBO(Tilde, KC_TILD),
    // [CB_Escape] =       COMBO(Escape, KC_ESC),
    // [CB_Enter] =        COMBO(Enter, KC_ENT),
    // [CB_Tab] =          COMBO(Tab, KC_TAB),
    // [CB_P] =            COMBO(K_P, KC_P),
    [CB_K] =            COMBO(K_K, KC_K),
    // [CB_Omega] =        COMBO_ACTION(K_OMEGA),
    // [CB_Micro] =        COMBO_ACTION(K_MICRO),
    // [CB_Degree] =       COMBO_ACTION(K_Degree),
};

#define UNICODEZ(UCODE) SEND_STRING( SS_DOWN(X_LEFT_CTRL)SS_DOWN(X_LEFT_SHIFT)"u"  SS_DELAY(50)SS_UP(X_LEFT_CTRL)SS_UP(X_LEFT_SHIFT) SS_DELAY(100) UCODE SS_TAP(X_ENTER));

// combo complex actions
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CB_PassLinux: if (pressed) { SEND_STRING(PW_LINUX); } break;
    case CB_Name:      if (pressed) { SEND_STRING("spencerdabell"); } break;
    case CB_Email:     if (pressed) { SEND_STRING("spencerdabell@gmail.com"); } break;
    // case CB_Omega:     if (pressed) { UNICODEZ("03a9"); } break;
    // case CB_Micro:     if (pressed) { UNICODEZ("03bc"); } break;
    // case CB_Degree:     if (pressed) { UNICODEZ("00b0"); } break;
    default: break;
  }
}


/*
reference
https://docs.qmk.fm/#/feature_caps_word

*/
