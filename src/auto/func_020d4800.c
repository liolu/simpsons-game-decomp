/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d41d4();                            /* extern */
s32 func_020d4844(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_02155c78;
extern M2C_UNK func_020d41ec;

s32 func_020d4800(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                                = func_020d4844(arg0, &func_020d41ec, 0);
    M2C_FIELD(&data_02155c78, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_020d41d4();
    }
    return M2C_FIELD(&data_02155c78, s32 *, 0x20);
}
