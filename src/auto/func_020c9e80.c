/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

extern s16 data_02136d8c;
extern s16 data_02153b50;

void func_020c9e80(void) {
    s32 temp_ip;

    temp_ip = *(s32 *)0x04000000;
    data_02136d8c = 0;
    data_02153b50 = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *)0x04000000 = temp_ip & ~0x30000;
}
