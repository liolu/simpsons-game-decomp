#include "m2c.h"
#include "engine.h"

void func_020ce8a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020ced64(void);
void func_020ceda4(M2C_UNK);
void func_020cee34(M2C_UNK);

void func_020c8de8(s32 arg0) {
    s32 temp_r4;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    func_020ce8a4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
    temp_r4 = func_020ced64();
    func_020cee34(1);
    func_020ceda4(temp_r4);
}
