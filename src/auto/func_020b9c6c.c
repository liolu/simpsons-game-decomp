#include "engine.h"
#include "m2c.h"

void func_020b7318(M2C_UNK);

void func_020b9c6c(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    func_020b7318(M2C_FIELD(arg0, s32 *, 4));
}
