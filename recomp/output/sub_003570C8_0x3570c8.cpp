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

// Function: sub_003570C8
// Address: 0x3570c8 - 0x357100
void sub_003570C8_0x3570c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003570C8_0x3570c8");
#endif

    ctx->pc = 0x3570c8u;

    // 0x3570c8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3570c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3570cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3570CCu;
    {
        const bool branch_taken_0x3570cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570cc) {
            ctx->pc = 0x3570D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3570CCu;
            // 0x3570d0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3570E0u;
            goto label_3570e0;
        }
    }
    ctx->pc = 0x3570D4u;
    // 0x3570d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3570d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3570d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3570D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570D8u;
        // 0x3570dc: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570E0u;
label_3570e0:
    // 0x3570e0: 0x8c42032c  lw          $v0, 0x32C($v0)
    ctx->pc = 0x3570e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
    // 0x3570e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3570E4u;
    {
        const bool branch_taken_0x3570e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3570e4) {
            ctx->pc = 0x3570F4u;
            goto label_3570f4;
        }
    }
    ctx->pc = 0x3570ECu;
    // 0x3570ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3570ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570ECu;
        // 0x3570f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570F4u;
label_3570f4:
    // 0x3570f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3570F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570F4u;
        // 0x3570f8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570FCu;
    // 0x3570fc: 0x0  nop
    ctx->pc = 0x3570fcu;
    // NOP
    ctx->pc = 0x357100u;
}
