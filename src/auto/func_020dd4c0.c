/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

extern void *data_0215715c;

void func_020dd4c0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020cd940();
    M2C_FIELD(data_0215715c, s32 *, 0x14E4) = arg0;
    func_020cd954(temp_r0);
}
