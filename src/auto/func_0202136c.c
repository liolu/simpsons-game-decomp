#include "engine.h"
#include "m2c.h"

void func_02020a8c(M2C_UNK);
M2C_UNK func_02020aa8(M2C_UNK);
void func_020213d4(M2C_UNK);
M2C_UNK func_020daadc(M2C_UNK);

extern M2C_UNK data_0214a1c0;

s32 func_0202136c(void) {
    s32 temp_r0;
    s32 var_r0;

    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 5;
    temp_r0                                = func_020daadc((s32) func_020213d4);
    switch (temp_r0) {                              /* irregular */
        case 0:
            return 1;
        case 2:
            func_02020aa8(6);
            if (M2C_FIELD(&data_0214a1c0, s32 *, 0x34) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        default:
            func_02020a8c(temp_r0);
            return 0;
    }
}
