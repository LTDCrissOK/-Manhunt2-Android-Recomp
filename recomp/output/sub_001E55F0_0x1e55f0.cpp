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

// Function: sub_001E55F0
// Address: 0x1e55f0 - 0x1e5608
void sub_001E55F0_0x1e55f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E55F0_0x1e55f0");
#endif

    ctx->pc = 0x1e55f0u;

    // 0x1e55f0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1e55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e55f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e55f8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x1e55f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e55fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E55FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E55FCu;
        // 0x1e5600: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E55FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5604u;
    // 0x1e5604: 0x0  nop
    ctx->pc = 0x1e5604u;
    // NOP
    ctx->pc = 0x1e5608u;
}
