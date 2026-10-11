/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_020cc314(M2C_UNK, M2C_UNK);
M2C_UNK func_020cd940(void);

extern M2C_UNK data_02153c08;

void func_020cc384(void) {
    func_020cd940();
    func_020cc314(M2C_FIELD(&data_02153c08, s32 *, 4), 0);
}
