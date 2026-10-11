#include "m2c.h"
#include "engine.h"

void func_020c9954(s32 arg0) {
    M2C_FIELD(arg0, volatile s32 *, 4) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0) = (s32) M2C_FIELD(arg0, volatile s32 *, 4);
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 0;
    M2C_FIELD(arg0, volatile s32 *, 8) = (s32) M2C_FIELD(arg0, volatile s32 *, 0xC);
}
