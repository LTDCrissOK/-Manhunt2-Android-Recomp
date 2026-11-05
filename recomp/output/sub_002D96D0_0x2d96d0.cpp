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

// Function: sub_002D96D0
// Address: 0x2d96d0 - 0x2d96f8
void sub_002D96D0_0x2d96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D96D0_0x2d96d0");
#endif

    ctx->pc = 0x2d96d0u;

    // 0x2d96d0: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2d96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2d96d4: 0x8c62b0cc  lw          $v0, -0x4F34($v1)
    ctx->pc = 0x2d96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x57B0CCu));
    // 0x2d96d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D96D8u;
    {
        const bool branch_taken_0x2d96d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d96d8) {
            ctx->pc = 0x2D96DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D96D8u;
            // 0x2d96dc: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D96ECu;
            goto label_2d96ec;
        }
    }
    ctx->pc = 0x2D96E0u;
    // 0x2d96e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d96e4: 0xac62b0cc  sw          $v0, -0x4F34($v1)
    ctx->pc = 0x2d96e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947020), GPR_U32(ctx, 2));
    // 0x2d96e8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2d96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_2d96ec:
    // 0x2d96ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D96ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96ECu;
        // 0x2d96f0: 0x2442b0c0  addiu       $v0, $v0, -0x4F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D96F4u;
    // 0x2d96f4: 0x0  nop
    ctx->pc = 0x2d96f4u;
    // NOP
    ctx->pc = 0x2d96f8u;
}
