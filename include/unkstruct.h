#include "main.h"

/** Unkstruct section:
 * These are to be merged later on
 */

typedef union { // Big assumption here...
    s32 value;  // size = 0x4
    struct {
        s16 low;
        s16 high;
    } Data; // size = 0x4
    struct {
        u8 unk0;
        u8 unk1;
        s16 unk2;
    } Data1; // size = 0x4

} UnkUnion1; // side = 0x4

typedef union {
    s16 data;
    struct {
        u8 unk0;
        u8 unk1;
    } data1;
} UnkUnion2; // size = 0x2

typedef union {
    s16 modeS16;
    struct {
        u8 unk0;
        u8 unk1;
    } modeU8;
} unkUnion3;

typedef union {
    byte typeByte;
    short typeShort;
    int typeInt;
} MultiType;

typedef struct {
    /* 0x0 */ char pad0[0xA];
    /* 0xA */ s16 unkA;
    /* 0xC */ s16 unkC;
    /* 0xE */ s16 unkE;
} Unkstruct4; // size = 0x10

typedef struct {
    /* 0x00 */ s16 unk0;
    /* 0x02 */ s16 unk2; // compared to Entity posX
    /* 0x04 */ u16 unk4;
    /* 0x06 */ u16 unk6; // compared to Entity posY
    /* 0x08 */ u16 unk8;
    /* 0x0A */ s16 unkA;
    /* 0x0C */ u16 unkC;
    /* 0x0E */ s16 unkE;
    /* 0x10 */ s16 unk10;
    /* 0x12 */ s16 unk12;
    /* 0x14 */ s16 unk14;
    /* 0x16 */ s16 unk16;
    /* 0x18 */ s16 unk18;
    /* 0x1A */ s16 unk1A;
    /* 0x1C */ s16 unk1C;
    /* 0x1E */ s16 unk1E;
    /* 0x20 */ s16 unk20;
    /* 0x22 */ u8 hitboxWidth;
    /* 0x23 */ u8 hitboxHeight;
    /* 0x24 */ s32 unk24;
} Unkstruct5; // size = 0x28

typedef struct {
    /* 0x0 */ s16 x;
    /* 0x2 */ s16 y;
} Unkstruct6; // size = 0x4

typedef struct {
    /* 0x0 */ void* addr1;
    /* 0x4 */ void* addr2;
    /* 0x8 */ u16 unk8;
    /* 0xA */ u16 unkA;
    /* 0xC */ u16 unkC;
    /* 0xE */ u16 unkE;
} Unkstruct8; // size = 0x10

typedef struct {
    /* 0x0 */ u16 programId;
    /* 0x2 */ u16 unk2;
    /* 0x4 */ u16 unk4;
    /* 0x6 */ u16 unk6;
    /* 0x8 */ u16 unk8;
} Unkstruct10; // size = 0xA

typedef struct {
    /* 0x00 */ char pad0[0x4];
    /* 0x04 */ u16 unk4;
    /* 0x08 */ char pad8[0x6];
} unkstruct_80072FA0; // size = 0xC

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ char unk4[0xC];
} unkStruct_800A872C; // size = 0x10

typedef struct {
    /* 0x00 */ u8 unk0[0x278];
} Unkstruct_8013B160; // size = 0x278

typedef struct {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
} Unkstruct_8003C794;

typedef struct {
    /* 0x00 */ s32 unk00[2];
    /* 0x08 */ char pad8[0x28];
} Unkstruct_800ECE2C_sub; // size = 0x30

typedef struct Unkstruct_800ECE2C {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ char unk04[0x38];
    /* 0x3C */ s32 unk3C;
    /* 0x40 */ char unk40[0x14];
    /* 0x54 */ Unkstruct_800ECE2C_sub unk54[16];
} Unkstruct_800ECE2C;

typedef struct {
    /* 0x00 */ u8 unk0;
    /* 0x01 */ u8 unk1;
    /* 0x02 */ u8 pad2[0x1E - 0x02];
} Unkstruct_80137638; // size = 0x1E

typedef struct {
    /* 0x00 */ u8 unk0;
    /* 0x01 */ char pad1[0x33];
} Unkstruct_800A4B12; // size = 0x34

typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ char pad2[0x32];
} Unkstruct_80086FFA; // size = 0x34

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ char pad8[0xC];
} Unkstruct_80138094; // size = 0x14

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ char pad8[0x2E];
    /* 0x36 */ s16 unk36;
} Unkstruct_80138FB4; // size = unknown

typedef struct {
    /* 0x00 */ s32 unk0;
} Unkstruct_80137990;

typedef struct {
    /* 0x000 */ s32 unk000;
    /* 0x004 */ char pad004[0x274];
} Unkstruct_8013B15C; // size = 0x278

typedef struct {
    /* 0x00 */ u16 unk0;
    /* 0x02 */ char pad2[0x6];
    /* 0x8 */ u16 unk8;
    /* 0xA */ char padA[0x36];
} Unkstruct_8006C3CC; // size = 0x40

typedef struct {
    /* 0x00 */ s16 sp10;
    /* 0x02 */ char pad2[0x2];
    /* 0x04 */ u16 sp14;
    /* 0x06 */ char pad6[0x1];
    /* 0x07 */ u8 sp17;
    /* 0x08 */ u16 sp18;
    /* 0x0A */ char padA[0x2];
    /* 0x0C */ u16 sp1C;
    /* 0x0E */ u16 sp1E;
    /* 0x10 */ u8 sp20;
    /* 0x11 */ char pad11[0x1];
    /* 0x12 */ u16 sp22; // entity->objectRoomIndex
} Unkstruct_8011A290;

typedef struct {
    /* 0x00 */ s32 sp10;
    /* 0x04 */ s32 sp14;
    /* 0x08 */ s32 sp18;
    /* 0x0C */ s32 sp1C;
    /* 0x10 */ s32 sp20;
    /* 0x14 */ s16 sp24;
    /* 0x18 */ s16 sp26;
    /* 0x1C */ s16 sp28;
    /* 0x20 */ s16 sp2A;
    /* 0x24 */ s32 sp2C;
    /* 0x28 */ s32 sp30;
} Unkstruct7; // size = 0x2C

typedef struct {
    /* 0x00 */ char pad0[0xD];
    /* 0x0D */ s8 sp1D;
    /* 0x0E */ s16 sp1E;
    /* 0x10 */ s16 sp20;
    /* 0x12 */ s16 sp22;
    /* 0x14 */ s16 sp24;
    /* 0x16 */ s16 sp26;
    /* 0x18 */ s16 sp28;
} Unkstruct_8011A328;

typedef struct {
    /* 0x00 */ s16 unk0; /* D_800ACEC6 */
    /* 0x02 */ char pad2[0xE];
    /* 0x10 */ s16 unk10; /* D_800ACED6 */
    /* 0x12 */ char pad12[0x8];
    /* 0x1A */ s16 unk1A; /* D_800ACEE0 */
    /* 0x1C */ s16 unk1C; /* D_800ACEE2 */
} Unkstruct_800ACEC6;

// Used in:
// func_8015E7B4
// func_8010BF64
typedef struct {
    /* 0x00 */ char pad0[0x14];
    /* 0x14 */ s32 unk14;
    /* 0x18 */ s32 unk18;
    /* 0x1C */ s32 unk1C;
    /* 0x20 */ s32 unk20;
} Unkstruct_8010BF64;

// related to SFX
typedef struct {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 unk04;
} Unkstruct_801390DC;

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
} Unkstruct_800FD5BC;

typedef struct {
    /* 0x00 */ u8 unk00[3];
    /* 0x03 */ char unk03[9];
} Unkstruct_80128BBC_Sub;

typedef struct Unkstruct_80128BBC {
    /* 0x00 */ char unk00[4];
    /* 0x04 */ Unkstruct_80128BBC_Sub unk04[4];
} Unkstruct_80128BBC;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u32 unk1C;
    u32 unk20;
} Unkstruct_Entrypoint;

typedef struct Unkstruct_aSimCBinDemoKey {
    s32 unk0;
    s8 unk4;
    char pad5[0x3];
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} Unkstruct_aSimCBinDemoKey;
