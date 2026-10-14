#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02104aa0;

s32 func_020b3234(s32 arg0) {
    return (0x14 * arg0) + (s32) &data_02104aa0;
}
