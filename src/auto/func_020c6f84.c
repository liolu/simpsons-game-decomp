#include "m2c.h"

M2C_UNK func_020e499c(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02136d3c;
extern M2C_UNK data_02153908;
extern M2C_UNK data_021539a4;

void func_020c6f84(M2C_UNK arg0, M2C_UNK arg1) {
    func_020e499c(&data_021539a4, &data_02136d3c, arg0, arg1);
    M2C_FIELD(&data_02153908, M2C_UNK(**)(M2C_UNK *), 0xDC)(&data_021539a4);
}
