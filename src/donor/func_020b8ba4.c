/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADX_DecodeMono4 from https://github.com/Yotona/twewy libs/cri/src/adx_dcd.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int func_020b8ba4(char *ibuf, int nblk, short *obuf, short *dly, short k0, short k1, short *key, short km, short ka);
extern const int data_02105d94[16];
extern int data_021300ac;
int func_020b8ba4(char *ibuf, int nblk, short *obuf, short *dly, short k0, short k1, short *key, short km, short ka) {
    int blkno;
    int sno;
    int d0 = dly[0];
    int d1 = dly[1];
    int dt;
    int qsig;
    short code;
    short scale;

    for (blkno = 0; blkno < nblk; blkno++) {
        code = ((short) ((((*(short *) ibuf) >> 8) & 0xFF) | (((*(short *) ibuf) << 8) & 0xFF00)));
        if (code & 0x8000) {
            return blkno;
        }
        ibuf += 2;

        scale = ((code ^ *key) & 0x1FFF) + 1;
        *key  = *key * km + ka;
        *key &= 0x7FFF;

        for (sno = 0; sno < 32; sno += 2) {
            qsig = *ibuf++;

            dt = (qsig >> 4) * scale + ((k0 * d0 + k1 * d1) >> 12);
            dt += data_021300ac;
            if ((dt) > 0x7FFF || (dt) < -0x8000) {
                if ((dt) < -0x8000) {
                    (dt) = -0x8000;
                } else if ((dt) > 0x7FFF) {
                    (dt) = 0x7FFF;
                }
            };
            d1      = d0;
            d0      = dt;
            *obuf++ = dt;

            qsig = data_02105d94[qsig & 0xF];
            dt   = qsig * scale + ((k0 * d0 + k1 * d1) >> 12);
            dt += data_021300ac;
            if ((dt) > 0x7FFF || (dt) < -0x8000) {
                if ((dt) < -0x8000) {
                    (dt) = -0x8000;
                } else if ((dt) > 0x7FFF) {
                    (dt) = 0x7FFF;
                }
            };
            d1      = d0;
            d0      = dt;
            *obuf++ = dt;
        }
    }

    dly[0] = d0;
    dly[1] = d1;
    return nblk;
}
