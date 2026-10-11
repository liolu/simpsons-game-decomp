#include "m2c.h"

M2C_UNK func_02020a8c();                            /* extern */
s32 func_02020aa8(M2C_UNK);                         /* extern */
s32 func_020218ac();                                /* extern */
M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
s32 func_020da698(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_0210d110;
extern M2C_UNK data_0210d13c;
extern M2C_UNK data_0210d154;
extern M2C_UNK data_0214a1c0;
extern M2C_UNK data_0214a280;
extern M2C_UNK func_02020ee8;

s32 func_02020df0(void) {
    s32 temp_r0;
    s32 temp_r4;

    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0x19;
    M2C_FIELD(&data_0214a1c0, s32 *, 0x34) = 0;
    if (func_020218ac() != 0) {
        func_02021cc8(&data_0210d110);
        return 1;
    }
    temp_r0 = func_020da698(&func_02020ee8, &data_0214a280, 0, 1, 0);
    switch (temp_r0) {                              /* irregular */
    case 0:
        return 1;
    case 2:
        temp_r4 = M2C_FIELD(&data_0214a1c0, s32 *, 0x10);
        M2C_FIELD(&data_0214a1c0, s32 *, 0x10) = 0xBB8;
        if (func_02020aa8(0x1A) != 0) {
            func_02021cc8(&data_0210d13c);
            M2C_FIELD(&data_0214a1c0, s32 *, 0x10) = temp_r4;
            return 1;
        }
        func_02021cc8(&data_0210d154);
        M2C_FIELD(&data_0214a1c0, s32 *, 0x10) = temp_r4;
        return 0;
    default:
        func_02020a8c();
        return 0;
    }
}
