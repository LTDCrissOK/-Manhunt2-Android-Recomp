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

// Function: sub_002A2638
// Address: 0x2a2638 - 0x2a3558
void sub_002A2638_0x2a2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2638_0x2a2638");
#endif

    switch (ctx->pc) {
        case 0x2a26a0u: goto label_2a26a0;
        case 0x2a26c0u: goto label_2a26c0;
        case 0x2a26e0u: goto label_2a26e0;
        case 0x2a26fcu: goto label_2a26fc;
        case 0x2a2718u: goto label_2a2718;
        case 0x2a2734u: goto label_2a2734;
        case 0x2a2750u: goto label_2a2750;
        case 0x2a2770u: goto label_2a2770;
        case 0x2a2790u: goto label_2a2790;
        case 0x2a27b0u: goto label_2a27b0;
        case 0x2a27d0u: goto label_2a27d0;
        case 0x2a27ecu: goto label_2a27ec;
        case 0x2a2808u: goto label_2a2808;
        case 0x2a2828u: goto label_2a2828;
        case 0x2a2848u: goto label_2a2848;
        case 0x2a2868u: goto label_2a2868;
        case 0x2a2888u: goto label_2a2888;
        case 0x2a28a8u: goto label_2a28a8;
        case 0x2a28c8u: goto label_2a28c8;
        case 0x2a28e8u: goto label_2a28e8;
        case 0x2a2908u: goto label_2a2908;
        case 0x2a2924u: goto label_2a2924;
        case 0x2a2940u: goto label_2a2940;
        case 0x2a295cu: goto label_2a295c;
        case 0x2a297cu: goto label_2a297c;
        case 0x2a2998u: goto label_2a2998;
        case 0x2a29b4u: goto label_2a29b4;
        case 0x2a29d0u: goto label_2a29d0;
        case 0x2a29ecu: goto label_2a29ec;
        case 0x2a2a0cu: goto label_2a2a0c;
        case 0x2a2a2cu: goto label_2a2a2c;
        case 0x2a2a4cu: goto label_2a2a4c;
        case 0x2a2a68u: goto label_2a2a68;
        case 0x2a2a84u: goto label_2a2a84;
        case 0x2a2aa4u: goto label_2a2aa4;
        case 0x2a2ac4u: goto label_2a2ac4;
        case 0x2a2ae0u: goto label_2a2ae0;
        case 0x2a2afcu: goto label_2a2afc;
        case 0x2a2b24u: goto label_2a2b24;
        case 0x2a2b44u: goto label_2a2b44;
        case 0x2a2b64u: goto label_2a2b64;
        case 0x2a2b8cu: goto label_2a2b8c;
        case 0x2a2bacu: goto label_2a2bac;
        case 0x2a2bccu: goto label_2a2bcc;
        case 0x2a2becu: goto label_2a2bec;
        case 0x2a2c0cu: goto label_2a2c0c;
        case 0x2a2c2cu: goto label_2a2c2c;
        case 0x2a2c4cu: goto label_2a2c4c;
        case 0x2a2c6cu: goto label_2a2c6c;
        case 0x2a2c8cu: goto label_2a2c8c;
        case 0x2a2cacu: goto label_2a2cac;
        case 0x2a2cccu: goto label_2a2ccc;
        case 0x2a2cecu: goto label_2a2cec;
        case 0x2a2d0cu: goto label_2a2d0c;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d48u: goto label_2a2d48;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d90u: goto label_2a2d90;
        case 0x2a2dacu: goto label_2a2dac;
        case 0x2a2dccu: goto label_2a2dcc;
        case 0x2a2decu: goto label_2a2dec;
        case 0x2a2e0cu: goto label_2a2e0c;
        case 0x2a2e2cu: goto label_2a2e2c;
        case 0x2a2e4cu: goto label_2a2e4c;
        case 0x2a2e6cu: goto label_2a2e6c;
        case 0x2a2e8cu: goto label_2a2e8c;
        case 0x2a2eacu: goto label_2a2eac;
        case 0x2a2eccu: goto label_2a2ecc;
        case 0x2a2eecu: goto label_2a2eec;
        case 0x2a2f0cu: goto label_2a2f0c;
        case 0x2a2f30u: goto label_2a2f30;
        case 0x2a2f50u: goto label_2a2f50;
        case 0x2a2f6cu: goto label_2a2f6c;
        case 0x2a2f88u: goto label_2a2f88;
        case 0x2a2fa4u: goto label_2a2fa4;
        case 0x2a2fc0u: goto label_2a2fc0;
        case 0x2a2fdcu: goto label_2a2fdc;
        case 0x2a2ff8u: goto label_2a2ff8;
        case 0x2a3014u: goto label_2a3014;
        case 0x2a3030u: goto label_2a3030;
        case 0x2a304cu: goto label_2a304c;
        case 0x2a3068u: goto label_2a3068;
        case 0x2a3084u: goto label_2a3084;
        case 0x2a30a0u: goto label_2a30a0;
        case 0x2a30bcu: goto label_2a30bc;
        case 0x2a30dcu: goto label_2a30dc;
        case 0x2a30f8u: goto label_2a30f8;
        case 0x2a3110u: goto label_2a3110;
        case 0x2a312cu: goto label_2a312c;
        case 0x2a3148u: goto label_2a3148;
        case 0x2a3164u: goto label_2a3164;
        case 0x2a3180u: goto label_2a3180;
        case 0x2a319cu: goto label_2a319c;
        case 0x2a31b8u: goto label_2a31b8;
        case 0x2a31d4u: goto label_2a31d4;
        case 0x2a31f0u: goto label_2a31f0;
        case 0x2a320cu: goto label_2a320c;
        case 0x2a3228u: goto label_2a3228;
        case 0x2a3244u: goto label_2a3244;
        case 0x2a3260u: goto label_2a3260;
        case 0x2a327cu: goto label_2a327c;
        case 0x2a3298u: goto label_2a3298;
        case 0x2a32b4u: goto label_2a32b4;
        case 0x2a32d0u: goto label_2a32d0;
        case 0x2a32ecu: goto label_2a32ec;
        case 0x2a3308u: goto label_2a3308;
        case 0x2a3324u: goto label_2a3324;
        case 0x2a3340u: goto label_2a3340;
        case 0x2a335cu: goto label_2a335c;
        case 0x2a3378u: goto label_2a3378;
        case 0x2a3394u: goto label_2a3394;
        case 0x2a33b0u: goto label_2a33b0;
        case 0x2a33ccu: goto label_2a33cc;
        case 0x2a33e8u: goto label_2a33e8;
        case 0x2a3404u: goto label_2a3404;
        case 0x2a3420u: goto label_2a3420;
        case 0x2a343cu: goto label_2a343c;
        case 0x2a3458u: goto label_2a3458;
        case 0x2a3474u: goto label_2a3474;
        case 0x2a3490u: goto label_2a3490;
        case 0x2a34acu: goto label_2a34ac;
        case 0x2a34c8u: goto label_2a34c8;
        case 0x2a34e4u: goto label_2a34e4;
        case 0x2a3500u: goto label_2a3500;
        case 0x2a351cu: goto label_2a351c;
        case 0x2a3540u: goto label_2a3540;
        default: break;
    }

    ctx->pc = 0x2a2638u;

    // 0x2a2638: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2a2638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2a263c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2a263cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2a2640: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2a2640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2a2644: 0x2462ca60  addiu       $v0, $v1, -0x35A0
    ctx->pc = 0x2a2644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
    // 0x2a2648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a264c: 0x9046000e  lbu         $a2, 0xE($v0)
    ctx->pc = 0x2a264cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x46CA6Eu));
    // 0x2a2650: 0x9444000c  lhu         $a0, 0xC($v0)
    ctx->pc = 0x2a2650u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x46CA6Cu));
    // 0x2a2654: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2654u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2658: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2a2658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2a265c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a265cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2660: 0xdc65ca60  ld          $a1, -0x35A0($v1)
    ctx->pc = 0x2a2660u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x46CA60u));
    // 0x2a2664: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2a2664u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2a2668: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2a2668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x46CA68u));
    // 0x2a266c: 0x2631ca70  addiu       $s1, $s1, -0x3590
    ctx->pc = 0x2a266cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953584));
    // 0x2a2670: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x2a2670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x2a2674: 0x24e7ca80  addiu       $a3, $a3, -0x3580
    ctx->pc = 0x2a2674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953600));
    // 0x2a2678: 0xa7a4000c  sh          $a0, 0xC($sp)
    ctx->pc = 0x2a2678u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x2a267c: 0x2508ca90  addiu       $t0, $t0, -0x3570
    ctx->pc = 0x2a267cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953616));
    // 0x2a2680: 0xa3a6000e  sb          $a2, 0xE($sp)
    ctx->pc = 0x2a2680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 14), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a2684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2688: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2a2688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2a268c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2a268cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a2690: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x2a2690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x2a2694: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2694u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2698: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2698u;
    SET_GPR_U32(ctx, 31, 0x2A26A0u);
    ctx->pc = 0x2A269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2698u;
    // 0x2a269c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2698u, 0x2A26A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26A0u;
label_2a26a0:
    // 0x2a26a0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a26a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a26a4: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a26a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a26a8: 0x24e7caa0  addiu       $a3, $a3, -0x3560
    ctx->pc = 0x2a26a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953632));
    // 0x2a26ac: 0x2508caa8  addiu       $t0, $t0, -0x3558
    ctx->pc = 0x2a26acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953640));
    // 0x2a26b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a26b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26b4: 0x26050154  addiu       $a1, $s0, 0x154
    ctx->pc = 0x2a26b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x2a26b8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A26B8u;
    SET_GPR_U32(ctx, 31, 0x2A26C0u);
    ctx->pc = 0x2A26BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26B8u;
    // 0x2a26bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A26B8u, 0x2A26C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26C0u;
label_2a26c0:
    // 0x2a26c0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a26c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a26c4: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a26c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a26c8: 0x24e7cab0  addiu       $a3, $a3, -0x3550
    ctx->pc = 0x2a26c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953648));
    // 0x2a26cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a26ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d0: 0x2605015c  addiu       $a1, $s0, 0x15C
    ctx->pc = 0x2a26d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x2a26d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a26d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26d8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A26D8u;
    SET_GPR_U32(ctx, 31, 0x2A26E0u);
    ctx->pc = 0x2A26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26D8u;
    // 0x2a26dc: 0x2508cab8  addiu       $t0, $t0, -0x3548 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A26D8u, 0x2A26E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26E0u;
label_2a26e0:
    // 0x2a26e0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a26e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a26e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a26e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26e8: 0x24e7cac0  addiu       $a3, $a3, -0x3540
    ctx->pc = 0x2a26e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953664));
    // 0x2a26ec: 0x26050160  addiu       $a1, $s0, 0x160
    ctx->pc = 0x2a26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2a26f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a26f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a26f4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A26F4u;
    SET_GPR_U32(ctx, 31, 0x2A26FCu);
    ctx->pc = 0x2A26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A26F4u;
    // 0x2a26f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A26F4u, 0x2A26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A26FCu;
