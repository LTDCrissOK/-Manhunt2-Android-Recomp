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

// Function: sub_002D2740
// Address: 0x2d2740 - 0x2d2988
void sub_002D2740_0x2d2740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2740_0x2d2740");
#endif

    switch (ctx->pc) {
        case 0x2d2740u: goto label_2d2740;
        case 0x2d2744u: goto label_2d2744;
        case 0x2d2748u: goto label_2d2748;
        case 0x2d274cu: goto label_2d274c;
        case 0x2d2750u: goto label_2d2750;
        case 0x2d2754u: goto label_2d2754;
        case 0x2d2758u: goto label_2d2758;
        case 0x2d275cu: goto label_2d275c;
        case 0x2d2760u: goto label_2d2760;
        case 0x2d2764u: goto label_2d2764;
        case 0x2d2768u: goto label_2d2768;
        case 0x2d276cu: goto label_2d276c;
        case 0x2d2770u: goto label_2d2770;
        case 0x2d2774u: goto label_2d2774;
        case 0x2d2778u: goto label_2d2778;
        case 0x2d277cu: goto label_2d277c;
        case 0x2d2780u: goto label_2d2780;
        case 0x2d2784u: goto label_2d2784;
        case 0x2d2788u: goto label_2d2788;
        case 0x2d278cu: goto label_2d278c;
        case 0x2d2790u: goto label_2d2790;
        case 0x2d2794u: goto label_2d2794;
        case 0x2d2798u: goto label_2d2798;
        case 0x2d279cu: goto label_2d279c;
        case 0x2d27a0u: goto label_2d27a0;
        case 0x2d27a4u: goto label_2d27a4;
        case 0x2d27a8u: goto label_2d27a8;
        case 0x2d27acu: goto label_2d27ac;
        case 0x2d27b0u: goto label_2d27b0;
        case 0x2d27b4u: goto label_2d27b4;
        case 0x2d27b8u: goto label_2d27b8;
        case 0x2d27bcu: goto label_2d27bc;
        case 0x2d27c0u: goto label_2d27c0;
        case 0x2d27c4u: goto label_2d27c4;
        case 0x2d27c8u: goto label_2d27c8;
        case 0x2d27ccu: goto label_2d27cc;
        case 0x2d27d0u: goto label_2d27d0;
        case 0x2d27d4u: goto label_2d27d4;
        case 0x2d27d8u: goto label_2d27d8;
        case 0x2d27dcu: goto label_2d27dc;
        case 0x2d27e0u: goto label_2d27e0;
        case 0x2d27e4u: goto label_2d27e4;
        case 0x2d27e8u: goto label_2d27e8;
        case 0x2d27ecu: goto label_2d27ec;
        case 0x2d27f0u: goto label_2d27f0;
        case 0x2d27f4u: goto label_2d27f4;
        case 0x2d27f8u: goto label_2d27f8;
        case 0x2d27fcu: goto label_2d27fc;
        case 0x2d2800u: goto label_2d2800;
        case 0x2d2804u: goto label_2d2804;
        case 0x2d2808u: goto label_2d2808;
        case 0x2d280cu: goto label_2d280c;
        case 0x2d2810u: goto label_2d2810;
        case 0x2d2814u: goto label_2d2814;
        case 0x2d2818u: goto label_2d2818;
        case 0x2d281cu: goto label_2d281c;
        case 0x2d2820u: goto label_2d2820;
        case 0x2d2824u: goto label_2d2824;
        case 0x2d2828u: goto label_2d2828;
        case 0x2d282cu: goto label_2d282c;
        case 0x2d2830u: goto label_2d2830;
        case 0x2d2834u: goto label_2d2834;
        case 0x2d2838u: goto label_2d2838;
        case 0x2d283cu: goto label_2d283c;
        case 0x2d2840u: goto label_2d2840;
        case 0x2d2844u: goto label_2d2844;
        case 0x2d2848u: goto label_2d2848;
        case 0x2d284cu: goto label_2d284c;
        case 0x2d2850u: goto label_2d2850;
        case 0x2d2854u: goto label_2d2854;
        case 0x2d2858u: goto label_2d2858;
        case 0x2d285cu: goto label_2d285c;
        case 0x2d2860u: goto label_2d2860;
        case 0x2d2864u: goto label_2d2864;
        case 0x2d2868u: goto label_2d2868;
        case 0x2d286cu: goto label_2d286c;
        case 0x2d2870u: goto label_2d2870;
        case 0x2d2874u: goto label_2d2874;
        case 0x2d2878u: goto label_2d2878;
        case 0x2d287cu: goto label_2d287c;
        case 0x2d2880u: goto label_2d2880;
        case 0x2d2884u: goto label_2d2884;
        case 0x2d2888u: goto label_2d2888;
        case 0x2d288cu: goto label_2d288c;
        case 0x2d2890u: goto label_2d2890;
        case 0x2d2894u: goto label_2d2894;
        case 0x2d2898u: goto label_2d2898;
        case 0x2d289cu: goto label_2d289c;
        case 0x2d28a0u: goto label_2d28a0;
        case 0x2d28a4u: goto label_2d28a4;
        case 0x2d28a8u: goto label_2d28a8;
        case 0x2d28acu: goto label_2d28ac;
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28b4u: goto label_2d28b4;
        case 0x2d28b8u: goto label_2d28b8;
        case 0x2d28bcu: goto label_2d28bc;
        case 0x2d28c0u: goto label_2d28c0;
        case 0x2d28c4u: goto label_2d28c4;
        case 0x2d28c8u: goto label_2d28c8;
        case 0x2d28ccu: goto label_2d28cc;
        case 0x2d28d0u: goto label_2d28d0;
        case 0x2d28d4u: goto label_2d28d4;
        case 0x2d28d8u: goto label_2d28d8;
        case 0x2d28dcu: goto label_2d28dc;
        case 0x2d28e0u: goto label_2d28e0;
        case 0x2d28e4u: goto label_2d28e4;
        case 0x2d28e8u: goto label_2d28e8;
        case 0x2d28ecu: goto label_2d28ec;
        case 0x2d28f0u: goto label_2d28f0;
        case 0x2d28f4u: goto label_2d28f4;
        case 0x2d28f8u: goto label_2d28f8;
        case 0x2d28fcu: goto label_2d28fc;
        case 0x2d2900u: goto label_2d2900;
        case 0x2d2904u: goto label_2d2904;
        case 0x2d2908u: goto label_2d2908;
        case 0x2d290cu: goto label_2d290c;
        case 0x2d2910u: goto label_2d2910;
        case 0x2d2914u: goto label_2d2914;
        case 0x2d2918u: goto label_2d2918;
        case 0x2d291cu: goto label_2d291c;
        case 0x2d2920u: goto label_2d2920;
        case 0x2d2924u: goto label_2d2924;
        case 0x2d2928u: goto label_2d2928;
        case 0x2d292cu: goto label_2d292c;
        case 0x2d2930u: goto label_2d2930;
        case 0x2d2934u: goto label_2d2934;
        case 0x2d2938u: goto label_2d2938;
        case 0x2d293cu: goto label_2d293c;
        case 0x2d2940u: goto label_2d2940;
        case 0x2d2944u: goto label_2d2944;
        case 0x2d2948u: goto label_2d2948;
        case 0x2d294cu: goto label_2d294c;
        case 0x2d2950u: goto label_2d2950;
        case 0x2d2954u: goto label_2d2954;
        case 0x2d2958u: goto label_2d2958;
        case 0x2d295cu: goto label_2d295c;
        case 0x2d2960u: goto label_2d2960;
        case 0x2d2964u: goto label_2d2964;
        case 0x2d2968u: goto label_2d2968;
        case 0x2d296cu: goto label_2d296c;
        case 0x2d2970u: goto label_2d2970;
        case 0x2d2974u: goto label_2d2974;
        case 0x2d2978u: goto label_2d2978;
        case 0x2d297cu: goto label_2d297c;
        case 0x2d2980u: goto label_2d2980;
        case 0x2d2984u: goto label_2d2984;
        default: break;
    }

    ctx->pc = 0x2d2740u;

