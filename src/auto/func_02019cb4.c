#include "m2c.h"
#include "engine.h"

void func_02019a9c(M2C_UNK, M2C_UNK);
void func_02019aec(M2C_UNK);
void func_020c80e0(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021484a0;

void func_02019cb4(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 != 0) {
        func_020c80e0(temp_r4, arg0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_020c80e0((s32) &data_021484a0, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = (s8) arg1;
    if (temp_r4 != 0) {
        func_02019a9c(temp_r4, arg0);
    }
    func_02019aec(arg0);
}
