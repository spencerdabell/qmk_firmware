#include QMK_KEYBOARD_H

#include "common_modkeys.h"
#include "password.h"

enum {
    // base
    L_QWERTY = 0
    // , L_WREATHY
    // , L_ADEPT
    , L_FOLD
    , L_LAYER
    , L_PUNCT
    , L_NAVI
    , L_EDIT
    , L_NUMBER
    , L_FN
    , L_BRACKET
    , L_MOUSE
    , L_SOUND
    , L_GAME
};

// LAYER SWITCHING
#define TO_QT   TO(L_QWERTY)
#define TO_LY   TO(L_LAYER)
#define TO_PT   TO(L_PUNCT)
#define OSL_PT  OSL(L_PUNCT)
#define TO_NV   TO(L_NAVI)
#define TO_MS   TO(L_MOUSE)
#define TO_SD   TO(L_SOUND)
#define TO_NU   TO(L_NUMBER)
// #define TO_NU2  TO(L_NU2)
// #ST_SPC TO_NU3   TO(L_NU3)
// #define TO_NU4  TO(L_NU4)
#define TO_SY   TO(L_BRACKET)
#define TO_GAME TO(L_GAME)
// #define TO_WRTHSRTO_ADPT TO(L_ISRT)
// #define TO_SEMI TO(L_SEMI)
// #define TO_WHRF TO(L_WHRF)
// #define TO_FOLD TO(L_FOLD)
// #define TO_APT3 TO(L_APT3)
#define TO_WRTH TO(L_WREATHY)
#define TO_ADPT TO(L_ADEPT)
#define TO_FOLD TO(L_FOLD)



// nav
#define NV_A    LT(L_NAVI, KC_A)
#define NV_F    LT(L_NAVI, KC_F)
#define NV_H    LT(L_NAVI, KC_H)
#define NV_J    LT(L_NAVI, KC_J)
#define NV_T    LT(L_NAVI, KC_T)
// mouse
#define MS_K    LT(L_MOUSE, KC_K)
#define MS_R    LT(L_MOUSE, KC_R)
#define MS_P    LT(L_MOUSE, KC_P)
#define MS_V    LT(L_MOUSE, KC_V)
// number
#define NU_R    LT(L_NUMBER, KC_R)
#define NU_U    LT(L_NUMBER, KC_U)
#define NU_TAB  LT(L_NUMBER, KC_TAB)
#define NU_SPC  LT(L_NUMBER, KC_SPC)
// #define N4_C    LT(L_NU4, KC_C)

// fn
#define FN_ENT  LT(L_FN, KC_ENT)

// punctuation
#define PT_C    LT(L_PUNCT, KC_C)
#define PT_E    LT(L_PUNCT, KC_E)
#define PT_X    LT(L_PUNCT, KC_X)
#define PT_BSPC LT(L_PUNCT, KC_BSPC)

// sound
#define SD_MPLY LT(L_SOUND, KC_MPLY)
#define SD_F    LT(L_SOUND, KC_F)
#define SD_Q    LT(L_SOUND, KC_Q)
#define SD_R    LT(L_SOUND, KC_R)
#define SD_Z    LT(L_SOUND, KC_Z)

// bracket
#define BR_O    LT(L_BRACKET, KC_O)
#define BR_DEL  LT(L_BRACKET, KC_DEL)
#define BR_D    LT(L_BRACKET, KC_D)
#define BR_X    LT(L_BRACKET, KC_X)
#define BR_GRV  LT(L_BRACKET, KC_GRV)
#define BR_W    LT(L_BRACKET, KC_W)
#define BR_ESC  LT(L_BRACKET, KC_ESC)

// nav
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

// edit
#define ED_G    LT(L_EDIT, KC_G)
#define ED_W    LT(L_EDIT, KC_W)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[L_QWERTY] = LAYOUT_split_3x6_3(
    U______, KC_Q,    ED_W,    KC_E,    SD_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    U______,
    KC_TAB,  CT_A,    AT_S,    KC_D,    NV_F,    KC_G,                             KC_H,    KC_J,    KC_K,    AT_L,    CT_SCLN, KC_QUOT,
    U______, GT_Z,    PT_X,    KC_C,    MS_V,    KC_B,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                                        BR_ESC,  ST_SPC,  TO_LY,          KC_TAB,  NU_SPC,  FN_ENT
),

