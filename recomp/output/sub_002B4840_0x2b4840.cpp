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

// Function: sub_002B4840
// Address: 0x2b4840 - 0x2b4940
void sub_002B4840_0x2b4840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4840_0x2b4840");
#endif

    switch (ctx->pc) {
        case 0x2b4840u: goto label_2b4840;
        case 0x2b4844u: goto label_2b4844;
        case 0x2b4848u: goto label_2b4848;
        case 0x2b484cu: goto label_2b484c;
        case 0x2b4850u: goto label_2b4850;
        case 0x2b4854u: goto label_2b4854;
        case 0x2b4858u: goto label_2b4858;
        case 0x2b485cu: goto label_2b485c;
        case 0x2b4860u: goto label_2b4860;
        case 0x2b4864u: goto label_2b4864;
        case 0x2b4868u: goto label_2b4868;
        case 0x2b486cu: goto label_2b486c;
        case 0x2b4870u: goto label_2b4870;
        case 0x2b4874u: goto label_2b4874;
        case 0x2b4878u: goto label_2b4878;
        case 0x2b487cu: goto label_2b487c;
        case 0x2b4880u: goto label_2b4880;
        case 0x2b4884u: goto label_2b4884;
        case 0x2b4888u: goto label_2b4888;
        case 0x2b488cu: goto label_2b488c;
        case 0x2b4890u: goto label_2b4890;
        case 0x2b4894u: goto label_2b4894;
        case 0x2b4898u: goto label_2b4898;
        case 0x2b489cu: goto label_2b489c;
        case 0x2b48a0u: goto label_2b48a0;
        case 0x2b48a4u: goto label_2b48a4;
        case 0x2b48a8u: goto label_2b48a8;
        case 0x2b48acu: goto label_2b48ac;
        case 0x2b48b0u: goto label_2b48b0;
        case 0x2b48b4u: goto label_2b48b4;
        case 0x2b48b8u: goto label_2b48b8;
        case 0x2b48bcu: goto label_2b48bc;
        case 0x2b48c0u: goto label_2b48c0;
        case 0x2b48c4u: goto label_2b48c4;
        case 0x2b48c8u: goto label_2b48c8;
        case 0x2b48ccu: goto label_2b48cc;
        case 0x2b48d0u: goto label_2b48d0;
        case 0x2b48d4u: goto label_2b48d4;
        case 0x2b48d8u: goto label_2b48d8;
        case 0x2b48dcu: goto label_2b48dc;
        case 0x2b48e0u: goto label_2b48e0;
        case 0x2b48e4u: goto label_2b48e4;
        case 0x2b48e8u: goto label_2b48e8;
        case 0x2b48ecu: goto label_2b48ec;
        case 0x2b48f0u: goto label_2b48f0;
        case 0x2b48f4u: goto label_2b48f4;
        case 0x2b48f8u: goto label_2b48f8;
        case 0x2b48fcu: goto label_2b48fc;
        case 0x2b4900u: goto label_2b4900;
        case 0x2b4904u: goto label_2b4904;
        case 0x2b4908u: goto label_2b4908;
        case 0x2b490cu: goto label_2b490c;
        case 0x2b4910u: goto label_2b4910;
        case 0x2b4914u: goto label_2b4914;
        case 0x2b4918u: goto label_2b4918;
        case 0x2b491cu: goto label_2b491c;
        case 0x2b4920u: goto label_2b4920;
        case 0x2b4924u: goto label_2b4924;
        case 0x2b4928u: goto label_2b4928;
        case 0x2b492cu: goto label_2b492c;
        case 0x2b4930u: goto label_2b4930;
        case 0x2b4934u: goto label_2b4934;
        case 0x2b4938u: goto label_2b4938;
        case 0x2b493cu: goto label_2b493c;
        default: break;
    }

    ctx->pc = 0x2b4840u;

label_2b4840:
    // 0x2b4840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b4844:
    // 0x2b4844: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b4844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2b4848:
    // 0x2b4848: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2b4848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2b484c:
    // 0x2b484c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b484cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b4850:
    // 0x2b4850: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b4850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b4854:
    // 0x2b4854: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2b4854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2b4858:
    // 0x2b4858: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b485c:
    // 0x2b485c: 0x8e22cba8  lw          $v0, -0x3458($s1)
    ctx->pc = 0x2b485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
label_2b4860:
    // 0x2b4860: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b4860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b4864:
    // 0x2b4864: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b4864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b4868:
    // 0x2b4868: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2b486c:
    // 0x2b486c: 0x40f809  jalr        $v0
