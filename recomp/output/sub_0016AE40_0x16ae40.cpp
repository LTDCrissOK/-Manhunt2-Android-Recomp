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

// Function: sub_0016AE40
// Address: 0x16ae40 - 0x16aeb0
void sub_0016AE40_0x16ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AE40_0x16ae40");
#endif

    switch (ctx->pc) {
        case 0x16ae60u: goto label_16ae60;
        case 0x16ae80u: goto label_16ae80;
        default: break;
    }

    ctx->pc = 0x16ae40u;

    // 0x16ae40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16ae44: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AE44u;
    {
        const bool branch_taken_0x16ae44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16ae44) {
            ctx->pc = 0x16AE58u;
            goto label_16ae58;
        }
    }
    ctx->pc = 0x16AE4Cu;
    // 0x16ae4c: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x16ae4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x16ae50: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AE50u;
    {
        const bool branch_taken_0x16ae50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ae50) {
            ctx->pc = 0x16AE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AE50u;
            // 0x16ae54: 0x9082002c  lbu         $v0, 0x2C($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AE68u;
            goto label_16ae68;
        }
    }
    ctx->pc = 0x16AE58u;
label_16ae58:
    // 0x16ae58: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE58u;
        // 0x16ae5c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE60u;
label_16ae60:
    // 0x16ae60: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE60u;
        // 0x16ae64: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE68u;
label_16ae68:
    // 0x16ae68: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16AE68u;
    {
        const bool branch_taken_0x16ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE68u;
        // 0x16ae6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae68) {
            ctx->pc = 0x16AEA4u;
            goto label_16aea4;
        }
    }
    ctx->pc = 0x16AE70u;
    // 0x16ae70: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x16ae70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16ae74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16ae74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae78: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16ae7c: 0x0  nop
    ctx->pc = 0x16ae7cu;
    // NOP
label_16ae80:
    // 0x16ae80: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x16ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16ae84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ae88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ae8c: 0x1085fff4  beq         $a0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x16AE8Cu;
    {
        const bool branch_taken_0x16ae8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x16AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE8Cu;
        // 0x16ae90: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae8c) {
            ctx->pc = 0x16AE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ae60;
        }
    }
    ctx->pc = 0x16AE94u;
    // 0x16ae94: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x16ae94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16ae98: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x16ae98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16ae9c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16AE9Cu;
    {
        const bool branch_taken_0x16ae9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE9Cu;
        // 0x16aea0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae9c) {
            ctx->pc = 0x16AE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ae80;
        }
    }
    ctx->pc = 0x16AEA4u;
label_16aea4:
    // 0x16aea4: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEA4u;
        // 0x16aea8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AEACu;
    // 0x16aeac: 0x0  nop
    ctx->pc = 0x16aeacu;
    // NOP
    ctx->pc = 0x16aeb0u;
}
