// control
#define CT_A    CTL_T(KC_A)
#define CT_C    CTL_T(KC_C)
#define CT_N    CTL_T(KC_N)
#define CT_SCLN CTL_T(KC_SCLN)
#define CT_1    CTL_T(KC_1)
#define CT_0    CTL_T(KC_0)

// alt
#define AT_I    ALT_T(KC_I)
#define AT_L    ALT_T(KC_L)
#define AT_S    ALT_T(KC_S)
#define AT_2    ALT_T(KC_2)
#define AT_9    ALT_T(KC_9)

// gui
#define GT_E    GUI_T(KC_E)
#define GT_D    GUI_T(KC_D)
#define GT_K    GUI_T(KC_K)
#define GT_T    GUI_T(KC_T)
#define GT_Z    GUI_T(KC_Z)
#define GT_SLSH GUI_T(KC_SLSH)
#define GT_3    GUI_T(KC_3)
#define GT_8    GUI_T(KC_8)

// shift
#define ST_C    SFT_T(KC_C)
#define ST_COMM SFT_T(KC_COMM)
#define ST_ENT  SFT_T(KC_ENT)
#define ST_SPC  SFT_T(KC_SPC)
#define ST_UNDS SFT_T(KC_UNDS)



// converts 6x3_3 layout to 6x9 for bfo
#define LAYOUT_6x3_3( \
    L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, \
    L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, \
    L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, \
                   L33, L34, L35, R30, R31, R32   \
    ) \
LAYOUT( \
        U_,  L00, L01, L02, L03, L04, L05, U_,  B_,        U_,  R00, R01, R02, R03, R04, R05, U_,  B_, \
        U_,  L10, L11, L12, L13, L14, L15, U_,  B_,        U_,  R10, R11, R12, R13, R14, R15, U_,  B_, \
        U_,  L20, L21, L22, L23, L24, L25, U_,  B_,        U_,  R20, R21, R22, R23, R24, R25, U_,  B_, \
        U_,  U_,  U_,  U_,  U_,  L33, L34, L35, B_,        R30, R31, R32, U_,  U_,  U_,  U_,  U_,  B_, \
        U_,  U_,  U_,  U_,  U_,  U_,  U_,  U_,  B_,        U_,  U_,  U_,  U_,  U_,  U_,  U_,  U_,  B_, \
        B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_,        B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_,  B_ \
)
