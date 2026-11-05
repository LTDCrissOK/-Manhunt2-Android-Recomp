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

// Function: sub_00370D18
// Address: 0x370d18 - 0x370d30
void sub_00370D18_0x370d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370D18_0x370d18");
#endif

    ctx->pc = 0x370d18u;

    // 0x370d18: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x370d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x370d1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x370d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x370d20: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x370d20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x370d24: 0x3e00008  jr          $ra
    ctx->pc = 0x370D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D24u;
        // 0x370d28: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D2Cu;
    // 0x370d2c: 0x0  nop
    ctx->pc = 0x370d2cu;
    // NOP
    ctx->pc = 0x370d30u;
}
