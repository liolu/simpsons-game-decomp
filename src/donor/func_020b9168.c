/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADX_DecodeSte4AsSte from https://github.com/Yotona/twewy libs/cri/src/adx_dcd.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern const int data_02105d94[16];
extern int data_021300ac;
int func_020b9168(char *ibuf, int nblk, short *obuf_l, short *dly_l, short *obuf_r, short *dly_r, short k0, short k1,
                  short *key, short km, short ka) {
    int sno;
    int blkno;
    int dt;
    int qsig_l;
    int nblk2 = nblk / 2;
    int qsig_r;
    int d0_l = dly_l[0];
    int d1_l = dly_l[1];
    int d0_r = dly_r[0];
    int d1_r = dly_r[1];
    short code;
    short scale_l;
    short scale_r;

    for (blkno = 0; blkno < nblk2; blkno++) {
        code = ((short) ((((*(short *) ibuf) >> 8) & 0xFF) | (((*(short *) ibuf) << 8) & 0xFF00)));
        if (code & 0x8000) {
            return blkno * 2;
        }
        scale_l = ((code ^ *key) & 0x1FFF) + 1;
        *key    = *key * km + ka;
        *key &= 0x7FFF;

        code = ((short) ((((*(short *) (ibuf + 18)) >> 8) & 0xFF) | (((*(short *) (ibuf + 18)) << 8) & 0xFF00)));
        if (code & 0x8000) {
            return blkno * 2;
        }
        scale_r = ((code ^ *key) & 0x1FFF) + 1;
        ibuf += 2;
        *key = *key * km + ka;
        *key &= 0x7FFF;

        for (sno = 0; sno < 32; sno += 2) {
            qsig_l = ibuf[0];
            qsig_r = ibuf[18];
            ibuf++;

            dt = (qsig_l >> 4) * scale_l + ((k0 * d0_l + k1 * d1_l) >> 12);
            dt += data_021300ac;
            if ((dt) > 0x7FFF || (dt) < -0x8000) {
                if ((dt) < -0x8000) {
                    (dt) = -0x8000;
                } else if ((dt) > 0x7FFF) {
                    (dt) = 0x7FFF;
                }
            };
            d1_l = d0_l;
            d0_l = dt;

            dt = (qsig_r >> 4) * scale_r + ((k0 * d0_r + k1 * d1_r) >> 12);
            dt += data_021300ac;
            if ((dt) > 0x7FFF || (dt) < -0x8000) {
                if ((dt) < -0x8000) {
                    (dt) = -0x8000;
                } else if ((dt) > 0x7FFF) {
                    (dt) = 0x7FFF;
                }
            };
            d1_r = d0_r;
            d0_r = dt;

            *obuf_l++ = d0_l;
            *obuf_r++ = d0_r;

            qsig_l = data_02105d94[qsig_l & 0xF];
            qsig_r = data_02105d94[qsig_r & 0xF];

            dt = qsig_l * scale_l + ((k0 * d0_l + k1 * d1_l) >> 12);
            dt += data_021300ac;
            if ((dt) > 0x7FFF || (dt) < -0x8000) {
                if ((dt) < -0x8000) {
                    (dt) = -0x8000;
                } else if ((dt) > 0x7FFF) {
                    (dt) = 0x7FFF;
                }
            };
            d1_l = d0_l;
            d0_l = dt;

            dt = qsig_r * scale_r + ((k0 * d0_r + k1 * d1_r) >> 12);
            dt += data_021300ac;
            if ((dt) > 0x7FFF || (dt) < -0x8000) {
                if ((dt) < -0x8000) {
                    (dt) = -0x8000;
                } else if ((dt) > 0x7FFF) {
                    (dt) = 0x7FFF;
                }
            };
            d1_r = d0_r;
            d0_r = dt;

            *obuf_l++ = d0_l;
            *obuf_r++ = d0_r;
        }
        ibuf += 18;
    }

    dly_l[0] = d0_l;
    dly_l[1] = d1_l;
    dly_r[0] = d0_r;
    dly_r[1] = d1_r;
    return nblk;
}
