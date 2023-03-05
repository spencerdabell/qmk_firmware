#include QMK_KEYBOARD_H

#include "common_modkeys.h"

// broken off
#define B_      KC_NO
// unused areas of keyboard
#define U______ KC_NO
#define U_      KC_NO


// converts 6x3_3 layout to 6x9 for bfo
#define LAYOUT_6x3_3( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
                   L33, L34, L35, R30, R31, R32   \
    ) \
LAYOUT( \
        U_,  L00, L01, L02, L03, L04, L05, U_,  B_,        U_,  R00, R01, R02, R03, R04, R05, U_,  B_, \
        U_,  L10, L11, L12, L13, L14, L15, U_,  B_,        U_,  R10, R11, R12, R13, R14, R15, U_,  B_, \
        U_,  L20, L21, L22, L23, L24, L25, U_,  B_,        U_,  R20, R21, R22, R23, R24, R25, U_,  B_, \
        U_,  U_,  U_,  U_,  U_,  L33, L34, L35, B_,        R30, R31, R32, U_,  U_,  U_,  U_,  U_,  B_, \
        U_,  U_,  U_,  U_,  U_,  U_,  U_,  U_,  B_,        U_,  U_,  U_,  U_,  U_,  U_,  U_,  U_,  B_, \
        B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_,        B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_ \
)


