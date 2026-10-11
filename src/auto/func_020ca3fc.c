#include "m2c.h"

M2C_UNK func_020ca420(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02153b62;

void func_020ca3fc(void) {
    *(s32 *)0x04000000 &= ~0x40000000;
    func_020ca420(&data_02153b62);
}
