#include "m2c.h"
#include "engine.h"

void func_020bdb44(M2C_UNK);

void func_020b7db4(s32 arg0) {
    func_020bdb44(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
