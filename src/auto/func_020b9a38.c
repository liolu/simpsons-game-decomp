#include "m2c.h"
#include "engine.h"

void func_020c670c(void);

extern M2C_UNK data_0214dd18;

void func_020b9a38(void) {
    if (M2C_FIELD(&data_0214dd18, M2C_UNK (**)(s32), 8) != NULL) {
        M2C_FIELD(&data_0214dd18, M2C_UNK (**)(s32), 8)(M2C_FIELD(&data_0214dd18, s32 *, 4));
    }
    func_020c670c();
    if (M2C_FIELD(&data_0214dd18, M2C_UNK (**)(s32), 0) == NULL) {
        return;
    }
    M2C_FIELD(&data_0214dd18, M2C_UNK (**)(s32), 0)(M2C_FIELD(&data_0214dd18, s32 *, 0xC));
}
