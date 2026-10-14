#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012c84(M2C_UNK, M2C_UNK);
void func_02012ec8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02012f08(s32 arg0, s32 arg1) {
    s32 sp0;

    sp0 = func_02012c84(*(M2C_UNK *) arg1, 0);
    func_02012ec8(arg0, (s32) &sp0, 0, arg1);
}
