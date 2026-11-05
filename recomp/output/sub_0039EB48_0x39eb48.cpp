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

// Function: sub_0039EB48
// Address: 0x39eb48 - 0x39eb60
void sub_0039EB48_0x39eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EB48_0x39eb48");
#endif

    ctx->pc = 0x39eb48u;

    // 0x39eb48: 0xac860050  sw          $a2, 0x50($a0)
    ctx->pc = 0x39eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 6));
    // 0x39eb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x39EB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB4Cu;
        // 0x39eb50: 0xac85004c  sw          $a1, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EB54u;
    // 0x39eb54: 0x0  nop
    ctx->pc = 0x39eb54u;
    // NOP
    // 0x39eb58: 0xac850044  sw          $a1, 0x44($a0)
    ctx->pc = 0x39eb58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 5));
    // 0x39eb5c: 0x0  nop
    ctx->pc = 0x39eb5cu;
    // NOP
    ctx->pc = 0x39eb60u;
}
