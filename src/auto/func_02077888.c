#include "m2c.h"

M2C_UNK func_020777ec(M2C_UNK *, void *, void **, s32 *); /* extern */

void *func_02077888(void *arg0) {
    s32 sp8;
    void *sp4;
    M2C_UNK sp0;

    sp8 = M2C_FIELD(arg0, s32 *, 4);
    sp4 = arg0;
    func_020777ec(&sp0, arg0, &sp4, &sp8);
    return arg0;
}
