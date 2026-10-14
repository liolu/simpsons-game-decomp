#include "engine.h"
#include "m2c.h"

void func_020b7db4(M2C_UNK);

void func_020b9cbc(s32 arg0) {
    func_020b7db4(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s8 *, 1) = 0;
}
