/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cf9ac(void);
M2C_UNK func_020cfb90(M2C_UNK, M2C_UNK);
void func_020cfbb8(M2C_UNK, M2C_UNK);
void func_020e1434(M2C_UNK);
void func_020e1780(void);
void func_020e17c0(void);
void func_020e17f4(M2C_UNK, M2C_UNK);
void func_020e1874(M2C_UNK, M2C_UNK);
void func_020e18b0(void);
void func_020e1c98(M2C_UNK);

extern s32 data_021571a4;
extern s32 data_021571a8;
extern s32 data_021571ac;
extern M2C_UNK data_02157280;

void func_020e1ac8(void) {
    if (data_021571a4 != 0) {
        return;
    }
    data_021571a4 = 1;
    func_020e1780();
    data_021571a8 = 0;
    func_020cf9ac();
    do {

    } while (func_020cfb90(0xD, 1) == 0);
    func_020cfbb8(0xD, (s32) func_020e1874);
    func_020e18b0();
    func_020cfbb8(0xD, 0);
    func_020cfbb8(0xD, (s32) func_020e17f4);
    data_021571ac = 0;
    func_020e1c98((s32) &data_02157280);
    func_020cfbb8(0x11, (s32) func_020e17c0);
    func_020e1434(0);
}
