#include "m2c.h"

s32 func_020b60cc();                                /* extern */

s32 func_020837c4(void) {
    if (func_020b60cc() != 0) {
        return 0x19;
    }
    return 0x32;
}
