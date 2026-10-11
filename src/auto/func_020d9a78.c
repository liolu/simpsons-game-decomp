/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cce9c(u16 *, M2C_UNK);              /* extern */
s32 func_020d9ad4();                                /* extern */
extern void *data_0215658c;

s32 func_020d9a78(void) {
    s32 temp_r0;

    temp_r0 = func_020d9ad4();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020cce9c(M2C_FIELD(data_0215658c, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_0215658c, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
