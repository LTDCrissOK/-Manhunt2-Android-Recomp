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

// Function: sub_00295EA8
// Address: 0x295ea8 - 0x295ec8
void sub_00295EA8_0x295ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295EA8_0x295ea8");
#endif

    ctx->pc = 0x295ea8u;

    // 0x295ea8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x295eac: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x295eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x295eb0: 0x8c43a8c0  lw          $v1, -0x5740($v0)
    ctx->pc = 0x295eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x295eb4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x295eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x295eb8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x295eb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x295ebc: 0x244211e0  addiu       $v0, $v0, 0x11E0
    ctx->pc = 0x295ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4576));
    // 0x295ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x295EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EC0u;
        // 0x295ec4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295EC8u;
}
