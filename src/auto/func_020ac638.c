#include "engine.h"
#include "m2c.h"

s32 func_020ac638(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB8) == 5) {
        return 1;
    }
    return 0;
}
