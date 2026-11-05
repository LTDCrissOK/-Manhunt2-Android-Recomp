#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00320670
// Address: 0x320670 - 0x321870
void sub_00320670_0x320670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320670_0x320670");
#endif

    switch (ctx->pc) {
        case 0x320870u: goto label_320870;
        case 0x32087cu: goto label_32087c;
        case 0x320890u: goto label_320890;
        case 0x320898u: goto label_320898;
        default: break;
    }

    ctx->pc = 0x320670u;

    // 0x320670: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x320670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x320674: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x320674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x320678: 0xffb00470  sd          $s0, 0x470($sp)
    ctx->pc = 0x320678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 16));
    // 0x32067c: 0xffb10478  sd          $s1, 0x478($sp)
    ctx->pc = 0x32067cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 17));
    // 0x320680: 0xffb20480  sd          $s2, 0x480($sp)
    ctx->pc = 0x320680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 18));
    // 0x320684: 0xffb30488  sd          $s3, 0x488($sp)
    ctx->pc = 0x320684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 19));
    // 0x320688: 0xffb40490  sd          $s4, 0x490($sp)
    ctx->pc = 0x320688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 20));
    // 0x32068c: 0xffb50498  sd          $s5, 0x498($sp)
    ctx->pc = 0x32068cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1176), GPR_U64(ctx, 21));
    // 0x320690: 0xffb604a0  sd          $s6, 0x4A0($sp)
    ctx->pc = 0x320690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 22));
    // 0x320694: 0xffb704a8  sd          $s7, 0x4A8($sp)
    ctx->pc = 0x320694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1192), GPR_U64(ctx, 23));
    // 0x320698: 0xffbe04b0  sd          $fp, 0x4B0($sp)
    ctx->pc = 0x320698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 30));
    // 0x32069c: 0x14a20468  bne         $a1, $v0, . + 4 + (0x468 << 2)
    ctx->pc = 0x32069Cu;
    {
        const bool branch_taken_0x32069c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3206A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32069Cu;
        // 0x3206a0: 0xffbf04b8  sd          $ra, 0x4B8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32069c) {
            ctx->pc = 0x321840u;
            goto label_321840;
        }
    }
    ctx->pc = 0x3206A4u;
    // 0x3206a4: 0x10800466  beqz        $a0, . + 4 + (0x466 << 2)
    ctx->pc = 0x3206A4u;
    {
        const bool branch_taken_0x3206a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3206A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3206A4u;
        // 0x3206a8: 0x3c02005b  lui         $v0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3206a4) {
            ctx->pc = 0x321840u;
            goto label_321840;
        }
    }
    ctx->pc = 0x3206ACu;
    // 0x3206ac: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3206acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3206b0: 0x24532840  addiu       $s3, $v0, 0x2840
    ctx->pc = 0x3206b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x3206b4: 0xafa30404  sw          $v1, 0x404($sp)
    ctx->pc = 0x3206b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 3));
    // 0x3206b8: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3206b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3206bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3206bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3206c0: 0xafa203fc  sw          $v0, 0x3FC($sp)
    ctx->pc = 0x3206c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 2));
    // 0x3206c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3206c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3206c8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3206c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3206cc: 0xafa4040c  sw          $a0, 0x40C($sp)
    ctx->pc = 0x3206ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 4));
    // 0x3206d0: 0xafa50414  sw          $a1, 0x414($sp)
    ctx->pc = 0x3206d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 5));
    // 0x3206d4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x3206d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3206d8: 0xafa2041c  sw          $v0, 0x41C($sp)
    ctx->pc = 0x3206d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 2));
    // 0x3206dc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3206dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3206e0: 0xafa30424  sw          $v1, 0x424($sp)
    ctx->pc = 0x3206e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1060), GPR_U32(ctx, 3));
    // 0x3206e4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3206e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3206e8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x3206e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3206ec: 0xafa4042c  sw          $a0, 0x42C($sp)
    ctx->pc = 0x3206ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1068), GPR_U32(ctx, 4));
    // 0x3206f0: 0xafa50434  sw          $a1, 0x434($sp)
    ctx->pc = 0x3206f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 5));
    // 0x3206f4: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x3206f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x3206f8: 0xafa2043c  sw          $v0, 0x43C($sp)
    ctx->pc = 0x3206f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1084), GPR_U32(ctx, 2));
    // 0x3206fc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3206fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x320700: 0xafa30444  sw          $v1, 0x444($sp)
    ctx->pc = 0x320700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1092), GPR_U32(ctx, 3));
    // 0x320704: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x320704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x320708: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x320708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x32070c: 0xafa4044c  sw          $a0, 0x44C($sp)
    ctx->pc = 0x32070cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 4));
    // 0x320710: 0xafa50454  sw          $a1, 0x454($sp)
    ctx->pc = 0x320710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 5));
    // 0x320714: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x320714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x320718: 0xafa2045c  sw          $v0, 0x45C($sp)
    ctx->pc = 0x320718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1116), GPR_U32(ctx, 2));
    // 0x32071c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x32071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x320720: 0xafa30464  sw          $v1, 0x464($sp)
    ctx->pc = 0x320720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 3));
    // 0x320724: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x320724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x320728: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x320728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x32072c: 0xafa4046c  sw          $a0, 0x46C($sp)
    ctx->pc = 0x32072cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1132), GPR_U32(ctx, 4));
    // 0x320730: 0xafa503a4  sw          $a1, 0x3A4($sp)
    ctx->pc = 0x320730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 932), GPR_U32(ctx, 5));
    // 0x320734: 0x27a30170  addiu       $v1, $sp, 0x170
    ctx->pc = 0x320734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x320738: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x320738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
    // 0x32073c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x32073cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x320740: 0xafa303b4  sw          $v1, 0x3B4($sp)
    ctx->pc = 0x320740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 3));
    // 0x320744: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x320744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x320748: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x320748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x32074c: 0xafa403bc  sw          $a0, 0x3BC($sp)
    ctx->pc = 0x32074cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 4));
    // 0x320750: 0xafa503c4  sw          $a1, 0x3C4($sp)
    ctx->pc = 0x320750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 5));
    // 0x320754: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x320754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x320758: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x320758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
    // 0x32075c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x32075cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x320760: 0xafa303d4  sw          $v1, 0x3D4($sp)
    ctx->pc = 0x320760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 3));
    // 0x320764: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x320764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x320768: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x320768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x32076c: 0xafa403d8  sw          $a0, 0x3D8($sp)
    ctx->pc = 0x32076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 4));
    // 0x320770: 0xafa503dc  sw          $a1, 0x3DC($sp)
    ctx->pc = 0x320770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 5));
    // 0x320774: 0x27a301f0  addiu       $v1, $sp, 0x1F0
    ctx->pc = 0x320774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x320778: 0xafa203e0  sw          $v0, 0x3E0($sp)
    ctx->pc = 0x320778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 2));
    // 0x32077c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x32077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x320780: 0xafa303e4  sw          $v1, 0x3E4($sp)
    ctx->pc = 0x320780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 3));
    // 0x320784: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x320784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x320788: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x320788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x32078c: 0xafa403e8  sw          $a0, 0x3E8($sp)
    ctx->pc = 0x32078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 4));
    // 0x320790: 0xafa503ec  sw          $a1, 0x3EC($sp)
    ctx->pc = 0x320790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 5));
    // 0x320794: 0x27a30230  addiu       $v1, $sp, 0x230
    ctx->pc = 0x320794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x320798: 0xafa203f0  sw          $v0, 0x3F0($sp)
    ctx->pc = 0x320798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 2));
    // 0x32079c: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x32079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
    // 0x3207a0: 0xafa303f4  sw          $v1, 0x3F4($sp)
    ctx->pc = 0x3207a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 3));
    // 0x3207a4: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x3207a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x3207a8: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x3207a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x3207ac: 0xafa403f8  sw          $a0, 0x3F8($sp)
    ctx->pc = 0x3207acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 4));
    // 0x3207b0: 0xafa50400  sw          $a1, 0x400($sp)
    ctx->pc = 0x3207b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 5));
    // 0x3207b4: 0x27a30270  addiu       $v1, $sp, 0x270
    ctx->pc = 0x3207b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x3207b8: 0xafa20408  sw          $v0, 0x408($sp)
    ctx->pc = 0x3207b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
    // 0x3207bc: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x3207bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x3207c0: 0xafa30410  sw          $v1, 0x410($sp)
    ctx->pc = 0x3207c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 3));
    // 0x3207c4: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3207c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3207c8: 0xafa40418  sw          $a0, 0x418($sp)
    ctx->pc = 0x3207c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 4));
    // 0x3207cc: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x3207ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x3207d0: 0xafa50420  sw          $a1, 0x420($sp)
    ctx->pc = 0x3207d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1056), GPR_U32(ctx, 5));
    // 0x3207d4: 0x27a302b0  addiu       $v1, $sp, 0x2B0
    ctx->pc = 0x3207d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x3207d8: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x3207d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
    // 0x3207dc: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x3207dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
    // 0x3207e0: 0xafa20428  sw          $v0, 0x428($sp)
    ctx->pc = 0x3207e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1064), GPR_U32(ctx, 2));
    // 0x3207e4: 0x24120026  addiu       $s2, $zero, 0x26
    ctx->pc = 0x3207e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3207e8: 0xafa30430  sw          $v1, 0x430($sp)
    ctx->pc = 0x3207e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 3));
    // 0x3207ec: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x3207ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x3207f0: 0xafa40438  sw          $a0, 0x438($sp)
    ctx->pc = 0x3207f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1080), GPR_U32(ctx, 4));
    // 0x3207f4: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x3207f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x3207f8: 0xafa50440  sw          $a1, 0x440($sp)
    ctx->pc = 0x3207f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 5));
    // 0x3207fc: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x3207fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x320800: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x320800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
    // 0x320804: 0xafa20448  sw          $v0, 0x448($sp)
    ctx->pc = 0x320804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1096), GPR_U32(ctx, 2));
    // 0x320808: 0xafa30450  sw          $v1, 0x450($sp)
    ctx->pc = 0x320808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 3));
    // 0x32080c: 0x27a20320  addiu       $v0, $sp, 0x320
    ctx->pc = 0x32080cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x320810: 0xafa40458  sw          $a0, 0x458($sp)
    ctx->pc = 0x320810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1112), GPR_U32(ctx, 4));
    // 0x320814: 0x27a30330  addiu       $v1, $sp, 0x330
    ctx->pc = 0x320814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
    // 0x320818: 0xafa50460  sw          $a1, 0x460($sp)
    ctx->pc = 0x320818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 5));
    // 0x32081c: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x32081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x320820: 0x27a50350  addiu       $a1, $sp, 0x350
    ctx->pc = 0x320820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
    // 0x320824: 0xafa20468  sw          $v0, 0x468($sp)
    ctx->pc = 0x320824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 2));
    // 0x320828: 0xafa303a0  sw          $v1, 0x3A0($sp)
    ctx->pc = 0x320828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 3));
    // 0x32082c: 0x27a20360  addiu       $v0, $sp, 0x360
    ctx->pc = 0x32082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x320830: 0xafa403a8  sw          $a0, 0x3A8($sp)
    ctx->pc = 0x320830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 4));
    // 0x320834: 0x27a30370  addiu       $v1, $sp, 0x370
    ctx->pc = 0x320834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x320838: 0xafa503b0  sw          $a1, 0x3B0($sp)
    ctx->pc = 0x320838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 5));
    // 0x32083c: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x32083cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
    // 0x320840: 0x27a50390  addiu       $a1, $sp, 0x390
    ctx->pc = 0x320840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
    // 0x320844: 0xafa203b8  sw          $v0, 0x3B8($sp)
    ctx->pc = 0x320844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 2));
    // 0x320848: 0xafa303c0  sw          $v1, 0x3C0($sp)
    ctx->pc = 0x320848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 3));
    // 0x32084c: 0x2671001c  addiu       $s1, $s3, 0x1C
    ctx->pc = 0x32084cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x320850: 0xafa403c8  sw          $a0, 0x3C8($sp)
    ctx->pc = 0x320850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 4));
    // 0x320854: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x320854u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x320858: 0xafa503d0  sw          $a1, 0x3D0($sp)
    ctx->pc = 0x320858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 5));
    // 0x32085c: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x32085cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x320860: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x320860u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x320864: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320868: 0x27be0050  addiu       $fp, $sp, 0x50
    ctx->pc = 0x320868u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x32086c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x32086cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_320870:
    // 0x320870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320874: 0xc0fb9fa  jal         func_3EE7E8
    ctx->pc = 0x320874u;
    SET_GPR_U32(ctx, 31, 0x32087Cu);
    ctx->pc = 0x320878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320874u;
    // 0x320878: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EE7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EE7E8u, 0x320874u, 0x32087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32087Cu;
