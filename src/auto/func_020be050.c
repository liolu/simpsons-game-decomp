#include "m2c.h"

M2C_UNK func_020bdca8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021306c0;
extern M2C_UNK data_021306cc;
extern M2C_UNK data_021306e8;
extern M2C_UNK data_021306f4;

s32 func_020be050(void *arg0, s32 arg1) {
    M2C_UNK (*temp_r2)(s32, M2C_UNK);

    if (arg0 == NULL) {
        func_020bdca8(&data_021306c0, &data_021306cc);
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        func_020bdca8(&data_021306e8, &data_021306f4);
        return 0;
    }
    if (arg1 == 1) {
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    if (arg1 == 0) {
        return M2C_FIELD(arg0, s32 *, 0x10);
    }
    temp_r2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x38);
    if (temp_r2 != NULL) {
        temp_r2(M2C_FIELD(arg0, s32 *, 0x3C), -3);
    }
    return 0;
}
