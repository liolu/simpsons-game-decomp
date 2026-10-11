#include "m2c.h"

s32 func_0201ea7c();                                /* extern */
M2C_UNK func_0201f3bc(void *);                      /* extern */
s32 func_0201f4c8(void *);                          /* extern */

void func_0201f384(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA20) = 0;
loop_1:
    func_0201f3bc(arg0);
    if (func_0201ea7c() == 0) {
        return;
    }
    if (func_0201f4c8(arg0) != 0) {
        return;
    }
    goto loop_1;
}
