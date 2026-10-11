#include "m2c.h"
#include "engine.h"

void func_0204c37c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02050130(M2C_UNK);
void func_020501c8(M2C_UNK);

void func_02050078(s32 arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;

    if (M2C_FIELD(arg0, u8 *, 0x3E) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x38);
    if (temp_r0 != 0) {
        M2C_FIELD(arg0, u16 *, 0x38) = (u16) (temp_r0 - 1);
        if (M2C_FIELD(arg0, u16 *, 0x38) == 0) {
            M2C_FIELD(arg0, u16 *, 0x3A) = 0x3CU;
            func_0204c37c(arg0 + 0x18, 0, 0);
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x3A);
    if (temp_r0_2 != 0) {
        M2C_FIELD(arg0, u16 *, 0x3A) = (u16) (temp_r0_2 - 1);
        if (M2C_FIELD(arg0, u16 *, 0x3A) == 0) {
            func_02050130(arg0);
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, u16 *, 0x3C);
    if (temp_r0_3 == 0) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x3C) = (u16) (temp_r0_3 - 1);
    if (M2C_FIELD(arg0, u16 *, 0x3C) != 0) {
        return;
    }
    func_020501c8(arg0);
}
