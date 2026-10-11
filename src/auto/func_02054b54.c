#include "m2c.h"

s32 func_0202ade4(s32);                             /* extern */

s32 func_02054b54(void *arg0, s32 arg1) {
    if (arg1 == 0x7FFFFFFF) {
        return -1;
    }
    return func_0202ade4(M2C_FIELD(arg0, s32 *, 0x18));
}
