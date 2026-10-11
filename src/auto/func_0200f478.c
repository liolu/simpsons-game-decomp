#include "m2c.h"
#include "engine.h"

M2C_UNK func_020c83f0(M2C_UNK);
void func_020c8444(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02144de8;

void func_0200f478(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020c8444(*((M2C_UNK *)((s8 *)&data_02144de8 + (func_020c83f0(arg0) * 0x14))), arg0);
}
