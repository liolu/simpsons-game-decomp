#include "m2c.h"
#include "engine.h"

void func_020c2d6c(M2C_UNK);

void func_020c2e20(s32 arg0, s32 arg1) {
    func_020c2d6c(arg0);
    M2C_FIELD(arg0, s32 *, 0x1AC) = arg1;
}
