/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cc614(void);
M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

void func_020cc168(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_020cd940();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020cc614();
    func_020cd954(temp_r4);
}
