#define U______ KC_NO

// control
#define CT_A    LCTL_T(KC_A)
#define CT_C    LCTL_T(KC_C)
#define CT_N    LCTL_T(KC_N)
#define CT_SCLN RCTL_T(KC_SCLN)
#define CT_1    LCTL_T(KC_1)
#define CT_F1   LCTL_T(KC_F1)
#define CT_0    RCTL_T(KC_0)
#define CT_F10  RCTL_T(KC_F10)


#define Ct_C    C(KC_C)
#define Ct_F    C(KC_F)
#define Ct_S    C(KC_S)
#define Ct_V    C(KC_V)
#define Ct_X    C(KC_X)
#define Ct_Y    C(KC_Y)
#define Ct_Z    C(KC_Z)


// alt
#define AT_I    ALT_T(KC_I)
#define AT_L    RALT_T(KC_L)
#define AT_S    LALT_T(KC_S)
#define AT_2    LALT_T(KC_2)
#define AT_F2   LALT_T(KC_F2)
#define AT_9    RALT_T(KC_9)
#define AT_F9   RALT_T(KC_F9)

// gui
#define GT_E    GUI_T(KC_E)
#define GT_D    GUI_T(KC_D)
#define GT_K    GUI_T(KC_K)
#define GT_T    GUI_T(KC_T)
#define GT_Z    LGUI_T(KC_Z)
#define GT_SLSH RGUI_T(KC_SLSH)
#define GT_3    LGUI_T(KC_3)
// #define GT_F3   GUI_T(KC_F3)
#define GT_8    GUI_T(KC_8)

// shift
#define ST_C    SFT_T(KC_C)
#define ST_COMM SFT_T(KC_COMM)
#define ST_ENT  SFT_T(KC_ENT)
#define ST_SPC  SFT_T(KC_SPC)
#define ST_UNDS SFT_T(KC_UNDS)
#define ST_5    LSFT_T(KC_5)
#define ST_F5   LSFT_T(KC_F5)

// one shot mod
#define OSM_LST OSM(MOD_LSFT)
#define OSM_RST OSM(MOD_RSFT)

// ctrl alt, trans
#define CTAT___ MT(MOD_LCTL|MOD_LALT, _______)
        