#include "m2c.h"
#include "engine.h"

s32 func_0201c300(s32 arg0) {
    s32 var_r0;

    if (*(M2C_UNK *)arg0 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return 1;
    }
    return 0;
}
