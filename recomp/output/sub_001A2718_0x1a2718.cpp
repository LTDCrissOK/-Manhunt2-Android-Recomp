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

// Function: sub_001A2718
// Address: 0x1a2718 - 0x1a27f0
void sub_001A2718_0x1a2718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2718_0x1a2718");
#endif

    switch (ctx->pc) {
        case 0x1a2718u: goto label_1a2718;
        case 0x1a271cu: goto label_1a271c;
        case 0x1a2720u: goto label_1a2720;
        case 0x1a2724u: goto label_1a2724;
        case 0x1a2728u: goto label_1a2728;
        case 0x1a272cu: goto label_1a272c;
        case 0x1a2730u: goto label_1a2730;
        case 0x1a2734u: goto label_1a2734;
        case 0x1a2738u: goto label_1a2738;
        case 0x1a273cu: goto label_1a273c;
        case 0x1a2740u: goto label_1a2740;
        case 0x1a2744u: goto label_1a2744;
        case 0x1a2748u: goto label_1a2748;
        case 0x1a274cu: goto label_1a274c;
        case 0x1a2750u: goto label_1a2750;
        case 0x1a2754u: goto label_1a2754;
        case 0x1a2758u: goto label_1a2758;
        case 0x1a275cu: goto label_1a275c;
        case 0x1a2760u: goto label_1a2760;
        case 0x1a2764u: goto label_1a2764;
        case 0x1a2768u: goto label_1a2768;
        case 0x1a276cu: goto label_1a276c;
        case 0x1a2770u: goto label_1a2770;
        case 0x1a2774u: goto label_1a2774;
        case 0x1a2778u: goto label_1a2778;
        case 0x1a277cu: goto label_1a277c;
        case 0x1a2780u: goto label_1a2780;
        case 0x1a2784u: goto label_1a2784;
        case 0x1a2788u: goto label_1a2788;
        case 0x1a278cu: goto label_1a278c;
        case 0x1a2790u: goto label_1a2790;
        case 0x1a2794u: goto label_1a2794;
        case 0x1a2798u: goto label_1a2798;
        case 0x1a279cu: goto label_1a279c;
        case 0x1a27a0u: goto label_1a27a0;
        case 0x1a27a4u: goto label_1a27a4;
        case 0x1a27a8u: goto label_1a27a8;
        case 0x1a27acu: goto label_1a27ac;
        case 0x1a27b0u: goto label_1a27b0;
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27b8u: goto label_1a27b8;
        case 0x1a27bcu: goto label_1a27bc;
        case 0x1a27c0u: goto label_1a27c0;
        case 0x1a27c4u: goto label_1a27c4;
        case 0x1a27c8u: goto label_1a27c8;
        case 0x1a27ccu: goto label_1a27cc;
        case 0x1a27d0u: goto label_1a27d0;
        case 0x1a27d4u: goto label_1a27d4;
        case 0x1a27d8u: goto label_1a27d8;
        case 0x1a27dcu: goto label_1a27dc;
        case 0x1a27e0u: goto label_1a27e0;
        case 0x1a27e4u: goto label_1a27e4;
        case 0x1a27e8u: goto label_1a27e8;
        case 0x1a27ecu: goto label_1a27ec;
        default: break;
    }

    ctx->pc = 0x1a2718u;

label_1a2718:
    // 0x1a2718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a271c:
    // 0x1a271c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a271cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2720:
    // 0x1a2720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a2720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a2724:
    // 0x1a2724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2728:
    // 0x1a2728: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a272c:
    // 0x1a272c: 0x8c431050  lw          $v1, 0x1050($v0)
    ctx->pc = 0x1a272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4176)));
label_1a2730:
    // 0x1a2730: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1a2734:
    if (ctx->pc == 0x1A2734u) {
        ctx->pc = 0x1A2738u;
        goto label_1a2738;
    }
    ctx->pc = 0x1A2730u;
    {
        const bool branch_taken_0x1a2730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2730) {
            ctx->pc = 0x1A2774u;
            goto label_1a2774;
        }
    }
    ctx->pc = 0x1A2738u;
