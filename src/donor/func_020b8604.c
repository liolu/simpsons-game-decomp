/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* ADX_DecodeInfoExIdly from https://github.com/Yotona/twewy libs/cri/src/adx_dcd.c (license: CC0-1.0), reused by
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
int func_020b8604(ADXHeader *hdr, int arg1, short *arg2, short *arg3) {
    unsigned char version;
    char flags;
    unsigned int magic;

    if (func_020b8580(hdr, arg1, &version, &flags) != 0) {
        return -1;
    }

    if (version >= 4) {
        if (arg1 < 0x20) {
            return -1;
        }

        if (((unsigned short) ((short) ((((hdr->magic) >> 8) & 0xFF) | (((hdr->magic) << 8) & 0xFF00)))) != 0x8000) {
            return -2;
        }

        if (((short) ((((hdr->copyright_offset) >> 8) & 0xFF) | (((hdr->copyright_offset) << 8) & 0xFF00))) < 0x1C) {
            return -1;
        }

        arg2[0] = ((short) ((((hdr->unk18) >> 8) & 0xFF) | (((hdr->unk18) << 8) & 0xFF00)));
        arg3[0] = ((short) ((((hdr->unk1A) >> 8) & 0xFF) | (((hdr->unk1A) << 8) & 0xFF00)));
        arg2[1] = ((short) ((((hdr->unk1C) >> 8) & 0xFF) | (((hdr->unk1C) << 8) & 0xFF00)));
        arg3[1] = ((short) ((((hdr->unk1E) >> 8) & 0xFF) | (((hdr->unk1E) << 8) & 0xFF00)));
    } else {
        arg3[1] = 0;
        arg2[1] = 0;
        arg3[0] = 0;
        arg2[0] = 0;
    }

    return 0;
}
