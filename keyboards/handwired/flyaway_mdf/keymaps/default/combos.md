
```
, CB_OneShotShift
, CB_Escape
, CB_Enter
, CB_Tab
// inner column
, CB_P
, CB_K
// greek
, CB_Omega
, CB_Micro
, CB_Degree


COMBO_2(Escape,    AT_S, NV2_T);
COMBO_2(Enter,     KC_E, AT_I);
COMBO_2(Tab,       KC_U, KC_Y);
COMBO_2(K_P,       KC_G, KC_F);
COMBO_2(K_K,       KC_M, MS_D);
COMBO_2(K_OMEGA,   ST_SPC, CT_O);
COMBO_2(K_MICRO,   ST_SPC, KC_M);
COMBO_2(K_Degree,  ST_SPC, MS_D);


[CB_Escape] =       COMBO(Escape, KC_ESC),
[CB_Enter] =        COMBO(Enter, KC_ENT),
[CB_Tab] =          COMBO(Tab, KC_TAB),
[CB_P] =            COMBO(K_P, KC_P),
[CB_K] =            COMBO(K_K, KC_K),
[CB_Omega] =        COMBO_ACTION(K_OMEGA),
[CB_Micro] =        COMBO_ACTION(K_MICRO),
[CB_Degree] =       COMBO_ACTION(K_Degree),



case CB_Omega:     if (pressed) { UNICODEZ("03a9"); } break;
case CB_Micro:     if (pressed) { UNICODEZ("03bc"); } break;
case CB_Degree:    if (pressed) { UNICODEZ("00b0"); } break;

```
