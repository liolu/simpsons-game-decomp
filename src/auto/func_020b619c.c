#include "m2c.h"

M2C_UNK func_0202c404(void *);                      /* extern */
extern M2C_UNK data_0214d4b8;

s32 func_020b619c(s32 arg0, void *arg1) {
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), s32 *, 0x48) = (s32) M2C_FIELD(arg1, s8 *, 8);
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), s32 *, 0x4C) = (s32) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), s32 *, 0x50) = (s32) M2C_FIELD(arg1, s16 *, 0xC);
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), u8 *, 0x70) = (u8) M2C_FIELD(arg1, u8 *, 0x12);
    func_0202c404(M2C_FIELD(&data_0214d4b8, void **, 0xC) + 0x58);
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), s8 *, 0x5B) = (s8) M2C_FIELD(arg1, s16 *, 0xE);
    M2C_FIELD(M2C_FIELD(&data_0214d4b8, void **, 0xC), s8 *, 0x5C) = (s8) M2C_FIELD(arg1, s16 *, 0x10);
    return 2;
}
