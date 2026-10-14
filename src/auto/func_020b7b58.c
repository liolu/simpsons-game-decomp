#include "engine.h"
#include "m2c.h"

void func_020b95d0(M2C_UNK);

extern M2C_UNK data_0213007c;

s32 func_020b7b58(s32 arg0) {
    if (arg0 != 0) {
        return (s32) M2C_FIELD(arg0, s8 *, 0xE);
    }
    func_020b95d0((s32) &data_0213007c);
    return -1;
}
