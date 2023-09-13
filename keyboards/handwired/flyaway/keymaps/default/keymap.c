#include QMK_KEYBOARD_H

#include "common_modkeys.h"
#include "password.h"

enum {
    // base
    L_QWERTY = 0
    , L_FOLD
    , L_HAIR
    , L_HAIR2
    , L_LAYER
    , L_PUNCT
    , L_NAVI
    , L_NUMBER
    , L_MOUSE
};

// LAYER SWITCHING
#define TO_QT   TO(L_QWERTY)
#define TO_LY   TO(L_LAYER)
#define TO_PT   TO(L_PUNCT)
#define OSL_PT  OSL(L_PUNCT)
#define TO_NV   TO(L_NAVI)
#define TO_MS   TO(L_MOUSE)
#define TO_NU   TO(L_NUMBER)
#define TO_FOLD TO(L_FOLD)
#define TO_HAIR TO(L_HAIR)

#define LY_U    LT(L_LAYER, KC_U)
#define LY_ENT  LT(L_LAYER, KC_ENT)
#define LY_TAB  LT(L_LAYER, KC_TAB)
#define LY_ESC  LT(L_LAYER, KC_ESC)

// hair 1 and 2
#define H2_H    LT(L_HAIR2, KC_H)

// nav
#define NV_A    LT(L_NAVI, KC_A)
#define NV_B    LT(L_NAVI, KC_B)
#define NV_C    LT(L_NAVI, KC_C)
#define NV_D    LT(L_NAVI, KC_D)
#define NV_E    LT(L_NAVI, KC_E)
#define NV_F    LT(L_NAVI, KC_F)
#define NV_G    LT(L_NAVI, KC_G)
#define NV_H    LT(L_NAVI, KC_H)
#define NV_I    LT(L_NAVI, KC_I)
#define NV_J    LT(L_NAVI, KC_J)
#define NV_K    LT(L_NAVI, KC_K)
#define NV_L    LT(L_NAVI, KC_L)
#define NV_M    LT(L_NAVI, KC_M)
#define NV_N    LT(L_NAVI, KC_N)
#define NV_O    LT(L_NAVI, KC_O)
#define NV_P    LT(L_NAVI, KC_P)
#define NV_Q    LT(L_NAVI, KC_Q)
#define NV_R    LT(L_NAVI, KC_R)
#define NV_S    LT(L_NAVI, KC_S)
#define NV_T    LT(L_NAVI, KC_T)
#define NV_U    LT(L_NAVI, KC_U)
#define NV_V    LT(L_NAVI, KC_V)
#define NV_W    LT(L_NAVI, KC_W)
#define NV_X    LT(L_NAVI, KC_X)
#define NV_Y    LT(L_NAVI, KC_Y)
#define NV_Z    LT(L_NAVI, KC_Z)
#define NV__    LT(L_NAVI, KC_NO)

// mouse
#define MS_A    LT(L_MOUSE, KC_A)
#define MS_B    LT(L_MOUSE, KC_B)
#define MS_C    LT(L_MOUSE, KC_C)
#define MS_D    LT(L_MOUSE, KC_D)
#define MS_E    LT(L_MOUSE, KC_E)
#define MS_F    LT(L_MOUSE, KC_F)
#define MS_G    LT(L_MOUSE, KC_G)
#define MS_H    LT(L_MOUSE, KC_H)
#define MS_I    LT(L_MOUSE, KC_I)
#define MS_J    LT(L_MOUSE, KC_J)
#define MS_K    LT(L_MOUSE, KC_K)
#define MS_L    LT(L_MOUSE, KC_L)
#define MS_M    LT(L_MOUSE, KC_M)
#define MS_N    LT(L_MOUSE, KC_N)
#define MS_O    LT(L_MOUSE, KC_O)
#define MS_P    LT(L_MOUSE, KC_P)
#define MS_Q    LT(L_MOUSE, KC_Q)
#define MS_R    LT(L_MOUSE, KC_R)
#define MS_S    LT(L_MOUSE, KC_S)
#define MS_T    LT(L_MOUSE, KC_T)
#define MS_U    LT(L_MOUSE, KC_U)
#define MS_V    LT(L_MOUSE, KC_V)
#define MS_W    LT(L_MOUSE, KC_W)
#define MS_X    LT(L_MOUSE, KC_X)
#define MS_Y    LT(L_MOUSE, KC_Y)
#define MS_Z    LT(L_MOUSE, KC_Z)
#define MS__    LT(L_MOUSE, KC_NO)
#define MS_ESC  LT(L_MOUSE, KC_ESC)