label_2d2740:
    // 0x2d2740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2d2744:
    // 0x2d2744: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d2744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d2748:
    // 0x2d2748: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2d274c:
    // 0x2d274c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d274cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2750:
    // 0x2d2750: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d2750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2d2754:
    // 0x2d2754: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d2754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2d2758:
    // 0x2d2758: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d2758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2d275c:
    // 0x2d275c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d275cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2d2760:
    // 0x2d2760: 0xc0b475e  jal         func_2D1D78
label_2d2764:
    if (ctx->pc == 0x2D2764u) {
        ctx->pc = 0x2D2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2760u;
        // 0x2d2764: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2768u;
        goto label_2d2768;
    }
    ctx->pc = 0x2D2760u;
    SET_GPR_U32(ctx, 31, 0x2D2768u);
    ctx->pc = 0x2D2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2760u;
    // 0x2d2764: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1D78u, 0x2D2760u, 0x2D2768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2768u;
label_2d2768:
    // 0x2d2768: 0xc09eb04  jal         func_27AC10
label_2d276c:
    if (ctx->pc == 0x2D276Cu) {
        ctx->pc = 0x2D2770u;
        goto label_2d2770;
    }
    ctx->pc = 0x2D2768u;
    SET_GPR_U32(ctx, 31, 0x2D2770u);
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x2D2768u, 0x2D2770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2770u;
label_2d2770:
    // 0x2d2770: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d2770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2774:
    // 0x2d2774: 0xc0d7394  jal         func_35CE50
