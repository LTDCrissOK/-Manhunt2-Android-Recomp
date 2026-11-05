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

// Function: sub_002877A8
// Address: 0x2877a8 - 0x2878b0
void sub_002877A8_0x2877a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002877A8_0x2877a8");
#endif

    switch (ctx->pc) {
        case 0x2877b8u: goto label_2877b8;
        case 0x2877c8u: goto label_2877c8;
        case 0x2877d8u: goto label_2877d8;
        case 0x28783cu: goto label_28783c;
        case 0x287860u: goto label_287860;
        case 0x28789cu: goto label_28789c;
        default: break;
    }

    ctx->pc = 0x2877a8u;

    // 0x2877a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2877a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2877ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2877acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2877b0: 0xc0a1fba  jal         func_287EE8
    ctx->pc = 0x2877B0u;
    SET_GPR_U32(ctx, 31, 0x2877B8u);
    ctx->pc = 0x2877B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2877B0u;
    // 0x2877b4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EE8u, 0x2877B0u, 0x2877B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877B8u;
label_2877b8:
    // 0x2877b8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2877B8u;
    {
        const bool branch_taken_0x2877b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2877BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877B8u;
        // 0x2877bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877b8) {
            ctx->pc = 0x2878A0u;
            goto label_2878a0;
        }
    }
    ctx->pc = 0x2877C0u;
    // 0x2877c0: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x2877C0u;
    SET_GPR_U32(ctx, 31, 0x2877C8u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x2877C0u, 0x2877C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877C8u;
label_2877c8:
    // 0x2877c8: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2877C8u;
    {
        const bool branch_taken_0x2877c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2877CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877C8u;
        // 0x2877cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877c8) {
            ctx->pc = 0x2878A0u;
            goto label_2878a0;
        }
    }
    ctx->pc = 0x2877D0u;
    // 0x2877d0: 0xc0a1d66  jal         func_287598
    ctx->pc = 0x2877D0u;
    SET_GPR_U32(ctx, 31, 0x2877D8u);
    ctx->pc = 0x287598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287598u, 0x2877D0u, 0x2877D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2877D8u;
label_2877d8:
    // 0x2877d8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2877D8u;
    {
        const bool branch_taken_0x2877d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877D8u;
        // 0x2877dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877d8) {
            ctx->pc = 0x2877E4u;
            goto label_2877e4;
        }
    }
    ctx->pc = 0x2877E0u;
    // 0x2877e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2877e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2877e4:
    // 0x2877e4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2877e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2877e8: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2877e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2877ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2877ECu;
    {
        const bool branch_taken_0x2877ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2877F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2877ECu;
        // 0x2877f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877ec) {
            ctx->pc = 0x28780Cu;
            goto label_28780c;
        }
    }
    ctx->pc = 0x2877F4u;
    // 0x2877f4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2877f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2877f8: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2877f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2877fc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2877fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2468u));
    // 0x287800: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x287800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x287804: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287804u;
    {
        const bool branch_taken_0x287804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287804) {
            ctx->pc = 0x287808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287804u;
            // 0x287808: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287814u;
            goto label_287814;
        }
    }
    ctx->pc = 0x28780Cu;
label_28780c:
    // 0x28780c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28780Cu;
    {
        const bool branch_taken_0x28780c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28780Cu;
        // 0x287810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28780c) {
            ctx->pc = 0x287818u;
            goto label_287818;
        }
    }
    ctx->pc = 0x287814u;
label_287814:
    // 0x287814: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x287814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_287818:
    // 0x287818: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287818u;
    {
        const bool branch_taken_0x287818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287818u;
        // 0x28781c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287818) {
            ctx->pc = 0x287824u;
            goto label_287824;
        }
    }
    ctx->pc = 0x287820u;
    // 0x287820: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x287820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287824:
    // 0x287824: 0x8c82aa88  lw          $v0, -0x5578($a0)
    ctx->pc = 0x287824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945416)));
    // 0x287828: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287828u;
    {
        const bool branch_taken_0x287828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28782Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287828u;
        // 0x28782c: 0x240903fd  addiu       $t1, $zero, 0x3FD (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287828) {
            ctx->pc = 0x287844u;
            goto label_287844;
        }
    }
    ctx->pc = 0x287830u;
    // 0x287830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287834: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x287834u;
    {
        const bool branch_taken_0x287834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287834u;
        // 0x287838: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287834) {
            ctx->pc = 0x287884u;
            goto label_287884;
        }
    }
    ctx->pc = 0x28783Cu;
label_28783c:
    // 0x28783c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28783Cu;
    {
        const bool branch_taken_0x28783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28783Cu;
        // 0x287840: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28783c) {
            ctx->pc = 0x287884u;
            goto label_287884;
        }
    }
    ctx->pc = 0x287844u;
label_287844:
    // 0x287844: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x287844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x287848: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28784c: 0x24482480  addiu       $t0, $v0, 0x2480
    ctx->pc = 0x28784cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x287850: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x287850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x287854: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x287854u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28785c: 0x24660078  addiu       $a2, $v1, 0x78
    ctx->pc = 0x28785cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_287860:
    // 0x287860: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x287860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x287864: 0x5049fff5  beql        $v0, $t1, . + 4 + (-0xB << 2)
    ctx->pc = 0x287864u;
    {
        const bool branch_taken_0x287864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x287864) {
            ctx->pc = 0x287868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287864u;
            // 0x287868: 0x1041021  addu        $v0, $t0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28783Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28783c;
        }
    }
    ctx->pc = 0x28786Cu;
    // 0x28786c: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x28786Cu;
    {
        const bool branch_taken_0x28786c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x287870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28786Cu;
        // 0x287870: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28786c) {
            ctx->pc = 0x287880u;
            goto label_287880;
        }
    }
    ctx->pc = 0x287874u;
    // 0x287874: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x287874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x287878: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x287878u;
    {
        const bool branch_taken_0x287878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287878u;
        // 0x28787c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287878) {
            ctx->pc = 0x287860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287860;
        }
    }
    ctx->pc = 0x287880u;
label_287880:
    // 0x287880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287884:
    // 0x287884: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x287884u;
    {
        const bool branch_taken_0x287884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287884u;
        // 0x287888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287884) {
            ctx->pc = 0x287890u;
            goto label_287890;
        }
    }
    ctx->pc = 0x28788Cu;
    // 0x28788c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_287890:
    // 0x287890: 0x24a5a4c8  addiu       $a1, $a1, -0x5B38
    ctx->pc = 0x287890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943944));
    // 0x287894: 0xc0a1f2a  jal         func_287CA8
    ctx->pc = 0x287894u;
    SET_GPR_U32(ctx, 31, 0x28789Cu);
    ctx->pc = 0x287898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287894u;
    // 0x287898: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x287CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287CA8u, 0x287894u, 0x28789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28789Cu;
label_28789c:
    // 0x28789c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2878a0:
    // 0x2878a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2878a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2878a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2878A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2878A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2878A4u;
        // 0x2878a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2878A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2878ACu;
    // 0x2878ac: 0x0  nop
    ctx->pc = 0x2878acu;
    // NOP
    ctx->pc = 0x2878b0u;
}
