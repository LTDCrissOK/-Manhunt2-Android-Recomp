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

// Function: sub_0030A690
// Address: 0x30a690 - 0x30a6a8
void sub_0030A690_0x30a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A690_0x30a690");
#endif

    ctx->pc = 0x30a690u;

    // 0x30a690: 0x3e00008  jr          $ra
    ctx->pc = 0x30A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A698u;
    // 0x30a698: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30a698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a69c: 0x0  nop
    ctx->pc = 0x30a69cu;
    // NOP
    // 0x30a6a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x30a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30a6a4: 0x0  nop
    ctx->pc = 0x30a6a4u;
    // NOP
    ctx->pc = 0x30a6a8u;
}
