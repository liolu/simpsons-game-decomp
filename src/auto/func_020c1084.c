#include "m2c.h"

s32 func_020c29a4(s32);                             /* extern */

s32 func_020c1084(void *arg0) {
    if (arg0 == NULL) {
        return -1;
    }
    return func_020c29a4(M2C_FIELD(arg0, s32 *, 0x30));
}
