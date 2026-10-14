#include "engine.h"
#include "m2c.h"

M2C_UNK func_020483c4(void);
void func_0208bb64(M2C_UNK, M2C_UNK);
M2C_UNK func_0209a0cc(M2C_UNK);

extern s32 data_0212b740;

void func_02088c80(s32 arg0, s32 arg1) {
    if (func_0209a0cc(func_020483c4()) == 2) {
        *(M2C_UNK *) arg0 = (s32) data_0212b740;
        return;
    }
    func_0208bb64(arg0, arg1);
}
