#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214ce54;

void func_02068934(void) {
    M2C_FIELD(&data_0214ce54, s32 *, 8)    = 0x1000;
    M2C_FIELD(&data_0214ce54, s32 *, 0x18) = 1;
    M2C_FIELD(&data_0214ce54, s32 *, 0)    = 0;
    M2C_FIELD(&data_0214ce54, s32 *, 4)    = 0;
    M2C_FIELD(&data_0214ce54, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0214ce54, s32 *, 0x24) = 0x12C;
}
