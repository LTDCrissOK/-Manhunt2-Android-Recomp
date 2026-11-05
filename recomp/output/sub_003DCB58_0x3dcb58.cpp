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

// Function: sub_003DCB58
// Address: 0x3dcb58 - 0x3dcb70
void sub_003DCB58_0x3dcb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCB58_0x3dcb58");
#endif

    ctx->pc = 0x3dcb58u;

    // 0x3dcb58: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3dcb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3dcb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dcb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dcb60: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCB68u;
    // 0x3dcb68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dcb68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dcb6c: 0x0  nop
    ctx->pc = 0x3dcb6cu;
    // NOP
    ctx->pc = 0x3dcb70u;
}
