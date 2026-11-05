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

// Function: sub_0038E6D0
// Address: 0x38e6d0 - 0x38e818
void sub_0038E6D0_0x38e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E6D0_0x38e6d0");
#endif

    switch (ctx->pc) {
        case 0x38e6ecu: goto label_38e6ec;
        case 0x38e6fcu: goto label_38e6fc;
        case 0x38e70cu: goto label_38e70c;
        case 0x38e728u: goto label_38e728;
        case 0x38e738u: goto label_38e738;
        case 0x38e754u: goto label_38e754;
        case 0x38e764u: goto label_38e764;
        case 0x38e770u: goto label_38e770;
        case 0x38e778u: goto label_38e778;
        case 0x38e784u: goto label_38e784;
        case 0x38e794u: goto label_38e794;
        default: break;
    }

    ctx->pc = 0x38e6d0u;

    // 0x38e6d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38e6d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x38e6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x38e6d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38e6dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38e6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38e6e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38e6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38e6e4: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E6E4u;
    SET_GPR_U32(ctx, 31, 0x38E6ECu);
    ctx->pc = 0x38E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6E4u;
    // 0x38e6e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E6E4u, 0x38E6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6ECu;
label_38e6ec:
    // 0x38e6ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38e6ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e6f4: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E6F4u;
    SET_GPR_U32(ctx, 31, 0x38E6FCu);
    ctx->pc = 0x38E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E6F4u;
    // 0x38e6f8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E6F4u, 0x38E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E6FCu;
label_38e6fc:
    // 0x38e6fc: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x38e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x38e700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e704: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E704u;
    SET_GPR_U32(ctx, 31, 0x38E70Cu);
    ctx->pc = 0x38E708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E704u;
    // 0x38e708: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E704u, 0x38E70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E70Cu;
label_38e70c:
    // 0x38e70c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x38e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x38e710: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x38e710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x38e714: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x38e714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x38e718: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38E718u;
    {
        const bool branch_taken_0x38e718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E718u;
        // 0x38e71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e718) {
            ctx->pc = 0x38E740u;
            goto label_38e740;
        }
    }
    ctx->pc = 0x38E720u;
    // 0x38e720: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E720u;
    SET_GPR_U32(ctx, 31, 0x38E728u);
    ctx->pc = 0x38E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E720u;
    // 0x38e724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E720u, 0x38E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E728u;
label_38e728:
    // 0x38e728: 0xae020164  sw          $v0, 0x164($s0)
    ctx->pc = 0x38e728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 2));
    // 0x38e72c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e730: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E730u;
    SET_GPR_U32(ctx, 31, 0x38E738u);
    ctx->pc = 0x38E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E730u;
    // 0x38e734: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E730u, 0x38E738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E738u;
label_38e738:
    // 0x38e738: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x38e738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x38e73c: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x38e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_38e740:
    // 0x38e740: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e744: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38E744u;
    {
        const bool branch_taken_0x38e744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E744u;
        // 0x38e748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e744) {
            ctx->pc = 0x38E77Cu;
            goto label_38e77c;
        }
    }
    ctx->pc = 0x38E74Cu;
    // 0x38e74c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E74Cu;
    SET_GPR_U32(ctx, 31, 0x38E754u);
    ctx->pc = 0x38E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E74Cu;
    // 0x38e750: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E74Cu, 0x38E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E754u;
label_38e754:
    // 0x38e754: 0xae02016c  sw          $v0, 0x16C($s0)
    ctx->pc = 0x38e754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 2));
    // 0x38e758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e75c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E75Cu;
    SET_GPR_U32(ctx, 31, 0x38E764u);
    ctx->pc = 0x38E760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E75Cu;
    // 0x38e760: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E75Cu, 0x38E764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E764u;
label_38e764:
    // 0x38e764: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38E764u;
    {
        const bool branch_taken_0x38e764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E764u;
        // 0x38e768: 0xae020170  sw          $v0, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e764) {
            ctx->pc = 0x38E778u;
            goto label_38e778;
        }
    }
    ctx->pc = 0x38E76Cu;
    // 0x38e76c: 0x0  nop
    ctx->pc = 0x38e76cu;
    // NOP
label_38e770:
    // 0x38e770: 0xc0e3b9c  jal         func_38EE70
    ctx->pc = 0x38E770u;
    SET_GPR_U32(ctx, 31, 0x38E778u);
    ctx->pc = 0x38E774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E770u;
    // 0x38e774: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38E770u, 0x38E778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E778u;
