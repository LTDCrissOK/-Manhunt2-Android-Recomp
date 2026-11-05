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

// Function: sub_00142820
// Address: 0x142820 - 0x1428d0
void sub_00142820_0x142820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142820_0x142820");
#endif

    switch (ctx->pc) {
        case 0x142838u: goto label_142838;
        case 0x142854u: goto label_142854;
        case 0x142864u: goto label_142864;
        case 0x142870u: goto label_142870;
        case 0x142880u: goto label_142880;
        case 0x142888u: goto label_142888;
        case 0x1428b0u: goto label_1428b0;
        case 0x1428c0u: goto label_1428c0;
        default: break;
    }

    ctx->pc = 0x142820u;

    // 0x142820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x142828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14282c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14282cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142830: 0xc04e866  jal         func_13A198
    ctx->pc = 0x142830u;
    SET_GPR_U32(ctx, 31, 0x142838u);
    ctx->pc = 0x142834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142830u;
    // 0x142834: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x142830u, 0x142838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142838u;
label_142838:
    // 0x142838: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14283c: 0x50430021  beql        $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x14283Cu;
    {
        const bool branch_taken_0x14283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14283c) {
            ctx->pc = 0x142840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14283Cu;
            // 0x142840: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1428C4u;
            goto label_1428c4;
        }
    }
    ctx->pc = 0x142844u;
    // 0x142844: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x142844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x142848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14284c: 0xc050868  jal         func_1421A0
    ctx->pc = 0x14284Cu;
    SET_GPR_U32(ctx, 31, 0x142854u);
    ctx->pc = 0x142850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14284Cu;
    // 0x142850: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1421A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1421A0u, 0x14284Cu, 0x142854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142854u;
label_142854:
    // 0x142854: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x142854u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x142858: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14285c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14285Cu;
    SET_GPR_U32(ctx, 31, 0x142864u);
    ctx->pc = 0x142860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14285Cu;
    // 0x142860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14285Cu, 0x142864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142864u;
label_142864:
    // 0x142864: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x142864u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x142868: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x142868u;
    SET_GPR_U32(ctx, 31, 0x142870u);
    ctx->pc = 0x14286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142868u;
    // 0x14286c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x142868u, 0x142870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142870u;
label_142870:
    // 0x142870: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x142870u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x142874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x142874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142878: 0xc04e860  jal         func_13A180
    ctx->pc = 0x142878u;
    SET_GPR_U32(ctx, 31, 0x142880u);
    ctx->pc = 0x14287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142878u;
    // 0x14287c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x142878u, 0x142880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142880u;
label_142880:
    // 0x142880: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x142880u;
    SET_GPR_U32(ctx, 31, 0x142888u);
    ctx->pc = 0x142884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142880u;
    // 0x142884: 0x8e040468  lw          $a0, 0x468($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x142880u, 0x142888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142888u;
label_142888:
    // 0x142888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14288c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142890: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142890u;
    {
        const bool branch_taken_0x142890 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x142894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142890u;
        // 0x142894: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142890) {
            ctx->pc = 0x1428A8u;
            goto label_1428a8;
        }
    }
    ctx->pc = 0x142898u;
    // 0x142898: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x142898u;
    {
        const bool branch_taken_0x142898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142898) {
            ctx->pc = 0x1428B8u;
            goto label_1428b8;
        }
    }
    ctx->pc = 0x1428A0u;
    // 0x1428a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1428A0u;
    {
        const bool branch_taken_0x1428a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428A0u;
        // 0x1428a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428a0) {
            ctx->pc = 0x1428C4u;
            goto label_1428c4;
        }
    }
    ctx->pc = 0x1428A8u;
label_1428a8:
    // 0x1428a8: 0xc050a34  jal         func_1428D0
    ctx->pc = 0x1428A8u;
    SET_GPR_U32(ctx, 31, 0x1428B0u);
    ctx->pc = 0x1428ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428A8u;
    // 0x1428ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1428D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1428D0u, 0x1428A8u, 0x1428B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428B0u;
label_1428b0:
    // 0x1428b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1428B0u;
    {
        const bool branch_taken_0x1428b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1428B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428B0u;
        // 0x1428b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1428b0) {
            ctx->pc = 0x1428C4u;
            goto label_1428c4;
        }
    }
    ctx->pc = 0x1428B8u;
label_1428b8:
    // 0x1428b8: 0xc050a68  jal         func_1429A0
    ctx->pc = 0x1428B8u;
    SET_GPR_U32(ctx, 31, 0x1428C0u);
    ctx->pc = 0x1428BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428B8u;
    // 0x1428bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1429A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1429A0u, 0x1428B8u, 0x1428C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428C0u;
label_1428c0:
    // 0x1428c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1428c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1428c4:
    // 0x1428c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1428c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1428c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1428C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1428CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1428C8u;
        // 0x1428cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1428C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1428D0u;
}
