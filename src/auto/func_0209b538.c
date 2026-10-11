#include "m2c.h"
#include "engine.h"

M2C_UNK func_020483c4(void);
void func_02099a78(M2C_UNK);
void func_02099eac(M2C_UNK);
void func_0209a010(M2C_UNK);
void func_0209b5c4(M2C_UNK);
void func_020b5ba0(void);
M2C_UNK func_020b5dc8(M2C_UNK);
M2C_UNK func_020b60d8(void);

extern s32 data_0214d4c4;

void func_0209b538(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
    case 0:
        func_0209b5c4(arg0);
        return;
    case 1:
        func_0209b5c4(arg0);
        func_02099eac(func_020483c4());
        return;
    case 2:
        func_0209b5c4(arg0);
        if (func_020b5dc8(data_0214d4c4 + 4) == 0) {
            func_02099a78(func_020483c4());
        } else if (func_020b60d8() != 0) {
            func_02099a78(func_020483c4());
        } else {
            func_0209a010(func_020483c4());
        }
        func_020b5ba0();
        return;
    }
}
