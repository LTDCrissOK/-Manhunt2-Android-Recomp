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

// Function: sub_0033EE98
// Address: 0x33ee98 - 0x33eeb8
void sub_0033EE98_0x33ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EE98_0x33ee98");
#endif

    ctx->pc = 0x33ee98u;

    // 0x33ee98: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x33ee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33ee9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33ee9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33eea0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x33eea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33eea4: 0x2463d1e0  addiu       $v1, $v1, -0x2E20
    ctx->pc = 0x33eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955488));
    // 0x33eea8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33eea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33eeac: 0x3e00008  jr          $ra
    ctx->pc = 0x33EEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EEACu;
        // 0x33eeb0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EEB4u;
    // 0x33eeb4: 0x0  nop
    ctx->pc = 0x33eeb4u;
    // NOP
    ctx->pc = 0x33eeb8u;
}
