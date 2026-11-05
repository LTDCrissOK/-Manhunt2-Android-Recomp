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

// Function: sub_0039C9B0
// Address: 0x39c9b0 - 0x39c9e0
void sub_0039C9B0_0x39c9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C9B0_0x39c9b0");
#endif

    ctx->pc = 0x39c9b0u;

    // 0x39c9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x39C9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C9B8u;
    // 0x39c9b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39c9bc: 0x0  nop
    ctx->pc = 0x39c9bcu;
    // NOP
    // 0x39c9c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c9c4: 0x0  nop
    ctx->pc = 0x39c9c4u;
    // NOP
    // 0x39c9c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39c9cc: 0x0  nop
    ctx->pc = 0x39c9ccu;
    // NOP
    // 0x39c9d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x39c9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x39c9d4: 0x0  nop
    ctx->pc = 0x39c9d4u;
    // NOP
    // 0x39c9d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39c9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39c9dc: 0x0  nop
    ctx->pc = 0x39c9dcu;
    // NOP
    ctx->pc = 0x39c9e0u;
}
