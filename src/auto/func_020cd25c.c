/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020ccf70(M2C_UNK, M2C_UNK);
void func_020ccf84(M2C_UNK, M2C_UNK);
M2C_UNK func_020ccf98(M2C_UNK);
M2C_UNK func_020cd084(M2C_UNK);

extern s32 data_02153e60;

void func_020cd25c(void) {
    if (data_02153e60 != 0) {
        return;
    }
    data_02153e60 = 1;
    func_020ccf84(0, func_020cd084(0));
    func_020ccf70(0, func_020ccf98(0));
    func_020ccf70(2, 0);
    func_020ccf84(2, 0);
    func_020ccf84(3, func_020cd084(3));
    func_020ccf70(3, func_020ccf98(3));
    func_020ccf84(4, func_020cd084(4));
    func_020ccf70(4, func_020ccf98(4));
    func_020ccf84(5, func_020cd084(5));
    func_020ccf70(5, func_020ccf98(5));
    func_020ccf84(6, func_020cd084(6));
    func_020ccf70(6, func_020ccf98(6));
}
