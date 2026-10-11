#include "m2c.h"

extern M2C_UNK data_0212085c;

s32 func_02073e80(void *arg0) {
    return *((M2C_UNK *)((s8 *)&data_0212085c + (M2C_FIELD(arg0, s32 *, 0x260) * 0x38)));
}
