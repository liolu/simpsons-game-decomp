#include "m2c.h"

M2C_UNK func_020bee20();                            /* extern */
M2C_UNK func_020bee30();                            /* extern */
M2C_UNK func_020bee40();                            /* extern */
M2C_UNK func_020bee50();                            /* extern */
M2C_UNK func_020bee70();                            /* extern */
s32 func_020c65a4(s32);                             /* extern */
extern s32 data_02136b60;

s32 func_020c6548(void) {
    u32 temp_r0;

    temp_r0 = func_020c65a4(data_02136b60) + 1;
    switch (temp_r0) {
        case 0:
        case 1:
        case 2:
            break;
        default:
            break;
        case 3:
            func_020bee20();
            break;
        case 4:
            func_020bee20();
            func_020bee30();
            func_020bee40();
            func_020bee50();
            func_020bee70();
            break;
    }
    return 0;
}
