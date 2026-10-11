#include "m2c.h"
#include "engine.h"

void func_020c2e20(M2C_UNK, M2C_UNK);
void func_020c5804(M2C_UNK);
M2C_UNK func_020c6124(M2C_UNK, M2C_UNK);

void func_020c59b4(s32 arg0) {
    func_020c5804(arg0);
    func_020c6124(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0x10));
    func_020c2e20(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, s8 *, 9) = 1;
}
