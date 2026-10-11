#include "m2c.h"
#include "engine.h"

void func_02010c70(M2C_UNK, M2C_UNK);
M2C_UNK func_020114d4(M2C_UNK);

void func_02010aec(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = (void *) func_020114d4(arg0 + 0x10);
    M2C_FIELD(temp_r0, s32 *, 4) = arg1;
    func_02010c70(arg0, (s32) temp_r0);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
}
