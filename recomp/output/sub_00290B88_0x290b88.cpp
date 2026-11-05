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

// Function: sub_00290B88
// Address: 0x290b88 - 0x290bc0
void sub_00290B88_0x290b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290B88_0x290b88");
#endif

    ctx->pc = 0x290b88u;

    // 0x290b88: 0x8c8201d0  lw          $v0, 0x1D0($a0)
    ctx->pc = 0x290b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x290b8c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x290b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x290b90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x290b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290b94: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x290b94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x290b98: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x290b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x290b9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x290b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x290ba0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x290ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x290ba4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x290ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x290ba8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x290ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x290bac: 0x8c8301d0  lw          $v1, 0x1D0($a0)
    ctx->pc = 0x290bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x290bb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x290bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x290bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x290BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290BB4u;
        // 0x290bb8: 0xac8301d0  sw          $v1, 0x1D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 464), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290BBCu;
    // 0x290bbc: 0x0  nop
    ctx->pc = 0x290bbcu;
    // NOP
    ctx->pc = 0x290bc0u;
}
