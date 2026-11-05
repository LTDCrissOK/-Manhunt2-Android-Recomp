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

// Function: sub_003DC590
// Address: 0x3dc590 - 0x3dc5a8
void sub_003DC590_0x3dc590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC590_0x3dc590");
#endif

    ctx->pc = 0x3dc590u;

    // 0x3dc590: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3dc590u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3dc594: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3dc594u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dc598: 0xa0800001  sb          $zero, 0x1($a0)
    ctx->pc = 0x3dc598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dc59c: 0xa0800002  sb          $zero, 0x2($a0)
    ctx->pc = 0x3dc59cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dc5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC5A0u;
        // 0x3dc5a4: 0xa0800003  sb          $zero, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC5A8u;
}
