#include "m2c.h"

M2C_UNK func_02020a8c();                            /* extern */
M2C_UNK func_02020aa8(M2C_UNK);                     /* extern */
s32 func_020da8bc(M2C_UNK *);                       /* extern */
extern M2C_UNK data_0214a1c0;
extern M2C_UNK func_02021624;

s32 func_020215b4(void) {
    s32 temp_r0;
    s32 var_r0;

    M2C_FIELD(&data_0214a1c0, s32 *, 0x34) = 0;
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0xB;
    temp_r0 = func_020da8bc(&func_02021624);
    switch (temp_r0) {                              /* irregular */
    case 0:
        return 1;
    case 2:
        func_02020aa8(0xC);
        if (M2C_FIELD(&data_0214a1c0, s32 *, 0x34) == 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    default:
        func_02020a8c();
        return 0;
    }
}