label_1a2738:
    // 0x1a2738: 0xc061a26  jal         func_186898
label_1a273c:
    if (ctx->pc == 0x1A273Cu) {
        ctx->pc = 0x1A2740u;
        goto label_1a2740;
    }
    ctx->pc = 0x1A2738u;
    SET_GPR_U32(ctx, 31, 0x1A2740u);
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A2738u, 0x1A2740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2740u;
label_1a2740:
    // 0x1a2740: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x1a2740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1a2744:
    // 0x1a2744: 0xc0f6da6  jal         func_3DB698
label_1a2748:
    if (ctx->pc == 0x1A2748u) {
        ctx->pc = 0x1A2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2744u;
        // 0x1a2748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A274Cu;
        goto label_1a274c;
    }
    ctx->pc = 0x1A2744u;
    SET_GPR_U32(ctx, 31, 0x1A274Cu);
    ctx->pc = 0x1A2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2744u;
    // 0x1a2748: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A2744u, 0x1A274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A274Cu;
label_1a274c:
    // 0x1a274c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a2750:
    if (ctx->pc == 0x1A2750u) {
        ctx->pc = 0x1A2754u;
        goto label_1a2754;
    }
    ctx->pc = 0x1A274Cu;
    {
        const bool branch_taken_0x1a274c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a274c) {
            ctx->pc = 0x1A2764u;
            goto label_1a2764;
        }
    }
    ctx->pc = 0x1A2754u;
label_1a2754:
    // 0x1a2754: 0xc068fc6  jal         func_1A3F18
label_1a2758:
    if (ctx->pc == 0x1A2758u) {
        ctx->pc = 0x1A2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2754u;
        // 0x1a2758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A275Cu;
        goto label_1a275c;
    }
    ctx->pc = 0x1A2754u;
    SET_GPR_U32(ctx, 31, 0x1A275Cu);
    ctx->pc = 0x1A2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2754u;
    // 0x1a2758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F18u, 0x1A2754u, 0x1A275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A275Cu;
label_1a275c:
    // 0x1a275c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1a2760:
    if (ctx->pc == 0x1A2760u) {
        ctx->pc = 0x1A2764u;
        goto label_1a2764;
    }
    ctx->pc = 0x1A275Cu;
    {
        const bool branch_taken_0x1a275c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a275c) {
            ctx->pc = 0x1A27C4u;
            goto label_1a27c4;
        }
    }
    ctx->pc = 0x1A2764u;
label_1a2764:
    // 0x1a2764: 0xc068f6e  jal         func_1A3DB8
label_1a2768:
    if (ctx->pc == 0x1A2768u) {
        ctx->pc = 0x1A2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2764u;
        // 0x1a2768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A276Cu;
        goto label_1a276c;
    }
    ctx->pc = 0x1A2764u;
    SET_GPR_U32(ctx, 31, 0x1A276Cu);
    ctx->pc = 0x1A2768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2764u;
    // 0x1a2768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A2764u, 0x1A276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A276Cu;
label_1a276c:
    // 0x1a276c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a2770:
    if (ctx->pc == 0x1A2770u) {
        ctx->pc = 0x1A2774u;
        goto label_1a2774;
    }
    ctx->pc = 0x1A276Cu;
    {
        const bool branch_taken_0x1a276c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a276c) {
            ctx->pc = 0x1A27C4u;
            goto label_1a27c4;
        }
    }
    ctx->pc = 0x1A2774u;
label_1a2774:
    // 0x1a2774: 0xc061a12  jal         func_186848
label_1a2778:
    if (ctx->pc == 0x1A2778u) {
        ctx->pc = 0x1A2778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2774u;
        // 0x1a2778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A277Cu;
        goto label_1a277c;
    }
    ctx->pc = 0x1A2774u;
    SET_GPR_U32(ctx, 31, 0x1A277Cu);
    ctx->pc = 0x1A2778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2774u;
    // 0x1a2778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A2774u, 0x1A277Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A277Cu;
