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

// Function: sub_00341808
// Address: 0x341808 - 0x341840
void sub_00341808_0x341808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341808_0x341808");
#endif

    switch (ctx->pc) {
        case 0x341818u: goto label_341818;
        default: break;
    }

    ctx->pc = 0x341808u;

    // 0x341808: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x341808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x34180c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34180cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341810: 0x24428bf0  addiu       $v0, $v0, -0x7410
    ctx->pc = 0x341810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937584));
    // 0x341814: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x341814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_341818:
    // 0x341818: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x341818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x34181c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x34181Cu;
    {
        const bool branch_taken_0x34181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34181c) {
            ctx->pc = 0x341820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34181Cu;
            // 0x341820: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34182Cu;
            goto label_34182c;
        }
    }
    ctx->pc = 0x341824u;
    // 0x341824: 0x3e00008  jr          $ra
    ctx->pc = 0x341824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341824u;
        // 0x341828: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34182Cu;
label_34182c:
    // 0x34182c: 0x28620060  slti        $v0, $v1, 0x60
    ctx->pc = 0x34182cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
    // 0x341830: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x341830u;
    {
        const bool branch_taken_0x341830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341830u;
        // 0x341834: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341830) {
            ctx->pc = 0x341818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_341818;
        }
    }
    ctx->pc = 0x341838u;
    // 0x341838: 0x3e00008  jr          $ra
    ctx->pc = 0x341838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341838u;
        // 0x34183c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341840u;
}
