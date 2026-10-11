/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cbbb8();                            /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */

void func_020e14ec(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020cbbb8(arg0);
    }
    func_020cd954(M2C_FIELD(arg1, s32 *, 4));
}
