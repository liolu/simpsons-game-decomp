#include "engine.h"
#include "m2c.h"

M2C_UNK func_02012c40(void);

s32 func_020132b0(s32 arg0, s32 arg1) {
    if (arg1 >= 2) {
        return 0;
    }
    if (M2C_FIELD(((arg1 * 0x18) + arg0), s32 *, 0x10) == 0) {
        return 0;
    }
    return func_02012c40();
}
