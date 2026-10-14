#include "engine.h"
#include "m2c.h"

void func_020e2588(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02152e18;
extern M2C_UNK data_02152efc;

void func_020c0af0(s32 arg0, s32 arg1) {
    if (arg1 > 8) {
        return;
    }
    M2C_FIELD(&data_02152e18, s32 *, 0xE0) = arg1;
    if (arg1 <= 0) {
        return;
    }
    if (arg0 == 0) {
        return;
    }
    func_020e2588((s32) &data_02152efc, arg0, arg1);
}
