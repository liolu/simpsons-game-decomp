/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

M2C_UNK func_0201ecd4(u32);                         /* extern */
M2C_UNK func_0201ecfc(s32);                         /* extern */
M2C_UNK func_0201ef18(void *);                      /* extern */
M2C_UNK func_020b3fc4();                            /* extern */
extern M2C_UNK data_0210cabc;

void *func_0201ee94(void *arg0) {
    u8 var_r7;
    void *var_r6;

    func_020b3fc4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0210cabc;
    M2C_FIELD(arg0, s8 *, 0x48)    = 0;
    M2C_FIELD(arg0, s8 *, 0x49)    = 0;
    var_r6                         = arg0 + 0x4C;
    do {
        func_0201ecd4((u32) var_r6);
        var_r6 += 0x344;
    } while ((u32) var_r6 < (u32) (arg0 + 0xA18));
    M2C_FIELD(arg0, s32 *, 0xA18) = 0;
    M2C_FIELD(arg0, s32 *, 0xA24) = 0;
    func_0201ef18(arg0);
    var_r7 = 0;
    do {
        func_0201ecfc((var_r7 * 0x344) + (s32) (arg0 + 0x4C));
        var_r7 += 1;
    } while ((u32) var_r7 < 3U);
    return arg0;
}
