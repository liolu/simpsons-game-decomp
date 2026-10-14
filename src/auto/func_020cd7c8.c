/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cba0c(M2C_UNK);                     /* extern */
M2C_UNK func_020cbb10(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_020cd724(M2C_UNK);                     /* extern */
extern u16 data_02153f1c;
extern s32 data_02153f20;
extern M2C_UNK data_02153f24;
extern M2C_UNK func_020cd740;

void func_020cd7c8(void) {
    if (data_02153f1c != 0) {
        return;
    }
    data_02153f1c = 1;
    func_020cd724(0);
    M2C_FIELD(&data_02153f24, s32 *, 0) = 0;
    M2C_FIELD(&data_02153f24, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    func_020cbb10(8, &func_020cd740);
    func_020cba0c(8);
    data_02153f20 = 0;
}
