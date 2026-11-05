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

// Function: sub_00177B88
// Address: 0x177b88 - 0x177c10
void sub_00177B88_0x177b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B88_0x177b88");
#endif

    switch (ctx->pc) {
        case 0x177bc4u: goto label_177bc4;
        default: break;
    }

    ctx->pc = 0x177b88u;

    // 0x177b88: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x177b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x177b8c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x177B8Cu;
    {
        const bool branch_taken_0x177b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177b8c) {
            ctx->pc = 0x177B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177B8Cu;
            // 0x177b90: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177B9Cu;
            goto label_177b9c;
        }
    }
    ctx->pc = 0x177B94u;
    // 0x177b94: 0x3e00008  jr          $ra
    ctx->pc = 0x177B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177B94u;
        // 0x177b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B9Cu;
label_177b9c:
    // 0x177b9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x177b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x177ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ba4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x177BA4u;
    {
        const bool branch_taken_0x177ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BA4u;
        // 0x177ba8: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ba4) {
            ctx->pc = 0x177BC0u;
            goto label_177bc0;
        }
    }
    ctx->pc = 0x177BACu;
    // 0x177bac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x177bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x177bb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x177bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177bb4: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x177bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x177bb8: 0x10470013  beq         $v0, $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x177BB8u;
    {
        const bool branch_taken_0x177bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x177bb8) {
            ctx->pc = 0x177C08u;
            goto label_177c08;
        }
    }
    ctx->pc = 0x177BC0u;
label_177bc0:
    // 0x177bc0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x177bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_177bc4:
    // 0x177bc4: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x177bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177bc8: 0x2d030030  sltiu       $v1, $t0, 0x30
    ctx->pc = 0x177bc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x177bcc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x177BCCu;
    {
        const bool branch_taken_0x177bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BCCu;
        // 0x177bd0: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177bcc) {
            ctx->pc = 0x177C08u;
            goto label_177c08;
        }
    }
    ctx->pc = 0x177BD4u;
    // 0x177bd4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x177bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x177bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177bdc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x177bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177be0: 0x10c0fff8  beqz        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x177BE0u;
    {
        const bool branch_taken_0x177be0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x177BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177BE0u;
        // 0x177be4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177be0) {
            ctx->pc = 0x177BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177bc4;
        }
    }
    ctx->pc = 0x177BE8u;
    // 0x177be8: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x177be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x177bec: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x177becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x177bf0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x177bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x177bf4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x177bf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x177bf8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x177bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x177bfc: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x177bfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x177c00: 0x14e3fff0  bne         $a3, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x177C00u;
    {
        const bool branch_taken_0x177c00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x177C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C00u;
        // 0x177c04: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177c00) {
            ctx->pc = 0x177BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177bc4;
        }
    }
    ctx->pc = 0x177C08u;
label_177c08:
    // 0x177c08: 0x3e00008  jr          $ra
    ctx->pc = 0x177C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177C08u;
        // 0x177c0c: 0x90820009  lbu         $v0, 0x9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177C10u;
}
