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

// Function: sub_00134E58
// Address: 0x134e58 - 0x134ea8
void sub_00134E58_0x134e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134E58_0x134e58");
#endif

    switch (ctx->pc) {
        case 0x134e68u: goto label_134e68;
        case 0x134e80u: goto label_134e80;
        default: break;
    }

    ctx->pc = 0x134e58u;

    // 0x134e58: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134E58u;
    {
        const bool branch_taken_0x134e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x134E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E58u;
        // 0x134e5c: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e58) {
            ctx->pc = 0x134E70u;
            goto label_134e70;
        }
    }
    ctx->pc = 0x134E60u;
    // 0x134e60: 0x3e00008  jr          $ra
    ctx->pc = 0x134E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E60u;
        // 0x134e64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E68u;
label_134e68:
    // 0x134e68: 0x3e00008  jr          $ra
    ctx->pc = 0x134E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E68u;
        // 0x134e6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134E70u;
label_134e70:
    // 0x134e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x134e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134e74: 0x24468ed0  addiu       $a2, $v0, -0x7130
    ctx->pc = 0x134e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938320));
    // 0x134e78: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x134e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x134e7c: 0x0  nop
    ctx->pc = 0x134e7cu;
    // NOP
label_134e80:
    // 0x134e80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x134e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x134e84: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x134e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134e88: 0x1065fff7  beq         $v1, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x134E88u;
    {
        const bool branch_taken_0x134e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x134E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E88u;
        // 0x134e8c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e88) {
            ctx->pc = 0x134E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134e68;
        }
    }
    ctx->pc = 0x134E90u;
    // 0x134e90: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x134e90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134e94: 0x2c830004  sltiu       $v1, $a0, 0x4
    ctx->pc = 0x134e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x134e98: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x134E98u;
    {
        const bool branch_taken_0x134e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E98u;
        // 0x134e9c: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e98) {
            ctx->pc = 0x134E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134e80;
        }
    }
    ctx->pc = 0x134EA0u;
    // 0x134ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x134EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EA0u;
        // 0x134ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134EA8u;
}
