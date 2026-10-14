/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);
void func_020cdbf8(void);
void func_020df0b0(void);

extern void *data_0215715c;

void func_020df070(void) {
    s32 temp_r4;

    temp_r4 = func_020cd940();
    if (M2C_FIELD(data_0215715c, s32 *, 0x1320) == 0) {
        func_020cdbf8();
    }
    func_020df0b0();
    func_020cd954(temp_r4);
}
