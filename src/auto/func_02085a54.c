#include "m2c.h"

M2C_UNK func_020876f8(s32);                         /* extern */

s32 func_02085a54(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2F4) == 0) {
        func_020876f8(M2C_FIELD(arg0, s32 *, 0x368));
    }
    return 0x2F;
}
