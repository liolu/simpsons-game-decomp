#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02148914;

void func_02019374(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_02148914 + (arg0 * 0x24))) = arg1;
}
