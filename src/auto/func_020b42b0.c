#include "engine.h"
#include "m2c.h"

void func_020b42a0(M2C_UNK);

void func_020b42b0(s32 arg0, s32 arg1, s32 arg2) {
    func_020b42a0(arg0);
    M2C_FIELD(arg0, s8 *, 0x17) = (s8) arg1;
    M2C_FIELD(arg0, s8 *, 0x18) = (s8) arg2;
}