/*
v m h g w  z x u o ,        rl-eai
s t n d p  j r e a i
y k b c f  q l ' ; .

v m l c p  x f o u j        sturdy
s t r d y  . n a e i
z k q g w  b h ' ; ,

tnsrhldcmfpgwyb vkxjqz
tnsr h ld cm fpg pwyb vkxjqz

q g d f v  j l u o ,        wreathy
n s t h y  w r e a i ;
b c m p k  z x / ' .
*/
[L_FOLD] = LAYOUT_split_3x6_3(
    U______, KC_Q,    ED_G,    KC_D,    SD_F,    KC_V,                             KC_Z,    KC_L,    KC_U,    KC_O,    KC_Y,    U______,
    _______, CT_N,    AT_S,    KC_T,    NV_H,    KC_K,                             KC_W,    KC_R,    KC_E,    AT_A,    CT_I,    KC_QUOT,
    U______, GT_B,    PT_C,    KC_M,    MS_P,    U______,                          KC_J,    KC_X,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                                        BR_ESC,  ST_SPC,  TO_LY,          KC_TAB,  NU_SPC,  FN_ENT
),
[L_LAYER] = LAYOUT_split_3x6_3(
    _______, U______, _______, TO_NU,   TO_SD,   U______,                          U______, U______, U______, U______, U______, U______,
    _______, TO_FOLD, _______, TO_QT,   TO_NV,   U______,                          U______, U______, U______, U______, U______, U______,
    _______, TO_GAME, _______, U______, TO_MS,   U______,                          U______, U______, U______, U______, U______, U______,
                                        _______, _______, _______,        _______, _______, _______
),
[L_PUNCT] = LAYOUT_split_3x6_3(
    _______, U______, U______, U______, U______, U______,                          U______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, _______, // :;"!
    _______, U______, U______, U______, U______, U______,                          U______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, _______, // .,'?
    _______, U______, U______, U______, U______, U______,                          U______, KC_MINS, KC_PLUS, KC_GRV,  KC_EQL,  _______, // -+`=
                                        _______, _______, _______,        _______, _______, _______
),
[L_NAVI] = LAYOUT_split_3x6_3(
    _______, Gu_GRV,  AS_TAB,  At_TAB,  _______, _______,                          U______, Ct_PGUP, KC_PGDN, KC_PGUP, Ct_PGDN, _______,
    _______, KC_LCTL, _______, CTAT___, _______, _______,                          KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    _______, Ct_GRV,  DESK_LT, DESK_RT, _______, _______,                          U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT, _______,
                                        _______, _______, _______,        _______, _______, _______
),
[L_EDIT] = LAYOUT_split_3x6_3(
    _______, _______, _______, _______, _______, _______,                          U______, _______, Ct_S,    _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                          U______, Ct_Z,    Ct_C,    Ct_V,    Ct_Y,    _______,
    _______, _______, _______, _______, _______, _______,                          U______, Ct_U,    Ct_X,    _______, Ct_K,    _______,
                                        _______, _______, _______,        _______, _______, _______
),
[L_NUMBER] = LAYOUT_split_3x6_3(
    _______, U______, U______, U______, U______, U______,                          U______, U______, U______, U______, U______, _______,
    _______, CT_1,    AT_2,    GT_3,    KC_4,    U______,                          U______, KC_7,    GT_8,    AT_9,    CT_0,    _______,
    _______, U______, U______, U______, KC_5,    U______,                          U______, KC_6,    _______, _______, _______, _______,
                                        _______, ST_5,    _______,        _______, _______, _______
),
[L_FN] = LAYOUT_split_3x6_3(
    _______, U______, U______, _______, _______, U______,                          U______, _______, _______, _______, _______, _______,
    _______, CT_F1,   AT_F2,   KC_F3,   KC_F4,   U______,                          U______, KC_F7,   KC_F8,   AT_F9,   CT_F10,  _______,
    _______, KC_F11,  KC_F12,  _______, KC_F5,   U______,                          U______, KC_F6,   CW_TOGG, KC_CAPS, _______, _______,
                                        _______, ST_F5,   _______,        _______, _______, _______
),
[L_BRACKET] = LAYOUT_split_3x6_3(
    _______, _______, _______, _______, _______, U______,                          U______, _______, KC_AMPR, KC_PIPE, _______, _______, // \/|
    _______, KC_LT,   KC_MINS, KC_EQL,  KC_GT,   U______,                          U______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______, // (){}
    _______, KC_BSLS, _______, KC_EXLM, KC_EXLM, U______,                          U______, _______, KC_LBRC, KC_RBRC, _______, _______, // <>[]
                                        _______, _______, _______,        _______, KC_UNDS, _______
),
[L_MOUSE] = LAYOUT_split_3x6_3(
    _______, _______, _______, _______, _______, U______,                          U______, U______, KC_BTN1, KC_BTN2, KC_BTN3, _______,
    _______, _______, KC_BTN2, KC_BTN1, _______, U______,                          U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______,
    _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, U______,                          U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______,
                                        _______, _______, _______,        _______, _______, _______
),
[L_SOUND] = LAYOUT_split_3x6_3(
    _______, _______, _______, KC_MPLY, KC_MNXT, _______,                          U______, KC_MSTP, KC_MPLY, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                          KC_MRWD, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MFFD,
    _______, _______, _______, _______, _______, _______,                          U______, KC_MRWD, KC_MUTE, _______, KC_MFFD, _______,
                                        _______, _______, _______,        _______, _______, _______
),
[L_GAME] = LAYOUT_split_3x6_3(
    U______, KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV, 
    U______, KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    U______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, U______,
                                        TO_PT,   KC_SPC,  KC_LGUI,        KC_TAB,  NU_SPC,  KC_ENT
),
};


