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

// Function: sub_00296298
// Address: 0x296298 - 0x2962c0
void sub_00296298_0x296298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296298_0x296298");
#endif

    ctx->pc = 0x296298u;

    // 0x296298: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x296298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x29629c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x29629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2962a0: 0x8c82a8c0  lw          $v0, -0x5740($a0)
    ctx->pc = 0x2962a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x2962a4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2962a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2962a8: 0x246311e0  addiu       $v1, $v1, 0x11E0
    ctx->pc = 0x2962a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4576));
    // 0x2962ac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2962acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2962b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2962b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2962b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2962B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2962B4u;
        // 0x2962b8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2962B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2962BCu;
    // 0x2962bc: 0x0  nop
    ctx->pc = 0x2962bcu;
    // NOP
    ctx->pc = 0x2962c0u;
}
