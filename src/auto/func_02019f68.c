#include "engine.h"
#include "m2c.h"

extern s32 data_02148d78;

s32 func_02019f68(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_02148d78;
    data_02148d78 = arg0;
    return temp_r2;
}
