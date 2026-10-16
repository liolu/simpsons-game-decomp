/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADX_DecodeSte4 from https://github.com/Yotona/twewy libs/cri/src/adx_dcd.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_020b94fc(char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1,
                         short *key, short km, short ka);
extern int data_02153904;
int func_020b8d54(char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1,
                  short *key, short km, short ka);
int func_020b9168(char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1,
                  short *key, short km, short ka);
int func_020b94fc(char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1,
                  short *key, short km, short ka) {
    if (data_02153904 == 0) {
        return func_020b9168(ibuf, nblk, obuf_l, dly_l, obuf_r, dly_r, k0, k1, key, km, ka);
    }
    return func_020b8d54(ibuf, nblk, obuf_l, dly_l, obuf_r, dly_r, k0, k1, key, km, ka);
}
