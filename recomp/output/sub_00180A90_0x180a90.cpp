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

// Function: sub_00180A90
// Address: 0x180a90 - 0x180ab8
void sub_00180A90_0x180a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180A90_0x180a90");
#endif

    ctx->pc = 0x180a90u;

    // 0x180a90: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x180A90u;
    {
        const bool branch_taken_0x180a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x180A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A90u;
        // 0x180a94: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180a90) {
            ctx->pc = 0x180AB0u;
            goto label_180ab0;
        }
    }
    ctx->pc = 0x180A98u;
    // 0x180a98: 0x8ca30ff8  lw          $v1, 0xFF8($a1)
    ctx->pc = 0x180a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x180a9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180aa0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x180aa4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x180aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x180aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x180AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AA8u;
        // 0x180aac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180AB0u;
label_180ab0:
    // 0x180ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x180AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180AB0u;
        // 0x180ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180AB8u;
}