label_2d2778:
    if (ctx->pc == 0x2D2778u) {
        ctx->pc = 0x2D2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2774u;
        // 0x2d2778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D277Cu;
        goto label_2d277c;
    }
    ctx->pc = 0x2D2774u;
    SET_GPR_U32(ctx, 31, 0x2D277Cu);
    ctx->pc = 0x2D2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2774u;
    // 0x2d2778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2D2774u, 0x2D277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D277Cu;
label_2d277c:
    // 0x2d277c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d277cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2d2780:
    // 0x2d2780: 0x8c629e40  lw          $v0, -0x61C0($v1)
    ctx->pc = 0x2d2780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942272)));
label_2d2784:
    // 0x2d2784: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2d2784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2d2788:
    // 0x2d2788: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2d278c:
    if (ctx->pc == 0x2D278Cu) {
        ctx->pc = 0x2D278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2788u;
        // 0x2d278c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2790u;
        goto label_2d2790;
    }
    ctx->pc = 0x2D2788u;
    {
        const bool branch_taken_0x2d2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2788u;
        // 0x2d278c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2788) {
            ctx->pc = 0x2D27A8u;
            goto label_2d27a8;
        }
    }
    ctx->pc = 0x2D2790u;
label_2d2790:
    // 0x2d2790: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d2790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2d2794:
    // 0x2d2794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d2794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d2798:
    // 0x2d2798: 0xc0d754c  jal         func_35D530
label_2d279c:
    if (ctx->pc == 0x2D279Cu) {
        ctx->pc = 0x2D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2798u;
        // 0x2d279c: 0x24a50b78  addiu       $a1, $a1, 0xB78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27A0u;
        goto label_2d27a0;
    }
    ctx->pc = 0x2D2798u;
    SET_GPR_U32(ctx, 31, 0x2D27A0u);
    ctx->pc = 0x2D279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2798u;
    // 0x2d279c: 0x24a50b78  addiu       $a1, $a1, 0xB78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2D2798u, 0x2D27A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27A0u;
label_2d27a0:
    // 0x2d27a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2d27a4:
    if (ctx->pc == 0x2D27A4u) {
        ctx->pc = 0x2D27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27A0u;
        // 0x2d27a4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27A8u;
        goto label_2d27a8;
    }
    ctx->pc = 0x2D27A0u;
    {
        const bool branch_taken_0x2d27a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27A0u;
        // 0x2d27a4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27a0) {
            ctx->pc = 0x2D27B8u;
            goto label_2d27b8;
        }
    }
    ctx->pc = 0x2D27A8u;
label_2d27a8:
    // 0x2d27a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d27a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d27ac:
    // 0x2d27ac: 0xc0d754c  jal         func_35D530
label_2d27b0:
    if (ctx->pc == 0x2D27B0u) {
        ctx->pc = 0x2D27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27ACu;
        // 0x2d27b0: 0x24a50b88  addiu       $a1, $a1, 0xB88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27B4u;
        goto label_2d27b4;
    }
    ctx->pc = 0x2D27ACu;
    SET_GPR_U32(ctx, 31, 0x2D27B4u);
    ctx->pc = 0x2D27B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27ACu;
    // 0x2d27b0: 0x24a50b88  addiu       $a1, $a1, 0xB88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2D27ACu, 0x2D27B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27B4u;