enum {
    L_BS = 0
    , L_ISRT
    , L_SEMI
    , L_WHRF
    , L_FOLD
    , L_APT3
    , L_PT
    , L_NV
    , L_NU
    , L_NU2
    , L_NU3
    , L_NU4
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
#define TO_NU2  TO(L_NU2)
#define TO_NU3  TO(L_NU3)
#define TO_NU4  TO(L_NU4)
#define TO_SY   TO(L_SY)
#define TO_GAME TO(L_GAME)
#define TO_ISRT TO(L_ISRT)
#define TO_SEMI TO(L_SEMI)
#define TO_WHRF TO(L_WHRF)
#define TO_FOLD TO(L_FOLD)
#define TO_APT3 TO(L_APT3)




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
#define N4_C    LT(L_NU4, KC_C)

// punctuation
#define PT_BSPC LT(L_PT, KC_BSPC)
#define PT_E    LT(L_PT, KC_E)
#define PT_X    LT(L_PT, KC_X)
#define PT_C    LT(L_PT, KC_C)

// sound
#define SD_MPLY LT(L_SD, KC_MPLY)
#define SD_Q    LT(L_SD, KC_Q)
#define SD_R    LT(L_SD, KC_R)
#define SD_Z    LT(L_SD, KC_Z)

// symbol
#define SY_D    LT(L_SY, KC_D)
#define SY_O    LT(L_SY, KC_O)
#define SY_W    LT(L_SY, KC_W)
#define SY_X    LT(L_SY, KC_X)
#define SY_DEL  LT(L_SY, KC_DEL)
#define SY_GRV  LT(L_SY, KC_GRV)


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



// CAPS_WORD	CAPSWRD	Toggles Caps Word


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// qwert  yuiop
// asdfg  hjkl;
// zxcvb  nm,./
[L_BS] = LAYOUT_6x3_3(
        U______, KC_Q,    SY_W,    KC_E,    SD_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    U______,
        KC_TAB,  CT_A,    AT_S,    KC_D,    NV_F,    KC_G,                             KC_H,    KC_J,    KC_K,    AT_L,    CT_SCLN, KC_QUOT,
        U______, GT_Z,    PT_X,    N4_C,    MS_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                                            TO_PT,   OSM_LST, U______,        KC_TAB,  NU_SPC,  KC_ENT
),
// yclmk  zfu,'
// isrtg  pneao
// qvwdj  bh/.x
[L_ISRT] = LAYOUT_6x3_3(
        _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,                             KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______,
        _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,                             KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    _______,
        _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,                             KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______,
                                            _______, _______, _______,        _______, _______, _______
),
// flhvz  'wuoy
// srntk  cdeai
// xjbmq  pg,./
[L_SEMI] = LAYOUT_6x3_3(
        _______, KC_F,    KC_L,    KC_H,    KC_V,    KC_Z,                             KC_QUOT, KC_W,    KC_U,    KC_O,    KC_Y,    _______,
        _______, KC_S,    KC_R,    KC_N,    KC_T,    KC_K,                             KC_C,    KC_D,    KC_E,    KC_A,    KC_I,    _______,
        _______, KC_X,    KC_J,    KC_B,    KC_M,    KC_Q,                             KC_P,    KC_G,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                                            _______, _______, _______,        _______, _______, _______
),
// flhdm  vwou,
// srntk  gyaei
// xjbzq  pc';.
// [L_WHRF] = LAYOUT_6x3_3(
//        _______, KC_F,    KC_L,    KC_H,    KC_D,    KC_M,                             KC_V,    KC_W,    KC_O,    KC_U,    KC_COMM, _______,
//        _______, KC_S,    KC_R,    KC_N,    KC_T,    KC_K,                             KC_G,    KC_Y,    KC_A,    KC_E,    KC_I,    KC_SLSH,
//        _______, KC_X,    KC_J,    KC_B,    KC_Z,    KC_Q,                             KC_P,    KC_C,    KC_QUOT, KC_SCLN, KC_DOT,  _______,
//                                            _______, _______, _______,        _______, _______, _______
// ),
// wgdfb  qluoy
// rsthk  jneai;
// xcmpv  z,.'/
[L_APT3] = LAYOUT_6x3_3(
        _______, KC_W,    KC_G,    KC_D,    KC_F,    KC_B,                             KC_Q,    KC_L,    KC_U,    KC_O,    KC_Y,    _______,
        _______, KC_R,    KC_S,    KC_T,    KC_H,    KC_K,                             KC_J,    KC_N,    KC_E,    KC_A,    KC_I,    _______,
        _______, KC_X,    KC_C,    KC_M,    KC_P,    KC_V,                             KC_Z,    KC_COMM, KC_DOT,  KC_QUOT, KC_SCLN, _______,
                                            _______, _______, _______,        _______, _______, _______
),
// mlcdk  ;whuq
// rnstg  jeaoi
// vxfpb  zy,./
[L_FOLD] = LAYOUT_6x3_3(
        _______, KC_M,    KC_L,    KC_C,    KC_P,    KC_B,                             KC_SCLN, KC_W,    KC_H,    KC_U,    KC_Q,    _______,
        _______, KC_R,    KC_N,    KC_S,    KC_T,    KC_G,                             KC_J,    KC_E,    KC_A,    KC_O,    KC_I,    _______,
        _______, KC_V,    KC_X,    KC_F,    KC_D,    KC_K,                             KC_Z,    KC_Y,    KC_COMM, KC_DOT,  KC_SLSH, _______,
                                            _______, _______, _______,        _______, _______, _______
),
// :;"!
// .,'?
// -+`=
[L_PT] = LAYOUT_6x3_3(
        _______, U______, TO_SY,   TO_NU,   TO_SD,   U______,                          U______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, _______,
        _______, TO_GAME, U______, TO_BS,   TO_NV,   U______,                          U______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, _______,
        _______, U______, U______, U______, TO_MS,   U______,                          U______, KC_MINS, KC_PLUS, KC_GRV,  KC_EQL,  _______,
                                            _______, _______, _______,        _______, _______, _______
),

[L_NV] = LAYOUT_6x3_3(
        _______, Gu_GRV,  AS_TAB,  At_TAB,  _______, _______,                          U______, Ct_PGUP, KC_PGDN, KC_PGUP, Ct_PGDN, _______,
        _______, KC_LCTL, _______, _______, _______, _______,                          KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END, 
        _______, Ct_GRV,  DESK_LT, DESK_RT, _______, _______,                          U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT, _______,
                                            _______, _______, _______,        _______, _______, _______
),
 
[L_NU] = LAYOUT_6x3_3(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   U______,                          U______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______,
        _______, CT_1,    AT_2,    GT_3,    KC_4,    U______,                          U______, KC_7,    GT_8,    AT_9,    CT_0,    _______,
        _______, KC_F11,  KC_F12,  KC_F5,   KC_5,    U______,                          U______, KC_6,    KC_F6,   KC_CAPS, KC_ESC,  _______,
                                            _______, _______, _______,        _______, _______, _______
),
[L_NU2] = LAYOUT_6x3_3(
        _______, _______, KC_7,    KC_8,    KC_9,    U______,                          U______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, KC_0,    U______,                          U______, KC_1,    KC_2,    KC_3,    _______, _______,
        _______, _______, _______, _______, _______, U______,                          U______, _______, _______, _______, _______, _______,
                                            _______, _______, _______,        _______, _______, _______
),
[L_NU3] = LAYOUT_6x3_3(
        _______, _______, _______, _______, _______, U______,                          U______, _______, _______, _______, _______, _______,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    U______,                          U______, KC_7,    KC_8,    KC_9,    KC_0,    _______,
        _______, _______, _______, _______, _______, U______,                          U______, _______, _______, _______, _______, _______,
                                            _______, KC_5,    _______,        _______, KC_6,    _______
),
[L_NU4] = LAYOUT_6x3_3(
        _______, _______, _______, _______, _______, U______,                          U______, KC_7,    KC_8,    KC_9,    _______, _______,
        _______, _______, _______, _______, _______, U______,                          U______, KC_4,    KC_5,    KC_6,    _______, _______,
        _______, _______, _______, _______, _______, U______,                          U______, KC_1,    KC_2,    KC_3,    _______, _______,
                                            _______, _______, _______,        _______, KC_0,    _______
),
// <>[]
// (){}
// ~|\/
// _
[L_SY] = LAYOUT_6x3_3(
        _______, _______, _______, _______, _______, U______,                          U______, KC_LT,   KC_GT,   KC_LBRC, KC_RBRC, _______,
        _______, _______, _______, _______, _______, U______,                          U______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______,
        _______, _______, _______, _______, _______, U______,                          U______, KC_TILD, KC_PIPE, KC_BSLS, KC_SLSH, _______,
                                            _______, _______, _______,        _______, KC_UNDS, _______
),
[L_MS] = LAYOUT_6x3_3(
        _______, _______, _______, _______, _______, U______,                          U______, U______, KC_BTN1, KC_BTN2, KC_BTN3, _______,
        _______, _______, KC_BTN2, KC_BTN1, _______, U______,                          U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
        _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, U______,                          U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                                            _______, _______, _______,        _______, _______, _______
),
[L_SD] = LAYOUT_6x3_3(
        _______, _______, _______, KC_MPLY, KC_MNXT, _______,                          U______, KC_MSTP, KC_MPLY, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                          U______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______,
        _______, _______, _______, _______, _______, _______,                          U______, KC_MRWD, KC_MUTE, _______, KC_MFFD, _______,
                                            _______, _______, _______,        _______, _______, _______
),
[L_GAME] = LAYOUT_6x3_3(
        KC_ESC,  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV, 
        KC_TAB,  KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        U______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, U______,
                                            TO_PT,   KC_SPC,  KC_LGUI,        KC_TAB,  NU_SPC,  KC_ENT
),
};

