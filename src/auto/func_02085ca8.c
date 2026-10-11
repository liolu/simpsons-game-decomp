#include "m2c.h"

s32 func_02067728(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02087714(s32);                         /* extern */
M2C_UNK func_0208f8b4(void *);                      /* extern */

s32 func_02085ca8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2CC) == 0x2C) {
        if ((M2C_FIELD(arg0, u8 *, 0x178) == 0) && (func_02067728(arg0 + 0x278, 0x12) == 0)) {
            return 0x2C;
        }
        return 0;
    }
    if (func_02067728(arg0 + 0x278, 0x20) != 0) {
        func_02087714(M2C_FIELD(arg0, s32 *, 0x368));
        func_0208f8b4(arg0);
    }
    return 0x2F;
}
