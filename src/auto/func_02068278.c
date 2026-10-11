#include "m2c.h"

M2C_UNK func_02067f60();                            /* extern */

s32 func_02068278(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x260) == 5) {
        func_02067f60(arg0);
    }
    return 6;
}
