#include "m2c.h"

M2C_UNK func_02020a28(M2C_UNK);                     /* extern */
s32 func_0202136c();                                /* extern */
M2C_UNK func_02021cc8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210d7b4;

s32 func_02022798(void) {
    func_02021cc8(&data_0210d7b4);
    func_02020a28(3);
    if (func_0202136c() != 0) {
        func_02020a28(0);
        return 1;
    }
    func_02020a28(9);
    return 0;
}