label_2d27b4:
    // 0x2d27b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d27b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d27b8:
    // 0x2d27b8: 0xc09dcc6  jal         func_277318
label_2d27bc:
    if (ctx->pc == 0x2D27BCu) {
        ctx->pc = 0x2D27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27B8u;
        // 0x2d27bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27C0u;
        goto label_2d27c0;
    }
    ctx->pc = 0x2D27B8u;
    SET_GPR_U32(ctx, 31, 0x2D27C0u);
    ctx->pc = 0x2D27BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27B8u;
    // 0x2d27bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2D27B8u, 0x2D27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27C0u;
label_2d27c0:
    // 0x2d27c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d27c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d27c4:
    // 0x2d27c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d27c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d27c8:
    // 0x2d27c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2d27cc:
    // 0x2d27cc: 0x40f809  jalr        $v0
label_2d27d0:
    if (ctx->pc == 0x2D27D0u) {
        ctx->pc = 0x2D27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27CCu;
        // 0x2d27d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27D4u;
        goto label_2d27d4;
    }
    ctx->pc = 0x2D27CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D27D4u);
        ctx->pc = 0x2D27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27CCu;
        // 0x2d27d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D27CCu, 0x2D27D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D27D4u;
label_2d27d4:
    // 0x2d27d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d27d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d27d8:
    // 0x2d27d8: 0xc0dbe86  jal         func_36FA18
label_2d27dc:
    if (ctx->pc == 0x2D27DCu) {
        ctx->pc = 0x2D27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27D8u;
        // 0x2d27dc: 0x10202b  sltu        $a0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27E0u;
        goto label_2d27e0;
    }
    ctx->pc = 0x2D27D8u;
    SET_GPR_U32(ctx, 31, 0x2D27E0u);
    ctx->pc = 0x2D27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27D8u;
    // 0x2d27dc: 0x10202b  sltu        $a0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x2D27D8u, 0x2D27E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27E0u;
label_2d27e0:
    // 0x2d27e0: 0xc0f52a8  jal         func_3D4AA0
label_2d27e4:
    if (ctx->pc == 0x2D27E4u) {
        ctx->pc = 0x2D27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D27E0u;
        // 0x2d27e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D27E8u;
        goto label_2d27e8;
    }
    ctx->pc = 0x2D27E0u;
    SET_GPR_U32(ctx, 31, 0x2D27E8u);
    ctx->pc = 0x2D27E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D27E0u;
    // 0x2d27e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2D27E0u, 0x2D27E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D27E8u;
label_2d27e8:
    // 0x2d27e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d27e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d27ec:
    // 0x2d27ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d27ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d27f0:
    // 0x2d27f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2d27f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d27f4:
    // 0x2d27f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d27f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d27f8:
    // 0x2d27f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d27fc:
    // 0x2d27fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d27fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d2800:
    // 0x2d2800: 0x40f809  jalr        $v0
label_2d2804:
    if (ctx->pc == 0x2D2804u) {
        ctx->pc = 0x2D2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2800u;
        // 0x2d2804: 0x26710008  addiu       $s1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2808u;
        goto label_2d2808;
    }
    ctx->pc = 0x2D2800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2808u);
        ctx->pc = 0x2D2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2800u;
        // 0x2d2804: 0x26710008  addiu       $s1, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2800u, 0x2D2808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2808u;
label_2d2808:
    // 0x2d2808: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d2808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d280c:
    // 0x2d280c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2d2810:
    // 0x2d2810: 0x40f809  jalr        $v0
label_2d2814:
    if (ctx->pc == 0x2D2814u) {
        ctx->pc = 0x2D2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2810u;
        // 0x2d2814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2818u;
        goto label_2d2818;
    }
    ctx->pc = 0x2D2810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D2818u);
        ctx->pc = 0x2D2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2810u;
        // 0x2d2814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2810u, 0x2D2818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D2818u;
label_2d2818:
    // 0x2d2818: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2d2818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2d281c:
    // 0x2d281c: 0x58400018  blezl       $v0, . + 4 + (0x18 << 2)