label_32087c:
    // 0x32087c: 0x0  nop
    ctx->pc = 0x32087cu;
    // NOP
    // 0x320880: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x320880u;
    {
        const bool branch_taken_0x320880 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x320884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320880u;
        // 0x320884: 0x263100a4  addiu       $s1, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320880) {
            ctx->pc = 0x320870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_320870;
        }
    }
    ctx->pc = 0x320888u;
    // 0x320888: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x320888u;
    SET_GPR_U32(ctx, 31, 0x320890u);
    ctx->pc = 0x32088Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320888u;
    // 0x32088c: 0x266419d0  addiu       $a0, $s3, 0x19D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 6608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x320888u, 0x320890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320890u;
label_320890:
    // 0x320890: 0xc0c7c46  jal         func_31F118
    ctx->pc = 0x320890u;
    SET_GPR_U32(ctx, 31, 0x320898u);
    ctx->pc = 0x320894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320890u;
    // 0x320894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F118u, 0x320890u, 0x320898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320898u;
label_320898:
    // 0x320898: 0x3c013fe9  lui         $at, 0x3FE9
    ctx->pc = 0x320898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16361 << 16));
    // 0x32089c: 0x3421db23  ori         $at, $at, 0xDB23
    ctx->pc = 0x32089cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56099);
    // 0x3208a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3208a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3208a4: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x3208a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x3208a8: 0x3c014024  lui         $at, 0x4024
    ctx->pc = 0x3208a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16420 << 16));
    // 0x3208ac: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x3208acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x3208b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3208b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3208b4: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x3208b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x3208b8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3208b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3208bc: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x3208bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x3208c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3208c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3208c4: 0x24624260  addiu       $v0, $v1, 0x4260
    ctx->pc = 0x3208c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16992));
    // 0x3208c8: 0x3c01bdc4  lui         $at, 0xBDC4
    ctx->pc = 0x3208c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48580 << 16));
    // 0x3208cc: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x3208ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x3208d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3208d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3208d4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3208d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3208d8: 0x3c01bf05  lui         $at, 0xBF05
    ctx->pc = 0x3208d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48901 << 16));
    // 0x3208dc: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x3208dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x3208e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3208e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3208e4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3208e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3208e8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3208e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3208ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x3208ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3208f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3208f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3208f4: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x3208f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3208f8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3208f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3208fc: 0xe6830008  swc1        $f3, 0x8($s4)
    ctx->pc = 0x3208fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x320900: 0xe6840004  swc1        $f4, 0x4($s4)
    ctx->pc = 0x320900u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x320904: 0xaca04260  sw          $zero, 0x4260($a1)
    ctx->pc = 0x320904u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B4260u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4260u, _value); } while (0);
    // 0x320908: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x320908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32090c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32090cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x320910: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x320910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320914: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x320914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x320918: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x320918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32091c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x32091cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4270u, _value); } while (0); }
    // 0x320920: 0x3c01401d  lui         $at, 0x401D
    ctx->pc = 0x320920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16413 << 16));
    // 0x320924: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x320924u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x320928: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x320928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32092c: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x32092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320930: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x320930u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4274u, _value); } while (0); }
    // 0x320934: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x320934u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4278u, _value); } while (0); }
    // 0x320938: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B427Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B427Cu, _value); } while (0); }
    // 0x32093c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x32093cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x320940: 0x3c01c02c  lui         $at, 0xC02C
    ctx->pc = 0x320940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49196 << 16));
    // 0x320944: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x320944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x320948: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x320948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x32094c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x32094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x320950: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x320950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320954: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x320954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320958: 0xe6a50008  swc1        $f5, 0x8($s5)
    ctx->pc = 0x320958u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x32095c: 0x3c013fef  lui         $at, 0x3FEF
    ctx->pc = 0x32095cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16367 << 16));
    // 0x320960: 0x34211aa0  ori         $at, $at, 0x1AA0
    ctx->pc = 0x320960u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6816);
    // 0x320964: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x320964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x320968: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x320968u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4280u, _value); } while (0); }
    // 0x32096c: 0xe6a70004  swc1        $f7, 0x4($s5)
    ctx->pc = 0x32096cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x320970: 0x3c013c93  lui         $at, 0x3C93
    ctx->pc = 0x320970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15507 << 16));
    // 0x320974: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x320974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x320978: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x320978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32097c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x32097cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4284u, _value); } while (0); }
    // 0x320980: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x320980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4288u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4288u, _value); } while (0); }
    // 0x320984: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B428Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B428Cu, _value); } while (0); }
    // 0x320988: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x320988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x32098c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x32098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x320990: 0xe6c70004  swc1        $f7, 0x4($s6)
    ctx->pc = 0x320990u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x320994: 0x3c01bf71  lui         $at, 0xBF71
    ctx->pc = 0x320994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49009 << 16));
    // 0x320998: 0x342126e9  ori         $at, $at, 0x26E9
    ctx->pc = 0x320998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9961);
    // 0x32099c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x32099cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3209a0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3209a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4290u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4290u, _value); } while (0); }
    // 0x3209a4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3209a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4298u, _value); } while (0); }
    // 0x3209a8: 0xe6c10008  swc1        $f1, 0x8($s6)
    ctx->pc = 0x3209a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
    // 0x3209ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3209acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3209b0: 0x3c01c03f  lui         $at, 0xC03F
    ctx->pc = 0x3209b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49215 << 16));
    // 0x3209b4: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x3209b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x3209b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3209b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3209bc: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3209bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3209c0: 0x3c01c02c  lui         $at, 0xC02C
    ctx->pc = 0x3209c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49196 << 16));
    // 0x3209c4: 0x3421ac08  ori         $at, $at, 0xAC08
    ctx->pc = 0x3209c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44040);
    // 0x3209c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3209c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3209cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3209ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3209d0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x3209d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3209d4: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x3209d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3209d8: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x3209d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3209dc: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x3209dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3209e0: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x3209e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3209e4: 0xc7a90030  lwc1        $f9, 0x30($sp)
    ctx->pc = 0x3209e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3209e8: 0xc7aa0034  lwc1        $f10, 0x34($sp)
    ctx->pc = 0x3209e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3209ec: 0xc7ab0038  lwc1        $f11, 0x38($sp)
    ctx->pc = 0x3209ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3209f0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x3209f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3209f4: 0xe6e30008  swc1        $f3, 0x8($s7)
    ctx->pc = 0x3209f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    // 0x3209f8: 0x3c013fe8  lui         $at, 0x3FE8
    ctx->pc = 0x3209f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16360 << 16));
    // 0x3209fc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x3209fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x320a00: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x320a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x320a04: 0xe4450010  swc1        $f5, 0x10($v0)
    ctx->pc = 0x320a04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42B0u, _value); } while (0); }
    // 0x320a08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42A0u, _value); } while (0); }
    // 0x320a0c: 0xe6e80004  swc1        $f8, 0x4($s7)
    ctx->pc = 0x320a0cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x320a10: 0x3c01be67  lui         $at, 0xBE67
    ctx->pc = 0x320a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48743 << 16));
    // 0x320a14: 0x34216c8b  ori         $at, $at, 0x6C8B
    ctx->pc = 0x320a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27787);
    // 0x320a18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x320a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x320a1c: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x320a1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42B4u, _value); } while (0); }
    // 0x320a20: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x320a20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42BCu, _value); } while (0); }
    // 0x320a24: 0xe4670008  swc1        $f7, 0x8($v1)
    ctx->pc = 0x320a24u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42B8u, _value); } while (0); }
    // 0x320a28: 0x3c01bf9e  lui         $at, 0xBF9E
    ctx->pc = 0x320a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49054 << 16));
    // 0x320a2c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x320a2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x320a30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320a34: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x320a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x320a38: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x320a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x320a3c: 0xe7c10008  swc1        $f1, 0x8($fp)
    ctx->pc = 0x320a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 8), bits); }
    // 0x320a40: 0xe4490020  swc1        $f9, 0x20($v0)
    ctx->pc = 0x320a40u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42C0u, _value); } while (0); }
    // 0x320a44: 0xe7c80004  swc1        $f8, 0x4($fp)
    ctx->pc = 0x320a44u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x320a48: 0xe48a0004  swc1        $f10, 0x4($a0)
    ctx->pc = 0x320a48u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42C4u, _value); } while (0); }
    // 0x320a4c: 0xe48b0008  swc1        $f11, 0x8($a0)
    ctx->pc = 0x320a4cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42C8u, _value); } while (0); }
    // 0x320a50: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42CCu, _value); } while (0); }
    // 0x320a54: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42D0u, _value); } while (0); }
    // 0x320a58: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42D8u, _value); } while (0); }
    // 0x320a5c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320a60: 0x3c013fad  lui         $at, 0x3FAD
    ctx->pc = 0x320a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16301 << 16));
    // 0x320a64: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x320a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x320a68: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x320a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x320a6c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x320a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320a70: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320a74: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x320a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320a78: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320a7c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42E0u, _value); } while (0); }
    // 0x320a80: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x320a80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42F0u, _value); } while (0); }
    // 0x320a84: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x320a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320a88: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x320a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42F4u, _value); } while (0); }
    // 0x320a8c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x320a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x320a90: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x320a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42F8u, _value); } while (0); }
    // 0x320a94: 0x3c01c009  lui         $at, 0xC009
    ctx->pc = 0x320a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49161 << 16));
    // 0x320a98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x320a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x320a9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x320a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x320aa0: 0x8fa503fc  lw          $a1, 0x3FC($sp)
    ctx->pc = 0x320aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
    // 0x320aa4: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x320aa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
    // 0x320aa8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x320aa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x320aac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320ab0: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x320ab0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x320ab4: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x320ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320ab8: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x320ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320abc: 0xc7a60054  lwc1        $f6, 0x54($sp)
    ctx->pc = 0x320abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320ac0: 0xc7a70058  lwc1        $f7, 0x58($sp)
    ctx->pc = 0x320ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x320ac4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x320ac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320ac8: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320ac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320acc: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x320accu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B42FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B42FCu, _value); } while (0); }
    // 0x320ad0: 0x3c01be01  lui         $at, 0xBE01
    ctx->pc = 0x320ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48641 << 16));
    // 0x320ad4: 0x34210625  ori         $at, $at, 0x625
    ctx->pc = 0x320ad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1573);
    // 0x320ad8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x320ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x320adc: 0x8fa30404  lw          $v1, 0x404($sp)
    ctx->pc = 0x320adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1028)));
    // 0x320ae0: 0x3c01bf37  lui         $at, 0xBF37
    ctx->pc = 0x320ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48951 << 16));
    // 0x320ae4: 0x34214bc7  ori         $at, $at, 0x4BC7
    ctx->pc = 0x320ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19399);
    // 0x320ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320aec: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x320aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x320af0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x320af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x320af4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x320af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320af8: 0xe4450020  swc1        $f5, 0x20($v0)
    ctx->pc = 0x320af8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4300u, _value); } while (0); }
    // 0x320afc: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320afcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320b00: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x320b00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4304u, _value); } while (0); }
    // 0x320b04: 0xe4870008  swc1        $f7, 0x8($a0)
    ctx->pc = 0x320b04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4308u, _value); } while (0); }
    // 0x320b08: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B430Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B430Cu, _value); } while (0); }
    // 0x320b0c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4310u, _value); } while (0); }
    // 0x320b10: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4318u, _value); } while (0); }
    // 0x320b14: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320b18: 0x3c01404e  lui         $at, 0x404E
    ctx->pc = 0x320b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16462 << 16));
    // 0x320b1c: 0x3421d917  ori         $at, $at, 0xD917
    ctx->pc = 0x320b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55575);
    // 0x320b20: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x320b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x320b24: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x320b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320b28: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320b2c: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x320b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320b30: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320b34: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x320b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x320b38: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x320b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320b3c: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x320b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4330u, _value); } while (0); }
    // 0x320b40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4320u, _value); } while (0); }
    // 0x320b44: 0x3c01bf21  lui         $at, 0xBF21
    ctx->pc = 0x320b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48929 << 16));
    // 0x320b48: 0x34218937  ori         $at, $at, 0x8937
    ctx->pc = 0x320b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)35127);
    // 0x320b4c: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x320b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x320b50: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x320b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320b54: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x320b54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4334u, _value); } while (0); }
    // 0x320b58: 0xe4640008  swc1        $f4, 0x8($v1)
    ctx->pc = 0x320b58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4338u, _value); } while (0); }
    // 0x320b5c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B433Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B433Cu, _value); } while (0); }
    // 0x320b60: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x320b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320b64: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x320b64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4340u, _value); } while (0); }
    // 0x320b68: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x320b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x320b6c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x320b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x320b70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x320b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x320b74: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x320b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320b78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x320b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4344u, _value); } while (0); }
    // 0x320b7c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x320b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x320b80: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x320b80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4348u, _value); } while (0); }
    // 0x320b84: 0x3c013fdf  lui         $at, 0x3FDF
    ctx->pc = 0x320b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16351 << 16));
    // 0x320b88: 0x34211aa0  ori         $at, $at, 0x1AA0
    ctx->pc = 0x320b88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)6816);
    // 0x320b8c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x320b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x320b90: 0x8fa5040c  lw          $a1, 0x40C($sp)
    ctx->pc = 0x320b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1036)));
    // 0x320b94: 0x3c01c08b  lui         $at, 0xC08B
    ctx->pc = 0x320b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49291 << 16));
    // 0x320b98: 0x3421b646  ori         $at, $at, 0xB646
    ctx->pc = 0x320b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46662);
    // 0x320b9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320ba0: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x320ba0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x320ba4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x320ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320ba8: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320ba8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320bac: 0x3c013d81  lui         $at, 0x3D81
    ctx->pc = 0x320bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15745 << 16));
    // 0x320bb0: 0x34210625  ori         $at, $at, 0x625
    ctx->pc = 0x320bb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1573);
    // 0x320bb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x320bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x320bb8: 0x8fa30414  lw          $v1, 0x414($sp)
    ctx->pc = 0x320bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1044)));
    // 0x320bbc: 0x3c01bf7d  lui         $at, 0xBF7D
    ctx->pc = 0x320bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49021 << 16));
    // 0x320bc0: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x320bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x320bc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320bc8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x320bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x320bcc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x320bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x320bd0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x320bd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320bd4: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320bd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320bd8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B434Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B434Cu, _value); } while (0); }
    // 0x320bdc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4350u, _value); } while (0); }
    // 0x320be0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4358u, _value); } while (0); }
    // 0x320be4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320be8: 0x3c01c06e  lui         $at, 0xC06E
    ctx->pc = 0x320be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49262 << 16));
    // 0x320bec: 0x342176c9  ori         $at, $at, 0x76C9
    ctx->pc = 0x320becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30409);
    // 0x320bf0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x320bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x320bf4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x320bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320bf8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320bfc: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x320bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320c00: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320c04: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x320c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320c08: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x320c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320c0c: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x320c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4370u, _value); } while (0); }
    // 0x320c10: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4360u, _value); } while (0); }
    // 0x320c14: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x320c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x320c18: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x320c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x320c1c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x320c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x320c20: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x320c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x320c24: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B437Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B437Cu, _value); } while (0); }
    // 0x320c28: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x320c28u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4374u, _value); } while (0); }
    // 0x320c2c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x320c2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4378u, _value); } while (0); }
    // 0x320c30: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x320c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320c34: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x320c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320c38: 0xe4440020  swc1        $f4, 0x20($v0)
    ctx->pc = 0x320c38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4380u, _value); } while (0); }
    // 0x320c3c: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x320c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x320c40: 0x342172b0  ori         $at, $at, 0x72B0
    ctx->pc = 0x320c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29360);
    // 0x320c44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320c48: 0x8fa5041c  lw          $a1, 0x41C($sp)
    ctx->pc = 0x320c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1052)));
    // 0x320c4c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x320c4cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x320c50: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x320c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x320c54: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x320c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320c58: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x320c58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4384u, _value); } while (0); }
    // 0x320c5c: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x320c5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4388u, _value); } while (0); }
    // 0x320c60: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x320c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
    // 0x320c64: 0x3421872b  ori         $at, $at, 0x872B
    ctx->pc = 0x320c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34603);
    // 0x320c68: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x320c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x320c6c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B438Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B438Cu, _value); } while (0); }
    // 0x320c70: 0xe4a60004  swc1        $f6, 0x4($a1)
    ctx->pc = 0x320c70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320c74: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4390u, _value); } while (0); }
    // 0x320c78: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4398u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4398u, _value); } while (0); }
    // 0x320c7c: 0x3c01be02  lui         $at, 0xBE02
    ctx->pc = 0x320c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48642 << 16));
    // 0x320c80: 0x34210c4a  ori         $at, $at, 0xC4A
    ctx->pc = 0x320c80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3146);
    // 0x320c84: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x320c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x320c88: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320c8c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x320c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x320c90: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320c94: 0x8fa50424  lw          $a1, 0x424($sp)
    ctx->pc = 0x320c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1060)));
    // 0x320c98: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320c9c: 0x3c01bf82  lui         $at, 0xBF82
    ctx->pc = 0x320c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49026 << 16));
    // 0x320ca0: 0x3421d0e5  ori         $at, $at, 0xD0E5
    ctx->pc = 0x320ca0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53477);
    // 0x320ca4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x320ca4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x320ca8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x320ca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x320cac: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x320cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320cb0: 0xe4a60004  swc1        $f6, 0x4($a1)
    ctx->pc = 0x320cb0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320cb4: 0xe7a900c0  swc1        $f9, 0xC0($sp)
    ctx->pc = 0x320cb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x320cb8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x320cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320cbc: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x320cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320cc0: 0xc7a500a8  lwc1        $f5, 0xA8($sp)
    ctx->pc = 0x320cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320cc4: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x320cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320cc8: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x320cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320ccc: 0xc7a700b4  lwc1        $f7, 0xB4($sp)
    ctx->pc = 0x320cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x320cd0: 0xc7ac00b8  lwc1        $f12, 0xB8($sp)
    ctx->pc = 0x320cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x320cd4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x320cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x320cd8: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x320cd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43B0u, _value); } while (0); }
    // 0x320cdc: 0x3c013fd2  lui         $at, 0x3FD2
    ctx->pc = 0x320cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16338 << 16));
    // 0x320ce0: 0x34216e98  ori         $at, $at, 0x6E98
    ctx->pc = 0x320ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28312);
    // 0x320ce4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x320ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x320ce8: 0x8fa5042c  lw          $a1, 0x42C($sp)
    ctx->pc = 0x320ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1068)));
    // 0x320cec: 0x3c01bf83  lui         $at, 0xBF83
    ctx->pc = 0x320cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49027 << 16));
    // 0x320cf0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x320cf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x320cf4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x320cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x320cf8: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x320cf8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320cfc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43A0u, _value); } while (0); }
    // 0x320d00: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320d00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320d04: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x320d04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43B4u, _value); } while (0); }
    // 0x320d08: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x320d08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43B8u, _value); } while (0); }
    // 0x320d0c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x320d0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43BCu, _value); } while (0); }
    // 0x320d10: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x320d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x320d14: 0xe7ab00d0  swc1        $f11, 0xD0($sp)
    ctx->pc = 0x320d14u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x320d18: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x320d18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43C0u, _value); } while (0); }
    // 0x320d1c: 0x8fa30434  lw          $v1, 0x434($sp)
    ctx->pc = 0x320d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1076)));
    // 0x320d20: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320d20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320d24: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x320d24u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320d28: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x320d28u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43C4u, _value); } while (0); }
    // 0x320d2c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x320d2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43C8u, _value); } while (0); }
    // 0x320d30: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43CCu, _value); } while (0); }
    // 0x320d34: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43D0u, _value); } while (0); }
    // 0x320d38: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43D8u, _value); } while (0); }
    // 0x320d3c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320d40: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x320d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d44: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320d48: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x320d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320d4c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320d50: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x320d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43F0u, _value); } while (0); }
    // 0x320d54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43E0u, _value); } while (0); }
    // 0x320d58: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x320d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x320d5c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x320d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43F4u, _value); } while (0); }
    // 0x320d60: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x320d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320d64: 0x8fa5043c  lw          $a1, 0x43C($sp)
    ctx->pc = 0x320d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1084)));
    // 0x320d68: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x320d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320d6c: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x320d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320d70: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x320d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320d74: 0xc7a600d8  lwc1        $f6, 0xD8($sp)
    ctx->pc = 0x320d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320d78: 0xe7a900e0  swc1        $f9, 0xE0($sp)
    ctx->pc = 0x320d78u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x320d7c: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320d7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320d80: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x320d80u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320d84: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x320d84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43F8u, _value); } while (0); }
    // 0x320d88: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320d88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B43FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B43FCu, _value); } while (0); }
    // 0x320d8c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x320d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x320d90: 0xe7ab00f0  swc1        $f11, 0xF0($sp)
    ctx->pc = 0x320d90u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x320d94: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x320d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4400u, _value); } while (0); }
    // 0x320d98: 0x8fa30444  lw          $v1, 0x444($sp)
    ctx->pc = 0x320d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
    // 0x320d9c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320d9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320da0: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x320da0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320da4: 0xe4860008  swc1        $f6, 0x8($a0)
    ctx->pc = 0x320da4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4408u, _value); } while (0); }
    // 0x320da8: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x320da8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4404u, _value); } while (0); }
    // 0x320dac: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B440Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B440Cu, _value); } while (0); }
    // 0x320db0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4410u, _value); } while (0); }
    // 0x320db4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4418u, _value); } while (0); }
    // 0x320db8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320dbc: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x320dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320dc0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320dc4: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x320dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320dc8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320dcc: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x320dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320dd0: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x320dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320dd4: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x320dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4430u, _value); } while (0); }
    // 0x320dd8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4420u, _value); } while (0); }
    // 0x320ddc: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x320ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320de0: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x320de0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4434u, _value); } while (0); }
    // 0x320de4: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x320de4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4438u, _value); } while (0); }
    // 0x320de8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B443Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B443Cu, _value); } while (0); }
    // 0x320dec: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x320decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320df0: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x320df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4440u, _value); } while (0); }
    // 0x320df4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x320df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x320df8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x320df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4444u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4444u, _value); } while (0); }
    // 0x320dfc: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x320dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320e00: 0x8fa5044c  lw          $a1, 0x44C($sp)
    ctx->pc = 0x320e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1100)));
    // 0x320e04: 0xe7a90100  swc1        $f9, 0x100($sp)
    ctx->pc = 0x320e04u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x320e08: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320e08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320e0c: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x320e0cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320e10: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x320e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x320e14: 0x8fa30454  lw          $v1, 0x454($sp)
    ctx->pc = 0x320e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1108)));
    // 0x320e18: 0xe7ab0110  swc1        $f11, 0x110($sp)
    ctx->pc = 0x320e18u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x320e1c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320e1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320e20: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x320e20u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320e24: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x320e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4448u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4448u, _value); } while (0); }
    // 0x320e28: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B444Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B444Cu, _value); } while (0); }
    // 0x320e2c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4450u, _value); } while (0); }
    // 0x320e30: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4458u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4458u, _value); } while (0); }
    // 0x320e34: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320e38: 0xc7a20100  lwc1        $f2, 0x100($sp)
    ctx->pc = 0x320e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320e3c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320e40: 0xc7a60104  lwc1        $f6, 0x104($sp)
    ctx->pc = 0x320e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320e44: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320e48: 0xc7a50108  lwc1        $f5, 0x108($sp)
    ctx->pc = 0x320e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320e4c: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x320e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320e50: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x320e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4470u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4470u, _value); } while (0); }
    // 0x320e54: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4460u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4460u, _value); } while (0); }
    // 0x320e58: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x320e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320e5c: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x320e5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4474u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4474u, _value); } while (0); }
    // 0x320e60: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x320e60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4478u, _value); } while (0); }
    // 0x320e64: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320e64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B447Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B447Cu, _value); } while (0); }
    // 0x320e68: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x320e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320e6c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x320e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320e70: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x320e70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4480u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4480u, _value); } while (0); }
    // 0x320e74: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x320e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4484u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4484u, _value); } while (0); }
    // 0x320e78: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x320e78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4488u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4488u, _value); } while (0); }
    // 0x320e7c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B448Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B448Cu, _value); } while (0); }
    // 0x320e80: 0xe7a90120  swc1        $f9, 0x120($sp)
    ctx->pc = 0x320e80u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x320e84: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x320e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x320e88: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4490u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4490u, _value); } while (0); }
    // 0x320e8c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4498u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4498u, _value); } while (0); }
    // 0x320e90: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320e94: 0x8fa4045c  lw          $a0, 0x45C($sp)
    ctx->pc = 0x320e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
    // 0x320e98: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320e9c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x320e9cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x320ea0: 0xe48a0008  swc1        $f10, 0x8($a0)
    ctx->pc = 0x320ea0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x320ea4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x320ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x320ea8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320eac: 0x8fa50464  lw          $a1, 0x464($sp)
    ctx->pc = 0x320eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
    // 0x320eb0: 0xe7ab0130  swc1        $f11, 0x130($sp)
    ctx->pc = 0x320eb0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x320eb4: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320eb8: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x320eb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320ebc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44A0u, _value); } while (0); }
    // 0x320ec0: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x320ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320ec4: 0xc7a50124  lwc1        $f5, 0x124($sp)
    ctx->pc = 0x320ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320ec8: 0xc7a60128  lwc1        $f6, 0x128($sp)
    ctx->pc = 0x320ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320ecc: 0xc7a2012c  lwc1        $f2, 0x12C($sp)
    ctx->pc = 0x320eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320ed0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x320ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44B0u, _value); } while (0); }
    // 0x320ed4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x320ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320ed8: 0xc7a70138  lwc1        $f7, 0x138($sp)
    ctx->pc = 0x320ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x320edc: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x320edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320ee0: 0xe7a90140  swc1        $f9, 0x140($sp)
    ctx->pc = 0x320ee0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x320ee4: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x320ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x320ee8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x320ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44BCu, _value); } while (0); }
    // 0x320eec: 0x8fa5046c  lw          $a1, 0x46C($sp)
    ctx->pc = 0x320eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1132)));
    // 0x320ef0: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x320ef0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320ef4: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x320ef4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44B4u, _value); } while (0); }
    // 0x320ef8: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x320ef8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44B8u, _value); } while (0); }
    // 0x320efc: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320efcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320f00: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x320f00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44C0u, _value); } while (0); }
    // 0x320f04: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x320f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x320f08: 0xe7ab0150  swc1        $f11, 0x150($sp)
    ctx->pc = 0x320f08u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x320f0c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x320f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44C4u, _value); } while (0); }
    // 0x320f10: 0xe4870008  swc1        $f7, 0x8($a0)
    ctx->pc = 0x320f10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44C8u, _value); } while (0); }
    // 0x320f14: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44CCu, _value); } while (0); }
    // 0x320f18: 0x8fa303a4  lw          $v1, 0x3A4($sp)
    ctx->pc = 0x320f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
    // 0x320f1c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320f1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320f20: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x320f20u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320f24: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44D0u, _value); } while (0); }
    // 0x320f28: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44D8u, _value); } while (0); }
    // 0x320f2c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320f30: 0xc7a10140  lwc1        $f1, 0x140($sp)
    ctx->pc = 0x320f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320f34: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320f38: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44E0u, _value); } while (0); }
    // 0x320f3c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320f40: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x320f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x320f44: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x320f44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44F0u, _value); } while (0); }
    // 0x320f48: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x320f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320f4c: 0x8fa503ac  lw          $a1, 0x3AC($sp)
    ctx->pc = 0x320f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 940)));
    // 0x320f50: 0xc7a30148  lwc1        $f3, 0x148($sp)
    ctx->pc = 0x320f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320f54: 0xc7a1014c  lwc1        $f1, 0x14C($sp)
    ctx->pc = 0x320f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320f58: 0xc7a50150  lwc1        $f5, 0x150($sp)
    ctx->pc = 0x320f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320f5c: 0xc7a60154  lwc1        $f6, 0x154($sp)
    ctx->pc = 0x320f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x320f60: 0xc7a70158  lwc1        $f7, 0x158($sp)
    ctx->pc = 0x320f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x320f64: 0xe7a90160  swc1        $f9, 0x160($sp)
    ctx->pc = 0x320f64u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x320f68: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320f68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320f6c: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x320f6cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320f70: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x320f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44F4u, _value); } while (0); }
    // 0x320f74: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x320f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44F8u, _value); } while (0); }
    // 0x320f78: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320f78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B44FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B44FCu, _value); } while (0); }
    // 0x320f7c: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x320f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x320f80: 0xe7ab0170  swc1        $f11, 0x170($sp)
    ctx->pc = 0x320f80u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x320f84: 0xe4450020  swc1        $f5, 0x20($v0)
    ctx->pc = 0x320f84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4500u, _value); } while (0); }
    // 0x320f88: 0x8fa303b4  lw          $v1, 0x3B4($sp)
    ctx->pc = 0x320f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
    // 0x320f8c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x320f8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x320f90: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x320f90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x320f94: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x320f94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4504u, _value); } while (0); }
    // 0x320f98: 0xe4870008  swc1        $f7, 0x8($a0)
    ctx->pc = 0x320f98u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4508u, _value); } while (0); }
    // 0x320f9c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x320f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B450Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B450Cu, _value); } while (0); }
    // 0x320fa0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x320fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4510u, _value); } while (0); }
    // 0x320fa4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x320fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4518u, _value); } while (0); }
    // 0x320fa8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x320fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x320fac: 0xc7a20160  lwc1        $f2, 0x160($sp)
    ctx->pc = 0x320facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320fb0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x320fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x320fb4: 0xc7a50164  lwc1        $f5, 0x164($sp)
    ctx->pc = 0x320fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x320fb8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x320fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x320fbc: 0xc7a30168  lwc1        $f3, 0x168($sp)
    ctx->pc = 0x320fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x320fc0: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x320fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320fc4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x320fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4520u, _value); } while (0); }
    // 0x320fc8: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x320fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4530u, _value); } while (0); }
    // 0x320fcc: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x320fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320fd0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x320fd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4538u, _value); } while (0); }
    // 0x320fd4: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x320fd4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4534u, _value); } while (0); }
    // 0x320fd8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x320fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B453Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B453Cu, _value); } while (0); }
    // 0x320fdc: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x320fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x320fe0: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x320fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4540u, _value); } while (0); }
    // 0x320fe4: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x320fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x320fe8: 0x8fa503bc  lw          $a1, 0x3BC($sp)
    ctx->pc = 0x320fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 956)));
    // 0x320fec: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x320fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320ff0: 0xe7a90180  swc1        $f9, 0x180($sp)
    ctx->pc = 0x320ff0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x320ff4: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x320ff4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x320ff8: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x320ff8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x320ffc: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x320ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x321000: 0x8fa303c4  lw          $v1, 0x3C4($sp)
    ctx->pc = 0x321000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
    // 0x321004: 0xe7ab0190  swc1        $f11, 0x190($sp)
    ctx->pc = 0x321004u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x321008: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321008u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x32100c: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x32100cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321010: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x321010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4544u, _value); } while (0); }
    // 0x321014: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x321014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4548u, _value); } while (0); }
    // 0x321018: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B454Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B454Cu, _value); } while (0); }
    // 0x32101c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x32101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4550u, _value); } while (0); }
    // 0x321020: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4558u, _value); } while (0); }
    // 0x321024: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321028: 0xc7a20180  lwc1        $f2, 0x180($sp)
    ctx->pc = 0x321028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32102c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x32102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321030: 0xc7a60184  lwc1        $f6, 0x184($sp)
    ctx->pc = 0x321030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321034: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321038: 0xc7a50188  lwc1        $f5, 0x188($sp)
    ctx->pc = 0x321038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32103c: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x32103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321040: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x321040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4570u, _value); } while (0); }
    // 0x321044: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4560u, _value); } while (0); }
    // 0x321048: 0xc7a30190  lwc1        $f3, 0x190($sp)
    ctx->pc = 0x321048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32104c: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x32104cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B457Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B457Cu, _value); } while (0); }
    // 0x321050: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x321050u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4574u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4574u, _value); } while (0); }
    // 0x321054: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x321054u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4578u, _value); } while (0); }
    // 0x321058: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x321058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32105c: 0xc7a20198  lwc1        $f2, 0x198($sp)
    ctx->pc = 0x32105cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321060: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x321060u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4580u, _value); } while (0); }
    // 0x321064: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x321064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4588u, _value); } while (0); }
    // 0x321068: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x321068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4584u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4584u, _value); } while (0); }
    // 0x32106c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x32106cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B458Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B458Cu, _value); } while (0); }
    // 0x321070: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4590u, _value); } while (0); }
    // 0x321074: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4598u, _value); } while (0); }
    // 0x321078: 0xe7a0019c  swc1        $f0, 0x19C($sp)
    ctx->pc = 0x321078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
    // 0x32107c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321080: 0x8fa403cc  lw          $a0, 0x3CC($sp)
    ctx->pc = 0x321080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
    // 0x321084: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321088: 0xe7a901a0  swc1        $f9, 0x1A0($sp)
    ctx->pc = 0x321088u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x32108c: 0xe48a0008  swc1        $f10, 0x8($a0)
    ctx->pc = 0x32108cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x321090: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321094: 0x8fa503cc  lw          $a1, 0x3CC($sp)
    ctx->pc = 0x321094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 972)));
    // 0x321098: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x321098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x32109c: 0x8fa503d4  lw          $a1, 0x3D4($sp)
    ctx->pc = 0x32109cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 980)));
    // 0x3210a0: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x3210a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x3210a4: 0xe7ab01b0  swc1        $f11, 0x1B0($sp)
    ctx->pc = 0x3210a4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x3210a8: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3210a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3210ac: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x3210acu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3210b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3210b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45A0u, _value); } while (0); }
    // 0x3210b4: 0xc7a201a0  lwc1        $f2, 0x1A0($sp)
    ctx->pc = 0x3210b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3210b8: 0xc7a301a4  lwc1        $f3, 0x1A4($sp)
    ctx->pc = 0x3210b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3210bc: 0xc7a501a8  lwc1        $f5, 0x1A8($sp)
    ctx->pc = 0x3210bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3210c0: 0xc7a101ac  lwc1        $f1, 0x1AC($sp)
    ctx->pc = 0x3210c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3210c4: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x3210c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45B0u, _value); } while (0); }
    // 0x3210c8: 0xc7a601b0  lwc1        $f6, 0x1B0($sp)
    ctx->pc = 0x3210c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3210cc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3210ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45BCu, _value); } while (0); }
    // 0x3210d0: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x3210d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45B4u, _value); } while (0); }
    // 0x3210d4: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x3210d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45B8u, _value); } while (0); }
    // 0x3210d8: 0x8fa303d8  lw          $v1, 0x3D8($sp)
    ctx->pc = 0x3210d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 984)));
    // 0x3210dc: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x3210dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3210e0: 0xc7a201b8  lwc1        $f2, 0x1B8($sp)
    ctx->pc = 0x3210e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3210e4: 0xe7a901c0  swc1        $f9, 0x1C0($sp)
    ctx->pc = 0x3210e4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x3210e8: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x3210e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x3210ec: 0xe46a0008  swc1        $f10, 0x8($v1)
    ctx->pc = 0x3210ecu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3210f0: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x3210f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45C0u, _value); } while (0); }
    // 0x3210f4: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x3210f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3210f8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3210f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45C4u, _value); } while (0); }
    // 0x3210fc: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x3210fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45C8u, _value); } while (0); }
    // 0x321100: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45CCu, _value); } while (0); }
    // 0x321104: 0x8fa403dc  lw          $a0, 0x3DC($sp)
    ctx->pc = 0x321104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 988)));
    // 0x321108: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x321108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x32110c: 0xe7ab01d0  swc1        $f11, 0x1D0($sp)
    ctx->pc = 0x32110cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x321110: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x321110u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x321114: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45D0u, _value); } while (0); }
    // 0x321118: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45D8u, _value); } while (0); }
    // 0x32111c: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x32111cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x321120: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321124: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x321124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x321128: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x32112c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x32112cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45E0u, _value); } while (0); }
    // 0x321130: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321134: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x321134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321138: 0xc7a501c8  lwc1        $f5, 0x1C8($sp)
    ctx->pc = 0x321138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32113c: 0xc7a601d0  lwc1        $f6, 0x1D0($sp)
    ctx->pc = 0x32113cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321140: 0xc7a701d4  lwc1        $f7, 0x1D4($sp)
    ctx->pc = 0x321140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x321144: 0xc7ac01d8  lwc1        $f12, 0x1D8($sp)
    ctx->pc = 0x321144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x321148: 0xc7a301c4  lwc1        $f3, 0x1C4($sp)
    ctx->pc = 0x321148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32114c: 0xc7a201cc  lwc1        $f2, 0x1CC($sp)
    ctx->pc = 0x32114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321150: 0xe7a901e0  swc1        $f9, 0x1E0($sp)
    ctx->pc = 0x321150u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x321154: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x321154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45F0u, _value); } while (0); }
    // 0x321158: 0x8fa503e0  lw          $a1, 0x3E0($sp)
    ctx->pc = 0x321158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x32115c: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x32115cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x321160: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x321160u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x321164: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x321164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45FCu, _value); } while (0); }
    // 0x321168: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x321168u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45F4u, _value); } while (0); }
    // 0x32116c: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x32116cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B45F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B45F8u, _value); } while (0); }
    // 0x321170: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x321170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x321174: 0xe7ab01f0  swc1        $f11, 0x1F0($sp)
    ctx->pc = 0x321174u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x321178: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x321178u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4600u, _value); } while (0); }
    // 0x32117c: 0x8fa303e4  lw          $v1, 0x3E4($sp)
    ctx->pc = 0x32117cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 996)));
    // 0x321180: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321180u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321184: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x321184u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321188: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x321188u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4604u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4604u, _value); } while (0); }
    // 0x32118c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x32118cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4608u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4608u, _value); } while (0); }
    // 0x321190: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B460Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B460Cu, _value); } while (0); }
    // 0x321194: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4610u, _value); } while (0); }
    // 0x321198: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4618u, _value); } while (0); }
    // 0x32119c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3211a0: 0xc7a101e0  lwc1        $f1, 0x1E0($sp)
    ctx->pc = 0x3211a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3211a4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3211a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3211a8: 0xc7a301e4  lwc1        $f3, 0x1E4($sp)
    ctx->pc = 0x3211a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3211ac: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3211acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3211b0: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x3211b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3211b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3211b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4620u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4620u, _value); } while (0); }
    // 0x3211b8: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x3211b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4630u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4630u, _value); } while (0); }
    // 0x3211bc: 0xc7a101ec  lwc1        $f1, 0x1EC($sp)
    ctx->pc = 0x3211bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3211c0: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x3211c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4634u, _value); } while (0); }
    // 0x3211c4: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x3211c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4638u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4638u, _value); } while (0); }
    // 0x3211c8: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x3211c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x3211cc: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3211ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B463Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B463Cu, _value); } while (0); }
    // 0x3211d0: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x3211d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3211d4: 0x8fa503e8  lw          $a1, 0x3E8($sp)
    ctx->pc = 0x3211d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
    // 0x3211d8: 0xc7a301f8  lwc1        $f3, 0x1F8($sp)
    ctx->pc = 0x3211d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3211dc: 0xc7a201f0  lwc1        $f2, 0x1F0($sp)
    ctx->pc = 0x3211dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3211e0: 0xe7a90200  swc1        $f9, 0x200($sp)
    ctx->pc = 0x3211e0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x3211e4: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3211e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3211e8: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x3211e8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3211ec: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x3211ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x3211f0: 0xe7ab0210  swc1        $f11, 0x210($sp)
    ctx->pc = 0x3211f0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x3211f4: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x3211f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4640u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4640u, _value); } while (0); }
    // 0x3211f8: 0x8fa303ec  lw          $v1, 0x3EC($sp)
    ctx->pc = 0x3211f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
    // 0x3211fc: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x3211fcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321200: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321200u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321204: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x321204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4644u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4644u, _value); } while (0); }
    // 0x321208: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x321208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4648u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4648u, _value); } while (0); }
    // 0x32120c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x32120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B464Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B464Cu, _value); } while (0); }
    // 0x321210: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4650u, _value); } while (0); }
    // 0x321214: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4658u, _value); } while (0); }
    // 0x321218: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x32121c: 0xc7a20200  lwc1        $f2, 0x200($sp)
    ctx->pc = 0x32121cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321220: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321224: 0xc7a60204  lwc1        $f6, 0x204($sp)
    ctx->pc = 0x321224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321228: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x32122c: 0xc7a50208  lwc1        $f5, 0x208($sp)
    ctx->pc = 0x32122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x321230: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x321230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321234: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x321234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4670u, _value); } while (0); }
    // 0x321238: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4660u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4660u, _value); } while (0); }
    // 0x32123c: 0xc7a30210  lwc1        $f3, 0x210($sp)
    ctx->pc = 0x32123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321240: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x321240u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4674u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4674u, _value); } while (0); }
    // 0x321244: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x321244u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4678u, _value); } while (0); }
    // 0x321248: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x321248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B467Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B467Cu, _value); } while (0); }
    // 0x32124c: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x32124cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321250: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x321250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321254: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x321254u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4680u, _value); } while (0); }
    // 0x321258: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x321258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4684u, _value); } while (0); }
    // 0x32125c: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x32125cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4688u, _value); } while (0); }
    // 0x321260: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B468Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B468Cu, _value); } while (0); }
    // 0x321264: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x321264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x321268: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4690u, _value); } while (0); }
    // 0x32126c: 0xe7a90220  swc1        $f9, 0x220($sp)
    ctx->pc = 0x32126cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
    // 0x321270: 0x8fa403f0  lw          $a0, 0x3F0($sp)
    ctx->pc = 0x321270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x321274: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x321274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x321278: 0xe48a0008  swc1        $f10, 0x8($a0)
    ctx->pc = 0x321278u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x32127c: 0xe7a0022c  swc1        $f0, 0x22C($sp)
    ctx->pc = 0x32127cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 556), bits); }
    // 0x321280: 0x8fa503f4  lw          $a1, 0x3F4($sp)
    ctx->pc = 0x321280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1012)));
    // 0x321284: 0xe7ab0230  swc1        $f11, 0x230($sp)
    ctx->pc = 0x321284u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
    // 0x321288: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x321288u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x32128c: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x32128cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x321290: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4698u, _value); } while (0); }
    // 0x321294: 0xc7a20220  lwc1        $f2, 0x220($sp)
    ctx->pc = 0x321294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321298: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x32129c: 0xc7a60224  lwc1        $f6, 0x224($sp)
    ctx->pc = 0x32129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3212a0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3212a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3212a4: 0xc7a30228  lwc1        $f3, 0x228($sp)
    ctx->pc = 0x3212a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3212a8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3212a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3212ac: 0xc7a1022c  lwc1        $f1, 0x22C($sp)
    ctx->pc = 0x3212acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3212b0: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x3212b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46B0u, _value); } while (0); }
    // 0x3212b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3212b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46A0u, _value); } while (0); }
    // 0x3212b8: 0xc7a50230  lwc1        $f5, 0x230($sp)
    ctx->pc = 0x3212b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3212bc: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x3212bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46B4u, _value); } while (0); }
    // 0x3212c0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3212c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46B8u, _value); } while (0); }
    // 0x3212c4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3212c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46BCu, _value); } while (0); }
    // 0x3212c8: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x3212c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3212cc: 0xc7a20238  lwc1        $f2, 0x238($sp)
    ctx->pc = 0x3212ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3212d0: 0xe7a90240  swc1        $f9, 0x240($sp)
    ctx->pc = 0x3212d0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x3212d4: 0xe7a0023c  swc1        $f0, 0x23C($sp)
    ctx->pc = 0x3212d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 572), bits); }
    // 0x3212d8: 0xe4450020  swc1        $f5, 0x20($v0)
    ctx->pc = 0x3212d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46C0u, _value); } while (0); }
    // 0x3212dc: 0x8fa303f8  lw          $v1, 0x3F8($sp)
    ctx->pc = 0x3212dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
    // 0x3212e0: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x3212e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3212e4: 0xe46a0008  swc1        $f10, 0x8($v1)
    ctx->pc = 0x3212e4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3212e8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3212e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46C4u, _value); } while (0); }
    // 0x3212ec: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x3212ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46C8u, _value); } while (0); }
    // 0x3212f0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3212f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46CCu, _value); } while (0); }
    // 0x3212f4: 0xe7a0024c  swc1        $f0, 0x24C($sp)
    ctx->pc = 0x3212f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 588), bits); }
    // 0x3212f8: 0xe7ab0250  swc1        $f11, 0x250($sp)
    ctx->pc = 0x3212f8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x3212fc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3212fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46D0u, _value); } while (0); }
    // 0x321300: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46D8u, _value); } while (0); }
    // 0x321304: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321308: 0x8fa40400  lw          $a0, 0x400($sp)
    ctx->pc = 0x321308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x32130c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x32130cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321310: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x321310u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x321314: 0xe4880008  swc1        $f8, 0x8($a0)
    ctx->pc = 0x321314u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x321318: 0xc7a10240  lwc1        $f1, 0x240($sp)
    ctx->pc = 0x321318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32131c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x32131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321320: 0xc7a30244  lwc1        $f3, 0x244($sp)
    ctx->pc = 0x321320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321324: 0xc7a50248  lwc1        $f5, 0x248($sp)
    ctx->pc = 0x321324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x321328: 0xc7a2024c  lwc1        $f2, 0x24C($sp)
    ctx->pc = 0x321328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32132c: 0xc7a60250  lwc1        $f6, 0x250($sp)
    ctx->pc = 0x32132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321330: 0xc7a70254  lwc1        $f7, 0x254($sp)
    ctx->pc = 0x321330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x321334: 0xc7ac0258  lwc1        $f12, 0x258($sp)
    ctx->pc = 0x321334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x321338: 0xe7a90260  swc1        $f9, 0x260($sp)
    ctx->pc = 0x321338u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x32133c: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x32133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x321340: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x321340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46F0u, _value); } while (0); }
    // 0x321344: 0x8fa50408  lw          $a1, 0x408($sp)
    ctx->pc = 0x321344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1032)));
    // 0x321348: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x321348u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x32134c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x32134cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46E0u, _value); } while (0); }
    // 0x321350: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x321350u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x321354: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x321354u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46F4u, _value); } while (0); }
    // 0x321358: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x321358u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46F8u, _value); } while (0); }
    // 0x32135c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x32135cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B46FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B46FCu, _value); } while (0); }
    // 0x321360: 0xe7a0026c  swc1        $f0, 0x26C($sp)
    ctx->pc = 0x321360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 620), bits); }
    // 0x321364: 0xe7ab0270  swc1        $f11, 0x270($sp)
    ctx->pc = 0x321364u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x321368: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x321368u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4700u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4700u, _value); } while (0); }
    // 0x32136c: 0x8fa30410  lw          $v1, 0x410($sp)
    ctx->pc = 0x32136cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1040)));
    // 0x321370: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321370u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321374: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x321374u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321378: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x321378u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4704u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4704u, _value); } while (0); }
    // 0x32137c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x32137cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4708u, _value); } while (0); }
    // 0x321380: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B470Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B470Cu, _value); } while (0); }
    // 0x321384: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4710u, _value); } while (0); }
    // 0x321388: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4718u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4718u, _value); } while (0); }
    // 0x32138c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321390: 0xc7a10260  lwc1        $f1, 0x260($sp)
    ctx->pc = 0x321390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321394: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321398: 0xc7a20264  lwc1        $f2, 0x264($sp)
    ctx->pc = 0x321398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32139c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x32139cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3213a0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3213a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4720u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4720u, _value); } while (0); }
    // 0x3213a4: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x3213a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4730u, _value); } while (0); }
    // 0x3213a8: 0xc7a10268  lwc1        $f1, 0x268($sp)
    ctx->pc = 0x3213a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3213ac: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3213acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4734u, _value); } while (0); }
    // 0x3213b0: 0xe7a0027c  swc1        $f0, 0x27C($sp)
    ctx->pc = 0x3213b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 636), bits); }
    // 0x3213b4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3213b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4738u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4738u, _value); } while (0); }
    // 0x3213b8: 0xc7a2026c  lwc1        $f2, 0x26C($sp)
    ctx->pc = 0x3213b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3213bc: 0x8fa50418  lw          $a1, 0x418($sp)
    ctx->pc = 0x3213bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1048)));
    // 0x3213c0: 0xc7a10270  lwc1        $f1, 0x270($sp)
    ctx->pc = 0x3213c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3213c4: 0xc7a30274  lwc1        $f3, 0x274($sp)
    ctx->pc = 0x3213c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3213c8: 0xc7a50278  lwc1        $f5, 0x278($sp)
    ctx->pc = 0x3213c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3213cc: 0xe7a90280  swc1        $f9, 0x280($sp)
    ctx->pc = 0x3213ccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x3213d0: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x3213d0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3213d4: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3213d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3213d8: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x3213d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B473Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B473Cu, _value); } while (0); }
    // 0x3213dc: 0xe7a0028c  swc1        $f0, 0x28C($sp)
    ctx->pc = 0x3213dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 652), bits); }
    // 0x3213e0: 0xe7ab0290  swc1        $f11, 0x290($sp)
    ctx->pc = 0x3213e0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x3213e4: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x3213e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4740u, _value); } while (0); }
    // 0x3213e8: 0x8fa30420  lw          $v1, 0x420($sp)
    ctx->pc = 0x3213e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1056)));
    // 0x3213ec: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x3213ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3213f0: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x3213f0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3213f4: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x3213f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4744u, _value); } while (0); }
    // 0x3213f8: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x3213f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4748u, _value); } while (0); }
    // 0x3213fc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3213fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B474Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B474Cu, _value); } while (0); }
    // 0x321400: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4750u, _value); } while (0); }
    // 0x321404: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4758u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4758u, _value); } while (0); }
    // 0x321408: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x32140c: 0xc7a20280  lwc1        $f2, 0x280($sp)
    ctx->pc = 0x32140cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321410: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321414: 0xc7a60284  lwc1        $f6, 0x284($sp)
    ctx->pc = 0x321414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321418: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x32141c: 0xc7a50288  lwc1        $f5, 0x288($sp)
    ctx->pc = 0x32141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x321420: 0xc7a1028c  lwc1        $f1, 0x28C($sp)
    ctx->pc = 0x321420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321424: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x321424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4770u, _value); } while (0); }
    // 0x321428: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4760u, _value); } while (0); }
    // 0x32142c: 0xc7a30290  lwc1        $f3, 0x290($sp)
    ctx->pc = 0x32142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321430: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x321430u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4774u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4774u, _value); } while (0); }
    // 0x321434: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x321434u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4778u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4778u, _value); } while (0); }
    // 0x321438: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x321438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B477Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B477Cu, _value); } while (0); }
    // 0x32143c: 0xc7a10294  lwc1        $f1, 0x294($sp)
    ctx->pc = 0x32143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321440: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x321440u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4780u, _value); } while (0); }
    // 0x321444: 0xc7a20298  lwc1        $f2, 0x298($sp)
    ctx->pc = 0x321444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321448: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x321448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4784u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4784u, _value); } while (0); }
    // 0x32144c: 0xe7a0029c  swc1        $f0, 0x29C($sp)
    ctx->pc = 0x32144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 668), bits); }
    // 0x321450: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x321450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4788u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4788u, _value); } while (0); }
    // 0x321454: 0xe7a902a0  swc1        $f9, 0x2A0($sp)
    ctx->pc = 0x321454u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x321458: 0x8fa50428  lw          $a1, 0x428($sp)
    ctx->pc = 0x321458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1064)));
    // 0x32145c: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x32145cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x321460: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x321460u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x321464: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x321464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
    // 0x321468: 0x8fa30430  lw          $v1, 0x430($sp)
    ctx->pc = 0x321468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1072)));
    // 0x32146c: 0xe7ab02b0  swc1        $f11, 0x2B0($sp)
    ctx->pc = 0x32146cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x321470: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321470u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321474: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x321474u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321478: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B478Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B478Cu, _value); } while (0); }
    // 0x32147c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x32147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4790u, _value); } while (0); }
    // 0x321480: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4798u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4798u, _value); } while (0); }
    // 0x321484: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321488: 0xc7a202a0  lwc1        $f2, 0x2A0($sp)
    ctx->pc = 0x321488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32148c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x32148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321490: 0xc7a602a4  lwc1        $f6, 0x2A4($sp)
    ctx->pc = 0x321490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321494: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321498: 0xc7a502a8  lwc1        $f5, 0x2A8($sp)
    ctx->pc = 0x321498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32149c: 0xc7a102ac  lwc1        $f1, 0x2AC($sp)
    ctx->pc = 0x32149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3214a0: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x3214a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47B0u, _value); } while (0); }
    // 0x3214a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3214a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47A0u, _value); } while (0); }
    // 0x3214a8: 0xc7a302b0  lwc1        $f3, 0x2B0($sp)
    ctx->pc = 0x3214a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3214ac: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x3214acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47B4u, _value); } while (0); }
    // 0x3214b0: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x3214b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47B8u, _value); } while (0); }
    // 0x3214b4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3214b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47BCu, _value); } while (0); }
    // 0x3214b8: 0xc7a102b4  lwc1        $f1, 0x2B4($sp)
    ctx->pc = 0x3214b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3214bc: 0xc7a202b8  lwc1        $f2, 0x2B8($sp)
    ctx->pc = 0x3214bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3214c0: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x3214c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47C0u, _value); } while (0); }
    // 0x3214c4: 0xe7a002bc  swc1        $f0, 0x2BC($sp)
    ctx->pc = 0x3214c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 700), bits); }
    // 0x3214c8: 0xe7a902c0  swc1        $f9, 0x2C0($sp)
    ctx->pc = 0x3214c8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
    // 0x3214cc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3214ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47C4u, _value); } while (0); }
    // 0x3214d0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x3214d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47C8u, _value); } while (0); }
    // 0x3214d4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3214d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47CCu, _value); } while (0); }
    // 0x3214d8: 0x8fa40438  lw          $a0, 0x438($sp)
    ctx->pc = 0x3214d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1080)));
    // 0x3214dc: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x3214dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3214e0: 0xe48a0008  swc1        $f10, 0x8($a0)
    ctx->pc = 0x3214e0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3214e4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3214e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47D0u, _value); } while (0); }
    // 0x3214e8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3214e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47D8u, _value); } while (0); }
    // 0x3214ec: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x3214ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
    // 0x3214f0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3214f4: 0x8fa50440  lw          $a1, 0x440($sp)
    ctx->pc = 0x3214f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
    // 0x3214f8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3214f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3214fc: 0xe7ab02d0  swc1        $f11, 0x2D0($sp)
    ctx->pc = 0x3214fcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x321500: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321504: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x321504u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x321508: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x321508u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x32150c: 0xe7a902e0  swc1        $f9, 0x2E0($sp)
    ctx->pc = 0x32150cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x321510: 0xc7a102c0  lwc1        $f1, 0x2C0($sp)
    ctx->pc = 0x321510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321514: 0xc7a302c4  lwc1        $f3, 0x2C4($sp)
    ctx->pc = 0x321514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321518: 0xc7a502c8  lwc1        $f5, 0x2C8($sp)
    ctx->pc = 0x321518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32151c: 0xc7a202cc  lwc1        $f2, 0x2CC($sp)
    ctx->pc = 0x32151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321520: 0xc7a602d0  lwc1        $f6, 0x2D0($sp)
    ctx->pc = 0x321520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321524: 0xc7a702d4  lwc1        $f7, 0x2D4($sp)
    ctx->pc = 0x321524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x321528: 0xc7ac02d8  lwc1        $f12, 0x2D8($sp)
    ctx->pc = 0x321528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x32152c: 0xe7a002dc  swc1        $f0, 0x2DC($sp)
    ctx->pc = 0x32152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
    // 0x321530: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x321530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47F0u, _value); } while (0); }
    // 0x321534: 0x8fa50448  lw          $a1, 0x448($sp)
    ctx->pc = 0x321534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1096)));
    // 0x321538: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x321538u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x32153c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x32153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47E0u, _value); } while (0); }
    // 0x321540: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x321540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x321544: 0xe4630004  swc1        $f3, 0x4($v1)
    ctx->pc = 0x321544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47F4u, _value); } while (0); }
    // 0x321548: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x321548u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47F8u, _value); } while (0); }
    // 0x32154c: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x32154cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B47FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B47FCu, _value); } while (0); }
    // 0x321550: 0xe7a002ec  swc1        $f0, 0x2EC($sp)
    ctx->pc = 0x321550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 748), bits); }
    // 0x321554: 0xe7ab02f0  swc1        $f11, 0x2F0($sp)
    ctx->pc = 0x321554u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x321558: 0xe4460020  swc1        $f6, 0x20($v0)
    ctx->pc = 0x321558u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4800u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4800u, _value); } while (0); }
    // 0x32155c: 0x8fa30450  lw          $v1, 0x450($sp)
    ctx->pc = 0x32155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
    // 0x321560: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321560u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321564: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x321564u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321568: 0xe4870004  swc1        $f7, 0x4($a0)
    ctx->pc = 0x321568u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4804u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4804u, _value); } while (0); }
    // 0x32156c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x32156cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4808u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4808u, _value); } while (0); }
    // 0x321570: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B480Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B480Cu, _value); } while (0); }
    // 0x321574: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4810u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4810u, _value); } while (0); }
    // 0x321578: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4818u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4818u, _value); } while (0); }
    // 0x32157c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321580: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x321580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321584: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321588: 0xc7a202e4  lwc1        $f2, 0x2E4($sp)
    ctx->pc = 0x321588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32158c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x32158cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321590: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x321590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4830u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4830u, _value); } while (0); }
    // 0x321594: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4820u, _value); } while (0); }
    // 0x321598: 0xe7a002fc  swc1        $f0, 0x2FC($sp)
    ctx->pc = 0x321598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
    // 0x32159c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x32159cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4834u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4834u, _value); } while (0); }
    // 0x3215a0: 0xc7a302e8  lwc1        $f3, 0x2E8($sp)
    ctx->pc = 0x3215a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3215a4: 0x8fa50458  lw          $a1, 0x458($sp)
    ctx->pc = 0x3215a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
    // 0x3215a8: 0xc7a102ec  lwc1        $f1, 0x2EC($sp)
    ctx->pc = 0x3215a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3215ac: 0xc7a202f0  lwc1        $f2, 0x2F0($sp)
    ctx->pc = 0x3215acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3215b0: 0xc7a502f4  lwc1        $f5, 0x2F4($sp)
    ctx->pc = 0x3215b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3215b4: 0xc7a602f8  lwc1        $f6, 0x2F8($sp)
    ctx->pc = 0x3215b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3215b8: 0xe7a90300  swc1        $f9, 0x300($sp)
    ctx->pc = 0x3215b8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    // 0x3215bc: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3215bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3215c0: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x3215c0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3215c4: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3215c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4838u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4838u, _value); } while (0); }
    // 0x3215c8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3215c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B483Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B483Cu, _value); } while (0); }
    // 0x3215cc: 0xe7a0030c  swc1        $f0, 0x30C($sp)
    ctx->pc = 0x3215ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
    // 0x3215d0: 0xe7ab0310  swc1        $f11, 0x310($sp)
    ctx->pc = 0x3215d0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x3215d4: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x3215d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4840u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4840u, _value); } while (0); }
    // 0x3215d8: 0x8fa30460  lw          $v1, 0x460($sp)
    ctx->pc = 0x3215d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x3215dc: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x3215dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3215e0: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x3215e0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3215e4: 0xe4860008  swc1        $f6, 0x8($a0)
    ctx->pc = 0x3215e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4848u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4848u, _value); } while (0); }
    // 0x3215e8: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x3215e8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4844u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4844u, _value); } while (0); }
    // 0x3215ec: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3215ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B484Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B484Cu, _value); } while (0); }
    // 0x3215f0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3215f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4850u, _value); } while (0); }
    // 0x3215f4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3215f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4858u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4858u, _value); } while (0); }
    // 0x3215f8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3215f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3215fc: 0xc7a20300  lwc1        $f2, 0x300($sp)
    ctx->pc = 0x3215fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321600: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321604: 0xc7a50304  lwc1        $f5, 0x304($sp)
    ctx->pc = 0x321604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x321608: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x32160c: 0xc7a30308  lwc1        $f3, 0x308($sp)
    ctx->pc = 0x32160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321610: 0xc7a1030c  lwc1        $f1, 0x30C($sp)
    ctx->pc = 0x321610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321614: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4860u, _value); } while (0); }
    // 0x321618: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x321618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4870u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4870u, _value); } while (0); }
    // 0x32161c: 0xc7a20310  lwc1        $f2, 0x310($sp)
    ctx->pc = 0x32161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321620: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x321620u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4874u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4874u, _value); } while (0); }
    // 0x321624: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x321624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4878u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4878u, _value); } while (0); }
    // 0x321628: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x321628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B487Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B487Cu, _value); } while (0); }
    // 0x32162c: 0xc7a10314  lwc1        $f1, 0x314($sp)
    ctx->pc = 0x32162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321630: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x321630u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4880u, _value); } while (0); }
    // 0x321634: 0xe7a0031c  swc1        $f0, 0x31C($sp)
    ctx->pc = 0x321634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 796), bits); }
    // 0x321638: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x321638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4884u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4884u, _value); } while (0); }
    // 0x32163c: 0xc7a20318  lwc1        $f2, 0x318($sp)
    ctx->pc = 0x32163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321640: 0x8fa50468  lw          $a1, 0x468($sp)
    ctx->pc = 0x321640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1128)));
    // 0x321644: 0xe7a90320  swc1        $f9, 0x320($sp)
    ctx->pc = 0x321644u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x321648: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x321648u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x32164c: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x32164cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x321650: 0xe7a0032c  swc1        $f0, 0x32C($sp)
    ctx->pc = 0x321650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 812), bits); }
    // 0x321654: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x321654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x321658: 0xe7ab0330  swc1        $f11, 0x330($sp)
    ctx->pc = 0x321658u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x32165c: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x32165cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321660: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x321660u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321664: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x321664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4888u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4888u, _value); } while (0); }
    // 0x321668: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B488Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B488Cu, _value); } while (0); }
    // 0x32166c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x32166cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4890u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4890u, _value); } while (0); }
    // 0x321670: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4898u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4898u, _value); } while (0); }
    // 0x321674: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x321674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321678: 0xc7a20320  lwc1        $f2, 0x320($sp)
    ctx->pc = 0x321678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32167c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x32167cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321680: 0xc7a60324  lwc1        $f6, 0x324($sp)
    ctx->pc = 0x321680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x321684: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x321684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321688: 0xc7a50328  lwc1        $f5, 0x328($sp)
    ctx->pc = 0x321688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32168c: 0xc7a1032c  lwc1        $f1, 0x32C($sp)
    ctx->pc = 0x32168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321690: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x321690u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48B0u, _value); } while (0); }
    // 0x321694: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48A0u, _value); } while (0); }
    // 0x321698: 0xc7a30330  lwc1        $f3, 0x330($sp)
    ctx->pc = 0x321698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32169c: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x32169cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48B4u, _value); } while (0); }
    // 0x3216a0: 0xe4650008  swc1        $f5, 0x8($v1)
    ctx->pc = 0x3216a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48B8u, _value); } while (0); }
    // 0x3216a4: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3216a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48BCu, _value); } while (0); }
    // 0x3216a8: 0xc7a10334  lwc1        $f1, 0x334($sp)
    ctx->pc = 0x3216a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3216ac: 0xc7a20338  lwc1        $f2, 0x338($sp)
    ctx->pc = 0x3216acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3216b0: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x3216b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48C0u, _value); } while (0); }
    // 0x3216b4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3216b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48C4u, _value); } while (0); }
    // 0x3216b8: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x3216b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48C8u, _value); } while (0); }
    // 0x3216bc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3216bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48CCu, _value); } while (0); }
    // 0x3216c0: 0xe7a0033c  swc1        $f0, 0x33C($sp)
    ctx->pc = 0x3216c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 828), bits); }
    // 0x3216c4: 0xe7a90340  swc1        $f9, 0x340($sp)
    ctx->pc = 0x3216c4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x3216c8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3216c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48D0u, _value); } while (0); }
    // 0x3216cc: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3216ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48D8u, _value); } while (0); }
    // 0x3216d0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3216d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3216d4: 0x8fa403a8  lw          $a0, 0x3A8($sp)
    ctx->pc = 0x3216d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
    // 0x3216d8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3216d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3216dc: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x3216dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3216e0: 0xe48a0008  swc1        $f10, 0x8($a0)
    ctx->pc = 0x3216e0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3216e4: 0xe7a0034c  swc1        $f0, 0x34C($sp)
    ctx->pc = 0x3216e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
    // 0x3216e8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3216e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3216ec: 0x8fa503b0  lw          $a1, 0x3B0($sp)
    ctx->pc = 0x3216ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x3216f0: 0xe7ab0350  swc1        $f11, 0x350($sp)
    ctx->pc = 0x3216f0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
    // 0x3216f4: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3216f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3216f8: 0xe4a80008  swc1        $f8, 0x8($a1)
    ctx->pc = 0x3216f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3216fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3216fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48E0u, _value); } while (0); }
    // 0x321700: 0xc7a10340  lwc1        $f1, 0x340($sp)
    ctx->pc = 0x321700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321704: 0xc7a50344  lwc1        $f5, 0x344($sp)
    ctx->pc = 0x321704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x321708: 0xc7a60348  lwc1        $f6, 0x348($sp)
    ctx->pc = 0x321708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x32170c: 0xc7a2034c  lwc1        $f2, 0x34C($sp)
    ctx->pc = 0x32170cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321710: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x321710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48F0u, _value); } while (0); }
    // 0x321714: 0xc7a10354  lwc1        $f1, 0x354($sp)
    ctx->pc = 0x321714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321718: 0xc7a30350  lwc1        $f3, 0x350($sp)
    ctx->pc = 0x321718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x32171c: 0xc7a70358  lwc1        $f7, 0x358($sp)
    ctx->pc = 0x32171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x321720: 0xe7a90360  swc1        $f9, 0x360($sp)
    ctx->pc = 0x321720u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
    // 0x321724: 0xe7a0035c  swc1        $f0, 0x35C($sp)
    ctx->pc = 0x321724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 860), bits); }
    // 0x321728: 0xe462000c  swc1        $f2, 0xC($v1)
    ctx->pc = 0x321728u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48FCu, _value); } while (0); }
    // 0x32172c: 0x8fa503b8  lw          $a1, 0x3B8($sp)
    ctx->pc = 0x32172cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x321730: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x321730u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x321734: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x321734u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48F4u, _value); } while (0); }
    // 0x321738: 0xe4660008  swc1        $f6, 0x8($v1)
    ctx->pc = 0x321738u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B48F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B48F8u, _value); } while (0); }
    // 0x32173c: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x32173cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x321740: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x321740u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4900u, _value); } while (0); }
    // 0x321744: 0xe7a0036c  swc1        $f0, 0x36C($sp)
    ctx->pc = 0x321744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 876), bits); }
    // 0x321748: 0xe7ab0370  swc1        $f11, 0x370($sp)
    ctx->pc = 0x321748u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x32174c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x32174cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4904u, _value); } while (0); }
    // 0x321750: 0xe4870008  swc1        $f7, 0x8($a0)
    ctx->pc = 0x321750u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4908u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4908u, _value); } while (0); }
    // 0x321754: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B490Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B490Cu, _value); } while (0); }
    // 0x321758: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x321758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x32175c: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x32175cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x321760: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x321764: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x321764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4910u, _value); } while (0); }
    // 0x321768: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4918u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4918u, _value); } while (0); }
    // 0x32176c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x32176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x321770: 0xc7a10360  lwc1        $f1, 0x360($sp)
    ctx->pc = 0x321770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321774: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x321774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x321778: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4920u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4920u, _value); } while (0); }
    // 0x32177c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x32177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x321780: 0xe7a0037c  swc1        $f0, 0x37C($sp)
    ctx->pc = 0x321780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 892), bits); }
    // 0x321784: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x321784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4930u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4930u, _value); } while (0); }
    // 0x321788: 0xe7a90380  swc1        $f9, 0x380($sp)
    ctx->pc = 0x321788u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x32178c: 0x8fa503c8  lw          $a1, 0x3C8($sp)
    ctx->pc = 0x32178cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
    // 0x321790: 0xc7a20364  lwc1        $f2, 0x364($sp)
    ctx->pc = 0x321790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321794: 0xc7a30368  lwc1        $f3, 0x368($sp)
    ctx->pc = 0x321794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321798: 0xc7a1036c  lwc1        $f1, 0x36C($sp)
    ctx->pc = 0x321798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32179c: 0xc7a50370  lwc1        $f5, 0x370($sp)
    ctx->pc = 0x32179cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3217a0: 0xc7a60374  lwc1        $f6, 0x374($sp)
    ctx->pc = 0x3217a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3217a4: 0xc7a70378  lwc1        $f7, 0x378($sp)
    ctx->pc = 0x3217a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3217a8: 0xe4aa0008  swc1        $f10, 0x8($a1)
    ctx->pc = 0x3217a8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x3217ac: 0xe4a40004  swc1        $f4, 0x4($a1)
    ctx->pc = 0x3217acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x3217b0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3217b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4934u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4934u, _value); } while (0); }
    // 0x3217b4: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x3217b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4938u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4938u, _value); } while (0); }
    // 0x3217b8: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x3217b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B493Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B493Cu, _value); } while (0); }
    // 0x3217bc: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x3217bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x3217c0: 0xe7ab0390  swc1        $f11, 0x390($sp)
    ctx->pc = 0x3217c0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
    // 0x3217c4: 0xe7a0038c  swc1        $f0, 0x38C($sp)
    ctx->pc = 0x3217c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
    // 0x3217c8: 0xe4680008  swc1        $f8, 0x8($v1)
    ctx->pc = 0x3217c8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3217cc: 0xe4450020  swc1        $f5, 0x20($v0)
    ctx->pc = 0x3217ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4940u, _value); } while (0); }
    // 0x3217d0: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x3217d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3217d4: 0xe4860004  swc1        $f6, 0x4($a0)
    ctx->pc = 0x3217d4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4944u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4944u, _value); } while (0); }
    // 0x3217d8: 0xe4870008  swc1        $f7, 0x8($a0)
    ctx->pc = 0x3217d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4948u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4948u, _value); } while (0); }
    // 0x3217dc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3217dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B494Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B494Cu, _value); } while (0); }
    // 0x3217e0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x3217e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4950u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4950u, _value); } while (0); }
    // 0x3217e4: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3217e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4958u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4958u, _value); } while (0); }
    // 0x3217e8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3217e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3217ec: 0xc7a20380  lwc1        $f2, 0x380($sp)
    ctx->pc = 0x3217ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3217f0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3217f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3217f4: 0xc7a1038c  lwc1        $f1, 0x38C($sp)
    ctx->pc = 0x3217f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3217f8: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x3217f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3217fc: 0xc7a40384  lwc1        $f4, 0x384($sp)
    ctx->pc = 0x3217fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x321800: 0xc7a30388  lwc1        $f3, 0x388($sp)
    ctx->pc = 0x321800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x321804: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x321804u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4970u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4970u, _value); } while (0); }
    // 0x321808: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x321808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4960u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4960u, _value); } while (0); }
    // 0x32180c: 0xc7a20390  lwc1        $f2, 0x390($sp)
    ctx->pc = 0x32180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x321810: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x321810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B497Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B497Cu, _value); } while (0); }
    // 0x321814: 0xe4640004  swc1        $f4, 0x4($v1)
    ctx->pc = 0x321814u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4974u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4974u, _value); } while (0); }
    // 0x321818: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x321818u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4978u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4978u, _value); } while (0); }
    // 0x32181c: 0xe7a0039c  swc1        $f0, 0x39C($sp)
    ctx->pc = 0x32181cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
    // 0x321820: 0xe4420020  swc1        $f2, 0x20($v0)
    ctx->pc = 0x321820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4980u, _value); } while (0); }
    // 0x321824: 0xc7a10394  lwc1        $f1, 0x394($sp)
    ctx->pc = 0x321824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x321828: 0xc7a20398  lwc1        $f2, 0x398($sp)
    ctx->pc = 0x321828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32182c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x32182cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4984u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4984u, _value); } while (0); }
    // 0x321830: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x321830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4988u, _value); } while (0); }
    // 0x321834: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x321834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B498Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B498Cu, _value); } while (0); }
    // 0x321838: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x321838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4998u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4998u, _value); } while (0); }
    // 0x32183c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x32183cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5B4990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B4990u, _value); } while (0); }