label_2a26fc:
    // 0x2a26fc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a26fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2704: 0x24e7cac8  addiu       $a3, $a3, -0x3538
    ctx->pc = 0x2a2704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953672));
    // 0x2a2708: 0x26050230  addiu       $a1, $s0, 0x230
    ctx->pc = 0x2a2708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x2a270c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a270cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2710: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2710u;
    SET_GPR_U32(ctx, 31, 0x2A2718u);
    ctx->pc = 0x2A2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2710u;
    // 0x2a2714: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2710u, 0x2A2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2718u;
label_2a2718:
    // 0x2a2718: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2718u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a271c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a271cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2720: 0x24e7cae0  addiu       $a3, $a3, -0x3520
    ctx->pc = 0x2a2720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953696));
    // 0x2a2724: 0x26050164  addiu       $a1, $s0, 0x164
    ctx->pc = 0x2a2724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x2a2728: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a272c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A272Cu;
    SET_GPR_U32(ctx, 31, 0x2A2734u);
    ctx->pc = 0x2A2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A272Cu;
    // 0x2a2730: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A272Cu, 0x2A2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2734u;
label_2a2734:
    // 0x2a2734: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2734u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a273c: 0x24e7cae8  addiu       $a3, $a3, -0x3518
    ctx->pc = 0x2a273cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953704));
    // 0x2a2740: 0x26050168  addiu       $a1, $s0, 0x168
    ctx->pc = 0x2a2740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x2a2744: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2748: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2748u;
    SET_GPR_U32(ctx, 31, 0x2A2750u);
    ctx->pc = 0x2A274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2748u;
    // 0x2a274c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2748u, 0x2A2750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2750u;
label_2a2750:
    // 0x2a2750: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2750u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2754: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2754u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2758: 0x24e7caf0  addiu       $a3, $a3, -0x3510
    ctx->pc = 0x2a2758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953712));
    // 0x2a275c: 0x2508caf8  addiu       $t0, $t0, -0x3508
    ctx->pc = 0x2a275cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953720));
    // 0x2a2760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2764: 0x2605016c  addiu       $a1, $s0, 0x16C
    ctx->pc = 0x2a2764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 364));
    // 0x2a2768: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2768u;
    SET_GPR_U32(ctx, 31, 0x2A2770u);
    ctx->pc = 0x2A276Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2768u;
    // 0x2a276c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2768u, 0x2A2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2770u;
label_2a2770:
    // 0x2a2770: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2770u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2774: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2778: 0x24e7cb00  addiu       $a3, $a3, -0x3500
    ctx->pc = 0x2a2778u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953728));
    // 0x2a277c: 0x2508cb08  addiu       $t0, $t0, -0x34F8
    ctx->pc = 0x2a277cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953736));
    // 0x2a2780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2784: 0x26050170  addiu       $a1, $s0, 0x170
    ctx->pc = 0x2a2784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2a2788: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2788u;
    SET_GPR_U32(ctx, 31, 0x2A2790u);
    ctx->pc = 0x2A278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2788u;
    // 0x2a278c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2788u, 0x2A2790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2790u;
label_2a2790:
    // 0x2a2790: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2794: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2798: 0x24e7cb10  addiu       $a3, $a3, -0x34F0
    ctx->pc = 0x2a2798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953744));
    // 0x2a279c: 0x2508cb20  addiu       $t0, $t0, -0x34E0
    ctx->pc = 0x2a279cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953760));
    // 0x2a27a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a27a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27a4: 0x26050174  addiu       $a1, $s0, 0x174
    ctx->pc = 0x2a27a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 372));
    // 0x2a27a8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A27A8u;
    SET_GPR_U32(ctx, 31, 0x2A27B0u);
    ctx->pc = 0x2A27ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27A8u;
    // 0x2a27ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A27A8u, 0x2A27B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27B0u;
label_2a27b0:
    // 0x2a27b0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a27b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a27b4: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a27b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a27b8: 0x24e7cb30  addiu       $a3, $a3, -0x34D0
    ctx->pc = 0x2a27b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953776));
    // 0x2a27bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a27bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27c0: 0x26050178  addiu       $a1, $s0, 0x178
    ctx->pc = 0x2a27c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x2a27c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a27c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27c8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A27C8u;
    SET_GPR_U32(ctx, 31, 0x2A27D0u);
    ctx->pc = 0x2A27CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27C8u;
    // 0x2a27cc: 0x2508cb40  addiu       $t0, $t0, -0x34C0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A27C8u, 0x2A27D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27D0u;
label_2a27d0:
    // 0x2a27d0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a27d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a27d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a27d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27d8: 0x24e7cb50  addiu       $a3, $a3, -0x34B0
    ctx->pc = 0x2a27d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953808));
    // 0x2a27dc: 0x2605017c  addiu       $a1, $s0, 0x17C
    ctx->pc = 0x2a27dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    // 0x2a27e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a27e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27e4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A27E4u;
    SET_GPR_U32(ctx, 31, 0x2A27ECu);
    ctx->pc = 0x2A27E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A27E4u;
    // 0x2a27e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A27E4u, 0x2A27ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A27ECu;
label_2a27ec:
    // 0x2a27ec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a27ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a27f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a27f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27f4: 0x24e7cb58  addiu       $a3, $a3, -0x34A8
    ctx->pc = 0x2a27f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953816));
    // 0x2a27f8: 0x26050180  addiu       $a1, $s0, 0x180
    ctx->pc = 0x2a27f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x2a27fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a27fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2800: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2800u;
    SET_GPR_U32(ctx, 31, 0x2A2808u);
    ctx->pc = 0x2A2804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2800u;
    // 0x2a2804: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2800u, 0x2A2808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2808u;
label_2a2808:
    // 0x2a2808: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a280c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a280cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2810: 0x24e7cb68  addiu       $a3, $a3, -0x3498
    ctx->pc = 0x2a2810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953832));
    // 0x2a2814: 0x2508cb78  addiu       $t0, $t0, -0x3488
    ctx->pc = 0x2a2814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953848));
    // 0x2a2818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a281c: 0x26050184  addiu       $a1, $s0, 0x184
    ctx->pc = 0x2a281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    // 0x2a2820: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2820u;
    SET_GPR_U32(ctx, 31, 0x2A2828u);
    ctx->pc = 0x2A2824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2820u;
    // 0x2a2824: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2820u, 0x2A2828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2828u;
label_2a2828:
    // 0x2a2828: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2828u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a282c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a282cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2830: 0x24e7cb88  addiu       $a3, $a3, -0x3478
    ctx->pc = 0x2a2830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953864));
    // 0x2a2834: 0x2508cb90  addiu       $t0, $t0, -0x3470
    ctx->pc = 0x2a2834u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953872));
    // 0x2a2838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a283c: 0x26050188  addiu       $a1, $s0, 0x188
    ctx->pc = 0x2a283cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x2a2840: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2840u;
    SET_GPR_U32(ctx, 31, 0x2A2848u);
    ctx->pc = 0x2A2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2840u;
    // 0x2a2844: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2840u, 0x2A2848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2848u;
label_2a2848:
    // 0x2a2848: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a284c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a284cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2850: 0x24e7cba0  addiu       $a3, $a3, -0x3460
    ctx->pc = 0x2a2850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953888));
    // 0x2a2854: 0x2508cba8  addiu       $t0, $t0, -0x3458
    ctx->pc = 0x2a2854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953896));
    // 0x2a2858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a285c: 0x2605018c  addiu       $a1, $s0, 0x18C
    ctx->pc = 0x2a285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 396));
    // 0x2a2860: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2860u;
    SET_GPR_U32(ctx, 31, 0x2A2868u);
    ctx->pc = 0x2A2864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2860u;
    // 0x2a2864: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2860u, 0x2A2868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2868u;
label_2a2868:
    // 0x2a2868: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2868u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a286c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a286cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2870: 0x24e7cbb0  addiu       $a3, $a3, -0x3450
    ctx->pc = 0x2a2870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953904));
    // 0x2a2874: 0x2508cbc0  addiu       $t0, $t0, -0x3440
    ctx->pc = 0x2a2874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953920));
    // 0x2a2878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a287c: 0x26050190  addiu       $a1, $s0, 0x190
    ctx->pc = 0x2a287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x2a2880: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2880u;
    SET_GPR_U32(ctx, 31, 0x2A2888u);
    ctx->pc = 0x2A2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2880u;
    // 0x2a2884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2880u, 0x2A2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2888u;
label_2a2888:
    // 0x2a2888: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2888u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a288c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a288cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2890: 0x24e7cbd0  addiu       $a3, $a3, -0x3430
    ctx->pc = 0x2a2890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953936));
    // 0x2a2894: 0x2508cbd8  addiu       $t0, $t0, -0x3428
    ctx->pc = 0x2a2894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953944));
    // 0x2a2898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a289c: 0x26050194  addiu       $a1, $s0, 0x194
    ctx->pc = 0x2a289cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 404));
    // 0x2a28a0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A28A0u;
    SET_GPR_U32(ctx, 31, 0x2A28A8u);
    ctx->pc = 0x2A28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28A0u;
    // 0x2a28a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A28A0u, 0x2A28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28A8u;
label_2a28a8:
    // 0x2a28a8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a28a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a28ac: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a28acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a28b0: 0x24e7cbe0  addiu       $a3, $a3, -0x3420
    ctx->pc = 0x2a28b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953952));
    // 0x2a28b4: 0x2508cbe8  addiu       $t0, $t0, -0x3418
    ctx->pc = 0x2a28b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953960));
    // 0x2a28b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28bc: 0x26050198  addiu       $a1, $s0, 0x198
    ctx->pc = 0x2a28bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
    // 0x2a28c0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A28C0u;
    SET_GPR_U32(ctx, 31, 0x2A28C8u);
    ctx->pc = 0x2A28C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28C0u;
    // 0x2a28c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A28C0u, 0x2A28C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28C8u;
label_2a28c8:
    // 0x2a28c8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a28c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a28cc: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a28ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a28d0: 0x24e7cbf0  addiu       $a3, $a3, -0x3410
    ctx->pc = 0x2a28d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953968));
    // 0x2a28d4: 0x2508cbf8  addiu       $t0, $t0, -0x3408
    ctx->pc = 0x2a28d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294953976));
    // 0x2a28d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a28d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28dc: 0x2605019c  addiu       $a1, $s0, 0x19C
    ctx->pc = 0x2a28dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 412));
    // 0x2a28e0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A28E0u;
    SET_GPR_U32(ctx, 31, 0x2A28E8u);
    ctx->pc = 0x2A28E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A28E0u;
    // 0x2a28e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A28E0u, 0x2A28E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A28E8u;
label_2a28e8:
    // 0x2a28e8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a28e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a28ec: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a28ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a28f0: 0x24e7cc00  addiu       $a3, $a3, -0x3400
    ctx->pc = 0x2a28f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953984));
    // 0x2a28f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a28f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a28f8: 0x260501a0  addiu       $a1, $s0, 0x1A0
    ctx->pc = 0x2a28f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x2a28fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a28fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2900: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2900u;
    SET_GPR_U32(ctx, 31, 0x2A2908u);
    ctx->pc = 0x2A2904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2900u;
    // 0x2a2904: 0x2508cc10  addiu       $t0, $t0, -0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2900u, 0x2A2908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2908u;
