#include "engine.h"
#include "m2c.h"

void func_02011520(s32 arg0, s32 arg1) {
    M2C_FIELD(arg1, s32 *, 8)    = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) + 1);
}
