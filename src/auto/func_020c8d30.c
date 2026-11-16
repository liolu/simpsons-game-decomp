/* compiler: 1.2/sp3  */
#include "engine.h"
#include "m2c.h"

void func_020ce834(M2C_UNK, M2C_UNK);

extern s32 data_02153a00;

s32 func_020c8d30(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_02153a00) {
        return 0;
    }
    func_020ce834(arg0, 0);
    data_02153a00 |= arg0;
    return 1;
}
