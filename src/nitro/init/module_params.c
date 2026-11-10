#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_0213f9e0[]; /* SDK_AUTOLOAD_LIST */
extern char data_0213f9f8[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_02137ac0[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_0213f9e0,
    (void *) data_0213f9f8,
    (void *) data_02137ac0,
    (void *) data_02137ac0,
    (void *) 0x02157d00, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x03027532, /* SDK version 3.2.30002 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
