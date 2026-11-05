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

// Function: sub_001E6120
// Address: 0x1e6120 - 0x1e6138
void sub_001E6120_0x1e6120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6120_0x1e6120");
#endif

    ctx->pc = 0x1e6120u;

    // 0x1e6120: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1e6120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e6124: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1e6124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e6128: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x1e6128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e612c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E612Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E612Cu;
        // 0x1e6130: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E612Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6134u;
    // 0x1e6134: 0x0  nop
    ctx->pc = 0x1e6134u;
    // NOP
    ctx->pc = 0x1e6138u;
}
