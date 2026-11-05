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

// Function: sub_0017D568
// Address: 0x17d568 - 0x17d588
void sub_0017D568_0x17d568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D568_0x17d568");
#endif

    ctx->pc = 0x17d568u;

    // 0x17d568: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x17d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x17d56c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D56Cu;
    {
        const bool branch_taken_0x17d56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17d56c) {
            ctx->pc = 0x17D57Cu;
            goto label_17d57c;
        }
    }
    ctx->pc = 0x17D574u;
    // 0x17d574: 0x3e00008  jr          $ra
    ctx->pc = 0x17D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D574u;
        // 0x17d578: 0x8c82001c  lw          $v0, 0x1C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D57Cu;
label_17d57c:
    // 0x17d57c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D57Cu;
        // 0x17d580: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D584u;
    // 0x17d584: 0x0  nop
    ctx->pc = 0x17d584u;
    // NOP
    ctx->pc = 0x17d588u;
}