enum combos {
    CB_BOOT
    , CB_QW_ESC
    , CB_WE_ESC
    , CB_PID
    , CB_Pass
    , CB_PassAdm
    , CB_Name
    , CB_Email
    , CB_WE_TAB
    , CB_IO_QUOT
    , CB_Grave
    , CB_THE
    , CB_AND
    , CB_YOU
    , CB_HAVE
    , CB_FOR
    , CB_WITH
    , CB_THIS // TS
    , CB_THAT // TA
    , CB_NOT
    , CB_BUT
    , CB_THEY // TY
    , CB_WHAT // WH
    , CB_CAN
    , CB_YOUR // YR

    // keep at end
    , CB_LENGTH
};


uint16_t COMBO_LEN = CB_LENGTH;

#define COMBO_TWO(NAME, KEY1, KEY2)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, COMBO_END};

COMBO_TWO(BOOT, KC_B, KC_O);
// COMBO_TWO(LSemi_ENT, AT_L, CT_SCLN);
// COMBO_TWO(CommDot_ENT, KC_COMM, KC_DOT);
COMBO_TWO(QW_ESC,   KC_Q, SY_W);
COMBO_TWO(WE_ESC,   SY_W, KC_E);
COMBO_TWO(PID,      KC_I, KC_D);
COMBO_TWO(Pass,     CT_A, KC_P);
COMBO_TWO(PassAdm,  AT_S, KC_P);
COMBO_TWO(Name,     KC_N, AT_S);
COMBO_TWO(Email,    KC_E, KC_M);
COMBO_TWO(WE_TAB,   SY_W, KC_E);
COMBO_TWO(IO_QUOT,  KC_I, KC_O);
COMBO_TWO(Grave,    KC_COMM, KC_DOT);
COMBO_TWO(K_THE,    KC_T, KC_H);
COMBO_TWO(K_AND,    CT_A, KC_N);
COMBO_TWO(K_YOU,    KC_Y, KC_U);
COMBO_TWO(K_HAVE,   KC_H, MS_V);
COMBO_TWO(K_FOR,    NV_F, KC_O);
COMBO_TWO(K_WITH,   SY_W, KC_I);
COMBO_TWO(K_THIS,   KC_T, AT_S);
COMBO_TWO(K_THAT,   KC_T, CT_A);
COMBO_TWO(K_NOT,    KC_N, KC_O);
COMBO_TWO(K_BUT,    KC_B, KC_U);
COMBO_TWO(K_THEY,   KC_T, KC_Y);
COMBO_TWO(K_WHAT,   SY_W, CT_A);
COMBO_TWO(K_CAN,    KC_C, CT_A);
COMBO_TWO(K_YOUR,   KC_Y, SD_R);


combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER),
    [CB_QW_ESC] =       COMBO(QW_ESC, KC_ESC),
    [CB_WE_ESC] =       COMBO(WE_ESC, KC_ESC),
    [CB_PID] =          COMBO_ACTION(PID),
    [CB_Pass] =         COMBO_ACTION(Pass),
    [CB_PassAdm] =      COMBO_ACTION(PassAdm),
    [CB_Name] =         COMBO_ACTION(Name),
    [CB_Email] =        COMBO_ACTION(Email),
    [CB_WE_TAB] =       COMBO(WE_TAB, KC_TAB),
    [CB_IO_QUOT] =      COMBO(IO_QUOT, KC_QUOT),
    [CB_Grave] =        COMBO(Grave, KC_GRV),
    [CB_THE] =          COMBO_ACTION(K_THE),
    [CB_AND] =          COMBO_ACTION(K_AND),
    [CB_YOU] =          COMBO_ACTION(K_YOU),
    [CB_HAVE] =         COMBO_ACTION(K_HAVE),
    [CB_FOR] =          COMBO_ACTION(K_FOR),
    [CB_WITH] =         COMBO_ACTION(K_WITH),
    [CB_THIS] =         COMBO_ACTION(K_THIS),
    [CB_THAT] =         COMBO_ACTION(K_THAT),
    [CB_NOT] =          COMBO_ACTION(K_NOT),
    [CB_BUT] =          COMBO_ACTION(K_BUT),
    [CB_THEY] =         COMBO_ACTION(K_THEY),
    [CB_WHAT] =         COMBO_ACTION(K_WHAT),
    [CB_CAN] =          COMBO_ACTION(K_CAN),
    [CB_YOUR] =         COMBO_ACTION(K_YOUR),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CB_PID:      if (pressed) { SEND_STRING("P3101621"); } break;
    case CB_Pass:     if (pressed) { SEND_STRING("Worker12023!"); } break;
    case CB_PassAdm:  if (pressed) { SEND_STRING("Gong124&Gong124&"); } break;
    case CB_Name:     if (pressed) { SEND_STRING("spencerdabell"); } break;
    case CB_Email:    if (pressed) { SEND_STRING("spencerdabell@gmail.com"); } break;
    case CB_THE:      if (pressed) { SEND_STRING("the "); } break;
    case CB_AND:      if (pressed) { SEND_STRING("and "); } break;
    case CB_YOU:      if (pressed) { SEND_STRING("you "); } break;
    case CB_HAVE:     if (pressed) { SEND_STRING("have "); } break;
    case CB_FOR:      if (pressed) { SEND_STRING("for "); } break;
    case CB_WITH:     if (pressed) { SEND_STRING("with "); } break;
    case CB_THIS:     if (pressed) { SEND_STRING("this "); } break;
    case CB_THAT:     if (pressed) { SEND_STRING("that "); } break;
    case CB_NOT:      if (pressed) { SEND_STRING("not "); } break;
    case CB_BUT:      if (pressed) { SEND_STRING("but "); } break;
    case CB_THEY:     if (pressed) { SEND_STRING("they "); } break;
    case CB_WHAT:     if (pressed) { SEND_STRING("what "); } break;
    case CB_CAN:      if (pressed) { SEND_STRING("can "); } break;
    case CB_YOUR:     if (pressed) { SEND_STRING("your "); } break;
    default: break;
  }
}


