#include "m2c.h"
#include "engine.h"

M2C_UNK func_020baa18(M2C_UNK);
void func_020baa44(M2C_UNK, M2C_UNK);
M2C_UNK func_020baadc(M2C_UNK);
void func_020bb06c(M2C_UNK, M2C_UNK);
void func_020bb220(M2C_UNK, M2C_UNK);

void func_020bcdb0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    if ((temp_r4 != 0) && (temp_r0 != 0)) {
        temp_r0_2 = func_020baadc(temp_r0);
        if (M2C_FIELD(arg0, s8 *, 2) == 4) {
            func_020bb220(M2C_FIELD(arg0, s32 *, 8), 0x7FFFFFFF);
            return;
        }
        if (M2C_FIELD(arg0, s8 *, 0x6C) == 0) {
            if (func_020baa18(M2C_FIELD(arg0, s32 *, 4)) >= (s32) M2C_FIELD(arg0, s32 *, 0xC0)) {
                func_020baa44(M2C_FIELD(arg0, s32 *, 4), -1);
            }
            func_020bb220(M2C_FIELD(arg0, s32 *, 8), 0x7FFFFFFF);
            return;
        }
        func_020bb06c(temp_r4, (s32) (temp_r0_2 + ((u32) (temp_r0_2 >> 0xA) >> 0x15)) >> 0xB);
    }
}