label_2b4870:
    if (ctx->pc == 0x2B4870u) {
        ctx->pc = 0x2B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B486Cu;
        // 0x2b4870: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4874u;
        goto label_2b4874;
    }
    ctx->pc = 0x2B486Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B4874u);
        ctx->pc = 0x2B4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B486Cu;
        // 0x2b4870: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B486Cu, 0x2B4874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B4874u;
label_2b4874:
    // 0x2b4874: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b4874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b4878:
    // 0x2b4878: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b4878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b487c:
    // 0x2b487c: 0xc0ef256  jal         func_3BC958
label_2b4880:
    if (ctx->pc == 0x2B4880u) {
        ctx->pc = 0x2B4880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B487Cu;
        // 0x2b4880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4884u;
        goto label_2b4884;
    }
    ctx->pc = 0x2B487Cu;
    SET_GPR_U32(ctx, 31, 0x2B4884u);
    ctx->pc = 0x2B4880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B487Cu;
    // 0x2b4880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC958u, 0x2B487Cu, 0x2B4884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4884u;
label_2b4884:
    // 0x2b4884: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b4884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2b4888:
    // 0x2b4888: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b4888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b488c:
    // 0x2b488c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b488cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b4890:
    // 0x2b4890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b4890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4894:
    // 0x2b4894: 0xc0ef0b2  jal         func_3BC2C8
label_2b4898:
    if (ctx->pc == 0x2B4898u) {
        ctx->pc = 0x2B4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4894u;
        // 0x2b4898: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B489Cu;
        goto label_2b489c;
    }
    ctx->pc = 0x2B4894u;
    SET_GPR_U32(ctx, 31, 0x2B489Cu);
    ctx->pc = 0x2B4898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4894u;
    // 0x2b4898: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B4894u, 0x2B489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B489Cu;
label_2b489c:
    // 0x2b489c: 0x8e23cba8  lw          $v1, -0x3458($s1)
    ctx->pc = 0x2b489cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953896)));
label_2b48a0:
    // 0x2b48a0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b48a4:
    // 0x2b48a4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b48a8:
    // 0x2b48a8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2b48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2b48ac:
    // 0x2b48ac: 0x40f809  jalr        $v0
label_2b48b0:
    if (ctx->pc == 0x2B48B0u) {
        ctx->pc = 0x2B48B4u;
        goto label_2b48b4;
    }
    ctx->pc = 0x2B48ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B48B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B48ACu, 0x2B48B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B48B4u;
label_2b48b4:
    // 0x2b48b4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b48b8:
    // 0x2b48b8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2b48bc:
    if (ctx->pc == 0x2B48BCu) {
        ctx->pc = 0x2B48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48B8u;
        // 0x2b48bc: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48C0u;
        goto label_2b48c0;
    }
    ctx->pc = 0x2B48B8u;
    {
        const bool branch_taken_0x2b48b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48B8u;
        // 0x2b48bc: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48b8) {
            ctx->pc = 0x2B48CCu;
            goto label_2b48cc;
        }
    }
    ctx->pc = 0x2B48C0u;
label_2b48c0:
    // 0x2b48c0: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2b48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2b48c4:
    // 0x2b48c4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2b48c8:
    if (ctx->pc == 0x2B48C8u) {
        ctx->pc = 0x2B48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48C4u;
        // 0x2b48c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48CCu;
        goto label_2b48cc;
    }
    ctx->pc = 0x2B48C4u;
    {
        const bool branch_taken_0x2b48c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48C4u;
        // 0x2b48c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48c4) {
            ctx->pc = 0x2B4924u;
            goto label_2b4924;
        }
    }
    ctx->pc = 0x2B48CCu;
label_2b48cc:
    // 0x2b48cc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2b48d0:
    if (ctx->pc == 0x2B48D0u) {
        ctx->pc = 0x2B48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48CCu;
        // 0x2b48d0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48D4u;
        goto label_2b48d4;
    }
    ctx->pc = 0x2B48CCu;
    {
        const bool branch_taken_0x2b48cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B48D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48CCu;
        // 0x2b48d0: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48cc) {
            ctx->pc = 0x2B48E0u;
            goto label_2b48e0;
        }
    }
    ctx->pc = 0x2B48D4u;
