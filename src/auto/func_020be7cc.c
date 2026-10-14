#include "engine.h"
#include "m2c.h"

void func_020bdca8(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02130900;
extern M2C_UNK data_0213090c;
extern M2C_UNK data_02130928;
extern M2C_UNK data_02130934;

s32 func_020be7cc(s32 arg0) {
    if (arg0 == 0) {
        func_020bdca8((s32) &data_02130900, (s32) &data_0213090c);
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x20);
    }
    func_020bdca8((s32) &data_02130928, (s32) &data_02130934);
    return 0;
}