label_2a2908:
    // 0x2a2908: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2908u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a290c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2910: 0x260501a4  addiu       $a1, $s0, 0x1A4
    ctx->pc = 0x2a2910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    // 0x2a2914: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2918: 0x24e7cc20  addiu       $a3, $a3, -0x33E0
    ctx->pc = 0x2a2918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954016));
    // 0x2a291c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A291Cu;
    SET_GPR_U32(ctx, 31, 0x2A2924u);
    ctx->pc = 0x2A2920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A291Cu;
    // 0x2a2920: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A291Cu, 0x2A2924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2924u;
label_2a2924:
    // 0x2a2924: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a292c: 0x24e7cc30  addiu       $a3, $a3, -0x33D0
    ctx->pc = 0x2a292cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954032));
    // 0x2a2930: 0x260501a8  addiu       $a1, $s0, 0x1A8
    ctx->pc = 0x2a2930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
    // 0x2a2934: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2a2934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2938: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2938u;
    SET_GPR_U32(ctx, 31, 0x2A2940u);
    ctx->pc = 0x2A293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2938u;
    // 0x2a293c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2938u, 0x2A2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2940u;
label_2a2940:
    // 0x2a2940: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2940u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2948: 0x24e7cc40  addiu       $a3, $a3, -0x33C0
    ctx->pc = 0x2a2948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954048));
    // 0x2a294c: 0x260501ac  addiu       $a1, $s0, 0x1AC
    ctx->pc = 0x2a294cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 428));
    // 0x2a2950: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2954: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2954u;
    SET_GPR_U32(ctx, 31, 0x2A295Cu);
    ctx->pc = 0x2A2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2954u;
    // 0x2a2958: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2954u, 0x2A295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A295Cu;
label_2a295c:
    // 0x2a295c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a295cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2960: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2960u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2964: 0x24e7cc50  addiu       $a3, $a3, -0x33B0
    ctx->pc = 0x2a2964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954064));
    // 0x2a2968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a296c: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x2a296cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x2a2970: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2974: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2974u;
    SET_GPR_U32(ctx, 31, 0x2A297Cu);
    ctx->pc = 0x2A2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2974u;
    // 0x2a2978: 0x2508cc58  addiu       $t0, $t0, -0x33A8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2974u, 0x2A297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A297Cu;
label_2a297c:
    // 0x2a297c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a297cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2984: 0x24e7cc60  addiu       $a3, $a3, -0x33A0
    ctx->pc = 0x2a2984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954080));
    // 0x2a2988: 0x260501b4  addiu       $a1, $s0, 0x1B4
    ctx->pc = 0x2a2988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x2a298c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a298cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2990: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2990u;
    SET_GPR_U32(ctx, 31, 0x2A2998u);
    ctx->pc = 0x2A2994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2990u;
    // 0x2a2994: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2990u, 0x2A2998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2998u;
label_2a2998:
    // 0x2a2998: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2998u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a299c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29a0: 0x24e7cc68  addiu       $a3, $a3, -0x3398
    ctx->pc = 0x2a29a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954088));
    // 0x2a29a4: 0x260501b8  addiu       $a1, $s0, 0x1B8
    ctx->pc = 0x2a29a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 440));
    // 0x2a29a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a29a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29ac: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A29ACu;
    SET_GPR_U32(ctx, 31, 0x2A29B4u);
    ctx->pc = 0x2A29B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29ACu;
    // 0x2a29b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A29ACu, 0x2A29B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29B4u;
label_2a29b4:
    // 0x2a29b4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a29b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a29b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29bc: 0x24e7cc70  addiu       $a3, $a3, -0x3390
    ctx->pc = 0x2a29bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954096));
    // 0x2a29c0: 0x260501bc  addiu       $a1, $s0, 0x1BC
    ctx->pc = 0x2a29c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x2a29c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a29c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29c8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A29C8u;
    SET_GPR_U32(ctx, 31, 0x2A29D0u);
    ctx->pc = 0x2A29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29C8u;
    // 0x2a29cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A29C8u, 0x2A29D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29D0u;
label_2a29d0:
    // 0x2a29d0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a29d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a29d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a29d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29d8: 0x24e7cc80  addiu       $a3, $a3, -0x3380
    ctx->pc = 0x2a29d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954112));
    // 0x2a29dc: 0x260501c0  addiu       $a1, $s0, 0x1C0
    ctx->pc = 0x2a29dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x2a29e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a29e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a29e4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A29E4u;
    SET_GPR_U32(ctx, 31, 0x2A29ECu);
    ctx->pc = 0x2A29E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A29E4u;
    // 0x2a29e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A29E4u, 0x2A29ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A29ECu;
label_2a29ec:
    // 0x2a29ec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a29ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a29f0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a29f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a29f4: 0x24e7cc90  addiu       $a3, $a3, -0x3370
    ctx->pc = 0x2a29f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954128));
    // 0x2a29f8: 0x2508cca0  addiu       $t0, $t0, -0x3360
    ctx->pc = 0x2a29f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954144));
    // 0x2a29fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a29fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a00: 0x260501c4  addiu       $a1, $s0, 0x1C4
    ctx->pc = 0x2a2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 452));
    // 0x2a2a04: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2A04u;
    SET_GPR_U32(ctx, 31, 0x2A2A0Cu);
    ctx->pc = 0x2A2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A04u;
    // 0x2a2a08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2A04u, 0x2A2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A0Cu;
label_2a2a0c:
    // 0x2a2a0c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a10: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2a10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a14: 0x24e7ccb0  addiu       $a3, $a3, -0x3350
    ctx->pc = 0x2a2a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954160));
    // 0x2a2a18: 0x2508ccc0  addiu       $t0, $t0, -0x3340
    ctx->pc = 0x2a2a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954176));
    // 0x2a2a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a20: 0x260501c8  addiu       $a1, $s0, 0x1C8
    ctx->pc = 0x2a2a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 456));
    // 0x2a2a24: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2A24u;
    SET_GPR_U32(ctx, 31, 0x2A2A2Cu);
    ctx->pc = 0x2A2A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A24u;
    // 0x2a2a28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2A24u, 0x2A2A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A2Cu;
label_2a2a2c:
    // 0x2a2a2c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a30: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a34: 0x24e7ccd0  addiu       $a3, $a3, -0x3330
    ctx->pc = 0x2a2a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954192));
    // 0x2a2a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a3c: 0x260501cc  addiu       $a1, $s0, 0x1CC
    ctx->pc = 0x2a2a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 460));
    // 0x2a2a40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2a40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a44: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2A44u;
    SET_GPR_U32(ctx, 31, 0x2A2A4Cu);
    ctx->pc = 0x2A2A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A44u;
    // 0x2a2a48: 0x2508ccd8  addiu       $t0, $t0, -0x3328 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2A44u, 0x2A2A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A4Cu;
label_2a2a4c:
    // 0x2a2a4c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a54: 0x24e7cce0  addiu       $a3, $a3, -0x3320
    ctx->pc = 0x2a2a54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954208));
    // 0x2a2a58: 0x260501d0  addiu       $a1, $s0, 0x1D0
    ctx->pc = 0x2a2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x2a2a5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2a5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a60: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2A60u;
    SET_GPR_U32(ctx, 31, 0x2A2A68u);
    ctx->pc = 0x2A2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A60u;
    // 0x2a2a64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2A60u, 0x2A2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A68u;
label_2a2a68:
    // 0x2a2a68: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a70: 0x24e7cce8  addiu       $a3, $a3, -0x3318
    ctx->pc = 0x2a2a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954216));
    // 0x2a2a74: 0x260501d4  addiu       $a1, $s0, 0x1D4
    ctx->pc = 0x2a2a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
    // 0x2a2a78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a7c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2A7Cu;
    SET_GPR_U32(ctx, 31, 0x2A2A84u);
    ctx->pc = 0x2A2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A7Cu;
    // 0x2a2a80: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2A7Cu, 0x2A2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2A84u;
label_2a2a84:
    // 0x2a2a84: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a88: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2a88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2a8c: 0x24e7ccf0  addiu       $a3, $a3, -0x3310
    ctx->pc = 0x2a2a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954224));
    // 0x2a2a90: 0x2508ccf8  addiu       $t0, $t0, -0x3308
    ctx->pc = 0x2a2a90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954232));
    // 0x2a2a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2a98: 0x260501d8  addiu       $a1, $s0, 0x1D8
    ctx->pc = 0x2a2a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 472));
    // 0x2a2a9c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2A9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2AA4u);
    ctx->pc = 0x2A2AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2A9Cu;
    // 0x2a2aa0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2A9Cu, 0x2A2AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AA4u;
label_2a2aa4:
    // 0x2a2aa4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2aa8: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2aac: 0x24e7cd00  addiu       $a3, $a3, -0x3300
    ctx->pc = 0x2a2aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954240));
    // 0x2a2ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ab4: 0x260501dc  addiu       $a1, $s0, 0x1DC
    ctx->pc = 0x2a2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
    // 0x2a2ab8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2abc: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2ABCu;
    SET_GPR_U32(ctx, 31, 0x2A2AC4u);
    ctx->pc = 0x2A2AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2ABCu;
    // 0x2a2ac0: 0x2508cd08  addiu       $t0, $t0, -0x32F8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2ABCu, 0x2A2AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AC4u;
label_2a2ac4:
    // 0x2a2ac4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2acc: 0x24e7cd18  addiu       $a3, $a3, -0x32E8
    ctx->pc = 0x2a2accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954264));
    // 0x2a2ad0: 0x260501e0  addiu       $a1, $s0, 0x1E0
    ctx->pc = 0x2a2ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
    // 0x2a2ad4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ad8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2AD8u;
    SET_GPR_U32(ctx, 31, 0x2A2AE0u);
    ctx->pc = 0x2A2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AD8u;
    // 0x2a2adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2AD8u, 0x2A2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AE0u;
label_2a2ae0:
    // 0x2a2ae0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ae4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ae8: 0x24e7cd28  addiu       $a3, $a3, -0x32D8
    ctx->pc = 0x2a2ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954280));
    // 0x2a2aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2af0: 0x26050268  addiu       $a1, $s0, 0x268
    ctx->pc = 0x2a2af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x2a2af4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2AF4u;
    SET_GPR_U32(ctx, 31, 0x2A2AFCu);
    ctx->pc = 0x2A2AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2AF4u;
    // 0x2a2af8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2AF4u, 0x2A2AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2AFCu;
label_2a2afc:
    // 0x2a2afc: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2a2afcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b00: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2b00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b04: 0x2631cd38  addiu       $s1, $s1, -0x32C8
    ctx->pc = 0x2a2b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954296));
    // 0x2a2b08: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2b08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b0c: 0x24e7cd48  addiu       $a3, $a3, -0x32B8
    ctx->pc = 0x2a2b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954312));
    // 0x2a2b10: 0x2508cd50  addiu       $t0, $t0, -0x32B0
    ctx->pc = 0x2a2b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954320));
    // 0x2a2b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b18: 0x260501e4  addiu       $a1, $s0, 0x1E4
    ctx->pc = 0x2a2b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 484));
    // 0x2a2b1c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2B1Cu;
    SET_GPR_U32(ctx, 31, 0x2A2B24u);
    ctx->pc = 0x2A2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B1Cu;
    // 0x2a2b20: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2B1Cu, 0x2A2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B24u;
