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

// Function: sub_0029F058
// Address: 0x29f058 - 0x29f080
void sub_0029F058_0x29f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F058_0x29f058");
#endif

    ctx->pc = 0x29f058u;

    // 0x29f058: 0x8c830208  lw          $v1, 0x208($a0)
    ctx->pc = 0x29f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x29f05c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x29f05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29f060: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x29f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x29f064: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29f064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29f068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29f068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29f06c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29f070: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29f070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29f074: 0x3e00008  jr          $ra
    ctx->pc = 0x29F074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F074u;
        // 0x29f078: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F07Cu;
    // 0x29f07c: 0x0  nop
    ctx->pc = 0x29f07cu;
    // NOP
    ctx->pc = 0x29f080u;
}
