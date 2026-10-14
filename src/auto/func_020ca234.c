#include "engine.h"
#include "m2c.h"

void func_020ca2a4(M2C_UNK);

extern M2C_UNK data_02153b64;

void func_020ca234(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_020ca2a4((s32) &data_02153b64);
}
