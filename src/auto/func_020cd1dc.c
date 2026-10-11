/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cc9f4();                                /* extern */
M2C_UNK func_020ccf70(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ccf84(M2C_UNK, s32);                /* extern */
s32 func_020ccf98(M2C_UNK);                         /* extern */
s32 func_020cd084(M2C_UNK);                         /* extern */
M2C_UNK func_020cd520(s32);                         /* extern */
M2C_UNK func_020cd528(s32);                         /* extern */
extern s32 data_02153e64;

void func_020cd1dc(void) {
    func_020ccf84(2, func_020cd084(2));
    func_020ccf70(2, func_020ccf98(2));
    if ((data_02153e64 != 0) && ((func_020cc9f4() & 3) != 1)) {
        return;
    }
    func_020cd520(0x0200002B);
    func_020cd528(0x023E0021);
}
