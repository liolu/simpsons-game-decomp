#include "engine.h"
#include "m2c.h"

void func_020c2d6c(M2C_UNK);

void func_020c59e0(s32 arg0) {
    func_020c2d6c(M2C_FIELD(arg0, s32 *, 0));
    M2C_FIELD(arg0, s8 *, 9) = 0;
}
