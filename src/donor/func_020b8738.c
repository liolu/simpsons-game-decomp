/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADX_DecodeInfoExLoop from https://github.com/Yotona/twewy libs/cri/src/adx_dcd.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    union {
        unsigned short magic;
        struct {
            unsigned char magic_0;
            unsigned char magic_1;
        };
    };

    union {
        short copyright_offset;
        struct {
            unsigned char copyright_offset_0;
            unsigned char copyright_offset_1;
        };
    };

    char encoding_type;
    char block_size;
    char sample_bitdepth;
    char channel_count;
    unsigned char sample_rate_0;
    unsigned char sample_rate_1;
    unsigned char sample_rate_2;
    unsigned char sample_rate_3;
    unsigned char total_samples_0;
    unsigned char total_samples_1;
    unsigned char total_samples_2;
    unsigned char total_samples_3;

    union {
        unsigned short high_pass_frequency;
        struct {
            unsigned char high_pass_frequency_0;
            unsigned char high_pass_frequency_1;
        };
    };

    unsigned char version;
    unsigned char flags;
    char pad14[4];
    unsigned short unk18;
    unsigned short unk1A;
    unsigned short unk1C;
    unsigned short unk1E;
} ADXHeader;
int func_020b8580(ADXHeader *hdr, int arg1, char *version, char *flags);
int func_020b8738(char *ibuf, int ibuflen, int *lp_ins_nsmpl, short *nloop, short *lp_type, int *lp_spos, int *lp_sofst,
                  int *lp_epos, int *lp_eofst) {
    unsigned char ver;
    char rev;
    int err;
    int lp_inf_len;
    int ptr;

    *nloop = 0;
    err    = func_020b8580((ADXHeader *) ibuf, ibuflen, &ver, &rev);
    if (err != 0) {
        return err;
    }

    lp_inf_len = 24;
    lp_inf_len += 24;
    if (ver == 4) {
        lp_inf_len += 12;
    }

    if (ibuflen < lp_inf_len) {
        return -1;
    }

    if (((unsigned short) ((short) ((((((unsigned short *) ibuf)[0]) >> 8) & 0xFF) |
                                    (((((unsigned short *) ibuf)[0]) << 8) & 0xFF00)))) != 0x8000) {
        return -2;
    }

    if (((short) ((((((short *) ibuf)[1]) >> 8) & 0xFF) | (((((short *) ibuf)[1]) << 8) & 0xFF00))) < lp_inf_len - 4) {
        return -1;
    }

    ptr = 20;
    if (ver == 4) {
        ptr += 12;
    }
    ibuf += ptr;

    *lp_ins_nsmpl = ((short) ((((*(short *) &ibuf[0]) >> 8) & 0xFF) | (((*(short *) &ibuf[0]) << 8) & 0xFF00)));
    *nloop        = ((short) ((((*(short *) &ibuf[2]) >> 8) & 0xFF) | (((*(short *) &ibuf[2]) << 8) & 0xFF00)));
    if (*nloop != 1) {
        return -2;
    }

    *lp_type  = ((short) ((((*(short *) &ibuf[6]) >> 8) & 0xFF) | (((*(short *) &ibuf[6]) << 8) & 0xFF00)));
    *lp_spos  = ((int) (((((*(int *) &ibuf[8]) >> 24) & 0xFF) | (((*(int *) &ibuf[8]) >> 8) & 0xFF00)) |
                       (((*(int *) &ibuf[8]) << 8) & 0xFF0000) | ((*(int *) &ibuf[8]) << 24)));
    *lp_sofst = ((int) (((((*(int *) &ibuf[12]) >> 24) & 0xFF) | (((*(int *) &ibuf[12]) >> 8) & 0xFF00)) |
                        (((*(int *) &ibuf[12]) << 8) & 0xFF0000) | ((*(int *) &ibuf[12]) << 24)));
    *lp_epos  = ((int) (((((*(int *) &ibuf[16]) >> 24) & 0xFF) | (((*(int *) &ibuf[16]) >> 8) & 0xFF00)) |
                       (((*(int *) &ibuf[16]) << 8) & 0xFF0000) | ((*(int *) &ibuf[16]) << 24)));
    *lp_eofst = ((int) (((((*(int *) &ibuf[20]) >> 24) & 0xFF) | (((*(int *) &ibuf[20]) >> 8) & 0xFF00)) |
                        (((*(int *) &ibuf[20]) << 8) & 0xFF0000) | ((*(int *) &ibuf[20]) << 24)));

    return 0;
}
