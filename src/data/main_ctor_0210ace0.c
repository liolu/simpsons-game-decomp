/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_020f5fb8[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_0210ace0[1] = {(u32) &__sinit_020f5fb8};