// combo indexes
enum combos {
    CB_BOOT
    , CB_BOOT_TGB
    , CB_PID
    , CB_Pass
    , CB_PassAdm
    , CB_Name
    , CB_Email
    , CB_Tilde
    , CB_PassLinux
    , CB_CD_up
    , CB_Underscore
    , CB_Escape
    , CB_Enter
    , CB_Tab
    , CB_LENGTH
};
uint16_t COMBO_LEN = CB_LENGTH;

// combo key combinations
#define COMBO_2(NAME, KEY1, KEY2)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, COMBO_END};
#define COMBO_3(NAME, KEY1, KEY2, KEY3)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, KEY3, COMBO_END};
COMBO_3(BOOT,      NU_SPC, KC_B, KC_O);
COMBO_3(BOOT_TGB,  KC_T, KC_G, KC_B);
COMBO_3(PID,       NU_SPC, KC_I, KC_D);
COMBO_3(Pass,      NU_SPC, CT_A, KC_P);
COMBO_3(PassAdm,   NU_SPC, AT_S, KC_P);
COMBO_3(PassLinux, NU_SPC, NV_F, AT_L);
COMBO_3(Name,      NU_SPC, KC_N, AT_S);
COMBO_3(Email,     NU_SPC, KC_E, KC_M);
COMBO_2(Tilde,     KC_COMM, KC_DOT);
COMBO_3(CD_up,     NU_SPC, PT_C, KC_DOT);
COMBO_2(Underscore,KC_TAB, NU_SPC);
COMBO_2(Escape,    AT_S, KC_D);
COMBO_2(Enter,     KC_K, AT_L);
COMBO_2(Tab,       KC_I, KC_O);


// combo behavior
combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER),
    [CB_BOOT_TGB] =     COMBO(BOOT_TGB, QK_BOOTLOADER),
    [CB_PID] =          COMBO_ACTION(PID),
    [CB_Pass] =         COMBO_ACTION(Pass),
    [CB_PassAdm] =      COMBO_ACTION(PassAdm),
    [CB_PassLinux] =    COMBO_ACTION(PassLinux),
    [CB_Name] =         COMBO_ACTION(Name),
    [CB_Email] =        COMBO_ACTION(Email),
    [CB_Tilde] =        COMBO(Tilde, KC_TILD),
    [CB_CD_up] =        COMBO_ACTION(CD_up),
    [CB_Underscore] =   COMBO(Underscore, KC_UNDS),
    [CB_Escape] =       COMBO(Escape, KC_ESC),
    [CB_Enter] =        COMBO(Enter, KC_ENT),
    [CB_Tab] =          COMBO(Tab, KC_TAB),
    
};

// combo complex actions
void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CB_PID:       if (pressed) { SEND_STRING(ID_CHARTER); } break;
    case CB_Pass:      if (pressed) { SEND_STRING(PW_CHARTER); } break;
    case CB_PassAdm:   if (pressed) { SEND_STRING(PW_CHARTER_ADM); } break;
    case CB_PassLinux: if (pressed) { SEND_STRING(PW_LINUX); } break;
    case CB_Name:      if (pressed) { SEND_STRING("spencerdabell"); } break;
    case CB_Email:     if (pressed) { SEND_STRING("spencerdabell@gmail.com"); } break;
    case CB_CD_up:     if (pressed) { SEND_STRING("cd .."); tap_code16(KC_ENT); } break;
   
    default: break;
  }
}

/*
reference
https://docs.qmk.fm/#/feature_caps_word

*/