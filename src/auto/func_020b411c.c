#include "m2c.h"

M2C_UNK func_0201dd48();                            /* extern */
M2C_UNK func_020b42a0(void *);                      /* extern */
M2C_UNK func_020b4410(void *);                      /* extern */
M2C_UNK func_020b44ec(void *);                      /* extern */
extern M2C_UNK data_0212fe28;
extern s32 data_0214d4ac;

void *func_020b411c(void *arg0) {
    func_0201dd48();
    M2C_FIELD(arg0, s32 *, 0x10)   = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_0212fe28;
    M2C_FIELD(arg0, s8 *, 0x1A)    = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)   = 0;
    M2C_FIELD(arg0, s32 *, 0x20)   = 0;
    M2C_FIELD(arg0, s32 *, 0x24)   = 0;
    M2C_FIELD(arg0, s32 *, 0x28)   = 0;
    if (data_0214d4ac == 0) {
        func_020b44ec(arg0);
        func_020b4410(arg0);
    }
    func_020b42a0(arg0);
    return arg0;
}
