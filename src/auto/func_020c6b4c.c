#include "m2c.h"

s32 func_020bc170(s32);                             /* extern */
s32 *func_020c6f14();                               /* extern */
M2C_UNK func_020c6f84(s32, s32);                    /* extern */
extern M2C_UNK data_02136b84;
extern u8 data_02153908;

s32 func_020c6b4c(s32 arg0) {
    s32 temp_r0;

    if (data_02153908 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0x10), M2C_FIELD(&data_02136b84, s32 *, 0x18));
        return 0;
    }
    if (arg0 == 0) {
        func_020c6f84(M2C_FIELD(&data_02136b84, s32 *, 0x10), M2C_FIELD(&data_02136b84, s32 *, 0x14));
        return 0;
    }
    temp_r0 = func_020bc170(*func_020c6f14());
    if (temp_r0 == 0) {
        return 0;
    }
    if ((u32) (temp_r0 - 1) <= 1U) {
        return 1;
    }
    if ((u32) (temp_r0 - 3) <= 1U) {
        return 2;
    }
    if (temp_r0 == 5) {
        return 3;
    }
    return 0;
}
