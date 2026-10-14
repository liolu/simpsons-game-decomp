#include "engine.h"
#include "m2c.h"

void func_0201d6b0(M2C_UNK);
void func_020ce8a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020ced64(void);
void func_020ceda4(M2C_UNK);
void func_020cee34(M2C_UNK);
void func_020d35b0(M2C_UNK);
void func_020d35c8(M2C_UNK);

void func_0201d63c(s32 arg0) {
    s32 temp_r5;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F) != 0) {
        func_020ce8a4(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
        func_020d35c8(arg0 + 8);
        func_020d35b0(arg0 + 0x14);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
        temp_r5                      = func_020ced64();
        func_020cee34(1);
        func_020ceda4(temp_r5);
    }
    func_0201d6b0(arg0);
}
