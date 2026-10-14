#include "engine.h"
#include "m2c.h"

s32 func_020b16f0(s32 arg0) {
    if (*(M2C_UNK *) arg0 == 0x64000) {
        return 1;
    }
    return 0;
}
