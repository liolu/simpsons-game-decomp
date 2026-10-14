#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202ad60(M2C_UNK);

void func_02054990(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0                   = (void *) func_0202ad60(arg1 + 0x14);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
}
