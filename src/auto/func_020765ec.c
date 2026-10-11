#include "m2c.h"

extern M2C_UNK data_021012ec;

s32 func_020765ec(void *arg0) {
    return *((M2C_UNK *)((s8 *)&data_021012ec + (M2C_FIELD(arg0, s32 *, 0x1D4) * 0x10)));
}
