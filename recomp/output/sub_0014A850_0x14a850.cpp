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

// Function: sub_0014A850
// Address: 0x14a850 - 0x14a8f0
void sub_0014A850_0x14a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A850_0x14a850");
#endif

    switch (ctx->pc) {
        case 0x14a86cu: goto label_14a86c;
        case 0x14a884u: goto label_14a884;
        case 0x14a898u: goto label_14a898;
        case 0x14a8b8u: goto label_14a8b8;
        case 0x14a8c8u: goto label_14a8c8;
        case 0x14a8d8u: goto label_14a8d8;
        default: break;
    }

    ctx->pc = 0x14a850u;

    // 0x14a850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14a854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14a85c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a85cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a860: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a864: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14A864u;
    SET_GPR_U32(ctx, 31, 0x14A86Cu);
    ctx->pc = 0x14A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A864u;
    // 0x14a868: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14A864u, 0x14A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A86Cu;
label_14a86c:
    // 0x14a86c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a870: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A870u;
    {
        const bool branch_taken_0x14a870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A870u;
        // 0x14a874: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a870) {
            ctx->pc = 0x14A8DCu;
            goto label_14a8dc;
        }
    }
    ctx->pc = 0x14A878u;
    // 0x14a878: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14a878u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a87c: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14A87Cu;
    SET_GPR_U32(ctx, 31, 0x14A884u);
    ctx->pc = 0x14A880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A87Cu;
    // 0x14a880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14A87Cu, 0x14A884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A884u;
label_14a884:
    // 0x14a884: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x14a884u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14a888: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a890: 0xc052ade  jal         func_14AB78
    ctx->pc = 0x14A890u;
    SET_GPR_U32(ctx, 31, 0x14A898u);
    ctx->pc = 0x14A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A890u;
    // 0x14a894: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB78u, 0x14A890u, 0x14A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A898u;
label_14a898:
    // 0x14a898: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A898u;
    {
        const bool branch_taken_0x14a898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A898u;
        // 0x14a89c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a898) {
            ctx->pc = 0x14A8B0u;
            goto label_14a8b0;
        }
    }
    ctx->pc = 0x14A8A0u;
    // 0x14a8a0: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A8A0u;
    {
        const bool branch_taken_0x14a8a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8A0u;
        // 0x14a8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8a0) {
            ctx->pc = 0x14A8C0u;
            goto label_14a8c0;
        }
    }
    ctx->pc = 0x14A8A8u;
    // 0x14a8a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14A8A8u;
    {
        const bool branch_taken_0x14a8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a8a8) {
            ctx->pc = 0x14A8D0u;
            goto label_14a8d0;
        }
    }
    ctx->pc = 0x14A8B0u;
label_14a8b0:
    // 0x14a8b0: 0xc052b38  jal         func_14ACE0
    ctx->pc = 0x14A8B0u;
    SET_GPR_U32(ctx, 31, 0x14A8B8u);
    ctx->pc = 0x14A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8B0u;
    // 0x14a8b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACE0u, 0x14A8B0u, 0x14A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8B8u;
label_14a8b8:
    // 0x14a8b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14A8B8u;
    {
        const bool branch_taken_0x14a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8B8u;
        // 0x14a8bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8b8) {
            ctx->pc = 0x14A8DCu;
            goto label_14a8dc;
        }
    }
    ctx->pc = 0x14A8C0u;
label_14a8c0:
    // 0x14a8c0: 0xc052b9a  jal         func_14AE68
    ctx->pc = 0x14A8C0u;
    SET_GPR_U32(ctx, 31, 0x14A8C8u);
    ctx->pc = 0x14A8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8C0u;
    // 0x14a8c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14AE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AE68u, 0x14A8C0u, 0x14A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8C8u;
label_14a8c8:
    // 0x14a8c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14A8C8u;
    {
        const bool branch_taken_0x14a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8C8u;
        // 0x14a8cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a8c8) {
            ctx->pc = 0x14A8DCu;
            goto label_14a8dc;
        }
    }
    ctx->pc = 0x14A8D0u;
label_14a8d0:
    // 0x14a8d0: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14A8D0u;
    SET_GPR_U32(ctx, 31, 0x14A8D8u);
    ctx->pc = 0x14A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A8D0u;
    // 0x14a8d4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14A8D0u, 0x14A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A8D8u;
label_14a8d8:
    // 0x14a8d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a8dc:
    // 0x14a8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a8e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8E8u;
        // 0x14a8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A8F0u;
}
