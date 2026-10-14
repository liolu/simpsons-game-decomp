#include "engine.h"
#include "m2c.h"

void func_020b5dbc(s32 arg0, s32 arg1) {
    M2C_FIELD(*(M2C_UNK *) arg0, s8 *, 0x11) = (s8) arg1;
}
