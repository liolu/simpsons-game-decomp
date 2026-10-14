#include "engine.h"
#include "m2c.h"

M2C_UNK func_020adcac(M2C_UNK);
M2C_UNK func_020adcdc(M2C_UNK);
M2C_UNK func_020b16c0(M2C_UNK, M2C_UNK);

s32 func_020b1b70(s32 arg0, s32 arg1) {
    if (((func_020adcac(arg1) <= 5) || (func_020adcdc(arg1) <= 5)) && (func_020b16c0(arg0, 0x64) > 0x32)) {
        return 0;
    }
    return 1;
}
