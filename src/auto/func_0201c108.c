#include "m2c.h"

M2C_UNK func_0201d2b4(M2C_UNK *, s32, M2C_UNK);     /* extern */
s32 func_0201d340(M2C_UNK *);                       /* extern */
extern M2C_UNK data_02149c20;
extern M2C_UNK data_02149ccc;

void func_0201c108(s32 arg0) {
    if (arg0 == func_0201d340(&data_02149ccc)) {
        return;
    }
    func_0201d2b4(&data_02149ccc, arg0, 0);
    M2C_FIELD(&data_02149c20, s32 *, 0xB4) = 0x1F;
}
