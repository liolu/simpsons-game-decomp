#include "engine.h"
#include "m2c.h"

extern u16 data_02153f18;

void func_020cd724(s32 arg0) {
    data_02153f18 |= 1 << arg0;
}
