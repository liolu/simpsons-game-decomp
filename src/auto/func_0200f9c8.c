#include "engine.h"
#include "m2c.h"

void func_0200fb0c(M2C_UNK, M2C_UNK);
M2C_UNK func_0200fd08(M2C_UNK);

void func_0200f9c8(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                      = (void *) func_0200fd08(arg0 + 0x10);
    M2C_FIELD(temp_r0, s32 *, 4) = arg1;
    func_0200fb0c(arg0, (s32) temp_r0);
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
}
