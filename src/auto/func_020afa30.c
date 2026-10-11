#include "m2c.h"
#include "engine.h"

void func_020ac498(M2C_UNK);

void func_020afa30(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    func_020ac498(M2C_FIELD(arg0, s32 *, 0x48));
}
