#include "engine.h"
#include "m2c.h"

void func_0201e6b0(M2C_UNK, M2C_UNK);
void func_0201e6d4(M2C_UNK, M2C_UNK);
M2C_UNK func_0201f618(M2C_UNK);

void func_02020684(s32 arg0, s32 arg1) {
    func_0201e6d4(func_0201f618(arg0), arg1);
    func_0201e6b0(func_0201f618(arg0), 0);
    M2C_FIELD(arg0, s8 *, 0x46C) = (s8) arg1;
}
