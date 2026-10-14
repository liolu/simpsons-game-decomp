#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02101978;
extern M2C_UNK data_0214d378;

s32 func_020919cc(s32 arg0) {
    s32 temp_r0;

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_02101978 + (arg0 * 0x14)));
    switch (temp_r0) {                              /* irregular */
        case 0:
            return M2C_FIELD(&data_0214d378, s32 *, 0xC);
        case 1:
            return M2C_FIELD(&data_0214d378, s32 *, 0x1C);
        case 2:
            return (M2C_FIELD(&data_0214d378, s8 *, 0x23) * 0x3C) + M2C_FIELD(&data_0214d378, s8 *, 0x24);
        default:
            return 0;
    }
}
