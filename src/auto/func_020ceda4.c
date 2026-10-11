/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020ceba0(void);
M2C_UNK func_020ced10(M2C_UNK);
M2C_UNK func_020cf0d8(M2C_UNK);

void func_020ceda4(s32 arg0) {
    if (func_020ced10(arg0) != 0) {
        return;
    }
    do {

    } while (func_020cf0d8(0) != 0);
    if (func_020ced10(arg0) != 0) {
        return;
    }
    func_020ceba0();
    if (func_020ced10(arg0) != 0) {
        return;
    }
    do {
        func_020cf0d8(1);
    } while (func_020ced10(arg0) == 0);
}
