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

// Function: sub_003E93F0
// Address: 0x3e93f0 - 0x3e9408
void sub_003E93F0_0x3e93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E93F0_0x3e93f0");
#endif

    ctx->pc = 0x3e93f0u;

    // 0x3e93f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e93f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e93f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3e93f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3e93f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3e93f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3e93fc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3e93fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3e9400: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9400u;
        // 0x3e9404: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9408u;
}