label_2b48d4:
    // 0x2b48d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b48d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b48d8:
    // 0x2b48d8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b48dc:
    if (ctx->pc == 0x2B48DCu) {
        ctx->pc = 0x2B48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48D8u;
        // 0x2b48dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48E0u;
        goto label_2b48e0;
    }
    ctx->pc = 0x2B48D8u;
    {
        const bool branch_taken_0x2b48d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48D8u;
        // 0x2b48dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48d8) {
            ctx->pc = 0x2B4920u;
            goto label_2b4920;
        }
    }
    ctx->pc = 0x2B48E0u;
label_2b48e0:
    // 0x2b48e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b48e4:
    if (ctx->pc == 0x2B48E4u) {
        ctx->pc = 0x2B48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48E0u;
        // 0x2b48e4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48E8u;
        goto label_2b48e8;
    }
    ctx->pc = 0x2B48E0u;
    {
        const bool branch_taken_0x2b48e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B48E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48E0u;
        // 0x2b48e4: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48e0) {
            ctx->pc = 0x2B48F4u;
            goto label_2b48f4;
        }
    }
    ctx->pc = 0x2B48E8u;
label_2b48e8:
    // 0x2b48e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b48ec:
    // 0x2b48ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b48f0:
    if (ctx->pc == 0x2B48F0u) {
        ctx->pc = 0x2B48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48ECu;
        // 0x2b48f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48F4u;
        goto label_2b48f4;
    }
    ctx->pc = 0x2B48ECu;
    {
        const bool branch_taken_0x2b48ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48ECu;
        // 0x2b48f0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48ec) {
            ctx->pc = 0x2B4920u;
            goto label_2b4920;
        }
    }
    ctx->pc = 0x2B48F4u;
label_2b48f4:
    // 0x2b48f4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b48f8:
    if (ctx->pc == 0x2B48F8u) {
        ctx->pc = 0x2B48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48F4u;
        // 0x2b48f8: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B48FCu;
        goto label_2b48fc;
    }
    ctx->pc = 0x2B48F4u;
    {
        const bool branch_taken_0x2b48f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48F4u;
        // 0x2b48f8: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b48f4) {
            ctx->pc = 0x2B4908u;
            goto label_2b4908;
        }
    }
    ctx->pc = 0x2B48FCu;
label_2b48fc:
    // 0x2b48fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2b48fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2b4900:
    // 0x2b4900: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b4904:
    if (ctx->pc == 0x2B4904u) {
        ctx->pc = 0x2B4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4900u;
        // 0x2b4904: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4908u;
        goto label_2b4908;
    }
    ctx->pc = 0x2B4900u;
    {
        const bool branch_taken_0x2b4900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4900u;
        // 0x2b4904: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4900) {
            ctx->pc = 0x2B4920u;
            goto label_2b4920;
        }
    }
    ctx->pc = 0x2B4908u;
label_2b4908:
    // 0x2b4908: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b490c:
    if (ctx->pc == 0x2B490Cu) {
        ctx->pc = 0x2B490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4908u;
        // 0x2b490c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4910u;
        goto label_2b4910;
    }
    ctx->pc = 0x2B4908u;
    {
        const bool branch_taken_0x2b4908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4908u;
        // 0x2b490c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4908) {
            ctx->pc = 0x2B4918u;
            goto label_2b4918;
        }
    }
    ctx->pc = 0x2B4910u;
label_2b4910:
    // 0x2b4910: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b4914:
    if (ctx->pc == 0x2B4914u) {
        ctx->pc = 0x2B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4910u;
        // 0x2b4914: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4918u;
        goto label_2b4918;
    }
    ctx->pc = 0x2B4910u;
    {
        const bool branch_taken_0x2b4910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4910u;
        // 0x2b4914: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4910) {
            ctx->pc = 0x2B4924u;
            goto label_2b4924;
        }
    }
    ctx->pc = 0x2B4918u;
label_2b4918:
    // 0x2b4918: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b4918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b491c:
    // 0x2b491c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b4920:
    // 0x2b4920: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2b4920u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2b4924:
    // 0x2b4924: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4928:
    // 0x2b4928: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b4928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b492c:
    // 0x2b492c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b492cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b4930:
    // 0x2b4930: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2b4930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2b4934:
    // 0x2b4934: 0x3e00008  jr          $ra
label_2b4938:
    if (ctx->pc == 0x2B4938u) {
        ctx->pc = 0x2B4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4934u;
        // 0x2b4938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B493Cu;
        goto label_2b493c;
    }
    ctx->pc = 0x2B4934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4934u;
        // 0x2b4938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B493Cu;
label_2b493c:
    // 0x2b493c: 0x0  nop
    ctx->pc = 0x2b493cu;
    // NOP
    ctx->pc = 0x2b4940u;
}
