#include "m2c.h"
#include "engine.h"

extern s32 data_021539fc;

void func_020c8c80(s32 arg0) {
    data_021539fc &= ~(1 << arg0);
}
