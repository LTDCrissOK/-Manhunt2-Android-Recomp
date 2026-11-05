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

// Function: sub_002A2470
// Address: 0x2a2470 - 0x2a2488
void sub_002A2470_0x2a2470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2470_0x2a2470");
#endif

    ctx->pc = 0x2a2470u;

    // 0x2a2470: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2a2470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2474: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a2474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a2478: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a2478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2a247c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A247Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A247Cu;
        // 0x2a2480: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A247Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2484u;
    // 0x2a2484: 0x0  nop
    ctx->pc = 0x2a2484u;
    // NOP
    ctx->pc = 0x2a2488u;
}
