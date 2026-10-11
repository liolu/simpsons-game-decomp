#include "m2c.h"

s32 func_020e2660(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_020e5cec(M2C_UNK, M2C_UNK *, s32 *, s32 *, s32 *); /* extern */
extern M2C_UNK data_02130b74;
extern M2C_UNK data_02130b7c;

s32 func_020bf274(M2C_UNK arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    if ((func_020e2660(&data_02130b74, arg0, 7) == 0) && (func_020e5cec(arg0, &data_02130b7c, arg1, arg2, arg3) == 3)) {
        return 1;
    }
    *arg1 = 0;
    *arg2 = 0;
    *arg3 = 0;
    return 0;
}
