#include "m2c.h"

s32 func_02011f24(void *);                          /* extern */
M2C_UNK func_02011f3c(void *);                      /* extern */
M2C_UNK func_020c6fec(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_020c701c(s32);                         /* extern */
s32 func_020c704c();                                /* extern */

s32 func_02011d5c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return 0;
    }
    if (func_020c704c() == 0) {
        return 0;
    }
    func_020c701c(M2C_FIELD(arg0, s32 *, 0));
    func_020c6fec(M2C_FIELD(arg0, s32 *, 0), func_02011f24(arg0), 0x100);
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (M2C_FIELD(arg0, s32 *, 0x54) + 1);
    func_02011f3c(arg0);
    return 1;
}