label_2a2b24:
    // 0x2a2b24: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2b24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b28: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2b28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b2c: 0x24e7cd60  addiu       $a3, $a3, -0x32A0
    ctx->pc = 0x2a2b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954336));
    // 0x2a2b30: 0x2508cd68  addiu       $t0, $t0, -0x3298
    ctx->pc = 0x2a2b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954344));
    // 0x2a2b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b38: 0x260501e8  addiu       $a1, $s0, 0x1E8
    ctx->pc = 0x2a2b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 488));
    // 0x2a2b3c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2B3Cu;
    SET_GPR_U32(ctx, 31, 0x2A2B44u);
    ctx->pc = 0x2A2B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B3Cu;
    // 0x2a2b40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2B3Cu, 0x2A2B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B44u;
label_2a2b44:
    // 0x2a2b44: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b48: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2b48u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b50: 0x24e7cd70  addiu       $a3, $a3, -0x3290
    ctx->pc = 0x2a2b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954352));
    // 0x2a2b54: 0x2508cd78  addiu       $t0, $t0, -0x3288
    ctx->pc = 0x2a2b54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954360));
    // 0x2a2b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b5c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A2B64u);
    ctx->pc = 0x2A2B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B5Cu;
    // 0x2a2b60: 0x260501ec  addiu       $a1, $s0, 0x1EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2B5Cu, 0x2A2B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B64u;
label_2a2b64:
    // 0x2a2b64: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2a2b64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b68: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2b68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b6c: 0x2631cd80  addiu       $s1, $s1, -0x3280
    ctx->pc = 0x2a2b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954368));
    // 0x2a2b70: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2b70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b74: 0x24e7cd98  addiu       $a3, $a3, -0x3268
    ctx->pc = 0x2a2b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954392));
    // 0x2a2b78: 0x2508cda0  addiu       $t0, $t0, -0x3260
    ctx->pc = 0x2a2b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954400));
    // 0x2a2b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2b80: 0x260501f4  addiu       $a1, $s0, 0x1F4
    ctx->pc = 0x2a2b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 500));
    // 0x2a2b84: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2B84u;
    SET_GPR_U32(ctx, 31, 0x2A2B8Cu);
    ctx->pc = 0x2A2B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2B84u;
    // 0x2a2b88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2B84u, 0x2A2B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2B8Cu;
label_2a2b8c:
    // 0x2a2b8c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b90: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2b90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2b94: 0x24e7cda8  addiu       $a3, $a3, -0x3258
    ctx->pc = 0x2a2b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954408));
    // 0x2a2b98: 0x2508cdb0  addiu       $t0, $t0, -0x3250
    ctx->pc = 0x2a2b98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954416));
    // 0x2a2b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ba0: 0x260501f8  addiu       $a1, $s0, 0x1F8
    ctx->pc = 0x2a2ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 504));
    // 0x2a2ba4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2BA4u;
    SET_GPR_U32(ctx, 31, 0x2A2BACu);
    ctx->pc = 0x2A2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BA4u;
    // 0x2a2ba8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2BA4u, 0x2A2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BACu;
label_2a2bac:
    // 0x2a2bac: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2bacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2bb0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2bb4: 0x24e7cdb8  addiu       $a3, $a3, -0x3248
    ctx->pc = 0x2a2bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954424));
    // 0x2a2bb8: 0x2508cdc0  addiu       $t0, $t0, -0x3240
    ctx->pc = 0x2a2bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954432));
    // 0x2a2bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2bc0: 0x260501fc  addiu       $a1, $s0, 0x1FC
    ctx->pc = 0x2a2bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
    // 0x2a2bc4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2BC4u;
    SET_GPR_U32(ctx, 31, 0x2A2BCCu);
    ctx->pc = 0x2A2BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BC4u;
    // 0x2a2bc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2BC4u, 0x2A2BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BCCu;
label_2a2bcc:
    // 0x2a2bcc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2bccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2bd0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2bd4: 0x24e7cdc8  addiu       $a3, $a3, -0x3238
    ctx->pc = 0x2a2bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954440));
    // 0x2a2bd8: 0x2508cdd0  addiu       $t0, $t0, -0x3230
    ctx->pc = 0x2a2bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954448));
    // 0x2a2bdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2be0: 0x26050200  addiu       $a1, $s0, 0x200
    ctx->pc = 0x2a2be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2a2be4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2BE4u;
    SET_GPR_U32(ctx, 31, 0x2A2BECu);
    ctx->pc = 0x2A2BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2BE4u;
    // 0x2a2be8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2BE4u, 0x2A2BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2BECu;
label_2a2bec:
    // 0x2a2bec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2becu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2bf0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2bf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2bf4: 0x24e7cdd8  addiu       $a3, $a3, -0x3228
    ctx->pc = 0x2a2bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954456));
    // 0x2a2bf8: 0x2508cde8  addiu       $t0, $t0, -0x3218
    ctx->pc = 0x2a2bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954472));
    // 0x2a2bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c00: 0x26050204  addiu       $a1, $s0, 0x204
    ctx->pc = 0x2a2c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 516));
    // 0x2a2c04: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2C04u;
    SET_GPR_U32(ctx, 31, 0x2A2C0Cu);
    ctx->pc = 0x2A2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C04u;
    // 0x2a2c08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2C04u, 0x2A2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C0Cu;
label_2a2c0c:
    // 0x2a2c0c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c10: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2c10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c14: 0x24e7cdf8  addiu       $a3, $a3, -0x3208
    ctx->pc = 0x2a2c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954488));
    // 0x2a2c18: 0x2508ce00  addiu       $t0, $t0, -0x3200
    ctx->pc = 0x2a2c18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954496));
    // 0x2a2c1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c20: 0x26050208  addiu       $a1, $s0, 0x208
    ctx->pc = 0x2a2c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 520));
    // 0x2a2c24: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2C24u;
    SET_GPR_U32(ctx, 31, 0x2A2C2Cu);
    ctx->pc = 0x2A2C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C24u;
    // 0x2a2c28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2C24u, 0x2A2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C2Cu;
label_2a2c2c:
    // 0x2a2c2c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c30: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2c30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c34: 0x24e7ce08  addiu       $a3, $a3, -0x31F8
    ctx->pc = 0x2a2c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954504));
    // 0x2a2c38: 0x2508ce10  addiu       $t0, $t0, -0x31F0
    ctx->pc = 0x2a2c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954512));
    // 0x2a2c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c40: 0x2605020c  addiu       $a1, $s0, 0x20C
    ctx->pc = 0x2a2c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 524));
    // 0x2a2c44: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2C44u;
    SET_GPR_U32(ctx, 31, 0x2A2C4Cu);
    ctx->pc = 0x2A2C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C44u;
    // 0x2a2c48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2C44u, 0x2A2C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C4Cu;
label_2a2c4c:
    // 0x2a2c4c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c50: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2c50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c54: 0x24e7ce18  addiu       $a3, $a3, -0x31E8
    ctx->pc = 0x2a2c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954520));
    // 0x2a2c58: 0x2508ce20  addiu       $t0, $t0, -0x31E0
    ctx->pc = 0x2a2c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954528));
    // 0x2a2c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c60: 0x26050210  addiu       $a1, $s0, 0x210
    ctx->pc = 0x2a2c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    // 0x2a2c64: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2C64u;
    SET_GPR_U32(ctx, 31, 0x2A2C6Cu);
    ctx->pc = 0x2A2C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C64u;
    // 0x2a2c68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2C64u, 0x2A2C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C6Cu;
label_2a2c6c:
    // 0x2a2c6c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c70: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c74: 0x24e7ce28  addiu       $a3, $a3, -0x31D8
    ctx->pc = 0x2a2c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954536));
    // 0x2a2c78: 0x2508ce30  addiu       $t0, $t0, -0x31D0
    ctx->pc = 0x2a2c78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954544));
    // 0x2a2c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2c80: 0x26050214  addiu       $a1, $s0, 0x214
    ctx->pc = 0x2a2c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 532));
    // 0x2a2c84: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2C84u;
    SET_GPR_U32(ctx, 31, 0x2A2C8Cu);
    ctx->pc = 0x2A2C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2C84u;
    // 0x2a2c88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2C84u, 0x2A2C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2C8Cu;
label_2a2c8c:
    // 0x2a2c8c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c90: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2c90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2c94: 0x24e7ce38  addiu       $a3, $a3, -0x31C8
    ctx->pc = 0x2a2c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954552));
    // 0x2a2c98: 0x2508ce40  addiu       $t0, $t0, -0x31C0
    ctx->pc = 0x2a2c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954560));
    // 0x2a2c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ca0: 0x26050218  addiu       $a1, $s0, 0x218
    ctx->pc = 0x2a2ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 536));
    // 0x2a2ca4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2CA4u;
    SET_GPR_U32(ctx, 31, 0x2A2CACu);
    ctx->pc = 0x2A2CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CA4u;
    // 0x2a2ca8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2CA4u, 0x2A2CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CACu;
label_2a2cac:
    // 0x2a2cac: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2cb0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2cb4: 0x24e7ce50  addiu       $a3, $a3, -0x31B0
    ctx->pc = 0x2a2cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954576));
    // 0x2a2cb8: 0x2508ce60  addiu       $t0, $t0, -0x31A0
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954592));
    // 0x2a2cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2cc0: 0x2605021c  addiu       $a1, $s0, 0x21C
    ctx->pc = 0x2a2cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 540));
    // 0x2a2cc4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2CC4u;
    SET_GPR_U32(ctx, 31, 0x2A2CCCu);
    ctx->pc = 0x2A2CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CC4u;
    // 0x2a2cc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2CC4u, 0x2A2CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CCCu;
label_2a2ccc:
    // 0x2a2ccc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2cccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2cd0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2cd4: 0x24e7ce70  addiu       $a3, $a3, -0x3190
    ctx->pc = 0x2a2cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954608));
    // 0x2a2cd8: 0x2508ce80  addiu       $t0, $t0, -0x3180
    ctx->pc = 0x2a2cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954624));
    // 0x2a2cdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ce0: 0x26050220  addiu       $a1, $s0, 0x220
    ctx->pc = 0x2a2ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x2a2ce4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2CE4u;
    SET_GPR_U32(ctx, 31, 0x2A2CECu);
    ctx->pc = 0x2A2CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2CE4u;
    // 0x2a2ce8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2CE4u, 0x2A2CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2CECu;
label_2a2cec:
    // 0x2a2cec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2cf0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2cf4: 0x24e7ce90  addiu       $a3, $a3, -0x3170
    ctx->pc = 0x2a2cf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954640));
    // 0x2a2cf8: 0x2508cea0  addiu       $t0, $t0, -0x3160
    ctx->pc = 0x2a2cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954656));
    // 0x2a2cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d00: 0x26050224  addiu       $a1, $s0, 0x224
    ctx->pc = 0x2a2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
    // 0x2a2d04: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2D04u;
    SET_GPR_U32(ctx, 31, 0x2A2D0Cu);
    ctx->pc = 0x2A2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D04u;
    // 0x2a2d08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2D04u, 0x2A2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D0Cu;