// number
#define NU_E    LT(L_NUMBER, KC_E)
#define NU_R    LT(L_NUMBER, KC_R)
#define NU_U    LT(L_NUMBER, KC_U)
#define NU_TAB  LT(L_NUMBER, KC_TAB)
#define NU_SPC  LT(L_NUMBER, KC_SPC)

// fn
// #define FN_ENT  LT(L_FN, KC_ENT)

// punctuation
#define PT_C    LT(L_PUNCT, KC_C)
#define PT_E    LT(L_PUNCT, KC_E)
#define PT_H    LT(L_PUNCT, KC_H)
#define PT_X    LT(L_PUNCT, KC_X)
#define PT__    LT(L_PUNCT, KC_NO)
#define PT_5    LT(L_PUNCT, KC_5)
#define PT_F12  LT(L_PUNCT, KC_F12)
#define PT_BSPC LT(L_PUNCT, KC_BSPC)
#define PT_SPC  LT(L_PUNCT, KC_SPC)
#define PT_TAB  LT(L_PUNCT, KC_TAB)


// sound
#define SD_MPLY LT(L_SOUND, KC_MPLY)
#define SD_F    LT(L_SOUND, KC_F)
#define SD_Q    LT(L_SOUND, KC_Q)
#define SD_R    LT(L_SOUND, KC_R)
#define SD_Z    LT(L_SOUND, KC_Z)

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

#define A_CtPUP ALT_T(Ct_PGUP)
#define S_CtPDN SFT_T(Ct_PGDN)


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
[L_QWERTY] = LAYOUT_split_3x6_3(
    U______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    U______,
    U______, CT_A,    AT_S,    ST_D,    NV_F,    KC_G,           KC_H,    KC_J,    ST_K,    AT_L,    CT_SCLN, U______,
    U______, GT_Z,    KC_X,    KC_C,    MS_V,    KC_B,           KC_N,    KC_M,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                               ST_ESC,  PT_TAB,  _______,        _______, NU_SPC,  LY_ENT
),

/*
v m h g w  z x u o ,        rl-eai
s t n d p  j r e a i
y k b c f  q l ' ; .

v m l c p  x f o u j        sturdy
s t r d y  . n a e i
z k q g w  b h ' ; ,_

tnsrhldcmfpgwyb vkxjqz
tnsr h ld cm fpg pwyb vkxjqz

q g d f v  j l u o ,        wreathy
n s t h y  w r e a i ;
b c m p k  z x / ' .

1 2 3 4 .  . 7 v v v
        .  . 6
      5 .  .

tnsr h ld

n s t c  _  _ h e a i

      r

L W U O Y
R H E A I

qgdfvzluoy
nsthkwreai
bcmp;jx,./

*/

[L_FOLD] = LAYOUT_split_3x6_3(
    U______, KC_Q,    KC_G,    KC_D,    KC_F,    KC_V,           KC_Z,    KC_L,    KC_U,    KC_O,    KC_Y,    U______,
    U______, CT_N,    AT_S,    ST_T,    NV_H,    KC_K,           KC_W,    KC_R,    ST_E,    AT_A,    CT_I,    U______,
    U______, GT_B,    KC_C,    KC_M,    KC_P,    KC_SCLN,        KC_J,    KC_X,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                               _______, PT_H,    _______,        _______, _______, _______
),
/*
fpdb   moyw
sntc   hair
   g   l
   ␣   eu



*/
[L_HAIR] = LAYOUT_split_3x6_3(
    U______, GT_F,    KC_P,    KC_C,    MS_G,    U______,        U______, KC_L,    KC_O,    KC_Y,    GT_W,    U______,
    U______, CT_S,    AT_N,    ST_T,    NV_D,    MS_B,           KC_M,    H2_H,    ST_A,    AT_I,    CT_R,    U______,
    U______, U______, U______, U______, MS_B,    U______,        U______, KC_M,    U______, U______, U______, U______,
                               _______, PT_SPC,  _______,        _______, NU_E,    LY_U
),

