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

// Function: sub_0012FB30
// Address: 0x12fb30 - 0x12fb40
void sub_0012FB30_0x12fb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FB30_0x12fb30");
#endif

    ctx->pc = 0x12fb30u;

    // 0x12fb30: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FB38u;
    // 0x12fb38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12fb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12fb3c: 0x0  nop
    ctx->pc = 0x12fb3cu;
    // NOP
    ctx->pc = 0x12fb40u;
}