label_2a2d0c:
    // 0x2a2d0c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d10: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d14: 0x24e7ceb0  addiu       $a3, $a3, -0x3150
    ctx->pc = 0x2a2d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954672));
    // 0x2a2d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d1c: 0x26050228  addiu       $a1, $s0, 0x228
    ctx->pc = 0x2a2d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x2a2d20: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d24: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2D24u;
    SET_GPR_U32(ctx, 31, 0x2A2D2Cu);
    ctx->pc = 0x2A2D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D24u;
    // 0x2a2d28: 0x2508cec0  addiu       $t0, $t0, -0x3140 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2D24u, 0x2A2D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D2Cu;
label_2a2d2c:
    // 0x2a2d2c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d34: 0x24e7ced0  addiu       $a3, $a3, -0x3130
    ctx->pc = 0x2a2d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954704));
    // 0x2a2d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d3c: 0x2605022c  addiu       $a1, $s0, 0x22C
    ctx->pc = 0x2a2d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x2a2d40: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2D40u;
    SET_GPR_U32(ctx, 31, 0x2A2D48u);
    ctx->pc = 0x2A2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D40u;
    // 0x2a2d44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2D40u, 0x2A2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D48u;
label_2a2d48:
    // 0x2a2d48: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2a2d48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d4c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d50: 0x2631cee0  addiu       $s1, $s1, -0x3120
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954720));
    // 0x2a2d54: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2d54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d58: 0x24e7cef0  addiu       $a3, $a3, -0x3110
    ctx->pc = 0x2a2d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954736));
    // 0x2a2d5c: 0x2508cf00  addiu       $t0, $t0, -0x3100
    ctx->pc = 0x2a2d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954752));
    // 0x2a2d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d64: 0x26050234  addiu       $a1, $s0, 0x234
    ctx->pc = 0x2a2d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    // 0x2a2d68: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2D68u;
    SET_GPR_U32(ctx, 31, 0x2A2D70u);
    ctx->pc = 0x2A2D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D68u;
    // 0x2a2d6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2D68u, 0x2A2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D70u;
label_2a2d70:
    // 0x2a2d70: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2d70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d74: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2d74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d78: 0x24e7cf10  addiu       $a3, $a3, -0x30F0
    ctx->pc = 0x2a2d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954768));
    // 0x2a2d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d80: 0x26050238  addiu       $a1, $s0, 0x238
    ctx->pc = 0x2a2d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
    // 0x2a2d84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d88: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2D88u;
    SET_GPR_U32(ctx, 31, 0x2A2D90u);
    ctx->pc = 0x2A2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D88u;
    // 0x2a2d8c: 0x2508cf18  addiu       $t0, $t0, -0x30E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2D88u, 0x2A2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D90u;
label_2a2d90:
    // 0x2a2d90: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2d90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2d98: 0x24e7cf20  addiu       $a3, $a3, -0x30E0
    ctx->pc = 0x2a2d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954784));
    // 0x2a2d9c: 0x2605023c  addiu       $a1, $s0, 0x23C
    ctx->pc = 0x2a2d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    // 0x2a2da0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2da4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2DA4u;
    SET_GPR_U32(ctx, 31, 0x2A2DACu);
    ctx->pc = 0x2A2DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2DA4u;
    // 0x2a2da8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2DA4u, 0x2A2DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DACu;
label_2a2dac:
    // 0x2a2dac: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2dacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2db0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2db4: 0x24e7cf30  addiu       $a3, $a3, -0x30D0
    ctx->pc = 0x2a2db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954800));
    // 0x2a2db8: 0x2508cf38  addiu       $t0, $t0, -0x30C8
    ctx->pc = 0x2a2db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954808));
    // 0x2a2dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2dc0: 0x26050240  addiu       $a1, $s0, 0x240
    ctx->pc = 0x2a2dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x2a2dc4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2DC4u;
    SET_GPR_U32(ctx, 31, 0x2A2DCCu);
    ctx->pc = 0x2A2DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2DC4u;
    // 0x2a2dc8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2DC4u, 0x2A2DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DCCu;
label_2a2dcc:
    // 0x2a2dcc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2dccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2dd0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2dd4: 0x24e7cf40  addiu       $a3, $a3, -0x30C0
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954816));
    // 0x2a2dd8: 0x2508cf48  addiu       $t0, $t0, -0x30B8
    ctx->pc = 0x2a2dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954824));
    // 0x2a2ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2de0: 0x26050248  addiu       $a1, $s0, 0x248
    ctx->pc = 0x2a2de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    // 0x2a2de4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2DE4u;
    SET_GPR_U32(ctx, 31, 0x2A2DECu);
    ctx->pc = 0x2A2DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2DE4u;
    // 0x2a2de8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2DE4u, 0x2A2DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2DECu;
label_2a2dec:
    // 0x2a2dec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2df0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2df0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2df4: 0x24e7cf50  addiu       $a3, $a3, -0x30B0
    ctx->pc = 0x2a2df4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954832));
    // 0x2a2df8: 0x2508cf58  addiu       $t0, $t0, -0x30A8
    ctx->pc = 0x2a2df8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954840));
    // 0x2a2dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e00: 0x26050244  addiu       $a1, $s0, 0x244
    ctx->pc = 0x2a2e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 580));
    // 0x2a2e04: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2E04u;
    SET_GPR_U32(ctx, 31, 0x2A2E0Cu);
    ctx->pc = 0x2A2E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E04u;
    // 0x2a2e08: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2E04u, 0x2A2E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E0Cu;
label_2a2e0c:
    // 0x2a2e0c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e10: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2e10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e14: 0x24e7cf68  addiu       $a3, $a3, -0x3098
    ctx->pc = 0x2a2e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954856));
    // 0x2a2e18: 0x2508cf70  addiu       $t0, $t0, -0x3090
    ctx->pc = 0x2a2e18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954864));
    // 0x2a2e1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e20: 0x2605024c  addiu       $a1, $s0, 0x24C
    ctx->pc = 0x2a2e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 588));
    // 0x2a2e24: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2E24u;
    SET_GPR_U32(ctx, 31, 0x2A2E2Cu);
    ctx->pc = 0x2A2E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E24u;
    // 0x2a2e28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2E24u, 0x2A2E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E2Cu;
label_2a2e2c:
    // 0x2a2e2c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e30: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2e30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e34: 0x24e7cf78  addiu       $a3, $a3, -0x3088
    ctx->pc = 0x2a2e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954872));
    // 0x2a2e38: 0x2508cf88  addiu       $t0, $t0, -0x3078
    ctx->pc = 0x2a2e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954888));
    // 0x2a2e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e40: 0x26050250  addiu       $a1, $s0, 0x250
    ctx->pc = 0x2a2e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x2a2e44: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2E44u;
    SET_GPR_U32(ctx, 31, 0x2A2E4Cu);
    ctx->pc = 0x2A2E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E44u;
    // 0x2a2e48: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2E44u, 0x2A2E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E4Cu;
label_2a2e4c:
    // 0x2a2e4c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e50: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2e50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e54: 0x24e7cf98  addiu       $a3, $a3, -0x3068
    ctx->pc = 0x2a2e54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954904));
    // 0x2a2e58: 0x2508cfa8  addiu       $t0, $t0, -0x3058
    ctx->pc = 0x2a2e58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954920));
    // 0x2a2e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e60: 0x26050254  addiu       $a1, $s0, 0x254
    ctx->pc = 0x2a2e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    // 0x2a2e64: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2E64u;
    SET_GPR_U32(ctx, 31, 0x2A2E6Cu);
    ctx->pc = 0x2A2E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E64u;
    // 0x2a2e68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2E64u, 0x2A2E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E6Cu;
label_2a2e6c:
    // 0x2a2e6c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e70: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2e70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e74: 0x24e7cfb8  addiu       $a3, $a3, -0x3048
    ctx->pc = 0x2a2e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954936));
    // 0x2a2e78: 0x2508cfc0  addiu       $t0, $t0, -0x3040
    ctx->pc = 0x2a2e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954944));
    // 0x2a2e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2e80: 0x26050258  addiu       $a1, $s0, 0x258
    ctx->pc = 0x2a2e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
    // 0x2a2e84: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2E84u;
    SET_GPR_U32(ctx, 31, 0x2A2E8Cu);
    ctx->pc = 0x2A2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2E84u;
    // 0x2a2e88: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2E84u, 0x2A2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2E8Cu;
label_2a2e8c:
    // 0x2a2e8c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e90: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2e90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2e94: 0x24e7cfc8  addiu       $a3, $a3, -0x3038
    ctx->pc = 0x2a2e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954952));
    // 0x2a2e98: 0x2508cfd8  addiu       $t0, $t0, -0x3028
    ctx->pc = 0x2a2e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954968));
    // 0x2a2e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ea0: 0x2605025c  addiu       $a1, $s0, 0x25C
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
    // 0x2a2ea4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2EA4u;
    SET_GPR_U32(ctx, 31, 0x2A2EACu);
    ctx->pc = 0x2A2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2EA4u;
    // 0x2a2ea8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2EA4u, 0x2A2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EACu;
label_2a2eac:
    // 0x2a2eac: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2eacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2eb0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2eb4: 0x24e7cfe8  addiu       $a3, $a3, -0x3018
    ctx->pc = 0x2a2eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954984));
    // 0x2a2eb8: 0x2508cff8  addiu       $t0, $t0, -0x3008
    ctx->pc = 0x2a2eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955000));
    // 0x2a2ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ec0: 0x26050260  addiu       $a1, $s0, 0x260
    ctx->pc = 0x2a2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x2a2ec4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2EC4u;
    SET_GPR_U32(ctx, 31, 0x2A2ECCu);
    ctx->pc = 0x2A2EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2EC4u;
    // 0x2a2ec8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2EC4u, 0x2A2ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2ECCu;
label_2a2ecc:
    // 0x2a2ecc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2eccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ed0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ed4: 0x24e7d008  addiu       $a3, $a3, -0x2FF8
    ctx->pc = 0x2a2ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955016));
    // 0x2a2ed8: 0x2508d018  addiu       $t0, $t0, -0x2FE8
    ctx->pc = 0x2a2ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955032));
    // 0x2a2edc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ee0: 0x26050264  addiu       $a1, $s0, 0x264
    ctx->pc = 0x2a2ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    // 0x2a2ee4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2EE4u;
    SET_GPR_U32(ctx, 31, 0x2A2EECu);
    ctx->pc = 0x2A2EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2EE4u;
    // 0x2a2ee8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2EE4u, 0x2A2EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2EECu;
