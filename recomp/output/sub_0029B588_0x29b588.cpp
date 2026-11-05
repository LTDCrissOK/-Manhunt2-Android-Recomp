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

// Function: sub_0029B588
// Address: 0x29b588 - 0x29b598
void sub_0029B588_0x29b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B588_0x29b588");
#endif

    ctx->pc = 0x29b588u;

    // 0x29b588: 0xa0870006  sb          $a3, 0x6($a0)
    ctx->pc = 0x29b588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 7));
    // 0x29b58c: 0xa0850004  sb          $a1, 0x4($a0)
    ctx->pc = 0x29b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b590: 0x3e00008  jr          $ra
    ctx->pc = 0x29B590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B590u;
        // 0x29b594: 0xa0860005  sb          $a2, 0x5($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B598u;
}
