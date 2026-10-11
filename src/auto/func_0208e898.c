#include "m2c.h"

s32 func_02067728(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0208fefc(s32);                         /* extern */

s32 func_0208e898(s32 arg0) {
    if (func_02067728(arg0 + 0x278, 0x1F) == 0) {
        return 0x2F;
    }
    func_0208fefc(arg0);
    return 0x2D;
}
