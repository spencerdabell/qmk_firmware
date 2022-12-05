#include QMK_KEYBOARD_H

// broken off
#define B______ KC_NO
#define B_      KC_NO
// unused areas of keyboard
#define U______ KC_NO
#define U_      KC_NO
// purposely left empty, and don't do anything otherwise
#define E______ KC_NO

enum {
    L_BS = 0
//     , L_NGRM // engram layout mirrored
    , L_CLMK
    , L_ISRT
    , L_SEMI
//     , L_WHRF
    , L_FOLD
    , L_APT3    
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
#define TO_SY   TO(L_SY)
// #define TO_NGRM TO(L_NGRM)
#define TO_CLMK TO(L_CLMK)
#define TO_ISRT TO(L_ISRT)
#define TO_SEMI TO(L_SEMI)
// #define TO_WHRF TO(L_WHRF)
#define TO_FOLD TO(L_FOLD)
#define TO_APT3 TO(L_APT3)



// QWERTY
#define CT_A    CTL_T(KC_A)
#define AT_S    ALT_T(KC_S)
// #define GT_D    GUI_T(KC_D)
#define GT_Z    GUI_T(KC_Z)
#define ST_C    SFT_T(KC_C)


// #define GT_K    GUI_T(KC_K)
#define ST_COMM SFT_T(KC_COMM)
#define AT_L    ALT_T(KC_L)
#define CT_SCLN CTL_T(KC_SCLN)
#define GT_SLSH GUI_T(KC_SLSH)


#define NV_F    LT(L_NV, KC_F)
#define MS_V    LT(L_MS, KC_V)
#define NV_J    LT(L_NV, KC_J)
#define NU_R    LT(L_NU, KC_R)
#define NU_U    LT(L_NU, KC_U)
#define SY_O    LT(L_SY, KC_O)


#define SD_MPLY LT(L_SD, KC_MPLY)
#define SD_Q    LT(L_SD, KC_Q)
#define SD_Z    LT(L_SD, KC_Z)
#define NU_TAB  LT(L_NU, KC_TAB)
#define NU_SPC  LT(L_NU, KC_SPC)
#define PT_BSPC LT(L_PT, KC_BSPC)


#define ST_ENT  SFT_T(KC_ENT)
#define ST_SPC  SFT_T(KC_SPC)
#define ST_UNDS SFT_T(KC_UNDS)



// shift hold, osm tap
#define SY_DEL  LT(L_SY, KC_DEL)
#define PT_E    LT(L_PT, KC_E)
#define SY_D    LT(L_SY, KC_D)
#define SY_GRV  LT(L_SY, KC_GRV)
#define SY_W    LT(L_SY, KC_W)

#define CT_1    CTL_T(KC_1)
#define AT_2    ALT_T(KC_2)
#define GT_3    GUI_T(KC_3)
#define GT_8    GUI_T(KC_8)
#define AT_9    ALT_T(KC_9)
#define CT_0    CTL_T(KC_0)

// ENGRAM | MARGNE
#define CT_C    CTL_T(KC_C)
#define AT_I    ALT_T(KC_I)
#define GT_E    GUI_T(KC_E)
#define NV_A    LT(L_NV, KC_A)
#define MS_K    LT(L_MS, KC_K)

#define GT_T    GUI_T(KC_T)
#define AT_S    ALT_T(KC_S)
#define CT_N    CTL_T(KC_N)
#define NV_H    LT(L_NV, KC_H)
#define MS_R    LT(L_MS, KC_R)


// NAV
#define Ct_PGUP C(KC_PGUP)
#define Ct_PGDN C(KC_PGDN)
#define Ct_HOME C(KC_HOME)
#define Ct_LEFT C(KC_LEFT)
#define Ct_RGHT C(KC_RGHT)
#define Ct_END  C(KC_END)
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

#define OSM_LST OSM(MOD_LSFT)
#define OSM_RST OSM(MOD_RSFT)


// CAPS_WORD	CAPSWRD	Toggles Caps Word

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[L_BS] = LAYOUT(
        U_, KC_ESC,  SD_Q,    SY_W,    KC_E,    KC_R,    KC_T,    U______, B_,        U______, KC_Y,    KC_U,    KC_I,    SY_O,    KC_P,    KC_GRV,  U_, B_,
        U_, KC_TAB,  CT_A,    AT_S,    KC_D,    NV_F,    KC_G,    U______, B_,        U______, KC_H,    KC_J,    KC_K,    AT_L,    CT_SCLN, KC_QUOT, U_, B_,
        U_, U______, GT_Z,    KC_X,    KC_C,    MS_V,    KC_B,    U______, B_,        U______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, U______, U_, B_,
        U_, U______, U______, U______, U______, OSL_PT,  OSM_LST, _______, B_,        _______, NU_SPC,  KC_ENT,  U______, U______, U______, U______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_CLMK] = LAYOUT(
        U_, U______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    U______, B_,        U______, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______, U_, B_,
        U_, _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    U______, B_,        U______, KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    _______, U_, B_,
        U_, _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    U______, B_,        U______, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        U_, U______, U______, U______, U______, U______, U______, U______, B_,        U______, U______, U______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_ISRT] = LAYOUT(
        U_, _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,    U______, B_,        U______, KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, U_, B_,
        U_, _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,    U______, B_,        U______, KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    _______, U_, B_,
        U_, _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    U______, B_,        U______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, U_, B_,
        U_, _______, _______, _______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        U_, _______, _______, U______, U______, U______, U______, U______, B_,        U______, U______, U______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// f l h v z ' w u o y
// s r n t k c d e a i
// x j b m q p g , . /
[L_SEMI] = LAYOUT(
        U_, _______, KC_F,    KC_L,    KC_H,    KC_V,    KC_Z,    U______, B_,        U______, KC_QUOT, KC_W,    KC_U,    KC_O,    KC_Y,    _______, U_, B_,
        U_, _______, KC_S,    KC_R,    KC_N,    KC_T,    KC_K,    U______, B_,        U______, KC_C,    KC_D,    KC_E,    KC_A,    KC_I,    _______, U_, B_,
        U_, _______, KC_X,    KC_J,    KC_B,    KC_M,    KC_Q,    U______, B_,        U______, KC_P,    KC_G,    KC_COMM, KC_DOT,  KC_SLSH, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        U_, U______, U______, U______, U______, U______, U______, U______, B_,        U______, U______, U______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// f l h d m  v w o u ,
// s r n t k  g y a e i
// x j b z q  p c ' ; .
// [L_WHRF] = LAYOUT(
//         U______, _______, KC_F,    KC_L,    KC_H,    KC_D,    KC_M,    U______, B_,        U______, KC_V,    KC_W,    KC_O,    KC_U,    KC_COMM, _______, U_, B_,
//         U______, _______, KC_S,    KC_R,    KC_N,    KC_T,    KC_K,    U______, B_,        U______, KC_G,    KC_Y,    KC_A,    KC_E,    KC_I,    KC_SLSH, U_, B_,
//         U______, _______, KC_X,    KC_J,    KC_B,    KC_Z,    KC_Q,    U______, B_,        U______, KC_P,    KC_C,    KC_QUOT, KC_SCLN, KC_DOT,  _______, U_, B_,
//         U______, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
//         U______, U______, U______, U______, U______, U______, U______, U______, B_,        U______, U______, U______, U______, U______, U______, U______, U_, B_,
        // B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
// ),
// w g d f b  q l u o y
// r s t h k  j n e a i ;
// x c m p v  z , . ' /
[L_APT3] = LAYOUT(
        U_, _______, KC_W,    KC_G,    KC_D,    KC_F,    KC_B,    U______, B_,        U______, KC_Q,    KC_L,    KC_U,    KC_O,    KC_Y,    _______, U_, B_,
        U_, _______, KC_R,    KC_S,    KC_T,    KC_H,    KC_K,    U______, B_,        U______, KC_J,    KC_N,    KC_E,    KC_A,    KC_I,    _______, U_, B_,
        U_, _______, KC_X,    KC_C,    KC_M,    KC_P,    KC_V,    U______, B_,        U______, KC_Z,    KC_COMM, KC_DOT,  KC_QUOT, KC_SCLN, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        U_, U______, U______, U______, U______, U______, U______, U______, B_,        U______, U______, U______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// mlcdk ;whuq
// rnstg jeaoi
// vxfpb zy,./
[L_FOLD] = LAYOUT(
        U_, _______, KC_M,    KC_L,    KC_C,    KC_P,    KC_B,    U______, B_,        U______, KC_SCLN, KC_W,    KC_H,    KC_U,    KC_Q,    _______, U_, B_,
        U_, _______, KC_R,    KC_N,    KC_S,    KC_T,    KC_G,    U______, B_,        U______, KC_J,    KC_E,    KC_A,    KC_O,    KC_I,    _______, U_, B_,
        U_, _______, KC_V,    KC_X,    KC_F,    KC_D,    KC_K,    U______, B_,        U______, KC_Z,    KC_Y,    KC_COMM, KC_DOT,  KC_SLSH, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        U_, U______, U______, U______, U______, U______, U______, U______, B_,        U______, U______, U______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_PT] = LAYOUT(
        U_, _______, TO_SD,   TO_SY,   U______, TO_NU,   U______, U______, B_,        U______, U______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, _______, U_, B_,
        U_, _______, TO_CLMK, TO_ISRT, TO_BS,   TO_NV,   U______, U______, B_,        U______, U______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, _______, U_, B_,
        U_, _______, TO_SEMI, TO_FOLD, TO_APT3, TO_MS,   U______, U______, B_,        U______, U______, KC_MINS, KC_PLUS, _______, KC_EQL,  _______, U_, B_,
        U_, _______, U______, U______, U______, _______, _______, _______, B_,        _______, ST_UNDS, _______, U______, U______, _______, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_NV] = LAYOUT(
        U_, _______, _______, AS_TAB,  At_TAB,  _______, _______, U______, B_,        U______, U______, Ct_PGUP, KC_PGDN, KC_PGUP, Ct_PGDN, _______, U_, B_,
        U_, _______, KC_LCTL, _______, _______, _______, _______, U______, B_,        U______, KC_HOME, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_END,  U_, B_,
        U_, _______, _______, DESK_LT, DESK_RT, _______, _______, U______, B_,        U______, U______, Ct_LEFT, KC_BSPC, KC_DEL,  Ct_RGHT, _______, U_, B_,
        U_, _______, _______, U______, U______, _______, _______, _______, B_,        _______, KC_TAB,  _______, U______, U______, _______, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
//
// 
[L_NU] = LAYOUT(
        U_, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   U______, U______, B_,        U______, U______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, U_, B_,
        U_, _______, CT_1,    AT_2,    GT_3,    KC_4,    U______, U______, B_,        U______, U______, KC_7,    GT_8,    AT_9,    CT_0,    _______, U_, B_,
        U_, _______, KC_F11,  KC_F12,  KC_F5,   KC_5,    U______, U______, B_,        U______, U______, KC_6,    KC_F6,   KC_PSCR, KC_ESC,  _______, U_, B_,
        U_, _______, _______, U______, U______, _______, _______, _______, B_,        _______, ST_UNDS, _______, U______, U______, _______, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_SY] = LAYOUT(
        U_, _______, _______, _______, _______, _______, U______, U______, B_,        U______, U______, KC_LT,   KC_GT,   KC_LBRC, KC_RBRC, _______, U_, B_,
        U_, _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  U______, U______, B_,        U______, U______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______, U_, B_,
        U_, _______, _______, _______, _______, KC_PERC, U______, U______, B_,        U______, U______, KC_UNDS, KC_PIPE, KC_BSLS, KC_SLSH, _______, U_, B_,
        U_, _______, _______, U______, U______, _______, _______, _______, B_,        _______, ST_UNDS, _______, U______, U______, _______, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_MS] = LAYOUT(
        U_, _______, _______, _______, _______, _______, U______, U______, B_,        U______, U______, U______, KC_BTN1, KC_BTN2, KC_BTN3, _______, U_, B_,
        U_, _______, _______, KC_BTN2, KC_BTN1, _______, U______, U______, B_,        U______, U______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, U_, B_,
        U_, _______, KC_ACL2, KC_ACL1, KC_ACL0, _______, U______, U______, B_,        U______, U______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, U_, B_,
        U_, _______, _______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, _______, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
),
// 
// 
// 
[L_SD] = LAYOUT(
        U_, _______, _______, KC_MPLY, KC_MPRV, KC_MNXT, _______, U______, B_,        U______, U______, KC_MSTP, KC_MPLY, _______, _______, _______, U_, B_,
        U_, _______, _______, KC_BTN1, KC_BTN2, _______, _______, U______, B_,        U______, U______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, _______, U_, B_,
        U_, _______, _______, _______, _______, _______, _______, U______, B_,        U______, U______, KC_MRWD, KC_MUTE, _______, KC_MFFD, _______, U_, B_,
        U_, _______, _______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, _______, _______, U_, B_,
        U_, U______, U______, U______, U______, _______, _______, _______, B_,        _______, _______, _______, U______, U______, U______, U______, U_, B_,
        B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_, B_,B_
)
};




enum combos {
    CB_BOOT
    , CB_QW_ESC
    , CB_PID
    , CB_Pass
    , CB_PassAdm
    , CB_WE_TAB
    , CB_IO_QUOT
    , CB_LENGTH
//     CB_LSemi_ENT,
//     CB_CommDot_ENT,
};

uint16_t COMBO_LEN = CB_LENGTH;
const uint16_t PROGMEM BOOT[] =         {KC_B, SY_O, COMBO_END};
const uint16_t PROGMEM QW_ESC[] =       {KC_Q, SY_W, COMBO_END};
const uint16_t PROGMEM LSemi_ENT[] =    {AT_L, CT_SCLN, COMBO_END};
const uint16_t PROGMEM CommDot_ENT[] =  {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM PID[] =          {KC_I, KC_P, COMBO_END};
const uint16_t PROGMEM Pass[] =         {CT_A, KC_P, COMBO_END};
const uint16_t PROGMEM PassAdm[] =      {AT_S, KC_P, COMBO_END};
const uint16_t PROGMEM WE_TAB[] =       {SY_W, PT_E, COMBO_END};
const uint16_t PROGMEM IO_QUOT[] =      {KC_I, SY_O, COMBO_END}; // hmm chording tends to move the keyboard quite a bit ...


combo_t key_combos[] = {
    [CB_BOOT] =         COMBO(BOOT, QK_BOOTLOADER),
    [CB_QW_ESC] =       COMBO(QW_ESC, KC_ESC),
    [CB_PID] =          COMBO_ACTION(PID),
    [CB_Pass] =         COMBO_ACTION(Pass),
    [CB_PassAdm] =      COMBO_ACTION(PassAdm),
    [CB_WE_TAB] =       COMBO(WE_TAB, KC_TAB),
    [CB_IO_QUOT] =      COMBO(IO_QUOT, KC_QUOT),
//     [CB_LSemi_ENT] =    COMBO(LSemi_ENT, KC_ENT),
//     [CB_CommDot_ENT] =  COMBO(CommDot_ENT, KC_ENT),
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case CB_PID:
      if (pressed) {
        SEND_STRING("P3101621");
      }
      break;
    case CB_Pass:
      if (pressed) {
        SEND_STRING("work124&");
      }
      break;
    case CB_PassAdm:
      if (pressed) {
        SEND_STRING("Gong124&");
      }
      break;
//     case BSPC_LSFT_CLEAR:
//       if (pressed) {
//         tap_code16(KC_END);
//         tap_code16(S(KC_HOME));
//         tap_code16(KC_BSPC);
//       }
//       break;
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


KC_LEFT_CTRL	KC_LCTL	Left Control	✔	✔	✔
KC_LEFT_SHIFT	KC_LSFT	Left Shift	✔	✔	✔
KC_LEFT_ALT	KC_LALT, KC_LOPT	Left Alt (Option)	✔	✔	✔
KC_LEFT_GUI	KC_LGUI, KC_LCMD, KC_LWIN	Left GUI (Windows/Command/Meta key)	✔	✔	✔
KC_RIGHT_CTRL	KC_RCTL	Right Control	✔	✔	✔
KC_RIGHT_SHIFT	KC_RSFT	Right Shift	✔	✔	✔
KC_RIGHT_ALT	KC_RALT, KC_ROPT, KC_ALGR	Right Alt (Option/AltGr)	✔	✔	✔
KC_RIGHT_GUI	KC_RGUI, KC_RCMD, KC_RWIN	Right GUI (Windows/Command/Meta key)	✔	✔	✔




// ----------------------------- high interest (will definitely use)
KC_CAPS, KC_CAPS_LOCK
this is just necessary sometimes

QK_GRAVE_ESCAPE	QK_GESC	Escape when pressed, ` when Shift or GUI are held
yep, this is pretty great, and right now my escape key is just too far away, ah let's just move it now

CAPS_WORD	CAPSWRD	Toggles Caps Word  toggles caps lock until end of word like space or period

KC_LOCK	Hold down the next key pressed, until the key is pressed again
not sure but i think it could be quite useful

KC_F13 - KC_F24
i'm thinking use these to launch custom shortcuts

leader key - input combined keys one at a time

combined modifiers  MT(MOD_RALT|MOD_LSFT,KC_SPC)
MT(MOD_LCTL | MOD_LSFT, KC_ESC)

// ----------------------------- medium interest (could maybe use)
KC_APPLICATION	KC_APP	Application (Windows Context Menu Key)
i don't really want this but it might be good to be able to open context menus?

KC_KB_POWER		System Power
could be fun to be able to powerdown, sleep, reset etc from here

KC_LANGUAGE_1	KC_LNG1	Language 1			✔
KC_LANGUAGE_2	KC_LNG2	Language 2			✔
could be fun to be able to switch languages


KC_MY_COMPUTER	KC_MYCM	Launch My Computer	✔		✔
might be nice to have a key that launches my home folder in a file explorer


UC(c)		Send Unicode code point c, up to 0x7FFF


// ------------------------------ low/no interest (probably won't use, but could under a blue moon)
KC_PRINT_SCREEN	KC_PSCR (F13?)
scroll lock (F14)





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
OS_ON	Turns One Shot keys on
OS_OFF	Turns One Shot keys off
OS_TOGG	Toggles One Shot keys status





reduce compile size
21718/28672      


add to rules.mk
LTO_ENABLE = yes

19092/28672 
okay so like 10% reduction





https://docs.qmk.fm/#/keycodes


*/