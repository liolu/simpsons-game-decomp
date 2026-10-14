#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cba0c(M2C_UNK);

extern M2C_UNK data_02152b44;

void func_020c0448(void) {
    s32 temp_r1;

    temp_r1                             = M2C_FIELD(&data_02152b44, s32 *, 8) - 1;
    M2C_FIELD(&data_02152b44, s32 *, 8) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    func_020cba0c(1);
}