label_2d2820:
    if (ctx->pc == 0x2D2820u) {
        ctx->pc = 0x2D2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D281Cu;
        // 0x2d2820: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2824u;
        goto label_2d2824;
    }
    ctx->pc = 0x2D281Cu;
    {
        const bool branch_taken_0x2d281c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d281c) {
            ctx->pc = 0x2D2820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D281Cu;
            // 0x2d2820: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2880u;
            goto label_2d2880;
        }
    }
    ctx->pc = 0x2D2824u;
label_2d2824:
    // 0x2d2824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2828:
    // 0x2d2828: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x2d2828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d282c:
    // 0x2d282c: 0x0  nop
    ctx->pc = 0x2d282cu;
    // NOP
label_2d2830:
    // 0x2d2830: 0xc0f6a96  jal         func_3DAA58
label_2d2834:
    if (ctx->pc == 0x2D2834u) {
        ctx->pc = 0x2D2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2830u;
        // 0x2d2834: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2838u;
        goto label_2d2838;
    }
    ctx->pc = 0x2D2830u;
    SET_GPR_U32(ctx, 31, 0x2D2838u);
    ctx->pc = 0x2D2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2830u;
    // 0x2d2834: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D2830u, 0x2D2838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2838u;
label_2d2838:
    // 0x2d2838: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d2838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d283c:
    // 0x2d283c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2d283cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d2840:
    // 0x2d2840: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d2840u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d2844:
    // 0x2d2844: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d2844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d2848:
    // 0x2d2848: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d284c:
    // 0x2d284c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d2850:
    // 0x2d2850: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d2850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d2854:
    // 0x2d2854: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2d2854u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2d2858:
    // 0x2d2858: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d2858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d285c:
    // 0x2d285c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d285cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d2860:
    // 0x2d2860: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d2860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d2864:
    // 0x2d2864: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d2864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2d2868:
    // 0x2d2868: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d2868u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d286c:
    // 0x2d286c: 0xc0b41b8  jal         func_2D06E0
label_2d2870:
    if (ctx->pc == 0x2D2870u) {
        ctx->pc = 0x2D2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D286Cu;
        // 0x2d2870: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2874u;
        goto label_2d2874;
    }
    ctx->pc = 0x2D286Cu;
    SET_GPR_U32(ctx, 31, 0x2D2874u);
    ctx->pc = 0x2D2870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D286Cu;
    // 0x2d2870: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D06E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D06E0u, 0x2D286Cu, 0x2D2874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2874u;
label_2d2874:
    // 0x2d2874: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
label_2d2878:
    if (ctx->pc == 0x2D2878u) {
        ctx->pc = 0x2D2878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2874u;
        // 0x2d2878: 0xc6340000  lwc1        $f20, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D287Cu;
        goto label_2d287c;
    }
    ctx->pc = 0x2D2874u;
    {
        const bool branch_taken_0x2d2874 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2874) {
            ctx->pc = 0x2D2878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2874u;
            // 0x2d2878: 0xc6340000  lwc1        $f20, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2830;
        }
    }
    ctx->pc = 0x2D287Cu;
label_2d287c:
    // 0x2d287c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d2880:
    // 0x2d2880: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
label_2d2884:
    if (ctx->pc == 0x2D2884u) {
        ctx->pc = 0x2D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2880u;
        // 0x2d2884: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2888u;
        goto label_2d2888;
    }
    ctx->pc = 0x2D2880u;
    {
        const bool branch_taken_0x2d2880 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2880u;
        // 0x2d2884: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2880) {
            ctx->pc = 0x2D28DCu;
            goto label_2d28dc;
        }
    }
    ctx->pc = 0x2D2888u;
label_2d2888:
    // 0x2d2888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d288c:
    // 0x2d288c: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x2d288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d2890:
    // 0x2d2890: 0xc0f6a96  jal         func_3DAA58
label_2d2894:
    if (ctx->pc == 0x2D2894u) {
        ctx->pc = 0x2D2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2890u;
        // 0x2d2894: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2898u;
        goto label_2d2898;
    }
    ctx->pc = 0x2D2890u;
    SET_GPR_U32(ctx, 31, 0x2D2898u);
    ctx->pc = 0x2D2894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2890u;
    // 0x2d2894: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2D2890u, 0x2D2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2898u;
