#include "m2c.h"
#include "engine.h"

void func_020b733c(M2C_UNK, M2C_UNK);

void func_020b9c80(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x38) = arg1;
    func_020b733c(M2C_FIELD(arg0, s32 *, 4), arg1);
}
