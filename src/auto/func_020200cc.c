#include "m2c.h"

extern M2C_UNK data_0210cbc8;

u16 func_020200cc(s32 arg0) {
    return M2C_FIELD(*((M2C_UNK *) ((s8 *) &data_0210cbc8 + (arg0 * 4))), u16 *, 0);
}
