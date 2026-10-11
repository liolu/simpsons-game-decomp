#include "m2c.h"
#include "engine.h"

void func_020bdca8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021308ac;
extern M2C_UNK data_021308b8;
extern M2C_UNK data_021308d4;
extern M2C_UNK data_021308e0;

s32 func_020be754(s32 arg0) {
    if (arg0 == 0) {
        func_020bdca8((s32) &data_021308ac, (s32) &data_021308b8);
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x1C);
    }
    func_020bdca8((s32) &data_021308d4, (s32) &data_021308e0);
    return 0;
}
