#include "m2c.h"

s32 func_020c2994(s32);                             /* extern */

s32 func_020c1068(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return func_020c2994(M2C_FIELD(arg0, s32 *, 0x30));
}
