#include "m2c.h"
#include "engine.h"

void func_020ca2a4(M2C_UNK);

extern M2C_UNK data_02153b6c;

void func_020ca180(void) {
    *(s32 *)0x04001000 &= ~0x80000000;
    func_020ca2a4((s32) &data_02153b6c);
}
