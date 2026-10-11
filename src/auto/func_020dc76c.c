/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020de340(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020e1304(M2C_UNK, M2C_UNK);

extern s32 data_0215715c;

void func_020dc76c(s32 arg0, s32 arg1) {
    s8 sp0;

    sp0 = (s8) arg0;
    func_020e1304((s32) &sp0, data_0215715c);
    func_020de340(6, arg1, data_0215715c);
}
