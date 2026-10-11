#include "m2c.h"
#include "engine.h"

void func_020a7290(s32 arg0) {
    s32 temp_r2;
    s32 temp_r2_2;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x98) < 0) {
        M2C_FIELD(arg0, s32 *, 0x98) = 0;
    }
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xA0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x98) > temp_r2) {
        M2C_FIELD(arg0, s32 *, 0x98) = temp_r2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) < 0) {
        M2C_FIELD(arg0, s32 *, 0x94) = 0;
    }
    temp_r2_2 = M2C_FIELD(arg0, s32 *, 0x9C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x94) > temp_r2_2) {
        M2C_FIELD(arg0, s32 *, 0x94) = temp_r2_2;
    }
}