label_2a2eec:
    // 0x2a2eec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2eecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ef0: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a2ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ef4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ef8: 0x24e7d028  addiu       $a3, $a3, -0x2FD8
    ctx->pc = 0x2a2ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955048));
    // 0x2a2efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f00: 0x260502ac  addiu       $a1, $s0, 0x2AC
    ctx->pc = 0x2a2f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
    // 0x2a2f04: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2F04u;
    SET_GPR_U32(ctx, 31, 0x2A2F0Cu);
    ctx->pc = 0x2A2F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F04u;
    // 0x2a2f08: 0x2508d030  addiu       $t0, $t0, -0x2FD0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2F04u, 0x2A2F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F0Cu;
label_2a2f0c:
    // 0x2a2f0c: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2a2f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2a2f10: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2f10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2f14: 0x2631d038  addiu       $s1, $s1, -0x2FC8
    ctx->pc = 0x2a2f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955064));
    // 0x2a2f18: 0x24e7d048  addiu       $a3, $a3, -0x2FB8
    ctx->pc = 0x2a2f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955080));
    // 0x2a2f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f20: 0x260502b0  addiu       $a1, $s0, 0x2B0
    ctx->pc = 0x2a2f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2a2f24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f28: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2F28u;
    SET_GPR_U32(ctx, 31, 0x2A2F30u);
    ctx->pc = 0x2A2F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F28u;
    // 0x2a2f2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2F28u, 0x2A2F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F30u;
label_2a2f30:
    // 0x2a2f30: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2a2f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f34: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f3c: 0x24e7d050  addiu       $a3, $a3, -0x2FB0
    ctx->pc = 0x2a2f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955088));
    // 0x2a2f40: 0x260502b4  addiu       $a1, $s0, 0x2B4
    ctx->pc = 0x2a2f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    // 0x2a2f44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2f44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f48: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2F48u;
    SET_GPR_U32(ctx, 31, 0x2A2F50u);
    ctx->pc = 0x2A2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F48u;
    // 0x2a2f4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2F48u, 0x2A2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F50u;
label_2a2f50:
    // 0x2a2f50: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2f50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f58: 0x24e7d058  addiu       $a3, $a3, -0x2FA8
    ctx->pc = 0x2a2f58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955096));
    // 0x2a2f5c: 0x260502b8  addiu       $a1, $s0, 0x2B8
    ctx->pc = 0x2a2f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x2a2f60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f64: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2F64u;
    SET_GPR_U32(ctx, 31, 0x2A2F6Cu);
    ctx->pc = 0x2A2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F64u;
    // 0x2a2f68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2F64u, 0x2A2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F6Cu;
label_2a2f6c:
    // 0x2a2f6c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f74: 0x24e7d060  addiu       $a3, $a3, -0x2FA0
    ctx->pc = 0x2a2f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955104));
    // 0x2a2f78: 0x260502bc  addiu       $a1, $s0, 0x2BC
    ctx->pc = 0x2a2f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
    // 0x2a2f7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f80: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2F80u;
    SET_GPR_U32(ctx, 31, 0x2A2F88u);
    ctx->pc = 0x2A2F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F80u;
    // 0x2a2f84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2F80u, 0x2A2F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2F88u;
label_2a2f88:
    // 0x2a2f88: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2f88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f90: 0x24e7d068  addiu       $a3, $a3, -0x2F98
    ctx->pc = 0x2a2f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955112));
    // 0x2a2f94: 0x260502c4  addiu       $a1, $s0, 0x2C4
    ctx->pc = 0x2a2f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x2a2f98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2f9c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2F9Cu;
    SET_GPR_U32(ctx, 31, 0x2A2FA4u);
    ctx->pc = 0x2A2FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2F9Cu;
    // 0x2a2fa0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2F9Cu, 0x2A2FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FA4u;
label_2a2fa4:
    // 0x2a2fa4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2fac: 0x24e7d070  addiu       $a3, $a3, -0x2F90
    ctx->pc = 0x2a2facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955120));
    // 0x2a2fb0: 0x260502c8  addiu       $a1, $s0, 0x2C8
    ctx->pc = 0x2a2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 712));
    // 0x2a2fb4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2fb8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2FB8u;
    SET_GPR_U32(ctx, 31, 0x2A2FC0u);
    ctx->pc = 0x2A2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FB8u;
    // 0x2a2fbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2FB8u, 0x2A2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FC0u;
label_2a2fc0:
    // 0x2a2fc0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2fc8: 0x24e7d078  addiu       $a3, $a3, -0x2F88
    ctx->pc = 0x2a2fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955128));
    // 0x2a2fcc: 0x260502d4  addiu       $a1, $s0, 0x2D4
    ctx->pc = 0x2a2fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 724));
    // 0x2a2fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2fd4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2FD4u;
    SET_GPR_U32(ctx, 31, 0x2A2FDCu);
    ctx->pc = 0x2A2FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FD4u;
    // 0x2a2fd8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2FD4u, 0x2A2FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FDCu;
label_2a2fdc:
    // 0x2a2fdc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2fe4: 0x24e7d080  addiu       $a3, $a3, -0x2F80
    ctx->pc = 0x2a2fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955136));
    // 0x2a2fe8: 0x260502d8  addiu       $a1, $s0, 0x2D8
    ctx->pc = 0x2a2fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
    // 0x2a2fec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a2fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2ff0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A2FF0u;
    SET_GPR_U32(ctx, 31, 0x2A2FF8u);
    ctx->pc = 0x2A2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2FF0u;
    // 0x2a2ff4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A2FF0u, 0x2A2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2FF8u;
label_2a2ff8:
    // 0x2a2ff8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a2ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a2ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3000: 0x24e7d088  addiu       $a3, $a3, -0x2F78
    ctx->pc = 0x2a3000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955144));
    // 0x2a3004: 0x260502dc  addiu       $a1, $s0, 0x2DC
    ctx->pc = 0x2a3004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 732));
    // 0x2a3008: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a3008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a300c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A300Cu;
    SET_GPR_U32(ctx, 31, 0x2A3014u);
    ctx->pc = 0x2A3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A300Cu;
    // 0x2a3010: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A300Cu, 0x2A3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3014u;
label_2a3014:
    // 0x2a3014: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3014u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a301c: 0x24e7d098  addiu       $a3, $a3, -0x2F68
    ctx->pc = 0x2a301cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955160));
    // 0x2a3020: 0x260502ec  addiu       $a1, $s0, 0x2EC
    ctx->pc = 0x2a3020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 748));
    // 0x2a3024: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a3024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3028: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3028u;
    SET_GPR_U32(ctx, 31, 0x2A3030u);
    ctx->pc = 0x2A302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3028u;
    // 0x2a302c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3028u, 0x2A3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3030u;
label_2a3030:
    // 0x2a3030: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3038: 0x24e7d0a0  addiu       $a3, $a3, -0x2F60
    ctx->pc = 0x2a3038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955168));
    // 0x2a303c: 0x260502f0  addiu       $a1, $s0, 0x2F0
    ctx->pc = 0x2a303cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    // 0x2a3040: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2a3040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3044: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3044u;
    SET_GPR_U32(ctx, 31, 0x2A304Cu);
    ctx->pc = 0x2A3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3044u;
    // 0x2a3048: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3044u, 0x2A304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A304Cu;
label_2a304c:
    // 0x2a304c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a304cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3054: 0x24e7d0b0  addiu       $a3, $a3, -0x2F50
    ctx->pc = 0x2a3054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955184));
    // 0x2a3058: 0x260502f4  addiu       $a1, $s0, 0x2F4
    ctx->pc = 0x2a3058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 756));
    // 0x2a305c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a305cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3060: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3060u;
    SET_GPR_U32(ctx, 31, 0x2A3068u);
    ctx->pc = 0x2A3064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3060u;
    // 0x2a3064: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3060u, 0x2A3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3068u;
label_2a3068:
    // 0x2a3068: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3068u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a306c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a306cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3070: 0x24e7d0b8  addiu       $a3, $a3, -0x2F48
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955192));
    // 0x2a3074: 0x260502f8  addiu       $a1, $s0, 0x2F8
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 760));
    // 0x2a3078: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a307c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A307Cu;
    SET_GPR_U32(ctx, 31, 0x2A3084u);
    ctx->pc = 0x2A3080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A307Cu;
    // 0x2a3080: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A307Cu, 0x2A3084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3084u;
label_2a3084:
    // 0x2a3084: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3084u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a308c: 0x24e7d0c0  addiu       $a3, $a3, -0x2F40
    ctx->pc = 0x2a308cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955200));
    // 0x2a3090: 0x260502fc  addiu       $a1, $s0, 0x2FC
    ctx->pc = 0x2a3090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 764));
    // 0x2a3094: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3098: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3098u;
    SET_GPR_U32(ctx, 31, 0x2A30A0u);
    ctx->pc = 0x2A309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3098u;
    // 0x2a309c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3098u, 0x2A30A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30A0u;
label_2a30a0:
    // 0x2a30a0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a30a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a30a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a30a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30a8: 0x26050300  addiu       $a1, $s0, 0x300
    ctx->pc = 0x2a30a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x2a30ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a30acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30b0: 0x24e7d0d0  addiu       $a3, $a3, -0x2F30
    ctx->pc = 0x2a30b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955216));
    // 0x2a30b4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A30B4u;
    SET_GPR_U32(ctx, 31, 0x2A30BCu);
    ctx->pc = 0x2A30B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30B4u;
    // 0x2a30b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A30B4u, 0x2A30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30BCu;
label_2a30bc:
    // 0x2a30bc: 0x3c110047  lui         $s1, 0x47
    ctx->pc = 0x2a30bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)71 << 16));
    // 0x2a30c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a30c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30c4: 0x2631d0d8  addiu       $s1, $s1, -0x2F28
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955224));
    // 0x2a30c8: 0x26050304  addiu       $a1, $s0, 0x304
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
    // 0x2a30cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a30ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a30d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30d4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A30D4u;
    SET_GPR_U32(ctx, 31, 0x2A30DCu);
    ctx->pc = 0x2A30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30D4u;
    // 0x2a30d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A30D4u, 0x2A30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30DCu;
label_2a30dc:
    // 0x2a30dc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a30dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a30e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a30e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30e4: 0x26050308  addiu       $a1, $s0, 0x308
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 776));
    // 0x2a30e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a30e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30ec: 0x24e7d0e8  addiu       $a3, $a3, -0x2F18
    ctx->pc = 0x2a30ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955240));
    // 0x2a30f0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A30F0u;
    SET_GPR_U32(ctx, 31, 0x2A30F8u);
    ctx->pc = 0x2A30F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A30F0u;
    // 0x2a30f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A30F0u, 0x2A30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A30F8u;
label_2a30f8:
    // 0x2a30f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2a30f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a30fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3100: 0x2605030c  addiu       $a1, $s0, 0x30C
    ctx->pc = 0x2a3100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 780));
    // 0x2a3104: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3108: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3108u;
    SET_GPR_U32(ctx, 31, 0x2A3110u);
    ctx->pc = 0x2A310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3108u;
    // 0x2a310c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3108u, 0x2A3110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3110u;
