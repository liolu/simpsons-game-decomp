/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADX_ScanInfoCode from https://github.com/Yotona/twewy libs/cri/src/adx_dcd.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_020b83a0(char *ibuf, int ibuflen, short *dlen);
int func_020b83a0(char *ibuf, int ibuflen, short *dlen) {
    int ptr;
    int minptr = 0x7FFFFFFF;

    for (ptr = 0; ptr < ibuflen - 1; ptr += 2) {
        if (*(unsigned short *) &ibuf[ptr] == 0x80) {
            minptr = (ptr < minptr) ? ptr : minptr;
            break;
        }
    }

    if (minptr != 0x7FFFFFFF) {
        *dlen = minptr;
        return 0;
    } else {
        *dlen = 0;
        return -1;
    }
}
