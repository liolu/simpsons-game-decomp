#include "m2c.h"
#include "engine.h"

void func_0202c18c(M2C_UNK);
void func_0205e454(M2C_UNK);

extern M2C_UNK data_0214ca5c;

void func_0205dbc4(s32 arg0) {
    s32 var_r4;
    s32 var_r5;

    var_r5 = arg0 + 0x14;
    var_r4 = 0;
    do {
        func_0205e454(var_r5);
        var_r4 += 1;
        var_r5 += 0x18;
    } while (var_r4 < 2);
    func_0202c18c((s32) &data_0214ca5c);
}
