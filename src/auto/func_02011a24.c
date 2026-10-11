#include "m2c.h"
#include "engine.h"

void func_02011a24(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg2, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) + arg3);
}