label_2d2898:
    // 0x2d2898: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d2898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d289c:
    // 0x2d289c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2d289cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d28a0:
    // 0x2d28a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2d28a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2d28a4:
    // 0x2d28a4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d28a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d28a8:
    // 0x2d28a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d28a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d28ac:
    // 0x2d28ac: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2d28acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2d28b0:
    // 0x2d28b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d28b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d28b4:
    // 0x2d28b4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2d28b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2d28b8:
    // 0x2d28b8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d28b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d28bc:
    // 0x2d28bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d28bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d28c0:
    // 0x2d28c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d28c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d28c4:
    // 0x2d28c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2d28c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2d28c8:
    // 0x2d28c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d28c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d28cc:
    // 0x2d28cc: 0xc0b42a2  jal         func_2D0A88
label_2d28d0:
    if (ctx->pc == 0x2D28D0u) {
        ctx->pc = 0x2D28D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28CCu;
        // 0x2d28d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28D4u;
        goto label_2d28d4;
    }
    ctx->pc = 0x2D28CCu;
    SET_GPR_U32(ctx, 31, 0x2D28D4u);
    ctx->pc = 0x2D28D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D28CCu;
    // 0x2d28d0: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0A88u, 0x2D28CCu, 0x2D28D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D28D4u;
label_2d28d4:
    // 0x2d28d4: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
label_2d28d8:
    if (ctx->pc == 0x2D28D8u) {
        ctx->pc = 0x2D28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28D4u;
        // 0x2d28d8: 0xc6340000  lwc1        $f20, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28DCu;
        goto label_2d28dc;
    }
    ctx->pc = 0x2D28D4u;
    {
        const bool branch_taken_0x2d28d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d28d4) {
            ctx->pc = 0x2D28D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D28D4u;
            // 0x2d28d8: 0xc6340000  lwc1        $f20, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2890;
        }
    }
    ctx->pc = 0x2D28DCu;
label_2d28dc:
    // 0x2d28dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d28e0:
    // 0x2d28e0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_2d28e4:
    if (ctx->pc == 0x2D28E4u) {
        ctx->pc = 0x2D28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28E0u;
        // 0x2d28e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D28E8u;
        goto label_2d28e8;
    }
    ctx->pc = 0x2D28E0u;
    {
        const bool branch_taken_0x2d28e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D28E0u;
        // 0x2d28e4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d28e0) {
            ctx->pc = 0x2D2910u;
            goto label_2d2910;
        }
    }
    ctx->pc = 0x2D28E8u;
label_2d28e8:
    // 0x2d28e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d28e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d28ec:
    // 0x2d28ec: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2d28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d28f0:
    // 0x2d28f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d28f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d28f4:
    // 0x2d28f4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d28f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d28f8:
    // 0x2d28f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d28f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d28fc:
    // 0x2d28fc: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x2d28fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d2900:
    // 0x2d2900: 0xc0b4410  jal         func_2D1040
label_2d2904:
    if (ctx->pc == 0x2D2904u) {
        ctx->pc = 0x2D2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2900u;
        // 0x2d2904: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2908u;
        goto label_2d2908;
    }
    ctx->pc = 0x2D2900u;
    SET_GPR_U32(ctx, 31, 0x2D2908u);
    ctx->pc = 0x2D2904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2900u;
    // 0x2d2904: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1040u, 0x2D2900u, 0x2D2908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2908u;
label_2d2908:
    // 0x2d2908: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_2d290c:
    if (ctx->pc == 0x2D290Cu) {
        ctx->pc = 0x2D290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2908u;
        // 0x2d290c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2910u;
        goto label_2d2910;
    }
    ctx->pc = 0x2D2908u;
    {
        const bool branch_taken_0x2d2908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2908) {
            ctx->pc = 0x2D290Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2908u;
            // 0x2d290c: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D28F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d28f0;
        }
    }
    ctx->pc = 0x2D2910u;
label_2d2910:
    // 0x2d2910: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d2914:
    // 0x2d2914: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_2d2918:
    if (ctx->pc == 0x2D2918u) {
        ctx->pc = 0x2D2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2914u;
        // 0x2d2918: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D291Cu;
        goto label_2d291c;
    }
    ctx->pc = 0x2D2914u;
    {
        const bool branch_taken_0x2d2914 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2914u;
        // 0x2d2918: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2914) {
            ctx->pc = 0x2D2948u;
            goto label_2d2948;
        }
    }
    ctx->pc = 0x2D291Cu;
