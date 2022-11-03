#include QMK_KEYBOARD_H

// broken off
#define B______ KC_NO
// unused areas of keyboard
#define U______ KC_NO
// purposely left empty, and don't do anything otherwise
#define E______ KC_NO

#define T______ KC_TRNS


enum {
    L_BS = 0
    , L_NGRM
    , L_MRGN
    , L_CLMK
    , L_ISRT
    , L_PT
    , L_NV
    , L_LY
    , L_NU
    , L_SY
    , L_MS
    , L_SD
    , L_GAME
};

// LAYER SWITCHING
#define TO_BS   TO(L_BS)
#define TO_PT   TO(L_PT)
#define TO_NV   TO(L_NV)
#define TO_LY   TO(L_LY)
#define TO_NU   TO(L_NU)
#define TO_SY   TO(L_SY)
#define TO_GAME TO(L_GAME)
#define TO_NGRM TO(L_NGRM)
#define TO_MRGN TO(L_MRGN)
#define TO_CLMK TO(L_CLMK)
#define TO_ISRT TO(L_ISRT)



// QWERTY
#define CT_A    CTL_T(KC_A)
#define AT_S    ALT_T(KC_S)
#define GT_D    GUI_T(KC_D)

#define GT_K    GUI_T(KC_K)
#define AT_L    ALT_T(KC_L)
#define CT_SCLN CTL_T(KC_SCLN)

#define NV_F    LT(L_NV, KC_F)
#define MS_V    LT(L_MS, KC_V)
#define NV_J    LT(L_NV, KC_J)
#define SD_MPLY LT(L_SD, KC_MPLY)
#define NU_TAB  LT(L_NU, KC_TAB)

// shift hold, enter tap
#define ST_ENT  SFT_T(KC_ENT)
// shift hold, space tap
#define ST_SPC  SFT_T(KC_SPC)

// shift hold, osm tap
#define ST_PT   SFT_T(OSL(L_PT))
#define SY_DEL  LT(L_SY, KC_DEL)
#define SY_GRV  LT(L_SY, KC_GRV)

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

#define DESK_LT LCTL(LGUI(KC_LEFT))
#define DESK_RT LCTL(LGUI(KC_RGHT))

/*
windows
ctrl+gui+left or right

linux
ctrl+alt+left or right

#define C(kc) LCTL(kc)
#define S(kc) LSFT(kc)
#define A(kc) LALT(kc)
#define G(kc) LGUI(kc)

*/



// CAPS_WORD	CAPSWRD	Toggles Caps Word



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[L_BS] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, B______,        _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    TO_BS,   _______, B______,
        U______, KC_QUOT, CT_A,    AT_S,    GT_D,    NV_F,    KC_G,    _______, B______,        _______, KC_H,    NV_J,    GT_K,    AT_L,    CT_SCLN, KC_ENT,  _______, B______,
        U______, TO_LY,   KC_Z,    KC_X,    KC_C,    MS_V,    KC_B,    _______, B______,        _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT, _______, B______,
        U______, SD_MPLY, KC_MPRV, KC_MNXT, TO_BS,   NU_TAB,  ST_PT,   SY_DEL,  B______,        KC_BSPC, ST_SPC,  SY_GRV,  TO_NV,   _______, _______, _______, _______, B______
),

//       B   Y   O   U           L   D   W   V    Z
//       C   I   E   A           H   T   S   N    Q
//       G   X   J   K           R   M   F   P
[L_NGRM] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, KC_B,    KC_Y,    KC_O,    KC_U,    _______, _______, B______,        _______, _______, KC_L,    KC_D,    KC_W,    KC_V,    KC_Z,    _______, B______,
        U______, _______, CT_C,    AT_I,    GT_E,    NV_A,    _______, _______, B______,        _______, _______, KC_H,    GT_T,    AT_S,    CT_N,    KC_ENT,  _______, B______,
        U______, _______, KC_G,    KC_X,    KC_J,    MS_K,    _______, _______, B______,        _______, _______, KC_R,    KC_M,    KC_F,    KC_P,    KC_Q,    _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_MRGN] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, KC_Z,    KC_V,    KC_W,    KC_D,    KC_L,    _______, _______, B______,        _______, _______, KC_U,    KC_O,    KC_Y,    KC_B,    _______, _______, B______,
        U______, KC_Q,    CT_N,    AT_S,    GT_T,    NV_H,    _______, _______, B______,        _______, _______, KC_A,    GT_E,    AT_I,    CT_C,    KC_ENT,  _______, B______,
        U______, _______, KC_P,    KC_F,    KC_M,    MS_R,    _______, _______, B______,        _______, _______, KC_K,    KC_J,    KC_X,    KC_G,    _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_CLMK] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    _______, B______,        _______, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______, _______, B______,
        U______, _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    _______, B______,        _______, KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    _______, _______, B______,
        U______, _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______, B______,        _______, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_ISRT] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,    _______, B______,        _______, KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, _______, B______,
        U______, _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,    _______, B______,        _______, KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    _______, _______, B______,
        U______, _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, B______,        _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),

