#include "m2c.h"
#include "engine.h"

void func_0206f334(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 3:
        *(M2C_UNK *)arg0 = 0x4000;
        return;
    case 2:
        *(M2C_UNK *)arg0 = 0;
        return;
    case 4:
        *(M2C_UNK *)arg0 = 4;
        return;
    default:
        *(M2C_UNK *)arg0 = 0x80;
        return;
    }
}
