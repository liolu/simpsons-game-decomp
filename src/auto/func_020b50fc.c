#include "m2c.h"
#include "engine.h"

s32 func_020b50fc(s32 arg0) {
    if (M2C_FIELD(*(M2C_UNK *)arg0, u8 *, 0x17) != 0) {
        return 1;
    }
    return 0;
}
