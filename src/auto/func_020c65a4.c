#include "m2c.h"
#include "engine.h"

M2C_UNK func_020c0834(void);

s32 func_020c65a4(s32 arg0) {
    if (arg0 != -1) {
        return arg0;
    }
    if (func_020c0834() == 1) {
        return 2;
    }
    return 1;
}
