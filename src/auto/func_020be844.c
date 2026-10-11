#include "m2c.h"
#include "engine.h"

void func_020bdca8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02130954;
extern M2C_UNK data_02130960;
extern M2C_UNK data_0213097c;
extern M2C_UNK data_02130988;

s32 func_020be844(s32 arg0) {
    if (arg0 == 0) {
        func_020bdca8((s32) &data_02130954, (s32) &data_02130960);
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x24);
    }
    func_020bdca8((s32) &data_0213097c, (s32) &data_02130988);
    return 0;
}
