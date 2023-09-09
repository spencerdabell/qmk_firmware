#include QMK_KEYBOARD_H

#include "common_modkeys.h"
#include "password.h"

enum {
    // base
    L_QWERTY = 0
    , L_FOLD
    , L_LAYER
    , L_PUNCT
    , L_NAVI
    , L_CTRL
    , L_EDIT
    , L_NUMBER
    // , L_FN
    , L_BRACKET
    , L_MOUSE
    , L_SOUND
    // , L_GAME
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
// #define TO_GAME TO(L_GAME)
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

// ctrl
#define CR_D    LT(L_CTRL, KC_D)

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


// number
#define NU_R    LT(L_NUMBER, KC_R)
#define NU_U    LT(L_NUMBER, KC_U)
#define NU_TAB  LT(L_NUMBER, KC_TAB)
#define NU_SPC  LT(L_NUMBER, KC_SPC)

// fn
// #define FN_ENT  LT(L_FN, KC_ENT)

// punctuation
#define PT_C    LT(L_PUNCT, KC_C)
#define PT_E    LT(L_PUNCT, KC_E)
#define PT_X    LT(L_PUNCT, KC_X)
#define PT__    LT(L_PUNCT, KC_NO)
#define PT_F12  LT(L_PUNCT, KC_F12)
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
    U______, KC_Q,    ED_W,    KC_E,    SD_R,    KC_T,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    U______,
    U______, CT_A,    AT_S,    CR_D,    NV_F,    KC_G,           KC_H,    KC_J,    KC_K,    AT_L,    CT_SCLN, U______,
    U______, GT_Z,    PT_X,    KC_C,    MS_V,    KC_B,           KC_N,    KC_M,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                               BR_ESC,  ST_SPC,  TO_LY,          KC_TAB,  NU_SPC,  KC_ENT
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
    U______, KC_Q,    ED_G,    KC_D,    SD_F,    KC_V,           KC_Z,    KC_L,    KC_U,    KC_O,    KC_Y,    U______,
    U______, CT_N,    AT_S,    KC_T,    NV_H,    KC_K,           KC_W,    KC_R,    KC_E,    AT_A,    CT_I,    U______,
    U______, GT_B,    PT_C,    KC_M,    MS_P,    KC_SCLN,        KC_J,    KC_X,    KC_COMM, KC_DOT,  GT_SLSH, U______,
                               _______, ST_H,    TO_LY,          _______, NU_SPC,  _______
),
/*
don't really ever use game layer
don't use num layer (but i guess keep for now)
don't use game layer
hmmm then this thumb key is kinda getting underused
 */
[L_LAYER] = LAYOUT_split_3x6_3(
    U______, U______, _______, TO_NU,   TO_SD,   U______,        U______, U______, U______, U______, U______, U______,
    U______, TO_FOLD, _______, TO_QT,   TO_NV,   U______,        U______, U______, U______, U______, U______, U______,
    U______, U______, _______, U______, TO_MS,   U______,        U______, U______, U______, U______, U______, U______,
                               _______, _______, _______,        _______, _______, _______
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
    U______, U______, U______, U______, U______, U______,        U______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, U______,
    U______, U______, U______, U______, U______, U______,        U______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, U______,
    U______, U______, U______, U______, U______, U______,        U______, KC_MINS, KC_PLUS, KC_GRV,  KC_EQL,  U______,
                               _______, _______, _______,        _______, _______, _______
),
/*
remove desk_lt, desk_rt
remove ctat__, put desktop switching on left middle finger top row (??)

     Up
Left Down Rght Bksp
Home      End  Del

     PgDn PgUp
Left Down Up   Rght
Home Bksp Del  End


 */
[L_NAVI] = LAYOUT_split_3x6_3(
    U______, Gu_GRV,  Ct_PGUP, Ct_PGDN, _______, U______,        U______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  U______,
    U______, KC_LCTL, _______, CTAT___, _______, U______,        U______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, U______,
    U______, Ct_GRV,  AS_TAB,  At_TAB,  _______, U______,        U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT, U______,
                               _______, _______, _______,        _______, _______, _______
),
/*
for a main finger, this is pretty underused. (left middle finger)
*/
[L_CTRL] = LAYOUT_split_3x6_3(
    U______, _______, _______, _______, _______, U______,        U______, KC_COLN, _______, _______, _______, U______,
    U______, _______, _______, _______, _______, U______,        U______,S(KC_TAB),KC_ENT,  KC_ESC,  KC_TAB,  U______,
    U______, _______, _______, _______, _______, U______,        U______, KC_COLN, _______, _______, _______, U______,
                               _______, _______, _______,        _______, _______, _______
),
/*

yeah c-x,c-s is pretty awkard here

zxcv

 */
