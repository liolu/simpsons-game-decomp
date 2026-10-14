#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0211cd50;

void func_020472bc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = (s32) * ((M2C_UNK *) ((s8 *) &data_0211cd50 + (arg1 * 4)));
}
