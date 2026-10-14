/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cced4(M2C_UNK, M2C_UNK);
void func_020ccef8(void);
void func_020ded60(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020de340(s32 arg0, s32 arg1, s32 arg2) {
    func_020cced4(arg2, (arg0 + 0x1F) & ~0x1F);
    func_020ccef8();
    func_020ded60(arg2, arg0, arg1);
}
