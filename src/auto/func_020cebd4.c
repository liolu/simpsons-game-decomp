/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cd9b0(M2C_UNK);
M2C_UNK func_020ceb00(void);
void func_020cec40(M2C_UNK, M2C_UNK);
M2C_UNK func_020cfb90(M2C_UNK, M2C_UNK);
void func_020cfbb8(M2C_UNK, M2C_UNK);

void func_020cebd4(void) {
    func_020cfbb8(7, (s32) func_020cec40);
    if (func_020ceb00() == 0) {
        return;
    }
    if (func_020cfb90(7, 1) != 0) {
        return;
    }
    do {
        func_020cd9b0(0x64);
    } while (func_020cfb90(7, 1) == 0);
}
