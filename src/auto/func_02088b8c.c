#include "m2c.h"

M2C_UNK func_0200f744(void *);                      /* extern */
M2C_UNK func_0208ba54(void *);                      /* extern */
extern M2C_UNK data_021297f8;
extern M2C_UNK data_0212980c;
extern M2C_UNK data_021298cc;
extern M2C_UNK data_021298e0;
extern void *data_0214ce00;

void *func_02088b8c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021297f8;
    M2C_FIELD(arg0, M2C_UNK **, 0x10) = &data_0212980c;
    M2C_FIELD(arg0, M2C_UNK **, 0x1C) = &data_021298cc;
    M2C_FIELD(arg0, M2C_UNK **, 0x28) = &data_021298e0;
    if (M2C_FIELD(data_0214ce00, u8 *, 8) != 0) {
        M2C_FIELD(data_0214ce00, u8 *, 8) = 0U;
    }
    func_0208ba54(arg0);
    func_0200f744(arg0);
    return arg0;
}
