#include "engine.h"
#include "m2c.h"

s32 func_0202cabc(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_ip;
    s16 temp_r3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s8 temp_ip_2;
    s8 temp_ip_3;
    s8 temp_ip_4;
    s8 temp_r0;
    s8 temp_r1;
    s8 temp_r3_2;
    s8 temp_r3_3;
    s8 temp_r3_4;

    if (arg2 & 8) {
        temp_ip = M2C_FIELD(arg1, s16 *, 0);
        temp_r3 = M2C_FIELD(arg0, s16 *, 0);
        if (temp_r3 != temp_ip) {
            if ((s32) temp_r3 < (s32) temp_ip) {
                var_r0_5 = 1;
            } else {
                var_r0_5 = 2;
            }
            return var_r0_5;
        }
    }
    if (arg2 & 4) {
        temp_ip_2 = M2C_FIELD(arg1, s8 *, 2);
        temp_r3_2 = M2C_FIELD(arg0, s8 *, 2);
        if (temp_r3_2 != temp_ip_2) {
            if ((s32) temp_r3_2 < (s32) temp_ip_2) {
                var_r0_4 = 1;
            } else {
                var_r0_4 = 2;
            }
            return var_r0_4;
        }
    }
    if (arg2 & 2) {
        temp_ip_3 = M2C_FIELD(arg1, s8 *, 3);
        temp_r3_3 = M2C_FIELD(arg0, s8 *, 3);
        if (temp_r3_3 != temp_ip_3) {
            if ((s32) temp_r3_3 < (s32) temp_ip_3) {
                var_r0_3 = 1;
            } else {
                var_r0_3 = 2;
            }
            return var_r0_3;
        }
    }
    if (arg2 & 1) {
        temp_ip_4 = M2C_FIELD(arg1, s8 *, 4);
        temp_r3_4 = M2C_FIELD(arg0, s8 *, 4);
        if (temp_r3_4 != temp_ip_4) {
            if ((s32) temp_r3_4 < (s32) temp_ip_4) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 2;
            }
            return var_r0_2;
        }
    }
    if (arg2 & 0x10) {
        temp_r1 = M2C_FIELD(arg1, s8 *, 5);
        temp_r0 = M2C_FIELD(arg0, s8 *, 5);
        if (temp_r0 != temp_r1) {
            if ((s32) temp_r0 < (s32) temp_r1) {
                var_r0 = 1;
            } else {
                var_r0 = 2;
            }
            return var_r0;
        }
    }
    return 0;
}
