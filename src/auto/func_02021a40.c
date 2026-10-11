#include "m2c.h"

M2C_UNK func_02020a28(M2C_UNK);                     /* extern */
M2C_UNK func_02020a8c();                            /* extern */
s32 func_020218ac();                                /* extern */
s32 func_020dadb4(M2C_UNK *, s32, u16, s32, s32, s32); /* extern */
extern M2C_UNK data_0214a1c0;
extern M2C_UNK func_02021658;

s32 func_02021a40(void) {
    M2C_FIELD(&data_0214a1c0, s32 *, 0x3C) = 0x20;
    if (func_020218ac() != 0) {
        return 1;
    }
    func_02020a28(4);
    if (func_020dadb4(&func_02021658, M2C_FIELD(&data_0214a1c0, s32 *, 0x18), (u16) M2C_FIELD(&data_0214a1c0, s32 *, 0x30), M2C_FIELD(&data_0214a1c0, s32 *, 0x38), (s32) (u16) M2C_FIELD(&data_0214a1c0, s32 *, 0x20), 1) == 2) {
        return 1;
    }
    func_02020a8c();
    return 0;
}
