/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020dc020();                                /* extern */
M2C_UNK func_020dd240(s32, s32, M2C_UNK);           /* extern */
extern s32 data_0215715c;

void func_020dd27c(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_020dc020() != 0) {
        M2C_FIELD((data_0215715c + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_020dd240(arg0, arg1, arg2);
}
