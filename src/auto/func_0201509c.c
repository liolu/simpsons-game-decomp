#include "engine.h"
#include "m2c.h"

M2C_UNK func_02015014(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020fdaa0;

void func_0201509c(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x1060) =
        func_02015014(arg0, M2C_FIELD(&data_020fdaa0, s32(**)(M2C_UNK, M2C_UNK, s32), 0xC)(0x28, 1, arg0));
}
