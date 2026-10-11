#include "m2c.h"
#include "engine.h"

void func_020bdca8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021305c4;
extern M2C_UNK data_021305d0;
extern M2C_UNK data_021305ec;
extern M2C_UNK data_021305f8;

s32 func_020bdec4(s32 arg0) {
    if (arg0 == 0) {
        func_020bdca8((s32) &data_021305c4, (s32) &data_021305d0);
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 8);
    }
    func_020bdca8((s32) &data_021305ec, (s32) &data_021305f8);
    return 0;
}
