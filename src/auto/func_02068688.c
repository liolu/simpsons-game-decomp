#include "engine.h"
#include "m2c.h"

M2C_UNK func_0202ad60(M2C_UNK);

extern M2C_UNK data_0211e8dc;

s32 func_02068688(s32 arg0) {
    s32 temp_ip;
    s32 temp_r3;
    void *temp_r0;

    temp_r0 = (void *) func_0202ad60(M2C_FIELD(arg0, s32 *, 0x88));
    temp_ip = M2C_FIELD(temp_r0, s32 *, 0);
    if (temp_ip <= (s32) (M2C_FIELD(&data_0211e8dc, s32 *, 0x94) - 0x1E000)) {
        return 0;
    }
    temp_r3 = M2C_FIELD(temp_r0, s32 *, 4);
    if (temp_r3 <= (s32) (M2C_FIELD(&data_0211e8dc, s32 *, 0x98) - 0x1E000)) {
        return 0;
    }
    if (temp_ip >= (s32) (M2C_FIELD(&data_0211e8dc, s32 *, 0x9C) + 0x1E000)) {
        return 0;
    }
    if (temp_r3 < (s32) (M2C_FIELD(&data_0211e8dc, s32 *, 0xA0) + 0x50000)) {
        return 1;
    }
    return 0;
}
