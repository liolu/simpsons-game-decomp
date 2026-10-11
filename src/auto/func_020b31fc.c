#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02103ca0;

s32 func_020b31fc(s32 arg0) {
    return (s32) ((M2C_UNK *)((s8 *)&data_02103ca0 + (arg0 * 8)));
}
