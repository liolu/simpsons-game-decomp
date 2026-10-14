#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021527b0;

void func_020c0104(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        M2C_FIELD(&data_021527b0, s32 *, 4) = arg0;
        M2C_FIELD(&data_021527b0, s32 *, 8) = arg1;
        return;
    }
    M2C_FIELD(&data_021527b0, s32 *, 4) = 0;
    M2C_FIELD(&data_021527b0, s32 *, 8) = 0;
}
