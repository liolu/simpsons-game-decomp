#include "m2c.h"
#include "engine.h"

void func_020cb218(M2C_UNK);

extern u16 data_02153b54;

void func_020ca698(s32 arg0) {
    data_02153b54 |= arg0;
    func_020cb218(arg0);
}
