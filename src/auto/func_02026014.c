#include "m2c.h"
#include "engine.h"

M2C_UNK func_020483c4(void);
M2C_UNK func_0209a0cc(M2C_UNK);

void func_02026014(s32 arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(arg1, s32 *, 0x24);
    if (func_0209a0cc(func_020483c4()) == 1) {
        var_r0 = 8;
    } else {
        var_r0 = M2C_FIELD(M2C_FIELD(arg1, void **, 0x1C), s32 *, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x40) = var_r0;
}