label_2d291c:
    // 0x2d291c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d291cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d2920:
    // 0x2d2920: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x2d2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2d2924:
    // 0x2d2924: 0x0  nop
    ctx->pc = 0x2d2924u;
    // NOP
label_2d2928:
    // 0x2d2928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d292c:
    // 0x2d292c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d292cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2d2930:
    // 0x2d2930: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2d2930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2d2934:
    // 0x2d2934: 0xc62d0000  lwc1        $f13, 0x0($s1)
    ctx->pc = 0x2d2934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d2938:
    // 0x2d2938: 0xc0b438c  jal         func_2D0E30
label_2d293c:
    if (ctx->pc == 0x2D293Cu) {
        ctx->pc = 0x2D293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2938u;
        // 0x2d293c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2940u;
        goto label_2d2940;
    }
    ctx->pc = 0x2D2938u;
    SET_GPR_U32(ctx, 31, 0x2D2940u);
    ctx->pc = 0x2D293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2938u;
    // 0x2d293c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0E30u, 0x2D2938u, 0x2D2940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2940u;
label_2d2940:
    // 0x2d2940: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_2d2944:
    if (ctx->pc == 0x2D2944u) {
        ctx->pc = 0x2D2944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2940u;
        // 0x2d2944: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2948u;
        goto label_2d2948;
    }
    ctx->pc = 0x2D2940u;
    {
        const bool branch_taken_0x2d2940 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2940) {
            ctx->pc = 0x2D2944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2940u;
            // 0x2d2944: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2928;
        }
    }
    ctx->pc = 0x2D2948u;
label_2d2948:
    // 0x2d2948: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2d294c:
    if (ctx->pc == 0x2D294Cu) {
        ctx->pc = 0x2D294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2948u;
        // 0x2d294c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2950u;
        goto label_2d2950;
    }
    ctx->pc = 0x2D2948u;
    {
        const bool branch_taken_0x2d2948 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2948u;
        // 0x2d294c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2948) {
            ctx->pc = 0x2D295Cu;
            goto label_2d295c;
        }
    }
    ctx->pc = 0x2D2950u;
label_2d2950:
    // 0x2d2950: 0xc0f528a  jal         func_3D4A28
label_2d2954:
    if (ctx->pc == 0x2D2954u) {
        ctx->pc = 0x2D2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2950u;
        // 0x2d2954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2958u;
        goto label_2d2958;
    }
    ctx->pc = 0x2D2950u;
    SET_GPR_U32(ctx, 31, 0x2D2958u);
    ctx->pc = 0x2D2954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2950u;
    // 0x2d2954: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2D2950u, 0x2D2958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2958u;
label_2d2958:
    // 0x2d2958: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d2958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d295c:
    // 0x2d295c: 0xc0d7412  jal         func_35D048
label_2d2960:
    if (ctx->pc == 0x2D2960u) {
        ctx->pc = 0x2D2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D295Cu;
        // 0x2d2960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2964u;
        goto label_2d2964;
    }
    ctx->pc = 0x2D295Cu;
    SET_GPR_U32(ctx, 31, 0x2D2964u);
    ctx->pc = 0x2D2960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D295Cu;
    // 0x2d2960: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D295Cu, 0x2D2964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2964u;
label_2d2964:
    // 0x2d2964: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d2964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d2968:
    // 0x2d2968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d296c:
    // 0x2d296c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d296cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d2970:
    // 0x2d2970: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d2970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d2974:
    // 0x2d2974: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d2974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d2978:
    // 0x2d2978: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d2978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d297c:
    // 0x2d297c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d297cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d2980:
    // 0x2d2980: 0x3e00008  jr          $ra
label_2d2984:
    if (ctx->pc == 0x2D2984u) {
        ctx->pc = 0x2D2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2980u;
        // 0x2d2984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2988u;
        goto label_fallthrough_0x2d2980;
    }
    ctx->pc = 0x2D2980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2980u;
        // 0x2d2984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d2980:
    ctx->pc = 0x2D2988u;
}
