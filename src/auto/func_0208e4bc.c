#include "m2c.h"

s32 func_02067728(s32, M2C_UNK);                    /* extern */

s32 func_0208e4bc(void *arg0) {
    if (func_02067728(arg0 + 0x278, 0x12) == 0) {
        return 0x2F;
    }
    M2C_FIELD(arg0, s8 *, 0x318) = 0;
    return 0x15;
}
