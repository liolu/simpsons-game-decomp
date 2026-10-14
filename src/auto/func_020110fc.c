#include "engine.h"
#include "m2c.h"

void func_02011274(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020119bc(M2C_UNK);

void func_020110fc(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                      = (void *) func_020119bc(arg0 + 0x10);
    M2C_FIELD(temp_r0, s32 *, 4) = arg1;
    func_02011274(arg0, (s32) temp_r0, 0);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
}