/*

DF(layer)	Set the base (default) layer
MO(layer)	Momentarily turn on layer when pressed (requires KC_TRNS on destination layer)
OSL(layer)	Momentarily activates layer until a key is pressed. See One Shot Keys for details.
LT(layer, kc)	Turn on layer when held, kc when tapped
TG(layer)	Toggle layer on or off
TO(layer)	Turns on layer and turns off all other layers, except the default layer
TT(layer)	Normally acts like MO unless it’s tapped multiple times, which toggles layer on

KC_LEFT_ALT	    KC_LALT, KC_LOPT	Left Alt (Option)
KC_LEFT_GUI	    KC_LGUI, KC_LCMD, KC_LWIN	Left GUI (Windows/Command/Meta key)

KC_RIGHT_ALT	  KC_RALT, KC_ROPT, KC_ALGR	Right Alt (Option/AltGr)
KC_RIGHT_GUI	  KC_RGUI, KC_RCMD, KC_RWIN	Right GUI (Windows/Command/Meta key)


// ----------------------------- high interest (will definitely use)
CAPS_WORD	CAPSWRD	Toggles Caps Word  toggles caps lock until end of word like space or period

KC_LOCK	Hold down the next key pressed, until the key is pressed again
not sure but i think it could be quite useful

leader key - input combined keys one at a time

combined modifiers  MT(MOD_RALT|MOD_LSFT,KC_SPC)
MT(MOD_LCTL | MOD_LSFT, KC_ESC)


// ----------------------------- medium interest (could maybe use)
UC(c)		Send Unicode code point c, up to 0x7FFF

// ------------------------------ low/no interest (probably won't use, but could under a blue moon)



modifier keys - https://docs.qmk.fm/#/feature_advanced_keycodes?id=modifier-keys
LCTL(kc)	C(kc)	Hold Left Control and press kc
LSG(kc)	SGUI(kc), SCMD(kc), SWIN(kc)	Hold Left Shift and Left GUI and press kc
LCAG(kc)		Hold Left Control, Alt and GUI and press kc
MEH(kc)		Hold Left Control, Shift and Alt and press kc
HYPR(kc)		Hold Left Control, Shift, Alt and GUI and press kc
KC_MEH		Left Control, Shift and Alt
KC_HYPR		Left Control, Shift, Alt and GUI


OSM(mod)	Hold mod for one keypress
OSL(layer)	Switch to layer for one keypress

reduce compile size
21718/28672

add to rules.mk
LTO_ENABLE = yes

19092/28672
okay so like 10% reduction

https://docs.qmk.fm/#/keycodes

*/
