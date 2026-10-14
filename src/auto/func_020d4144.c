/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd998(void);
void func_020cf9b8(void);

extern s32 data_02155c24;

void func_020d4144(void) {
    if (data_02155c24 == 0) {
        return;
    }
    do {
        if (func_020cd998() == 0x80) {
            func_020cf9b8();
        }
    } while (data_02155c24 != 0);
}
