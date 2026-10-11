#include "m2c.h"
#include "engine.h"

void func_020c80e0(M2C_UNK, M2C_UNK);
void func_020c97e4(M2C_UNK);

extern M2C_UNK data_021488f8;

void func_02019c64(s32 arg0) {
    s32 temp_r0;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        return;
    }
    func_020c97e4(temp_r0);
    temp_r1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 8) = 0;
        return;
    }
    func_020c80e0((M2C_FIELD(arg0, s32 *, 0x10) * 0x24) + (s32) &data_021488f8 + 0xC, arg0);
}
