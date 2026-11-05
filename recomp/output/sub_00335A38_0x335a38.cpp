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

// Function: sub_00335A38
// Address: 0x335a38 - 0x335a58
void sub_00335A38_0x335a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335A38_0x335a38");
#endif

    ctx->pc = 0x335a38u;

    // 0x335a38: 0x8c840018  lw          $a0, 0x18($a0)
    ctx->pc = 0x335a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x335a3c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x335A3Cu;
    {
        const bool branch_taken_0x335a3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x335A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A3Cu;
        // 0x335a40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a3c) {
            ctx->pc = 0x335A4Cu;
            goto label_335a4c;
        }
    }
    ctx->pc = 0x335A44u;
    // 0x335a44: 0x3e00008  jr          $ra
    ctx->pc = 0x335A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A44u;
        // 0x335a48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335A4Cu;
label_335a4c:
    // 0x335a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335a50: 0x3e00008  jr          $ra
    ctx->pc = 0x335A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A50u;
        // 0x335a54: 0xac830498  sw          $v1, 0x498($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335A58u;
}
