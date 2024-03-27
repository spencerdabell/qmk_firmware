// #include "keycodes.h"
#include "send_string_keycodes.h"
#include QMK_KEYBOARD_H

#include "common_modkeys.h"
#include "password.h"

enum layer {
    // base
    L_ALPHA = 0,
    // L_GAME,
    L_SYMBOL,
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
// #define TG_PT TG(L_SYMBOL)
// #define OSL_PT OSL(L_SYMBOL)
#define TG_NV TG(L_NAVI)
#define TG_MS TG(L_MOUSE)
#define TG_NU TG(L_NUMBER)

// #define TG_NU TG(L_NUMBER)

// #define MO_PT MO(L_SYMBOL)

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

#define NV2_A LT(L_NAVI2, KC_A)
#define NV2_C LT(L_NAVI2, KC_C)
#define NV2_D LT(L_NAVI2, KC_D)
#define NV2_T LT(L_NAVI2, KC_T)
#define NV2_V LT(L_NAVI2, KC_V)

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
#define FN_ENT LT(L_FN, KC_ENT)
#define FN_ESC LT(L_FN, KC_ESC)

// symbol
#define SY_C LT(L_SYMBOL, KC_C)
#define SY_E LT(L_SYMBOL, KC_E)
#define SY_H LT(L_SYMBOL, KC_H)
#define SY_O LT(L_SYMBOL, KC_O)
#define SY_R LT(L_SYMBOL, KC_R)
#define SY_X LT(L_SYMBOL, KC_X)
#define SY__ LT(L_SYMBOL, KC_NO)
#define SY_5 LT(L_SYMBOL, KC_5)
#define SY_F12 LT(L_SYMBOL, KC_F12)
#define SY_BSPC LT(L_SYMBOL, KC_BSPC)
#define SY_SPC LT(L_SYMBOL, KC_SPC)
#define SY_TAB LT(L_SYMBOL, KC_TAB)
#define SY_ESC LT(L_SYMBOL, KC_ESC)

// sound
#define SD_MPLY LT(L_SOUND, KC_MPLY)
#define SD_F LT(L_SOUND, KC_F)
#define SD_L LT(L_SOUND, KC_L)
#define SD_Q LT(L_SOUND, KC_Q)
#define SD_R LT(L_SOUND, KC_R)
#define SD_U LT(L_SOUND, KC_U)
#define SD_Y LT(L_SOUND, KC_Y)
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

// LAYOUT_5x3_2
// LAYOUT_532

#define LAYOUT_532( \
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

[L_ALPHA] = LAYOUT_532(
    SD_Z,    KC_W,    KC_G,    KC_F,    KC_K,           KC_QUOT, KC_J,    KC_U,    KC_Y,    KC_Q,
    CT_N,    AT_S,    NV2_T,   NV_H,    KC_V,           KC_DOT,  KC_A,    KC_E,    AT_I,    CT_O,
    GT_P,    ST_C,    KC_M,    MS_D,    KC_B,           SD_COMM, KC_X,    KC_SLSH, ST_TAB,  GT_ENT,
                               ST_SPC,  NU_ESC,         SD_L,    SY_R
),
/*
standard
tab  q w e r   t y u o i     p
shft a s d f   g h j k l     ;
ctrl z x c v   b n m _ ent   /
     spc esc   ___ ___

        +---+                      +---+
    +---+ x +---+---+      +---+---+   +---+---+
+---+ q +---+ e | r |      |   |   +---+   |   +---+
|tab+---+ w +---+---+      +---+---+   +---+---|   |
+---+ a +---+ d | f |      |   |   +---+   |   +---+
|sft+---+ s +---+---+      +---+---+   +---+---|   |
+---+ z +---+ c | v |      |   |   +---+   |   +---+
|ctl+---+   +---+---+      +---+---+   +---+---|   |
+---+                                          +---+
            +---+---+      +---+---+
            |   |   |      |   |   |
            +---+---+      +---+---+



the w is brought down to the home row,
s is shifted down
x is wrapped up onto the top of the column
*/

// [L_GAME] = LAYOUT_532(
//     KC_TAB,  KC_Q,    KC_X,    KC_E,    KC_R,           KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,
//     KC_LSFT, KC_A,    KC_W,    KC_D,    KC_F,           KC_G,    KC_H,    KC_J,    KC_K,    KC_L,
//     KC_LCTL, KC_Z,    KC_S,    KC_C,    KC_V,           KC_B,    KC_N,    KC_M,    U______, KC_ENT,
//                                KC_SPC,  NU_ESC,         KC_P,    SY__
// ),
[L_SYMBOL] = LAYOUT_532(
    _______, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,        KC_CIRC, KC_AMPR, KC_GRV,  KC_DQUO, _______,
    KC_LCBR, KC_LPRN, KC_RPRN, KC_RCBR, KC_PIPE,        _______, KC_UNDS, KC_SCLN, KC_COLN, KC_EQL,
    KC_LBRC, KC_LT,   KC_GT,   KC_RBRC, KC_BSLS,        _______, KC_MINS, KC_ASTR, KC_EXLM, KC_QUES,
                               _______, _______,        _______, _______
),
[L_NUMBER] = LAYOUT_532(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    CT_1,    AT_2,    KC_3,    NV_4,    KC_5,           KC_6,    KC_7,    KC_8,    AT_9,    CT_0,
    KC_F11,  ST_F12,  KC_CAPS, CW_TOGG, KC_INS,         U______, KC_MINS, KC_PLUS, ST_____, KC_PERC,
                               _______, KC_5,           U______, KC_6
),

// [L_NUMBER] = LAYOUT_532(
//     U______, U______, U______, U______, U______,        U______, U______, U______, U______, U______,
//     CT_1,    AT_2,    ST_3,    NV_4,    KC_5,           KC_6,    KC_7,    ST_8,    AT_9,    CT_0,
//     U______, U______, U______, U______, U______,        _______, KC_MINS, KC_PLUS, KC_ASTR, KC_SLSH,
//                                _______, KC_5,           KC_6,    U______
// ),
// [L_FN] = LAYOUT_532(
//     U______, U______, U______, U______, U______,        U______, U______, U______, U______, U______,
//     CT_F1,   AT_F2,   ST_F3,   KC_F4,   KC_F5,          KC_F6,   KC_F7,   ST_F8,   AT_F9,   CT_F10,
//     KC_F11,  KC_F12,  U______, U______, U______,        U______, U______, U______, U______, U______,
//                                _______, KC_F5,          KC_F6,   _______
// ),


[L_NAVI] = LAYOUT_532(
    KC_MCTL, CA_DOWN, CA_UP,   U______, U______,        U______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
    KC_LCTL, Ct_Z,    Ct_Y,    U______, U______,        U______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_LGUI, U______, U______, U______, U______,        U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT,
                               ST_____, U______,        Ct_BSPC, Ct_BSPC
),
[L_NAVI2] = LAYOUT_532(
    U______, U______, U______, U______, U______,        U______, U______, U______, U______, U______,
    U______, Ct_PGUP, CA_UP,   Ct_PGDN, U______,        U______, Ct_PGUP, CA_DOWN, CA_UP,   Ct_PGDN,
    U______, U______, CA_DOWN, U______, U______,        U______, U______, U______, U______, U______,
                               ST_____, U______,        U______, U______
),
[L_MOUSE] = LAYOUT_532(
    U______, U______, U______, U______, U______,        U______, U______, KC_BTN1, KC_BTN2, U______,
    CT_BTN3, AT_BTN2, KC_BTN1, KC_BTN1, U______,        U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
    U______, U______, U______, U______, U______,        U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
                               ST_____, U______,        U______, U______
),
[L_SOUND] = LAYOUT_532(
    // U______, U______, U______, U______, U______,        KC_MPRV, KC_VOLU, KC_MPLY, U______, KC_MNXT,
    // KC_1,    KC_2,    KC_3,    KC_4,    U______,        U______, KC_VOLD, U______, U______, U______,
    // KC_6,    KC_7,    KC_8,    KC_9,    U______,        U______, U______, U______, U______, U______,
    //                            KC_0,    KC_5,           KC_MRWD, KC_MFFD
    U______, U______, U______, U______, U______,        U______, U______, KC_MPLY, U______, U______,
    U______, U______, U______, U______, U______,        U______, KC_MRWD, KC_VOLD, KC_VOLU, KC_MFFD,
    U______, U______, U______, U______, U______,        U______, KC_MPRV, U______, U______, KC_MNXT,
                               U______, U______,        U______, U______

/*
_,_,_,s,_
_,_,_,_,_
_,_,_,_,_
_,_

rwd, fwd, prv, nxt, volu, vold, ply
freq: y, u-d, r-f, p-n

p,r,f,s,n
_,u,_,_,_
_,d,_,_,_
y,y

*/

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
    // , CB_K
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
COMBO_2(PassLinux, KC_J, KC_Y);
COMBO_2(Name,      AT_S, GT_P);
COMBO_2(Email,     KC_M, NU_L);
COMBO_2(Tilde,     KC_SLSH, ST_TAB);
// COMBO_2(Escape,    AT_S, NV2_T);
// COMBO_2(Enter,     KC_E, AT_I);
// COMBO_2(Tab,       KC_U, KC_Y);
// COMBO_2(K_P,       KC_G, KC_F);
// COMBO_2(K_K,       KC_M, MS_D);
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
    // [CB_K] =            COMBO(K_K, KC_K),
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




/*
greek layer

a    Α   α  alpha
b    Β   β  beta
g    Γ   γ  gamma
d    Δ   δ  delta
e    Ε   ε  epsilon
z    Ζ   ζ  zeta
h    Η   η  eta
th   Θ   θ  theta
i    Ι   ι  iota
k    Κ   κ  kappa
l    Λ   λ  lamda
m    Μ   μ  mu
n    Ν   ν  nu
ks   Ξ   ξ  xi
o    Ο   ο  omicron
p    Π   π  pi
r    Ρ   ρ  rho
s    Σ  σ/ς sigma
t    Τ   τ  tau
y    Υ   υ  upsilon
ph   Φ   φ  phi
x    Χ   χ  chi
ps   Ψ   ψ  psi
w    Ω   ω  omega

*/



