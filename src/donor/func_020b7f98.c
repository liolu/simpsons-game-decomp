/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* memcpy2 from https://github.com/Yotona/twewy libs/cri/src/adx_bsc.c (license: CC0-1.0), reused by tools/donor_match.py */
void func_020b7f98(void *dest, const void *src, int count) {
    short *_dest      = dest;
    const short *_src = src;

    while (count > 0) {
        *_dest++ = *_src++;
        count -= 1;
    }
}
