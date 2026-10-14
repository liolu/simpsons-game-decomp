#include "m2c.h"

extern M2C_UNK data_0212086c;

s32 func_02073e50(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x260);
    if ((temp_r2 == 0xD) && (M2C_FIELD(arg0, u8 *, 0x275) == 0)) {
        return 0x7FFFFFFF;
    }
    return *((M2C_UNK *) ((s8 *) &data_0212086c + (temp_r2 * 0x38)));
}
