#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02100a68;

s32 func_02062260(s32 arg0) {
    return (s32) (u16) *((M2C_UNK *)((s8 *)&data_02100a68 + (arg0 * 8)));
}
