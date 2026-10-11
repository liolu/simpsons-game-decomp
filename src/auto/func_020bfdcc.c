#include "m2c.h"

M2C_UNK func_020e2588(s8 *, s8 *, s32);             /* extern */
s32 func_020e5e44(s8 *);                            /* extern */
extern s8 data_02152b38;

void func_020bfdcc(s8 *arg0) {
    s32 temp_r2;

    temp_r2 = func_020e5e44(&data_02152b38);
    if (data_02152b38 == 0) {
        *arg0 = 0;
        return;
    }
    func_020e2588(arg0, &data_02152b38, temp_r2 + 1);
}
