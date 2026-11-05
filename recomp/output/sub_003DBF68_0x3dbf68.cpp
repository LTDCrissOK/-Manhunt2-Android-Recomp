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

// Function: sub_003DBF68
// Address: 0x3dbf68 - 0x3dbf78
void sub_003DBF68_0x3dbf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBF68_0x3dbf68");
#endif

    ctx->pc = 0x3dbf68u;

    // 0x3dbf68: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBF70u;
    // 0x3dbf70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3dbf70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3dbf74: 0x0  nop
    ctx->pc = 0x3dbf74u;
    // NOP
    ctx->pc = 0x3dbf78u;
}
