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

// Function: sub_001D2798
// Address: 0x1d2798 - 0x1d27b8
void sub_001D2798_0x1d2798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2798_0x1d2798");
#endif

    ctx->pc = 0x1d2798u;

    // 0x1d2798: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1d2798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1d279c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D279Cu;
    {
        const bool branch_taken_0x1d279c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d279c) {
            ctx->pc = 0x1D27ACu;
            goto label_1d27ac;
        }
    }
    ctx->pc = 0x1D27A4u;
    // 0x1d27a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A4u;
        // 0x1d27a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27ACu;
label_1d27ac:
    // 0x1d27ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27ACu;
        // 0x1d27b0: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27B4u;
    // 0x1d27b4: 0x0  nop
    ctx->pc = 0x1d27b4u;
    // NOP
    ctx->pc = 0x1d27b8u;
}
