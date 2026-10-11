#include "m2c.h"
#include "engine.h"

void func_020e1d90(M2C_UNK);
void func_020e5d14(M2C_UNK);

extern M2C_UNK data_02157790;

void func_020e1d6c(void) {
    func_020e5d14(1);
    M2C_FIELD(&data_02157790, s32 *, 0xC) = 1;
    func_020e1d90(1);
}
