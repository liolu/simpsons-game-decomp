#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b7d2c(M2C_UNK);
void func_020b8184(M2C_UNK);
void func_020ba088(M2C_UNK);
void func_020ba478(M2C_UNK);
void func_020ba624(M2C_UNK);

void func_020ba688(s32 arg0) {
    s16 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (func_020b7d2c(temp_r4) == 0) {
        func_020ba088(arg0);
    }
    func_020b8184(temp_r4);
    if (func_020b7d2c(temp_r4) == 3) {
        func_020ba478(arg0);
    }
    temp_r0 = M2C_FIELD(temp_r4, s16 *, 0x98);
    if ((temp_r0 != 0xA) && (temp_r0 != 0x14) && (temp_r0 != 0xB) && (temp_r0 != 0xC) && (temp_r0 != 0xF)) {
        return;
    }
    func_020ba624(arg0);
}
