#include "m2c.h"

M2C_UNK func_0201dd48();                            /* extern */
extern M2C_UNK data_0211d5e0;

void *func_0205289c(void *arg0) {
    func_0201dd48();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0211d5e0;
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x13) = 0;
    return arg0;
}
