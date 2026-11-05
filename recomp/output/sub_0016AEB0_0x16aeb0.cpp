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

// Function: sub_0016AEB0
// Address: 0x16aeb0 - 0x16af20
void sub_0016AEB0_0x16aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AEB0_0x16aeb0");
#endif

    switch (ctx->pc) {
        case 0x16aed0u: goto label_16aed0;
        case 0x16aef0u: goto label_16aef0;
        default: break;
    }

    ctx->pc = 0x16aeb0u;

    // 0x16aeb0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x16aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16aeb4: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AEB4u;
    {
        const bool branch_taken_0x16aeb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aeb4) {
            ctx->pc = 0x16AEC8u;
            goto label_16aec8;
        }
    }
    ctx->pc = 0x16AEBCu;
    // 0x16aebc: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x16aebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16aec0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AEC0u;
    {
        const bool branch_taken_0x16aec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aec0) {
            ctx->pc = 0x16AED8u;
            goto label_16aed8;
        }
    }
    ctx->pc = 0x16AEC8u;
label_16aec8:
    // 0x16aec8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEC8u;
        // 0x16aecc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AED0u;
label_16aed0:
    // 0x16aed0: 0x3e00008  jr          $ra
    ctx->pc = 0x16AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AED0u;
        // 0x16aed4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AED8u;
label_16aed8:
    // 0x16aed8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16AED8u;
    {
        const bool branch_taken_0x16aed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AED8u;
        // 0x16aedc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aed8) {
            ctx->pc = 0x16AF14u;
            goto label_16af14;
        }
    }
    ctx->pc = 0x16AEE0u;
    // 0x16aee0: 0x24880008  addiu       $t0, $a0, 0x8
    ctx->pc = 0x16aee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16aee4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16aee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16aeec: 0x0  nop
    ctx->pc = 0x16aeecu;
    // NOP
label_16aef0:
    // 0x16aef0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x16aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16aef4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16aef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aef8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16aefc: 0x1085fff4  beq         $a0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x16AEFCu;
    {
        const bool branch_taken_0x16aefc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x16AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEFCu;
        // 0x16af00: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aefc) {
            ctx->pc = 0x16AED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aed0;
        }
    }
    ctx->pc = 0x16AF04u;
    // 0x16af04: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x16af04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16af08: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x16af08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16af0c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16AF0Cu;
    {
        const bool branch_taken_0x16af0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF0Cu;
        // 0x16af10: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16af0c) {
            ctx->pc = 0x16AEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aef0;
        }
    }
    ctx->pc = 0x16AF14u;
label_16af14:
    // 0x16af14: 0x3e00008  jr          $ra
    ctx->pc = 0x16AF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF14u;
        // 0x16af18: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF1Cu;
    // 0x16af1c: 0x0  nop
    ctx->pc = 0x16af1cu;
    // NOP
    ctx->pc = 0x16af20u;
}
