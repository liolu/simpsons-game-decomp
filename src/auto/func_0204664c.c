#include "engine.h"
#include "m2c.h"

void func_0204664c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0)   = (s32) M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8)   = (s32) (M2C_FIELD(arg0, s32 *, 0) + 0x100000);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 0xC0000);
}
