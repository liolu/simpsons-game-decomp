#include "m2c.h"

s32 func_02048254(s32);                             /* extern */
s32 func_02059570(s32, M2C_UNK);                    /* extern */
extern s32 data_02149fd4;

s32 func_02087720(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x46) != 0) && (func_02059570(func_02048254(data_02149fd4), 0) == 0)) {
        return 1;
    }
    return 0;
}