// consider adding ly shortcuts here
[L_PT] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, KC_COLN, KC_SCLN, KC_DQUO, KC_EXLM, _______, _______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, KC_DOT,  KC_COMM, KC_QUOT, KC_QUES, _______, _______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, KC_MINS, KC_PLUS, TO_PT,   KC_EQL,  _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, KC_UNDS, T______, _______, _______, _______, _______, _______, B______
),

// switch back to last application
// ctrl+tab
// switch ctrl+shift+tab

[L_NV] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, _______, Ct_PGUP, Ct_PGDN, _______, _______, _______, B______,        _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______, _______, B______,
U______, _______, KC_LCTL, ALT_T(C(S(KC_TAB))), GUI_T(C(KC_TAB)), _______, _______, _______, B______,        _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, B______,
        U______, _______, _______, DESK_LT, DESK_RT, _______, _______, _______, B______,        _______, _______, Ct_LEFT, KC_WH_D, KC_WH_U, Ct_RGHT, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_LY] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, TO_GAME, _______, _______, _______, _______, _______, B______,        _______, _______, _______, _______, _______, _______, _______, _______, B______,
        U______, _______, TO_CLMK, TO_ISRT, TO_NGRM, TO_MRGN, _______, _______, B______,        _______, _______, _______, _______, _______, _______, _______, _______, B______,
        U______, TO_LY,   TO_BS,   TO_NV,   TO_NU,   TO_SY,   _______, _______, B______,        _______, _______, _______, _______, _______, _______, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_NU] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, B______,        _______, _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, B______,
        U______, _______, CT_1,    AT_2,    GT_3,    KC_4,    _______, _______, B______,        _______, _______, KC_7,    GT_8,    AT_9,    CT_0,    _______, _______, B______,
        U______, _______, KC_F11,  KC_F12,  KC_F5,   KC_5,    _______, _______, B______,        _______, _______, KC_6,    KC_F6,   KC_CAPS, KC_PSCR, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_SY] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, KC_LT,   KC_GT,   KC_LBRC, KC_RBRC, _______, _______, B______,
        U______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  _______, _______, B______,        _______, _______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______, _______, B______,
        U______, _______, _______, _______, _______, KC_PERC, _______, _______, B______,        _______, _______, KC_SLSH, KC_BSLS, E______, KC_PIPE, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, KC_UNDS, T______, _______, _______, _______, _______, _______, B______
),
// ;: '"
[L_MS] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, _______, _______, B______,
        U______, _______, KC_ACL2, KC_ACL1, KC_ACL0, _______, _______, _______, B______,        _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, B______,
        U______, _______, KC_ACL2, KC_ACL1, KC_ACL0, _______, _______, _______, B______,        _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_SD] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, _______, KC_MSTP, _______, _______, _______, _______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, KC_MRWD, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MFFD, _______, B______,
        U______, _______, _______, _______, _______, _______, _______, _______, B______,        _______, _______, _______, KC_MUTE, _______, _______, _______, _______, B______,
        U______, _______, _______, _______, _______, T______, T______, T______, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
),
[L_GAME] = LAYOUT(
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, U______, U______, U______, U______, U______, U______, U______, B______,        U______, U______, U______, U______, U______, U______, U______, U______, B______,
        U______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, B______,        _______, KC_Y,    KC_U,    KC_UP,   KC_O,    KC_P,    _______, _______, B______,
        U______, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, B______,        _______, KC_H,    KC_LEFT, KC_DOWN, KC_RIGHT,KC_SCLN, _______, _______, B______,
        U______, KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, B______,        _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______, _______, B______,
        U______, _______, _______, _______, _______, KC_SPC,  KC_ENT,  KC_LALT, B______,        T______, T______, T______, _______, _______, _______, _______, _______, B______
)
};




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

*/