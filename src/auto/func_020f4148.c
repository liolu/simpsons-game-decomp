#include "m2c.h"

void *func_020f2248(void *, M2C_UNK *);             /* extern */

void func_020f4148(u8 *arg0) {
    M2C_UNK sp0;
    u8 temp_r4;
    void *temp_r0;

    temp_r4 = *arg0;
    temp_r0 = func_020f2248(arg0 + 2, &sp0);
    if (!(temp_r4 & 0x40)) {
        return;
    }
    func_020f2248(temp_r0, &sp0);
}
