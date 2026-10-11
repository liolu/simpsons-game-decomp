#include "m2c.h"

s32 func_02017d84(s16, s16);                        /* extern */
M2C_UNK func_02047e3c(s32, u8, s32);                /* extern */
s32 func_02048470();                                /* extern */
extern s32 data_02146050;

s32 func_0204986c(s32 arg0, void *arg1) {
    s32 temp_r4;

    data_02146050 += 1;
    temp_r4 = func_02017d84(M2C_FIELD(arg1, s16 *, 0), M2C_FIELD(arg1, s16 *, 2));
    func_02047e3c(func_02048470(), M2C_FIELD(arg1, u8 *, 4), temp_r4);
    return 1;
}