label_2a3110:
    // 0x2a3110: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3110u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3118: 0x24e7d0f0  addiu       $a3, $a3, -0x2F10
    ctx->pc = 0x2a3118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955248));
    // 0x2a311c: 0x26050310  addiu       $a1, $s0, 0x310
    ctx->pc = 0x2a311cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x2a3120: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3124: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3124u;
    SET_GPR_U32(ctx, 31, 0x2A312Cu);
    ctx->pc = 0x2A3128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3124u;
    // 0x2a3128: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3124u, 0x2A312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A312Cu;
label_2a312c:
    // 0x2a312c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a312cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3134: 0x24e7d100  addiu       $a3, $a3, -0x2F00
    ctx->pc = 0x2a3134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955264));
    // 0x2a3138: 0x26050314  addiu       $a1, $s0, 0x314
    ctx->pc = 0x2a3138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    // 0x2a313c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3140: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3140u;
    SET_GPR_U32(ctx, 31, 0x2A3148u);
    ctx->pc = 0x2A3144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3140u;
    // 0x2a3144: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3140u, 0x2A3148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3148u;
label_2a3148:
    // 0x2a3148: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3148u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a314c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3150: 0x24e7d108  addiu       $a3, $a3, -0x2EF8
    ctx->pc = 0x2a3150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955272));
    // 0x2a3154: 0x26050318  addiu       $a1, $s0, 0x318
    ctx->pc = 0x2a3154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 792));
    // 0x2a3158: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a315c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A315Cu;
    SET_GPR_U32(ctx, 31, 0x2A3164u);
    ctx->pc = 0x2A3160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A315Cu;
    // 0x2a3160: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A315Cu, 0x2A3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3164u;
label_2a3164:
    // 0x2a3164: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a316c: 0x24e7d110  addiu       $a3, $a3, -0x2EF0
    ctx->pc = 0x2a316cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955280));
    // 0x2a3170: 0x2605031c  addiu       $a1, $s0, 0x31C
    ctx->pc = 0x2a3170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 796));
    // 0x2a3174: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3178: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3178u;
    SET_GPR_U32(ctx, 31, 0x2A3180u);
    ctx->pc = 0x2A317Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3178u;
    // 0x2a317c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3178u, 0x2A3180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3180u;
label_2a3180:
    // 0x2a3180: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3180u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3188: 0x24e7d118  addiu       $a3, $a3, -0x2EE8
    ctx->pc = 0x2a3188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955288));
    // 0x2a318c: 0x26050320  addiu       $a1, $s0, 0x320
    ctx->pc = 0x2a318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x2a3190: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3194: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3194u;
    SET_GPR_U32(ctx, 31, 0x2A319Cu);
    ctx->pc = 0x2A3198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3194u;
    // 0x2a3198: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3194u, 0x2A319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A319Cu;
label_2a319c:
    // 0x2a319c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a319cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a31a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31a4: 0x24e7d120  addiu       $a3, $a3, -0x2EE0
    ctx->pc = 0x2a31a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955296));
    // 0x2a31a8: 0x26050324  addiu       $a1, $s0, 0x324
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    // 0x2a31ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a31acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31b0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A31B0u;
    SET_GPR_U32(ctx, 31, 0x2A31B8u);
    ctx->pc = 0x2A31B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31B0u;
    // 0x2a31b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A31B0u, 0x2A31B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31B8u;
label_2a31b8:
    // 0x2a31b8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a31b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a31bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31c0: 0x24e7d130  addiu       $a3, $a3, -0x2ED0
    ctx->pc = 0x2a31c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955312));
    // 0x2a31c4: 0x26050328  addiu       $a1, $s0, 0x328
    ctx->pc = 0x2a31c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
    // 0x2a31c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a31c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31cc: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A31CCu;
    SET_GPR_U32(ctx, 31, 0x2A31D4u);
    ctx->pc = 0x2A31D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31CCu;
    // 0x2a31d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A31CCu, 0x2A31D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31D4u;
label_2a31d4:
    // 0x2a31d4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a31d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a31d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31dc: 0x24e7d138  addiu       $a3, $a3, -0x2EC8
    ctx->pc = 0x2a31dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955320));
    // 0x2a31e0: 0x2605032c  addiu       $a1, $s0, 0x32C
    ctx->pc = 0x2a31e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 812));
    // 0x2a31e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a31e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31e8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A31E8u;
    SET_GPR_U32(ctx, 31, 0x2A31F0u);
    ctx->pc = 0x2A31ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A31E8u;
    // 0x2a31ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A31E8u, 0x2A31F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31F0u;
label_2a31f0:
    // 0x2a31f0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a31f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a31f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a31f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31f8: 0x24e7d140  addiu       $a3, $a3, -0x2EC0
    ctx->pc = 0x2a31f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955328));
    // 0x2a31fc: 0x26050330  addiu       $a1, $s0, 0x330
    ctx->pc = 0x2a31fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x2a3200: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3204: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3204u;
    SET_GPR_U32(ctx, 31, 0x2A320Cu);
    ctx->pc = 0x2A3208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3204u;
    // 0x2a3208: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3204u, 0x2A320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A320Cu;
label_2a320c:
    // 0x2a320c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a320cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3214: 0x24e7d148  addiu       $a3, $a3, -0x2EB8
    ctx->pc = 0x2a3214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955336));
    // 0x2a3218: 0x26050334  addiu       $a1, $s0, 0x334
    ctx->pc = 0x2a3218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 820));
    // 0x2a321c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a321cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3220: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3220u;
    SET_GPR_U32(ctx, 31, 0x2A3228u);
    ctx->pc = 0x2A3224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3220u;
    // 0x2a3224: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3220u, 0x2A3228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3228u;
label_2a3228:
    // 0x2a3228: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3228u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a322c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a322cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3230: 0x24e7d158  addiu       $a3, $a3, -0x2EA8
    ctx->pc = 0x2a3230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955352));
    // 0x2a3234: 0x26050338  addiu       $a1, $s0, 0x338
    ctx->pc = 0x2a3234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
    // 0x2a3238: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a323c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A323Cu;
    SET_GPR_U32(ctx, 31, 0x2A3244u);
    ctx->pc = 0x2A3240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A323Cu;
    // 0x2a3240: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A323Cu, 0x2A3244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3244u;
label_2a3244:
    // 0x2a3244: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a324c: 0x24e7d160  addiu       $a3, $a3, -0x2EA0
    ctx->pc = 0x2a324cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955360));
    // 0x2a3250: 0x2605033c  addiu       $a1, $s0, 0x33C
    ctx->pc = 0x2a3250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 828));
    // 0x2a3254: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3258: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3258u;
    SET_GPR_U32(ctx, 31, 0x2A3260u);
    ctx->pc = 0x2A325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3258u;
    // 0x2a325c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3258u, 0x2A3260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3260u;
label_2a3260:
    // 0x2a3260: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3260u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3268: 0x24e7d168  addiu       $a3, $a3, -0x2E98
    ctx->pc = 0x2a3268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955368));
    // 0x2a326c: 0x26050340  addiu       $a1, $s0, 0x340
    ctx->pc = 0x2a326cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x2a3270: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3274: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3274u;
    SET_GPR_U32(ctx, 31, 0x2A327Cu);
    ctx->pc = 0x2A3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3274u;
    // 0x2a3278: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3274u, 0x2A327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A327Cu;
label_2a327c:
    // 0x2a327c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a327cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3284: 0x24e7d170  addiu       $a3, $a3, -0x2E90
    ctx->pc = 0x2a3284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955376));
    // 0x2a3288: 0x26050344  addiu       $a1, $s0, 0x344
    ctx->pc = 0x2a3288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 836));
    // 0x2a328c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3290: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3290u;
    SET_GPR_U32(ctx, 31, 0x2A3298u);
    ctx->pc = 0x2A3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3290u;
    // 0x2a3294: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3290u, 0x2A3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3298u;
label_2a3298:
    // 0x2a3298: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a329c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a329cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32a0: 0x24e7d178  addiu       $a3, $a3, -0x2E88
    ctx->pc = 0x2a32a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955384));
    // 0x2a32a4: 0x26050350  addiu       $a1, $s0, 0x350
    ctx->pc = 0x2a32a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x2a32a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a32a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32ac: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A32ACu;
    SET_GPR_U32(ctx, 31, 0x2A32B4u);
    ctx->pc = 0x2A32B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32ACu;
    // 0x2a32b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A32ACu, 0x2A32B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32B4u;
label_2a32b4:
    // 0x2a32b4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a32b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a32b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a32b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32bc: 0x24e7d180  addiu       $a3, $a3, -0x2E80
    ctx->pc = 0x2a32bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955392));
    // 0x2a32c0: 0x26050354  addiu       $a1, $s0, 0x354
    ctx->pc = 0x2a32c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 852));
    // 0x2a32c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a32c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32c8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A32C8u;
    SET_GPR_U32(ctx, 31, 0x2A32D0u);
    ctx->pc = 0x2A32CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32C8u;
    // 0x2a32cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A32C8u, 0x2A32D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32D0u;
label_2a32d0:
    // 0x2a32d0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a32d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a32d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a32d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32d8: 0x24e7d188  addiu       $a3, $a3, -0x2E78
    ctx->pc = 0x2a32d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955400));
    // 0x2a32dc: 0x26050368  addiu       $a1, $s0, 0x368
    ctx->pc = 0x2a32dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 872));
    // 0x2a32e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a32e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32e4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A32E4u;
    SET_GPR_U32(ctx, 31, 0x2A32ECu);
    ctx->pc = 0x2A32E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A32E4u;
    // 0x2a32e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A32E4u, 0x2A32ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A32ECu;
label_2a32ec:
    // 0x2a32ec: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a32ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a32f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a32f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a32f4: 0x24e7d190  addiu       $a3, $a3, -0x2E70
    ctx->pc = 0x2a32f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955408));
    // 0x2a32f8: 0x2605036c  addiu       $a1, $s0, 0x36C
    ctx->pc = 0x2a32f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 876));
    // 0x2a32fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a32fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3300: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3300u;
    SET_GPR_U32(ctx, 31, 0x2A3308u);
    ctx->pc = 0x2A3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3300u;
    // 0x2a3304: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3300u, 0x2A3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3308u;
label_2a3308:
    // 0x2a3308: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a330c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a330cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3310: 0x24e7d1a0  addiu       $a3, $a3, -0x2E60
    ctx->pc = 0x2a3310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955424));
    // 0x2a3314: 0x26050370  addiu       $a1, $s0, 0x370
    ctx->pc = 0x2a3314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    // 0x2a3318: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a331c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A331Cu;
    SET_GPR_U32(ctx, 31, 0x2A3324u);
    ctx->pc = 0x2A3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A331Cu;
    // 0x2a3320: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A331Cu, 0x2A3324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3324u;
label_2a3324:
    // 0x2a3324: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3324u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a332c: 0x24e7d1b0  addiu       $a3, $a3, -0x2E50
    ctx->pc = 0x2a332cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955440));
    // 0x2a3330: 0x26050374  addiu       $a1, $s0, 0x374
    ctx->pc = 0x2a3330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 884));
    // 0x2a3334: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3338: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3338u;
    SET_GPR_U32(ctx, 31, 0x2A3340u);
    ctx->pc = 0x2A333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3338u;
    // 0x2a333c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3338u, 0x2A3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3340u;
