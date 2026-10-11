#include "m2c.h"

M2C_UNK func_02087714(s32);                         /* extern */

s32 func_02083990(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2F4) == 0) {
        func_02087714(M2C_FIELD(arg0, s32 *, 0x390));
    }
    return 0x2F;
}
