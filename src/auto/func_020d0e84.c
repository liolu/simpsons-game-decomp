/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cfd30(void *, s32);                     /* extern */
M2C_UNK func_020cfeac(void *, s32);                 /* extern */
M2C_UNK func_020d0ecc();                            /* extern */
s32 func_020d0f70(s32);                             /* extern */

s32 func_020d0e84(void *arg0) {
    func_020cfeac(arg0, func_020cfd30(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020d0f70(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020d0ecc();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
