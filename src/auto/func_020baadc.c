#include "m2c.h"

s32 func_020b7bac(s32);                             /* extern */

s32 func_020baadc(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return func_020b7bac(M2C_FIELD(arg0, s32 *, 4));
}
