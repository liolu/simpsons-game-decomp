#include "engine.h"
#include "m2c.h"

void func_020ce090(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_02157184;

void func_020e13d8(s32 arg0) {
    data_02157184 = arg0;
    func_020ce090(arg0, 0, 0x21C);
}
