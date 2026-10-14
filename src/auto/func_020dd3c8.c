/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020dc020(M2C_UNK);

extern s32 data_0215715c;

s32 func_020dd3c8(s32 arg0) {
    if ((data_0215715c != 0) && (func_020dc020(arg0) != 0) &&
        (M2C_FIELD((data_0215715c + ((arg0 - 1) * 4)), s32 *, 0x14E8) == 7)) {
        return 1;
    }
    return 0;
}
