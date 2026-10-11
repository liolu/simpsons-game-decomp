#include "m2c.h"

extern s32 data_02149fd4;

s32 func_020483e0(s32 arg0) {
    if (data_02149fd4 == 0) {
        return 0;
    }
    return M2C_FIELD((data_02149fd4 + (arg0 * 4)), s32 *, 4);
}
