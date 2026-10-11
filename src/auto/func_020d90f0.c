/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cc21c(M2C_UNK);                     /* extern */
M2C_UNK func_020cce9c(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020cced4(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_020ccef8();                            /* extern */
s32 func_020cd940();                                /* extern */
M2C_UNK func_020cd954(s32);                         /* extern */
M2C_UNK func_020cd9b0(M2C_UNK);                     /* extern */
s32 func_020cfadc(M2C_UNK, s32 *, M2C_UNK);         /* extern */
s32 func_020cfb90(M2C_UNK, M2C_UNK);                /* extern */

s32 func_020d90f0(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r10_2;
    s32 var_r4;

    var_r4 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (func_020cfb90(0xB, 1) == 0) {
            do {
                func_020cd9b0(0x64);
            } while (func_020cfb90(0xB, 1) == 0);
        }
        func_020d90f0(arg0, NULL, 1);
    }
    func_020cced4(M2C_FIELD(arg0, s32 **, 0), 0x60);
    func_020ccef8();
loop_6:
    M2C_FIELD(arg0, s32 **, 4) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_020cfadc(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r10 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_020cfadc(0xB, temp_r10, 1) < 0);
    }
    temp_r10_2 = func_020cd940();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            func_020cc21c(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    func_020cd954(temp_r10_2);
    func_020cce9c(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r4 -= 1;
        if (var_r4 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
