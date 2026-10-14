#include "engine.h"
#include "m2c.h"

extern void *data_02157158;

s32 func_020decd8(void) {
    s32 var_ip;
    s32 var_r1;
    s32 var_r2;
    s32 var_r3;

    if (M2C_FIELD(data_02157158, u16 *, 0x12) != 0) {
        var_r2 = 2;
    } else {
        var_r2 = 0;
    }
    if (M2C_FIELD(data_02157158, u16 *, 0xE) != 0) {
        var_r3 = 1;
    } else {
        var_r3 = 0;
    }
    if (M2C_FIELD(data_02157158, u16 *, 0x14) != 0) {
        var_ip = 4;
    } else {
        var_ip = 0;
    }
    if (M2C_FIELD(data_02157158, u16 *, 0x16) != 0) {
        var_r1 = 8;
    } else {
        var_r1 = 0;
    }
    return (s32) (u8) (var_r1 | (var_ip | (var_r3 | var_r2)));
}
