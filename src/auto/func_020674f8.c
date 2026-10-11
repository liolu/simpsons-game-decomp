#include "m2c.h"

M2C_UNK func_02067344(s32);                         /* extern */
M2C_UNK func_02067514();                            /* extern */

s32 func_020674f8(s32 arg0) {
    func_02067514();
    func_02067344(arg0 + 4);
    return arg0;
}
