#include "m2c.h"
#include "engine.h"

void func_0201924c(void);
void func_02019d14(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201acf0(M2C_UNK);
void func_0201aed4(M2C_UNK, M2C_UNK);
void func_0201c1c0(M2C_UNK);
void func_0201c1e8(M2C_UNK);
void func_0201c230(M2C_UNK);
void func_0201c260(M2C_UNK);

extern M2C_UNK data_0210c93c;
extern M2C_UNK data_02149c20;
extern M2C_UNK data_02149c2c;

void func_0201c030(void) {
    func_0201924c();
    M2C_FIELD(&data_02149c20, s32 *, 0xB4) = 0x1F;
    func_02019d14((s32) &data_02149c2c, (s32) &data_0210c93c, 0, 0);
    func_0201acf0(2);
    func_0201c1c0(0x7F);
    func_0201c1e8(0x7F);
    func_0201c230(0x7F);
    func_0201c260(0x7F);
    func_0201aed4(0xA, 2);
}
