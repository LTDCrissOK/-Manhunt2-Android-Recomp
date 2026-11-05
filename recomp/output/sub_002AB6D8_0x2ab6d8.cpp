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

// Function: sub_002AB6D8
// Address: 0x2ab6d8 - 0x2ab6f0
void sub_002AB6D8_0x2ab6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB6D8_0x2ab6d8");
#endif

    ctx->pc = 0x2ab6d8u;

    // 0x2ab6d8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2ab6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2ab6dc: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x2ab6dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ab6e0: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x2ab6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2ab6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB6E4u;
        // 0x2ab6e8: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB6ECu;
    // 0x2ab6ec: 0x0  nop
    ctx->pc = 0x2ab6ecu;
    // NOP
    ctx->pc = 0x2ab6f0u;
}
