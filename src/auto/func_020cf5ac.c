/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cceb8(M2C_UNK, M2C_UNK);
void func_020cea8c(void);
void func_020ceaa0(void);

void func_020cf5ac(s32 arg0, s32 arg1, s32 arg2) {
    func_020ceaa0();
    M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x3C) = arg2;
    func_020cceb8(arg0 + 0x3C + (arg1 * 4), 4);
    func_020cea8c();
}
