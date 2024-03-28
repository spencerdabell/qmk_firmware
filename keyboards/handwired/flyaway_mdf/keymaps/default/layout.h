// clang-format off

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
    )
