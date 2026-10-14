/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ceb00(void);
M2C_UNK func_020ceb48(void);
void func_020ceba0(void);
M2C_UNK func_020cec70(void);
void func_020cee34(M2C_UNK);
M2C_UNK func_020cf0d8(M2C_UNK);

s32 func_020cf03c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_020ceb00() == 0) {
        return 0;
    }
    temp_r0_3 = func_020ceb48();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_020cec70() > 0) {
        do {

        } while (func_020cf0d8(0) != 0);
        temp_r0_2 = func_020ceb48();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020cee34(1);
block_12:
    func_020ceba0();
    do {
        func_020cf0d8(1);
        temp_r0 = func_020ceb48();
    } while (temp_r0 == 0);
    return temp_r0;
}
