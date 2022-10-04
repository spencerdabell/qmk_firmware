#include QMK_KEYBOARD_H

#define _BL 0
#define _FN  1
#define _L2  2

#define CT CTL_T
#define GT GUI_T
#define AT ALT_T
#define ST SFT_T

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BL] = LAYOUT(
KC_ESC , _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,       KC_F5  , KC_F6,   KC_F7,   KC_F8,   _______, KC_F9,   KC_F10,  KC_F11,  KC_F12 ,
_______, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______,       _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL , KC_BSPC,
_______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______,       _______, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
_______, KC_ESC,  CT(KC_A),GT(KC_S),AT(KC_D),ST(KC_F),KC_G,    _______, _______,       _______, KC_H, ST(KC_J),AT(KC_K),GT(KC_L),CT(KC_SCLN),KC_QUOT, KC_ENT , KC_PGUP,
_______, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______,       _______, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP  , KC_PGDN,
_______, LT(_FN,KC_MPLY),KC_MPRV,KC_MNXT,_______,KC_TAB,LT(_FN,KC_ENT),KC_DEL,_______,       KC_BSPC, LT(_FN,KC_SPC),  KC_TAB,  _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT
),
[_FN] = LAYOUT(
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______,       _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, _______,
_______, _______, KC_F11,  KC_F12,  _______, _______, _______, _______, _______,       _______, _______, KC_PGUP, KC_UP,   KC_PGDN, _______, _______, _______, _______,
_______, _______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, _______, _______, _______,       _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, KC_MUTE, KC_VOLU, KC_VOLD, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______
), 
[_L2] = LAYOUT(
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______,
_______, _______, _______, _______, _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______, _______, _______, _______, _______
)
};




// [_BASE] = LAYOUT(
//     KC_ESC,  KC_VOLU, KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,         KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
//     KC_HOME, KC_VOLD, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,          KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
//     KC_END,  KC_TAB,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,          KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
//     KC_PGUP, KC_CAPS, KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,          KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_ENT,
//     KC_PGDN, KC_UP,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,          KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   XXXXXXX,
//     KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC,  KC_ENT,        KC_BSPC, KC_SPC,  KC_SPC,  KC_RGUI, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
// )
// };


/*


list keys of interest
// keys - https://docs.qmk.fm/#/keycodes?id=basic-keycodes
XXXXXXX no op
_______, KC_TRNS transparent to layer below
KC_CAPS, KC_CAPS_LOCK


KC_PRINT_SCREEN	KC_PSCR (F13?)
scroll lock (F14)
KC_PAUSE	KC_PAUS, KC_BRK, KC_BRMU (F15)
KC_INSERT	KC_INS
KC_NUM_LOCK	KC_NUM
maybe numpad stuff
KC_APPLICATION	KC_APP	Application (Windows Context Menu Key)
KC_KB_POWER		System Power
KC_F13 - KC_F24


KC_LANGUAGE_1	KC_LNG1	Language 1			✔
KC_LANGUAGE_2	KC_LNG2	Language 2			✔
KC_LANGUAGE_3	KC_LNG3	Language 3			✔
KC_LANGUAGE_4	KC_LNG4	Language 4			✔

KC_LEFT_GUI	KC_LGUI, KC_LCMD, KC_LWIN	Left GUI (Windows/Command/Meta key)

KC_SYSTEM_POWER	KC_PWR	System Power Down
KC_SYSTEM_SLEEP	KC_SLEP	System Sleep
KC_SYSTEM_WAKE	KC_WAKE	System Wake


KC_MAIL		Launch Mail	✔		✔
KC_CALCULATOR	KC_CALC	Launch Calculator	✔		✔
KC_MY_COMPUTER	KC_MYCM	Launch My Computer	✔		✔
KC_WWW_SEARCH	KC_WSCH	Browser Search	✔		✔
KC_WWW_HOME	KC_WHOM	Browser Home	✔		✔
KC_WWW_BACK	KC_WBAK	Browser Back	✔		✔
KC_WWW_FORWARD	KC_WFWD	Browser Forward	✔		✔
KC_WWW_STOP	KC_WSTP	Browser Stop	✔		✔
KC_WWW_REFRESH	KC_WREF	Browser Refresh	✔		✔
KC_WWW_FAVORITES	KC_WFAV	Browser Favorites	✔		✔

KC_MEDIA_FAST_FORWARD	KC_MFFD	Next Track	✔	✔5	✔
KC_MEDIA_REWIND	KC_MRWD	Previous Track


QK_GRAVE_ESCAPE	QK_GESC	Escape when pressed, ` when Shift or GUI are held


CAPS_WORD	CAPSWRD	Toggles Caps Word  toggles caps lock until end of word like space or period
KC_LOCK	Hold down the next key pressed, until the key is pressed again -- very powerful and awesome (hold forward till unpressed)

DF(layer)	Set the base (default) layer
MO(layer)	Momentarily turn on layer when pressed (requires KC_TRNS on destination layer)
OSL(layer)	Momentarily activates layer until a key is pressed. See One Shot Keys for details.
LT(layer, kc)	Turn on layer when held, kc when tapped
TG(layer)	Toggle layer on or off
TO(layer)	Turns on layer and turns off all other layers, except the default layer
TT(layer)	Normally acts like MO unless it’s tapped multiple times, which toggles layer on

leader key - input combined keys one at a time

MAGIC_HOST_NKRO	NK_ON	Enable N-key rollover
MAGIC_UNHOST_NKRO	NK_OFF	Disable N-key rollover
MAGIC_TOGGLE_NKRO	NK_TOGG	Toggle N-key rollover



mouse keys  - https://docs.qmk.fm/#/feature_mouse_keys
KC_MS_UP	KC_MS_U	Move cursor up
etc

modifier keys - https://docs.qmk.fm/#/feature_advanced_keycodes?id=modifier-keys
LCTL(kc)	C(kc)	Hold Left Control and press kc
LSG(kc)	SGUI(kc), SCMD(kc), SWIN(kc)	Hold Left Shift and Left GUI and press kc
LCAG(kc)		Hold Left Control, Alt and GUI and press kc
MEH(kc)		Hold Left Control, Shift and Alt and press kc
HYPR(kc)		Hold Left Control, Shift, Alt and GUI and press kc
KC_MEH		Left Control, Shift and Alt
KC_HYPR		Left Control, Shift, Alt and GUI

etc


mod tap

OSM(mod)	Hold mod for one keypress
OSL(layer)	Switch to layer for one keypress
OS_ON	Turns One Shot keys on
OS_OFF	Turns One Shot keys off
OS_TOGG	Toggles One Shot keys status
MT(mod, kc)		mod when held, kc when tapped

find out how to use homerow mods or just modifiers in general


UC(c)		Send Unicode code point c, up to 0x7FFF



*/