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

// Function: sub_0017D588
// Address: 0x17d588 - 0x17d5a8
void sub_0017D588_0x17d588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D588_0x17d588");
#endif

    ctx->pc = 0x17d588u;

    // 0x17d588: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x17d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x17d58c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17D58Cu;
    {
        const bool branch_taken_0x17d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D58Cu;
        // 0x17d590: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d58c) {
            ctx->pc = 0x17D59Cu;
            goto label_17d59c;
        }
    }
    ctx->pc = 0x17D594u;
    // 0x17d594: 0x3e00008  jr          $ra
    ctx->pc = 0x17D594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D594u;
        // 0x17d598: 0x8c820088  lw          $v0, 0x88($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D59Cu;
label_17d59c:
    // 0x17d59c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D5A4u;
    // 0x17d5a4: 0x0  nop
    ctx->pc = 0x17d5a4u;
    // NOP
    ctx->pc = 0x17d5a8u;
}
