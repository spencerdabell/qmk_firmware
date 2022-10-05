#include QMK_KEYBOARD_H


enum {
    _BASE = 0,
    _NAVI,
    _MOUS,
    _MUSE,
    _FUNC,
//     _NUMZ,
//     _SYMB,
};

#define CT CTL_T
#define GT GUI_T
#define AT ALT_T
#define ST SFT_T

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
        KC_ESC , _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,                KC_F5  , KC_F6,   KC_F7,   KC_F8,   _______, KC_F9,   KC_F10,  KC_F11,  KC_F12 ,
        _______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______,                _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL , KC_BSPC,
        _______, _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______,                _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
_______, TG(_NAVI), CT(KC_A), AT(KC_S), GT(KC_D), LT(_NAVI, KC_F), LT(_MOUS,KC_G),_______,_______,      _______, KC_H,    KC_J,    KC_K, AT(KC_L), CT(KC_SCLN), KC_QUOT, KC_ENT , _______,
        _______, TO(_BASE), KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  _______, _______,                _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP  , _______,
        _______, LT(_MUSE,KC_MPLY),KC_MUTE,KC_MPRV,KC_MNXT,KC_TAB,ST(KC_ENT),KC_DEL,_______,            KC_BSPC, ST(KC_SPC),KC_TAB,_______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT
),
[_NAVI] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_PGDN, KC_UP,   KC_PGUP, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, CT(KC_END), _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_WH_D, _______, KC_WH_U, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_MOUS] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, KC_MS_U, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN2, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_WH_D, KC_BTN3, KC_WH_U, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_MUSE] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_MPRV, KC_VOLU, KC_MNXT, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, KC_MRWD, KC_VOLD, KC_MFFD, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, KC_MUTE, KC_MSTP, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______
),
[_FUNC] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,        _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______,
        _______, _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______,
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

*/

/*
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