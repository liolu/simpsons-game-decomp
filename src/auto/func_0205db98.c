#include "m2c.h"
#include "engine.h"

void func_0202c178(M2C_UNK, M2C_UNK);
void func_0205e454(M2C_UNK);

extern M2C_UNK data_0214ca5c;

void func_0205db98(s32 arg0, s32 arg1) {
    func_0205e454((arg1 * 0x18) + (arg0 + 0x14));
    func_0202c178((s32) &data_0214ca5c, arg1);
}