/*
fg???s
vkxjqz


*/

[L_HAIR2] = LAYOUT_split_3x6_3(
    U______, KC_V,    KC_B,    KC_Q,    KC_K,    _______,        _______, _______, _______, _______, _______, U______,
    U______, KC_Z,    KC_M,    KC_X,    KC_J,    _______,        _______, _______, _______, _______, _______, U______,
    U______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, U______,
                               _______, _______, _______,        _______, _______, _______
),


[L_LAYER] = LAYOUT_split_3x6_3(
    U______, Ct_Q,    TO_FOLD, TO_QT,   TO_HAIR, U______,        U______, U______, KC_MPLY, U______, U______, U______,
    U______, Ct_Z,    Ct_S,    TO_MS,   TO_NV,   U______,        U______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U______,
    U______, Ct_Z,    Ct_X,    Ct_C,    Ct_V,    U______,        U______, KC_MRWD, U______, U______, KC_MFFD, U______,
                               _______, Ct_Y,    _______,        _______, _______, _______
),

/*
for the most part i use the symbols on the number layer

:;"!
.,'?
-+`=

x for dont use
:;"x
xx'x
-+`=

: is not in a good place for future vim use
especially if it's paired esc
 */
[L_PUNCT] = LAYOUT_split_3x6_3(
    U______, _______, KC_LBRC, KC_RBRC, KC_PIPE, U______,        U______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, U______,
    U______, KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, U______,        U______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, U______,
    U______, KC_BSLS, KC_LT,   KC_GT,   KC_SLSH, U______,        U______, KC_MINS, KC_PLUS, KC_GRV,  KC_EQL,  U______,
                               _______, _______, _______,        _______, KC_UNDS, _______
),
/*
remove ctat__, put desktop switching on left middle finger top row (??)
 */
[L_NAVI] = LAYOUT_split_3x6_3(
    U______, _______, AS_TAB,  At_TAB,  _______, U______,        U______, Ct_PGUP, KC_PGDN, KC_PGUP, Ct_PGDN,  U______,
    U______, KC_LCTL, _______, _______, _______, U______,        KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,
    U______, C(KC_J), CA_DOWN, CA_UP,   _______, U______,        U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT, U______,
                               _______, _______, _______,        _______, _______, _______
),
[L_NUMBER] = LAYOUT_split_3x6_3(
    U______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   U______,        U______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  U______,
    U______, CT_1,    AT_2,    ST_3,    KC_4,    U______,        U______, KC_7,    ST_8,    AT_9,    CT_0,    U______,
    U______, KC_F11,  KC_F12,  KC_F5,   KC_5,    U______,        U______, KC_6,    KC_F6,   KC_CAPS, CW_TOGG, U______,
                               _______, PT_5, _______,           _______, KC_6,    _______
),
[L_MOUSE] = LAYOUT_split_3x6_3(
    U______, _______, _______, _______, _______, U______,        U______, U______, KC_BTN1, KC_BTN2, KC_BTN3, U______,
    U______, _______, KC_BTN2, KC_BTN1, _______, U______,        U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U______,
    U______, KC_ACL0, KC_ACL1, KC_ACL2, _______, U______,        U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U______,
                               _______, KC_BTN1, _______,        _______, KC_BTN1, _______
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
    , CB_PassLinux
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
COMBO_3(PID,       NU_SPC, KC_I, ST_D);
COMBO_3(Pass,      NU_SPC, CT_A, KC_P);
COMBO_3(PassAdm,   NU_SPC, AT_S, KC_P);
COMBO_3(PassLinux, NU_SPC, NV_F, AT_L);
COMBO_3(Name,      NU_SPC, KC_N, AT_S);
COMBO_3(Email,     NU_SPC, KC_E, KC_M);
COMBO_2(Underscore,KC_TAB, NU_SPC);
COMBO_2(Escape,    AT_S, ST_D);
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
    default: break;
  }
}

/*
reference
https://docs.qmk.fm/#/feature_caps_word

*/
