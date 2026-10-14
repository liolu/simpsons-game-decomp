#include "engine.h"
#include "m2c.h"

s32 func_020b1bbc(s32 arg0) {
    if (((s32) * (M2C_UNK *) arg0 >> 0xC) == 0) {
        return 1;
    }
    return 0;
}