label_2a3340:
    // 0x2a3340: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3340u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3348: 0x24e7d1b8  addiu       $a3, $a3, -0x2E48
    ctx->pc = 0x2a3348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955448));
    // 0x2a334c: 0x26050378  addiu       $a1, $s0, 0x378
    ctx->pc = 0x2a334cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 888));
    // 0x2a3350: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3354: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3354u;
    SET_GPR_U32(ctx, 31, 0x2A335Cu);
    ctx->pc = 0x2A3358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3354u;
    // 0x2a3358: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3354u, 0x2A335Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A335Cu;
label_2a335c:
    // 0x2a335c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a335cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3364: 0x24e7d1c8  addiu       $a3, $a3, -0x2E38
    ctx->pc = 0x2a3364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955464));
    // 0x2a3368: 0x2605037c  addiu       $a1, $s0, 0x37C
    ctx->pc = 0x2a3368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 892));
    // 0x2a336c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a336cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3370: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3370u;
    SET_GPR_U32(ctx, 31, 0x2A3378u);
    ctx->pc = 0x2A3374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3370u;
    // 0x2a3374: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3370u, 0x2A3378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3378u;
label_2a3378:
    // 0x2a3378: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a337c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3380: 0x24e7d1d8  addiu       $a3, $a3, -0x2E28
    ctx->pc = 0x2a3380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955480));
    // 0x2a3384: 0x26050380  addiu       $a1, $s0, 0x380
    ctx->pc = 0x2a3384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    // 0x2a3388: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a338c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A338Cu;
    SET_GPR_U32(ctx, 31, 0x2A3394u);
    ctx->pc = 0x2A3390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A338Cu;
    // 0x2a3390: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A338Cu, 0x2A3394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3394u;
label_2a3394:
    // 0x2a3394: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3394u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a339c: 0x24e7d1e8  addiu       $a3, $a3, -0x2E18
    ctx->pc = 0x2a339cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955496));
    // 0x2a33a0: 0x26050384  addiu       $a1, $s0, 0x384
    ctx->pc = 0x2a33a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 900));
    // 0x2a33a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a33a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33a8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A33A8u;
    SET_GPR_U32(ctx, 31, 0x2A33B0u);
    ctx->pc = 0x2A33ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33A8u;
    // 0x2a33ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A33A8u, 0x2A33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33B0u;
label_2a33b0:
    // 0x2a33b0: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a33b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a33b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a33b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33b8: 0x24e7d1f0  addiu       $a3, $a3, -0x2E10
    ctx->pc = 0x2a33b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955504));
    // 0x2a33bc: 0x26050388  addiu       $a1, $s0, 0x388
    ctx->pc = 0x2a33bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 904));
    // 0x2a33c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a33c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33c4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A33C4u;
    SET_GPR_U32(ctx, 31, 0x2A33CCu);
    ctx->pc = 0x2A33C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33C4u;
    // 0x2a33c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A33C4u, 0x2A33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33CCu;
label_2a33cc:
    // 0x2a33cc: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a33d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a33d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33d4: 0x24e7d200  addiu       $a3, $a3, -0x2E00
    ctx->pc = 0x2a33d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955520));
    // 0x2a33d8: 0x2605038c  addiu       $a1, $s0, 0x38C
    ctx->pc = 0x2a33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 908));
    // 0x2a33dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a33dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33e0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A33E0u;
    SET_GPR_U32(ctx, 31, 0x2A33E8u);
    ctx->pc = 0x2A33E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33E0u;
    // 0x2a33e4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A33E0u, 0x2A33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A33E8u;
label_2a33e8:
    // 0x2a33e8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a33e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a33ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a33ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33f0: 0x24e7d210  addiu       $a3, $a3, -0x2DF0
    ctx->pc = 0x2a33f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955536));
    // 0x2a33f4: 0x26050390  addiu       $a1, $s0, 0x390
    ctx->pc = 0x2a33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x2a33f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a33f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a33fc: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A33FCu;
    SET_GPR_U32(ctx, 31, 0x2A3404u);
    ctx->pc = 0x2A3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A33FCu;
    // 0x2a3400: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A33FCu, 0x2A3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3404u;
label_2a3404:
    // 0x2a3404: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a340c: 0x24e7d220  addiu       $a3, $a3, -0x2DE0
    ctx->pc = 0x2a340cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955552));
    // 0x2a3410: 0x26050394  addiu       $a1, $s0, 0x394
    ctx->pc = 0x2a3410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 916));
    // 0x2a3414: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3418: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3418u;
    SET_GPR_U32(ctx, 31, 0x2A3420u);
    ctx->pc = 0x2A341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3418u;
    // 0x2a341c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3418u, 0x2A3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3420u;
label_2a3420:
    // 0x2a3420: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3420u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3428: 0x24e7d230  addiu       $a3, $a3, -0x2DD0
    ctx->pc = 0x2a3428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955568));
    // 0x2a342c: 0x26050398  addiu       $a1, $s0, 0x398
    ctx->pc = 0x2a342cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 920));
    // 0x2a3430: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3434: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3434u;
    SET_GPR_U32(ctx, 31, 0x2A343Cu);
    ctx->pc = 0x2A3438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3434u;
    // 0x2a3438: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3434u, 0x2A343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A343Cu;
label_2a343c:
    // 0x2a343c: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a343cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3444: 0x24e7d240  addiu       $a3, $a3, -0x2DC0
    ctx->pc = 0x2a3444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955584));
    // 0x2a3448: 0x260503a8  addiu       $a1, $s0, 0x3A8
    ctx->pc = 0x2a3448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 936));
    // 0x2a344c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a344cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3450: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3450u;
    SET_GPR_U32(ctx, 31, 0x2A3458u);
    ctx->pc = 0x2A3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3450u;
    // 0x2a3454: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3450u, 0x2A3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3458u;
label_2a3458:
    // 0x2a3458: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3458u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a345c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3460: 0x24e7d250  addiu       $a3, $a3, -0x2DB0
    ctx->pc = 0x2a3460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955600));
    // 0x2a3464: 0x260503ac  addiu       $a1, $s0, 0x3AC
    ctx->pc = 0x2a3464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 940));
    // 0x2a3468: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a346c: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A346Cu;
    SET_GPR_U32(ctx, 31, 0x2A3474u);
    ctx->pc = 0x2A3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A346Cu;
    // 0x2a3470: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A346Cu, 0x2A3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3474u;
label_2a3474:
    // 0x2a3474: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3474u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a347c: 0x24e7d260  addiu       $a3, $a3, -0x2DA0
    ctx->pc = 0x2a347cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955616));
    // 0x2a3480: 0x260503b0  addiu       $a1, $s0, 0x3B0
    ctx->pc = 0x2a3480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x2a3484: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3488: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3488u;
    SET_GPR_U32(ctx, 31, 0x2A3490u);
    ctx->pc = 0x2A348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3488u;
    // 0x2a348c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3488u, 0x2A3490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3490u;
label_2a3490:
    // 0x2a3490: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a3494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3498: 0x24e7d270  addiu       $a3, $a3, -0x2D90
    ctx->pc = 0x2a3498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955632));
    // 0x2a349c: 0x260503b4  addiu       $a1, $s0, 0x3B4
    ctx->pc = 0x2a349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 948));
    // 0x2a34a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a34a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34a4: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A34A4u;
    SET_GPR_U32(ctx, 31, 0x2A34ACu);
    ctx->pc = 0x2A34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34A4u;
    // 0x2a34a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A34A4u, 0x2A34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34ACu;
label_2a34ac:
    // 0x2a34ac: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a34acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a34b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a34b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34b4: 0x24e7d278  addiu       $a3, $a3, -0x2D88
    ctx->pc = 0x2a34b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955640));
    // 0x2a34b8: 0x260503b8  addiu       $a1, $s0, 0x3B8
    ctx->pc = 0x2a34b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 952));
    // 0x2a34bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a34bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34c0: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A34C0u;
    SET_GPR_U32(ctx, 31, 0x2A34C8u);
    ctx->pc = 0x2A34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34C0u;
    // 0x2a34c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A34C0u, 0x2A34C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34C8u;
label_2a34c8:
    // 0x2a34c8: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a34c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a34cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a34ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34d0: 0x24e7d280  addiu       $a3, $a3, -0x2D80
    ctx->pc = 0x2a34d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955648));
    // 0x2a34d4: 0x260503bc  addiu       $a1, $s0, 0x3BC
    ctx->pc = 0x2a34d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 956));
    // 0x2a34d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a34d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34dc: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A34DCu;
    SET_GPR_U32(ctx, 31, 0x2A34E4u);
    ctx->pc = 0x2A34E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34DCu;
    // 0x2a34e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A34DCu, 0x2A34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A34E4u;
label_2a34e4:
    // 0x2a34e4: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a34e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a34e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a34e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34ec: 0x24e7d288  addiu       $a3, $a3, -0x2D78
    ctx->pc = 0x2a34ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955656));
    // 0x2a34f0: 0x260503c0  addiu       $a1, $s0, 0x3C0
    ctx->pc = 0x2a34f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    // 0x2a34f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a34f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a34f8: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A34F8u;
    SET_GPR_U32(ctx, 31, 0x2A3500u);
    ctx->pc = 0x2A34FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A34F8u;
    // 0x2a34fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A34F8u, 0x2A3500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3500u;
label_2a3500:
    // 0x2a3500: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3504: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a3504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3508: 0x24e7d290  addiu       $a3, $a3, -0x2D70
    ctx->pc = 0x2a3508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955664));
    // 0x2a350c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a350cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3510: 0x260503c4  addiu       $a1, $s0, 0x3C4
    ctx->pc = 0x2a3510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 964));
    // 0x2a3514: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3514u;
    SET_GPR_U32(ctx, 31, 0x2A351Cu);
    ctx->pc = 0x2A3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3514u;
    // 0x2a3518: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3514u, 0x2A351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A351Cu;
label_2a351c:
    // 0x2a351c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3520: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2a3520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2a3524: 0x3c070047  lui         $a3, 0x47
    ctx->pc = 0x2a3524u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)71 << 16));
    // 0x2a3528: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x2a3528u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x2a352c: 0x24c6ca70  addiu       $a2, $a2, -0x3590
    ctx->pc = 0x2a352cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953584));
    // 0x2a3530: 0x24e7d2a0  addiu       $a3, $a3, -0x2D60
    ctx->pc = 0x2a3530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955680));
    // 0x2a3534: 0x2508d2b0  addiu       $t0, $t0, -0x2D50
    ctx->pc = 0x2a3534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955696));
    // 0x2a3538: 0xc0a8922  jal         func_2A2488
    ctx->pc = 0x2A3538u;
    SET_GPR_U32(ctx, 31, 0x2A3540u);
    ctx->pc = 0x2A353Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3538u;
    // 0x2a353c: 0x24850158  addiu       $a1, $a0, 0x158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2488u, 0x2A3538u, 0x2A3540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3540u;
label_2a3540:
    // 0x2a3540: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2a3540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2a3544: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2a3544u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3548: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2a3548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2a354c: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x2a354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2a3550: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3550u;
        // 0x2a3554: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3558u;
}
