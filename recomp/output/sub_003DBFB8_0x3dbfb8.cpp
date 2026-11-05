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

// Function: sub_003DBFB8
// Address: 0x3dbfb8 - 0x3dbfc8
void sub_003DBFB8_0x3dbfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBFB8_0x3dbfb8");
#endif

    ctx->pc = 0x3dbfb8u;

    // 0x3dbfb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBFC0u;
    // 0x3dbfc0: 0xac82006c  sw          $v0, 0x6C($a0)
    ctx->pc = 0x3dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 2));
    // 0x3dbfc4: 0x0  nop
    ctx->pc = 0x3dbfc4u;
    // NOP
    ctx->pc = 0x3dbfc8u;
}
