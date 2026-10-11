/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cd9e4(M2C_UNK, M2C_UNK);
void func_020cf9ac(void);
M2C_UNK func_020cfb90(M2C_UNK, M2C_UNK);
void func_020cfbb8(M2C_UNK, M2C_UNK);

extern u16 data_02153f4c;

void func_020cda28(void) {
    if (data_02153f4c != 0) {
        return;
    }
    data_02153f4c = 1;
    func_020cf9ac();
    do {

    } while (func_020cfb90(0xC, 1) == 0);
    func_020cfbb8(0xC, (s32) func_020cd9e4);
}
