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

// Function: sub_002D6F98
// Address: 0x2d6f98 - 0x2d6fc8
void sub_002D6F98_0x2d6f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6F98_0x2d6f98");
#endif

    ctx->pc = 0x2d6f98u;

    // 0x2d6f98: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6F98u;
    {
        const bool branch_taken_0x2d6f98 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2D6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F98u;
        // 0x2d6f9c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f98) {
            ctx->pc = 0x2D6FA8u;
            goto label_2d6fa8;
        }
    }
    ctx->pc = 0x2D6FA0u;
    // 0x2d6fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FA0u;
        // 0x2d6fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6FA8u;
label_2d6fa8:
    // 0x2d6fa8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x2d6fa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d6fac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2d6facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d6fb0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2d6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2d6fb4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6FB4u;
    {
        const bool branch_taken_0x2d6fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FB4u;
        // 0x2d6fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6fb4) {
            ctx->pc = 0x2D6FC0u;
            goto label_2d6fc0;
        }
    }
    ctx->pc = 0x2D6FBCu;
    // 0x2d6fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6fc0:
    // 0x2d6fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6FC8u;
}
