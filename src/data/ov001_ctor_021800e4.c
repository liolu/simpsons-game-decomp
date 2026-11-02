/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov001_0217ea74[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov001_021800e4[1] = {(u32) &__sinit_ov001_0217ea74};
