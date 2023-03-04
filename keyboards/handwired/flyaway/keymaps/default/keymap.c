// Copyright 2022 beekeeb
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "common_modkeys.h"

#define U______ KC_NO

enum {
    L_BS = 0
    , L_PT
    , L_NV
    , L_NU 
    , L_SY
    , L_MS
    , L_SD
    , L_GAME
};

// LAYER SWITCHING
#define TO_BS   TO(L_BS)
#define TO_PT   TO(L_PT)
#define OSL_PT  OSL(L_PT)
#define TO_NV   TO(L_NV)
#define TO_MS   TO(L_MS)
#define TO_SD   TO(L_SD)
#define TO_NU   TO(L_NU)
// #define TO_NU2  TO(L_NU2)
// #define TO_NU3  TO(L_NU3)
// #define TO_NU4  TO(L_NU4)
#define TO_SY   TO(L_SY)
#define TO_GAME TO(L_GAME)
// #define TO_ISRT TO(L_ISRT)
// #define TO_SEMI TO(L_SEMI)
// #define TO_WHRF TO(L_WHRF)
// #define TO_FOLD TO(L_FOLD)
// #define TO_APT3 TO(L_APT3)

// nav
#define NV_A    LT(L_NV, KC_A)
#define NV_F    LT(L_NV, KC_F)
#define NV_H    LT(L_NV, KC_H)
#define NV_J    LT(L_NV, KC_J)
// mouse
#define MS_K    LT(L_MS, KC_K)
#define MS_R    LT(L_MS, KC_R)
#define MS_V    LT(L_MS, KC_V)
// number
#define NU_R    LT(L_NU, KC_R)
#define NU_U    LT(L_NU, KC_U)
#define NU_TAB  LT(L_NU, KC_TAB)
#define NU_SPC  LT(L_NU, KC_SPC)
// #define N4_C    LT(L_NU4, KC_C)

// punctuation
#define PT_BSPC LT(L_PT, KC_BSPC)
#define PT_E    LT(L_PT, KC_E)
#define PT_X    LT(L_PT, KC_X)

// sound
#define SD_MPLY LT(L_SD, KC_MPLY)
#define SD_Q    LT(L_SD, KC_Q)
#define SD_R    LT(L_SD, KC_R)
#define SD_Z    LT(L_SD, KC_Z)

// symbol
#define SY_O    LT(L_SY, KC_O)
#define SY_DEL  LT(L_SY, KC_DEL)
#define SY_D    LT(L_SY, KC_D)
#define SY_GRV  LT(L_SY, KC_GRV)
#define SY_W    LT(L_SY, KC_W)


// NAV
#define Ct_PGUP C(KC_PGUP)
#define Ct_PGDN C(KC_PGDN)
#define Ct_HOME C(KC_HOME)
#define Ct_LEFT C(KC_LEFT)
#define Ct_RGHT C(KC_RGHT)
#define Ct_END  C(KC_END)
#define Ct_GRV  C(KC_GRV)
#define Gu_GRV  G(KC_GRV)
#define At_TAB  A(KC_TAB)
#define AS_TAB  LSA(KC_TAB)
#define DESK_LT LCTL(LGUI(KC_LEFT))
#define DESK_RT LCTL(LGUI(KC_RGHT))
// switch back to last application
// ctrl+tab
// switch ctrl+shift+tab
// app fwrd, app_back
// #define APP_FWD GUI_T(C(KC_TAB))
// #define APP_BCK ALT_T(C(S(KC_TAB)))
// not working, switch off for now
#define APP_FWD KC_LGUI
#define APP_BCK KC_LALT




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     
[L_BS] = LAYOUT_split_3x6_3(
    U______, KC_Q,    SY_W,    KC_E,    SD_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    U______,
    KC_TAB,  CT_A,    AT_S,    KC_D,    NV_F,    KC_G,                             KC_H,    KC_J,    KC_K,    AT_L,    CT_SCLN, KC_QUOT,
    U______, GT_Z,    PT_X,    KC_C,    MS_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                                        TO_PT,   OSM_LST, U______,        KC_TAB,  NU_SPC,  KC_ENT
    ),

// :;"!
// .,'?
// -+`=
[L_PT] = LAYOUT_split_3x6_3(
        _______, U______, TO_SY,   TO_NU,   TO_SD,   U______,                          U______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, _______,
        _______, TO_GAME, U______, TO_BS,   TO_NV,   U______,                          U______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, _______,
        _______, U______, U______, U______, TO_MS,   U______,                          U______, KC_MINS, KC_PLUS, KC_GRV,  KC_EQL,  _______,
                                            _______, _______, _______,        _______, _______, _______
),

[L_NV] = LAYOUT_split_3x6_3(
        _______, Gu_GRV,  AS_TAB,  At_TAB,  _______, _______,                          U______, Ct_PGUP, KC_PGDN, KC_PGUP, Ct_PGDN, _______,
        _______, KC_LCTL, _______, _______, _______, _______,                          KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END, 
        _______, Ct_GRV,  DESK_LT, DESK_RT, _______, _______,                          U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT, _______,
                                            _______, _______, _______,        _______, _______, _______
),

[L_NU] = LAYOUT_split_3x6_3(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   U______,                          U______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, CT_1,    AT_2,    GT_3,    KC_4,    U______,                          U______, KC_7,    GT_8,    AT_9,    CT_0,    _______,
        _______, KC_F11,  KC_F12,  KC_F5,   KC_5,    U______,                          U______, KC_6,    KC_F6,   KC_CAPS, KC_ESC,  _______,
                                            _______, _______, _______,        _______, _______, _______
),

// <>[]
// (){}
// ~|\/
// _
[L_SY] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, U______,                          U______, KC_LT,   KC_GT,   KC_LBRC, KC_RBRC, _______,
        _______, _______, _______, _______, _______, U______,                          U______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______,
        _______, _______, _______, _______, _______, U______,                          U______, KC_TILD, KC_PIPE, KC_BSLS, KC_SLSH, _______,
                                            _______, _______, _______,        _______, KC_UNDS, _______
),
[L_MS] = LAYOUT_split_3x6_3(
        _______, _______, _______, _______, _______, U______,                          U______, U______, KC_BTN1, KC_BTN2, KC_BTN3, _______,
        _______, _______, KC_BTN2, KC_BTN1, _______, U______,                          U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, U______,                          U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                                            _______, _______, _______,        _______, _______, _______
),
[L_SD] = LAYOUT_split_3x6_3(
        _______, _______, _______, KC_MPLY, KC_MNXT, _______,                          U______, KC_MSTP, KC_MPLY, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                          U______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, _______, _______, _______, _______,                          U______, KC_MRWD, KC_MUTE, _______, KC_MFFD, _______,
                                            _______, _______, _______,        _______, _______, _______
),
[L_GAME] = LAYOUT_split_3x6_3(
        KC_ESC,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV, 
        KC_TAB,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        U______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, U______,
                                            TO_PT,   KC_SPC,  KC_LGUI,        KC_TAB,  NU_SPC,  KC_ENT
),

};




enum combos {
    CB_BOOT
    , CB_LENGTH // keep at end
};

uint16_t COMBO_LEN = CB_LENGTH;
const uint16_t PROGMEM BOOT[] =         {KC_B, KC_O, COMBO_END};

combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER)
};
