#include "m2c.h"

s32 func_0202bccc(M2C_UNK, u8);                     /* extern */

u8 func_0202bc60(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    return M2C_FIELD(M2C_FIELD((func_0202bccc(arg0, *arg1) + (arg2 * 4)), void **, 0xC), u8 *, 3);
}
