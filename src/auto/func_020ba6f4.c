#include "engine.h"
#include "m2c.h"

void func_020b8234(void);
void func_020b8240(void);
void func_020b9cd8(M2C_UNK);
void func_020ba688(M2C_UNK);
void func_020ba760(M2C_UNK);
void func_020ba890(M2C_UNK);

void func_020ba6f4(s32 arg0) {
    s8 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xA8) > 0) {
        func_020b8234();
        func_020ba760(arg0);
        func_020b8240();
    }
    temp_r0 = M2C_FIELD(arg0, s8 *, 1);
    if (temp_r0 == 2) {
        func_020ba688(arg0);
    } else if (temp_r0 == 1) {
        func_020b9cd8(arg0);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) <= 0) {
        return;
    }
    func_020b8234();
    func_020ba890(arg0);
    func_020b8240();
}