label_38e778:
    // 0x38e778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e77c:
    // 0x38e77c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E77Cu;
    SET_GPR_U32(ctx, 31, 0x38E784u);
    ctx->pc = 0x38E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E77Cu;
    // 0x38e780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E77Cu, 0x38E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E784u;
label_38e784:
    // 0x38e784: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38E784u;
    {
        const bool branch_taken_0x38e784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E784u;
        // 0x38e788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e784) {
            ctx->pc = 0x38E770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38e770;
        }
    }
    ctx->pc = 0x38E78Cu;
    // 0x38e78c: 0xc0e3b1a  jal         func_38EC68
    ctx->pc = 0x38E78Cu;
    SET_GPR_U32(ctx, 31, 0x38E794u);
    ctx->pc = 0x38E790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E78Cu;
    // 0x38e790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC68u, 0x38E78Cu, 0x38E794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E794u;
label_38e794:
    // 0x38e794: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x38e794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x38e798: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38e798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e79c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e7a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x38E7A0u;
    {
        const bool branch_taken_0x38e7a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7A0u;
        // 0x38e7a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7a0) {
            ctx->pc = 0x38E7C8u;
            goto label_38e7c8;
        }
    }
    ctx->pc = 0x38E7A8u;
    // 0x38e7a8: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x38E7A8u;
    {
        const bool branch_taken_0x38e7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e7a8) {
            ctx->pc = 0x38E7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E7A8u;
            // 0x38e7ac: 0x8e02085c  lw          $v0, 0x85C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E7CCu;
            goto label_38e7cc;
        }
    }
    ctx->pc = 0x38E7B0u;
    // 0x38e7b0: 0x6230004  bgezl       $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E7B0u;
    {
        const bool branch_taken_0x38e7b0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x38e7b0) {
            ctx->pc = 0x38E7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E7B0u;
            // 0x38e7b4: 0xae000864  sw          $zero, 0x864($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E7C4u;
            goto label_38e7c4;
        }
    }
    ctx->pc = 0x38E7B8u;
    // 0x38e7b8: 0x8e020864  lw          $v0, 0x864($s0)
    ctx->pc = 0x38e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2148)));
    // 0x38e7bc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x38e7bcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38e7c0: 0xae000864  sw          $zero, 0x864($s0)
    ctx->pc = 0x38e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2148), GPR_U32(ctx, 0));
label_38e7c4:
    // 0x38e7c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e7c8:
    // 0x38e7c8: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x38e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
label_38e7cc:
    // 0x38e7cc: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x38e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x38e7d0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E7D0u;
    {
        const bool branch_taken_0x38e7d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E7D0u;
        // 0x38e7d4: 0xae0301bc  sw          $v1, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e7d0) {
            ctx->pc = 0x38E7ECu;
            goto label_38e7ec;
        }
    }
    ctx->pc = 0x38E7D8u;
    // 0x38e7d8: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x38e7d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x38e7dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E7DCu;
    {
        const bool branch_taken_0x38e7dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e7dc) {
            ctx->pc = 0x38E7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E7DCu;
            // 0x38e7e0: 0x8e020860  lw          $v0, 0x860($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E7F0u;
            goto label_38e7f0;
        }
    }
    ctx->pc = 0x38E7E4u;
    // 0x38e7e4: 0x24620400  addiu       $v0, $v1, 0x400
    ctx->pc = 0x38e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x38e7e8: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x38e7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_38e7ec:
    // 0x38e7ec: 0x8e020860  lw          $v0, 0x860($s0)
    ctx->pc = 0x38e7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2144)));
label_38e7f0:
    // 0x38e7f0: 0x8e0401bc  lw          $a0, 0x1BC($s0)
    ctx->pc = 0x38e7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x38e7f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38e7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e7f8: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x38e7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38e7fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e800: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x38e800u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x38e804: 0xae020860  sw          $v0, 0x860($s0)
    ctx->pc = 0x38e804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2144), GPR_U32(ctx, 2));
    // 0x38e808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x38E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E80Cu;
        // 0x38e810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E814u;
    // 0x38e814: 0x0  nop
    ctx->pc = 0x38e814u;
    // NOP
    ctx->pc = 0x38e818u;
}
