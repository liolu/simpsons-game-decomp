#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02146070;

s32 func_02018ff4(s32 arg0) {
    void *temp_r1;

    temp_r1 = *((M2C_UNK *)((s8 *)&data_02146070 + (arg0 * 8)));
    if (temp_r1 == ((M2C_UNK *)((s8 *)&data_02146070 + (arg0 * 8)))) {
        return 0;
    }
    return M2C_FIELD(temp_r1, s32 *, 4) + 0x20;
}
