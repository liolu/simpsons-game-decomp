#include "m2c.h"

M2C_UNK func_020ca420(M2C_UNK *);                   /* extern */
extern M2C_UNK data_02153b6c;

void func_020ca388(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_020ca420(&data_02153b6c);
}
