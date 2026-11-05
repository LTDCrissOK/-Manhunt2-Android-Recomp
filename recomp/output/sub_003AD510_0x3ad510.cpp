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

// Function: sub_003AD510
// Address: 0x3ad510 - 0x3ad520
void sub_003AD510_0x3ad510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AD510_0x3ad510");
#endif

    ctx->pc = 0x3ad510u;

    // 0x3ad510: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD510u;
        // 0x3ad514: 0xa0800001  sb          $zero, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD518u;
    // 0x3ad518: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3ad518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3ad51c: 0x0  nop
    ctx->pc = 0x3ad51cu;
    // NOP
    ctx->pc = 0x3ad520u;
}
