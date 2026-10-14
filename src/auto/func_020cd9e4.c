/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cdbf8(void);

extern s16 data_02153f50;

void func_020cd9e4(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_02153f50 = 1;
        return;
    }
    func_020cdbf8();
}
