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

// Function: sub_001269A8
// Address: 0x1269a8 - 0x126a18
void sub_001269A8_0x1269a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001269A8_0x1269a8");
#endif

    switch (ctx->pc) {
        case 0x1269c8u: goto label_1269c8;
        case 0x1269e8u: goto label_1269e8;
        default: break;
    }

    ctx->pc = 0x1269a8u;

    // 0x1269a8: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1269A8u;
    {
        const bool branch_taken_0x1269a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1269a8) {
            ctx->pc = 0x1269ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1269A8u;
            // 0x1269ac: 0x90820424  lbu         $v0, 0x424($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1269B8u;
            goto label_1269b8;
        }
    }
    ctx->pc = 0x1269B0u;
    // 0x1269b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1269B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269B0u;
        // 0x1269b4: 0x24820304  addiu       $v0, $a0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 772));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269B8u;
label_1269b8:
    // 0x1269b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1269B8u;
    {
        const bool branch_taken_0x1269b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1269b8) {
            ctx->pc = 0x1269D0u;
            goto label_1269d0;
        }
    }
    ctx->pc = 0x1269C0u;
    // 0x1269c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1269C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269C0u;
        // 0x1269c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269C8u;
label_1269c8:
    // 0x1269c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1269C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269C8u;
        // 0x1269cc: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269D0u;
label_1269d0:
    // 0x1269d0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1269D0u;
    {
        const bool branch_taken_0x1269d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269D0u;
        // 0x1269d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269d0) {
            ctx->pc = 0x126A0Cu;
            goto label_126a0c;
        }
    }
    ctx->pc = 0x1269D8u;
    // 0x1269d8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1269d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1269dc: 0x24880324  addiu       $t0, $a0, 0x324
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 804));
    // 0x1269e0: 0x63940  sll         $a3, $a2, 5
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1269e4: 0x0  nop
    ctx->pc = 0x1269e4u;
    // NOP
label_1269e8:
    // 0x1269e8: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x1269e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1269ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1269ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1269f0: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1269F0u;
    {
        const bool branch_taken_0x1269f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1269F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269F0u;
        // 0x1269f4: 0x24e20324  addiu       $v0, $a3, 0x324 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 804));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269f0) {
            ctx->pc = 0x1269C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1269c8;
        }
    }
    ctx->pc = 0x1269F8u;
    // 0x1269f8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1269f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1269fc: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1269fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x126a00: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x126a00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x126a04: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x126A04u;
    {
        const bool branch_taken_0x126a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A04u;
        // 0x126a08: 0x63940  sll         $a3, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a04) {
            ctx->pc = 0x1269E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1269e8;
        }
    }
    ctx->pc = 0x126A0Cu;
label_126a0c:
    // 0x126a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x126A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A0Cu;
        // 0x126a10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A14u;
    // 0x126a14: 0x0  nop
    ctx->pc = 0x126a14u;
    // NOP
    ctx->pc = 0x126a18u;
}
