/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cd9b0(M2C_UNK);
void func_020cdbf8(void);
M2C_UNK func_020d3afc(void);
void func_020d92f0(M2C_UNK, M2C_UNK);

void func_020d93c4(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    if (((s32) (*(u16 *)0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = func_020d3afc();
        if (var_r0 == 4) {
            do {
                func_020cd9b0(0xA3A47);
                var_r0 = func_020d3afc();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        func_020d92f0(1, 1);
    }
    func_020cdbf8();
}
