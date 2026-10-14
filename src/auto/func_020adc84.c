#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0212dcfc;

s32 func_020adc84(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_0212dcfc + (M2C_FIELD(arg0, s32 *, 0xF4) * 0x2C))) == 3) {
        return 1;
    }
    return 0;
}
