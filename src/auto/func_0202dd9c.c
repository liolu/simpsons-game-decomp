#include "engine.h"
#include "m2c.h"

void func_0202ddd4(M2C_UNK);
void func_0202e9a0(M2C_UNK);

void func_0202dd9c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 8)    = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    func_0202e9a0(arg0 + 0xC);
    func_0202ddd4(arg0);
}