label_1a277c:
    // 0x1a277c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a2780:
    // 0x1a2780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2784:
    // 0x1a2784: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a2788:
    // 0x1a2788: 0x40f809  jalr        $v0
label_1a278c:
    if (ctx->pc == 0x1A278Cu) {
        ctx->pc = 0x1A2790u;
        goto label_1a2790;
    }
    ctx->pc = 0x1A2788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2790u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2788u, 0x1A2790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2790u;
label_1a2790:
    // 0x1a2790: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a2794:
    if (ctx->pc == 0x1A2794u) {
        ctx->pc = 0x1A2798u;
        goto label_1a2798;
    }
    ctx->pc = 0x1A2790u;
    {
        const bool branch_taken_0x1a2790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2790) {
            ctx->pc = 0x1A27C4u;
            goto label_1a27c4;
        }
    }
    ctx->pc = 0x1A2798u;
label_1a2798:
    // 0x1a2798: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a279c:
    // 0x1a279c: 0x8c821050  lw          $v0, 0x1050($a0)
    ctx->pc = 0x1a279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4176)));
label_1a27a0:
    // 0x1a27a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a27a4:
    if (ctx->pc == 0x1A27A4u) {
        ctx->pc = 0x1A27A8u;
        goto label_1a27a8;
    }
    ctx->pc = 0x1A27A0u;
    {
        const bool branch_taken_0x1a27a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a27a0) {
            ctx->pc = 0x1A27C4u;
            goto label_1a27c4;
        }
    }
    ctx->pc = 0x1A27A8u;
label_1a27a8:
    // 0x1a27a8: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x1a27a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_1a27ac:
    // 0x1a27ac: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x1a27acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_1a27b0:
    // 0x1a27b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a27b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a27b4:
    // 0x1a27b4: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
label_1a27b8:
    // 0x1a27b8: 0x346301ff  ori         $v1, $v1, 0x1FF
    ctx->pc = 0x1a27b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)511);
label_1a27bc:
    // 0x1a27bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a27bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a27c0:
    // 0x1a27c0: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x1a27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_1a27c4:
    // 0x1a27c4: 0xc061a1e  jal         func_186878
label_1a27c8:
    if (ctx->pc == 0x1A27C8u) {
        ctx->pc = 0x1A27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27C4u;
        // 0x1a27c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27CCu;
        goto label_1a27cc;
    }
    ctx->pc = 0x1A27C4u;
    SET_GPR_U32(ctx, 31, 0x1A27CCu);
    ctx->pc = 0x1A27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27C4u;
    // 0x1a27c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A27C4u, 0x1A27CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27CCu;
label_1a27cc:
    // 0x1a27cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a27ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a27d0:
    // 0x1a27d0: 0xc06cdea  jal         func_1B37A8
label_1a27d4:
    if (ctx->pc == 0x1A27D4u) {
        ctx->pc = 0x1A27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D0u;
        // 0x1a27d4: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27D8u;
        goto label_1a27d8;
    }
    ctx->pc = 0x1A27D0u;
    SET_GPR_U32(ctx, 31, 0x1A27D8u);
    ctx->pc = 0x1A27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27D0u;
    // 0x1a27d4: 0x260500a0  addiu       $a1, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x1A27D0u, 0x1A27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A27D8u;
label_1a27d8:
    // 0x1a27d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a27d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a27dc:
    // 0x1a27dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a27dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a27e0:
    // 0x1a27e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a27e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a27e4:
    // 0x1a27e4: 0x3e00008  jr          $ra
label_1a27e8:
    if (ctx->pc == 0x1A27E8u) {
        ctx->pc = 0x1A27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27E4u;
        // 0x1a27e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27ECu;
        goto label_1a27ec;
    }
    ctx->pc = 0x1A27E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27E4u;
        // 0x1a27e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A27E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A27ECu;
label_1a27ec:
    // 0x1a27ec: 0x0  nop
    ctx->pc = 0x1a27ecu;
    // NOP
    ctx->pc = 0x1a27f0u;
}
