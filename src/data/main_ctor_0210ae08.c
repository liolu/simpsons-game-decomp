/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_020f77d4[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_0210ae08[1] = {(u32) &__sinit_020f77d4};
