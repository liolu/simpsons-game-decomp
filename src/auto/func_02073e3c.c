#include "m2c.h"

s32 func_02073e3c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x260) != 2) {
        return 1;
    }
    return 0;
}
