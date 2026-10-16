/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020e5f78 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/string.c (license: none), reused by
 * tools/donor_match.py */
extern char *func_020e5f78(char *dest, const char *src);
char *func_020e5f78(char *dest, const char *src) {
    const char *p = src;
    char *q       = dest;

    while (*q++ != 0)
        ;
    q--;
    while ((*q++ = *p++) != 0)
        ;
    return dest;
}
