#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214a1c0;

void func_02020a74(s32 arg0) {
    if (M2C_FIELD(&data_0214a1c0, s32 *, 0x1C) != 9) {
        M2C_FIELD(&data_0214a1c0, s32 *, 0x34) = arg0;
    }
}
