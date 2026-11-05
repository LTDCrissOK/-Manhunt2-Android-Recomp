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

// Function: sub_00364408
// Address: 0x364408 - 0x364420
void sub_00364408_0x364408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364408_0x364408");
#endif

    ctx->pc = 0x364408u;

    // 0x364408: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x364408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36440c: 0x8c64006c  lw          $a0, 0x6C($v1)
    ctx->pc = 0x36440cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x364410: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x364410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x364414: 0x3e00008  jr          $ra
    ctx->pc = 0x364414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364414u;
        // 0x364418: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36441Cu;
    // 0x36441c: 0x0  nop
    ctx->pc = 0x36441cu;
    // NOP
    ctx->pc = 0x364420u;
}
