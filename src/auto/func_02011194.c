#include "m2c.h"
#include "engine.h"

void func_020112d8(M2C_UNK, M2C_UNK);
M2C_UNK func_020119bc(M2C_UNK);

void func_02011194(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = (void *) func_020119bc(arg0 + 0x10);
    M2C_FIELD(temp_r0, s32 *, 4) = arg1;
    func_020112d8(arg0, (s32) temp_r0);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
}
