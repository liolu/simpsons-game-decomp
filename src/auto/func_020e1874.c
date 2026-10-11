/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cdbf8(void);

extern s16 data_02157198;

void func_020e1874(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02157198 = 1;
        return;
    }
    func_020cdbf8();
}
