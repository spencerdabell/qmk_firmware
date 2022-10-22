#include QMK_KEYBOARD_H

enum {
    _BS = 0,
    _FN,
    _SY,
    _NV,
    _MS,
    _SD,
    _GM,
    _CLMK,
    _ISRT
};

#define CT CTL_T
#define GT GUI_T
#define AT ALT_T
#define ST SFT_T

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BS] = LAYOUT(
        _______, _______,  _______, _______,     _______,    _______, _______, _______, _______,        _______,    _______, _______,      _______, _______, _______, _______, _______, _______,
        _______, _______,  _______, _______,     _______,    _______, _______, _______, _______,        _______,    _______, _______,      _______, _______, _______, _______, _______, _______,
        _______, KC_ESC,   KC_Q,    KC_W,        KC_E,       KC_R,    KC_T,    _______, _______,        _______,    KC_Y,    KC_U,         KC_I,    KC_O,    KC_P,    KC_BSPC, _______, _______,
        _______, KC_DEL,CT(KC_A),AT(KC_S),    GT(KC_D),LT(_NV,KC_F),  KC_G,    _______, _______,        _______,    KC_H,    KC_J,      GT(KC_K),AT(KC_L),CT(KC_SCLN),KC_QUOT, _______, _______,
        _______, TO(_BS),  KC_Z,    KC_X,        KC_C, LT(_MS,KC_V),  KC_B,    _______, _______,        _______,    KC_N,    KC_M,         KC_COMM, KC_DOT,  KC_SLSH, _______, _______, _______,
_______,LT(_SD,KC_MPLY), KC_MPRV,KC_MNXT,_______,LT(_FN,KC_TAB),ST(KC_ENT),LT(_SY, KC_DEL),_______,     KC_BSPC, ST(KC_SPC),LT(_SY,KC_GRV),_______, TO(_NV), TO(_BS), TO(_GM), _______, _______
),
[_FN] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,                _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______,
        _______, _______, CT(KC_1),AT(KC_2),GT(KC_3),KC_4,    KC_5,    _______, _______,                _______, KC_6,    KC_7,    GT(KC_8),AT(KC_9),CT(KC_0),_______, _______, _______,
        _______, _______, KC_F11,  KC_F12,  KC_PSCR, _______, _______, _______, _______,                _______, KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_SY] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, KC_UNDS, KC_PPLS, KC_PIPE, KC_LCBR, KC_RCBR, _______, _______, _______,
        _______, _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______, _______,                _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_COLN, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_NV] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, _______, C(KC_PGUP), KC_PGDN, KC_PGUP, C(KC_PGDN), _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,             _______, KC_HOME,   KC_LEFT,  KC_DOWN, KC_UP,     KC_RGHT,  KC_END, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______,C(KC_HOME),C(KC_LEFT), KC_WH_D, KC_WH_U, C(KC_RGHT), C(KC_END), _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_MS] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, KC_BTN1, KC_BTN2, KC_BTN3, KC_ACL2, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_ACL1, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_ACL0, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_SD] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, KC_MSTP, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, KC_MRWD, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MFFD, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, KC_MUTE, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_GM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______,        _______, KC_Y,    KC_U,    KC_UP,   KC_O,    KC_P,    _______, _______, _______,
        _______, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______,        _______, KC_H,    KC_LEFT, KC_DOWN, KC_RIGHT,KC_SCLN, KC_ENT,  _______, _______,
        _______, KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______,        _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, _______, _______, _______,
        _______, _______, _______, _______, _______, KC_SPC,  KC_ENT,  KC_DEL,  _______,        _______, _______, _______, _______, _______, _______, TO(_CLMK), _______, _______
),
[_CLMK] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_Q,    KC_W,    KC_G,    KC_P,    KC_B,    _______, _______,        _______, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, _______, _______, _______,
        _______, _______, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,    _______, _______,        _______, KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_BSPC, _______, _______,
        _______, _______, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    _______, _______,        _______, KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______,TO(_ISRT),_______, _______
),
[_ISRT] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,    _______, _______,        _______, KC_Z,    KC_F,    KC_U,    KC_COMM, KC_QUOT, _______, _______, _______,
        _______, _______, KC_I,    KC_S,    KC_R,    KC_T,    KC_G,    _______, _______,        _______, KC_P,    KC_N,    KC_E,    KC_A,    KC_O,    _______, _______, _______,
        _______, _______, KC_Q,    KC_V,    KC_W,    KC_D,    KC_J,    _______, _______,        _______, KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X,    _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______
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