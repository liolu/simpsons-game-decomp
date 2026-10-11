/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cca14(M2C_UNK *, u16 *, M2C_UNK);   /* extern */
s32 func_020ccac8(M2C_UNK *, u16 **, M2C_UNK);      /* extern */
M2C_UNK func_020cce9c(u16 *, M2C_UNK);              /* extern */
extern M2C_UNK data_02156590;

u16 *func_020d9c30(void) {
    u16 *sp0;

    if (func_020ccac8(&data_02156590, &sp0, 0) == 0) {
        return NULL;
    }
    func_020cce9c(sp0, 2);
    if (*sp0 & 0x8000) {
        return sp0;
    }
    func_020cca14(&data_02156590, sp0, 1);
    return NULL;
}
