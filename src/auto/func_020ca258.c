#include "engine.h"
#include "m2c.h"

void func_020ca2a4(M2C_UNK);

extern M2C_UNK data_02153b62;

void func_020ca258(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_020ca2a4((s32) &data_02153b62);
}
