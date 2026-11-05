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

// Function: sub_002A378C
// Address: 0x2a378c - 0x2a3798
void sub_002A378C_0x2a378c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A378C_0x2a378c");
#endif

    ctx->pc = 0x2a378cu;

    // 0x2a378c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A378Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A378Cu;
        // 0x2a3790: 0x8cc202b4  lw          $v0, 0x2B4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 692)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A378Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3794u;
    // 0x2a3794: 0x0  nop
    ctx->pc = 0x2a3794u;
    // NOP
    ctx->pc = 0x2a3798u;
}
