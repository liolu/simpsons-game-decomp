#include "m2c.h"

s32 func_0201f620(M2C_UNK);                         /* extern */
M2C_UNK func_0201fa44(M2C_UNK);                     /* extern */
M2C_UNK func_020cdbf8();                            /* extern */
s32 func_020df180(M2C_UNK);                         /* extern */

void func_0201fb40(M2C_UNK arg0, M2C_UNK arg1) {
    func_0201fa44(2);
    if (func_020df180(arg1) != 0) {
        func_0201fa44(7);
        return;
    }
    if (func_0201f620(arg0) != 0) {
        return;
    }
    func_020cdbf8();
}