[L_EDIT] = LAYOUT_split_3x6_3(
    U______, _______, _______, _______, _______, U______,        U______, _______, Ct_S,    _______, _______, U______,
    U______, _______, _______, _______, _______, U______,        U______, Ct_Z,    Ct_C,    Ct_V,    Ct_Y,    U______,
    U______, _______, _______, _______, _______, U______,        U______, Ct_U,    Ct_X,    _______, Ct_K,    U______,
                               _______, _______, _______,        _______, _______, _______
),
/*
yeah leaving a bunch on the table with numbers, maybe

 */
[L_NUMBER] = LAYOUT_split_3x6_3(
    U______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   U______,        U______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  U______,
    U______, CT_1,    AT_2,    GT_3,    KC_4,    U______,        U______, KC_7,    GT_8,    AT_9,    CT_0,    U______,
    U______, KC_F11,  PT_F12,  KC_F5,   KC_5,    U______,        U______, KC_6,    KC_F6,   CW_TOGG, KC_CAPS, U______,
                               _______, ST_5,    _______,        _______, _______, _______
),

[L_BRACKET] = LAYOUT_split_3x6_3(
    U______, _______, _______, _______, _______, U______,        U______, KC_PIPE, KC_LBRC, KC_RBRC, _______, U______,
    U______, _______, KC_MINS, KC_EQL,  _______, U______,        U______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, U______,
    U______, _______, _______, KC_EXLM, KC_EXLM, U______,        U______, KC_BSLS, KC_LT,   KC_GT,   KC_SLSH, U______,
                               _______, _______, _______,        _______, KC_UNDS, _______
),
[L_MOUSE] = LAYOUT_split_3x6_3(
    U______, _______, _______, _______, _______, U______,        U______, U______, KC_BTN1, KC_BTN2, KC_BTN3, U______,
    U______, _______, KC_BTN2, KC_BTN1, _______, U______,        U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U______,
    U______, KC_ACL0, KC_ACL1, KC_ACL2, _______, U______,        U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U______,
                               _______, _______, _______,        _______, _______, _______
),
[L_SOUND] = LAYOUT_split_3x6_3(
    U______, _______, _______, KC_MPLY, KC_MNXT, U______,        U______, _______, _______, _______, _______, U______,
    U______, _______, _______, _______, _______, U______,        U______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U______,
    U______, _______, _______, _______, _______, U______,        U______, KC_MRWD, _______, _______, KC_MFFD, U______,
                               _______, _______, _______,        _______, _______, _______
),
// [L_GAME] = LAYOUT_split_3x6_3(
//     U______, KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,
//     U______, KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//     U______, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, U______,
//                                TO_PT,   KC_SPC,  _______,        KC_TAB,  NU_SPC,  KC_ENT
// ),
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
    , CB_Fold_Z
    , CB_Fold_V
    , CB_Fold_K
    , CB_LENGTH
};
uint16_t COMBO_LEN = CB_LENGTH;

// combo key combinations
#define COMBO_2(NAME, KEY1, KEY2)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, COMBO_END};
#define COMBO_3(NAME, KEY1, KEY2, KEY3)  const uint16_t PROGMEM NAME[] = {KEY1, KEY2, KEY3, COMBO_END};
COMBO_3(BOOT,      NU_SPC, KC_B, KC_O);
COMBO_3(BOOT_TGB,  KC_T, KC_G, KC_B);
COMBO_3(PID,       NU_SPC, KC_I, CR_D);
COMBO_3(Pass,      NU_SPC, CT_A, KC_P);
COMBO_3(PassAdm,   NU_SPC, AT_S, KC_P);
COMBO_3(PassLinux, NU_SPC, NV_F, AT_L);
COMBO_3(Name,      NU_SPC, KC_N, AT_S);
COMBO_3(Email,     NU_SPC, KC_E, KC_M);
COMBO_2(Tilde,     KC_COMM, KC_DOT);
COMBO_3(CD_up,     NU_SPC, PT_C, KC_DOT);
COMBO_2(Underscore,KC_TAB, NU_SPC);
COMBO_2(Escape,    AT_S, CR_D);
COMBO_2(Enter,     KC_K, AT_L);
COMBO_2(Tab,       KC_I, KC_O);

COMBO_2(Fold_Z,    ST_H, AT_S);
COMBO_2(Fold_V,    ST_H, SD_F);
COMBO_2(Fold_K,    ST_H, ED_G);



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

    [CB_Fold_Z] =       COMBO(Fold_Z, KC_Z),
    [CB_Fold_V] =       COMBO(Fold_V, KC_V),
    [CB_Fold_K] =       COMBO(Fold_K, KC_K),
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
