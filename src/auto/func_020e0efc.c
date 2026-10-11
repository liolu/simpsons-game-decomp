#include "m2c.h"
#include "engine.h"

extern s32 data_02157180;

s32 func_020e0efc(void) {
    if (data_02157180 != 0) {
        return 1;
    }
    return 0;
}
