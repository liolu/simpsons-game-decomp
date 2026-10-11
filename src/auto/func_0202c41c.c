#include "m2c.h"
#include "engine.h"

s32 func_0202c41c(s32 arg0, s32 arg1) {
    s16 temp_r3_5;
    s32 var_r2;
    s8 temp_ip;
    s8 temp_ip_2;
    s8 temp_ip_3;
    s8 temp_r3;
    s8 temp_r3_2;
    s8 temp_r3_3;
    s8 temp_r3_4;

    var_r2 = 0;
    M2C_FIELD(arg0, volatile s8 *, 5) = (s8) (M2C_FIELD(arg0, volatile s8 *, 5) + M2C_FIELD(arg1, volatile s8 *, 5));
    temp_r3 = M2C_FIELD(arg0, volatile s8 *, 5);
    if ((s32) temp_r3 < 0) {
        if ((s32) temp_r3 < 0) {
            do {
                var_r2 |= 1;
                M2C_FIELD(arg0, volatile s8 *, 5) = (s8) (M2C_FIELD(arg0, volatile s8 *, 5) + 0x1E);
                M2C_FIELD(arg0, volatile s8 *, 4) = (s8) (M2C_FIELD(arg0, volatile s8 *, 4) - 1);
            } while ((s32) M2C_FIELD(arg0, volatile s8 *, 5) < 0);
        }
    } else if ((s32) temp_r3 >= 0x1E) {
        do {
            var_r2 |= 1;
            M2C_FIELD(arg0, volatile s8 *, 5) = (s8) (M2C_FIELD(arg0, volatile s8 *, 5) - 0x1E);
            M2C_FIELD(arg0, volatile s8 *, 4) = (s8) (M2C_FIELD(arg0, volatile s8 *, 4) + 1);
        } while ((s32) M2C_FIELD(arg0, volatile s8 *, 5) >= 0x1E);
    }
    temp_ip = M2C_FIELD(arg1, volatile s8 *, 4);
    if (temp_ip != 0) {
        var_r2 |= 1;
        M2C_FIELD(arg0, volatile s8 *, 4) = (s8) (M2C_FIELD(arg0, volatile s8 *, 4) + temp_ip);
    }
    temp_r3_2 = M2C_FIELD(arg0, volatile s8 *, 4);
    if ((s32) temp_r3_2 < 0) {
        if ((s32) temp_r3_2 < 0) {
            do {
                var_r2 |= 2;
                M2C_FIELD(arg0, volatile s8 *, 4) = (s8) (M2C_FIELD(arg0, volatile s8 *, 4) + 0x3C);
                M2C_FIELD(arg0, volatile s8 *, 3) = (s8) (M2C_FIELD(arg0, volatile s8 *, 3) - 1);
            } while ((s32) M2C_FIELD(arg0, volatile s8 *, 4) < 0);
        }
    } else if ((s32) temp_r3_2 >= 0x3C) {
        do {
            var_r2 |= 2;
            M2C_FIELD(arg0, volatile s8 *, 4) = (s8) (M2C_FIELD(arg0, volatile s8 *, 4) - 0x3C);
            M2C_FIELD(arg0, volatile s8 *, 3) = (s8) (M2C_FIELD(arg0, volatile s8 *, 3) + 1);
        } while ((s32) M2C_FIELD(arg0, volatile s8 *, 4) >= 0x3C);
    }
    temp_ip_2 = M2C_FIELD(arg1, volatile s8 *, 3);
    if (temp_ip_2 != 0) {
        var_r2 |= 2;
        M2C_FIELD(arg0, volatile s8 *, 3) = (s8) (M2C_FIELD(arg0, volatile s8 *, 3) + temp_ip_2);
    }
    temp_r3_3 = M2C_FIELD(arg0, volatile s8 *, 3);
    if ((s32) temp_r3_3 < 0) {
        if ((s32) temp_r3_3 < 0) {
            do {
                var_r2 |= 4;
                M2C_FIELD(arg0, volatile s8 *, 3) = (s8) (M2C_FIELD(arg0, volatile s8 *, 3) + 0x3C);
                M2C_FIELD(arg0, volatile s8 *, 2) = (s8) (M2C_FIELD(arg0, volatile s8 *, 2) - 1);
            } while ((s32) M2C_FIELD(arg0, volatile s8 *, 3) < 0);
        }
    } else if ((s32) temp_r3_3 >= 0x3C) {
        do {
            var_r2 |= 4;
            M2C_FIELD(arg0, volatile s8 *, 3) = (s8) (M2C_FIELD(arg0, volatile s8 *, 3) - 0x3C);
            M2C_FIELD(arg0, volatile s8 *, 2) = (s8) (M2C_FIELD(arg0, volatile s8 *, 2) + 1);
        } while ((s32) M2C_FIELD(arg0, volatile s8 *, 3) >= 0x3C);
    }
    temp_ip_3 = M2C_FIELD(arg1, volatile s8 *, 2);
    if (temp_ip_3 != 0) {
        var_r2 |= 4;
        M2C_FIELD(arg0, volatile s8 *, 2) = (s8) (M2C_FIELD(arg0, volatile s8 *, 2) + temp_ip_3);
    }
    temp_r3_4 = M2C_FIELD(arg0, volatile s8 *, 2);
    if ((s32) temp_r3_4 < 0) {
        if ((s32) temp_r3_4 < 0) {
            do {
                var_r2 |= 8;
                M2C_FIELD(arg0, volatile s8 *, 2) = (s8) (M2C_FIELD(arg0, volatile s8 *, 2) + 0x18);
                M2C_FIELD(arg0, volatile s16 *, 0) = (s16) (M2C_FIELD(arg0, volatile s16 *, 0) - 1);
            } while ((s32) M2C_FIELD(arg0, volatile s8 *, 2) < 0);
        }
    } else if ((s32) temp_r3_4 >= 0x18) {
        do {
            var_r2 |= 8;
            M2C_FIELD(arg0, volatile s8 *, 2) = (s8) (M2C_FIELD(arg0, volatile s8 *, 2) - 0x18);
            M2C_FIELD(arg0, volatile s16 *, 0) = (s16) (M2C_FIELD(arg0, volatile s16 *, 0) + 1);
        } while ((s32) M2C_FIELD(arg0, volatile s8 *, 2) >= 0x18);
    }
    temp_r3_5 = M2C_FIELD(arg1, volatile s16 *, 0);
    if (temp_r3_5 != 0) {
        var_r2 |= 8;
        M2C_FIELD(arg0, volatile s16 *, 0) = (s16) (M2C_FIELD(arg0, volatile s16 *, 0) + temp_r3_5);
    }
    return var_r2;
}
