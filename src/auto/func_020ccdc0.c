/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cc21c(M2C_UNK);
void func_020ccc70(M2C_UNK, M2C_UNK);
M2C_UNK func_020cd940(void);
void func_020cd954(M2C_UNK);

extern M2C_UNK data_02153c08;

void func_020ccdc0(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r7;

    temp_r4 = func_020cd940();
    temp_r7 = M2C_FIELD(&data_02153c08, s32 *, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_020ccc70(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, s32 *, 0x84) = arg0;
        func_020cc21c(arg0);
        M2C_FIELD(temp_r7, s32 *, 0x84) = 0;
        goto loop_1;
    }
    func_020cd954(temp_r4);
}
