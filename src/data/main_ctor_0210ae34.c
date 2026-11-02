/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_020f8fd4[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_0210ae34[1] = {(u32) &__sinit_020f8fd4};
