/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d3d94(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
M2C_UNK func_020d4144();                            /* extern */
extern M2C_UNK func_020d413c;

s32 func_020d3d58(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020d3d94(arg0, arg1, &func_020d413c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d4144();
    return sp0;
}