label_321840:
    // 0x321840: 0xdfb00470  ld          $s0, 0x470($sp)
    ctx->pc = 0x321840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x321844: 0xdfb10478  ld          $s1, 0x478($sp)
    ctx->pc = 0x321844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1144)));
    // 0x321848: 0xdfb20480  ld          $s2, 0x480($sp)
    ctx->pc = 0x321848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x32184c: 0xdfb30488  ld          $s3, 0x488($sp)
    ctx->pc = 0x32184cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x321850: 0xdfb40490  ld          $s4, 0x490($sp)
    ctx->pc = 0x321850u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x321854: 0xdfb50498  ld          $s5, 0x498($sp)
    ctx->pc = 0x321854u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x321858: 0xdfb604a0  ld          $s6, 0x4A0($sp)
    ctx->pc = 0x321858u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x32185c: 0xdfb704a8  ld          $s7, 0x4A8($sp)
    ctx->pc = 0x32185cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x321860: 0xdfbe04b0  ld          $fp, 0x4B0($sp)
    ctx->pc = 0x321860u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x321864: 0xdfbf04b8  ld          $ra, 0x4B8($sp)
    ctx->pc = 0x321864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x321868: 0x3e00008  jr          $ra
    ctx->pc = 0x321868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321868u;
        // 0x32186c: 0x27bd04c0  addiu       $sp, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321870u;
}
