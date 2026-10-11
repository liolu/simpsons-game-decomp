#include "m2c.h"
#include "engine.h"

void func_0201e6dc(s32 arg0, s32 arg1) {
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 4);
}
