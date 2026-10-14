#include "engine.h"
#include "m2c.h"

void func_0202c288(M2C_UNK);
M2C_UNK func_020b60cc(void);

extern M2C_UNK data_0214ca5c;

void func_02097898(s32 arg0) {
    M2C_FIELD(arg0, s8 *, 0x4C) = 1;
    if (func_020b60cc() != 0) {
        return;
    }
    func_0202c288((s32) &data_0214ca5c);
}
