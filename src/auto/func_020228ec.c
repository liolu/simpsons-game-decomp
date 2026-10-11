#include "m2c.h"
#include "engine.h"

void func_02023428(void);

extern M2C_UNK data_0214c918;

void func_020228ec(void) {
    M2C_FIELD(&data_0214c918, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_0214c918, s32 *, 8) = 0;
    M2C_FIELD(&data_0214c918, s32 *, 0xC) = 0;
    M2C_FIELD(&data_0214c918, s32 *, 4) = 0;
    func_02023428();
}
