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

// Function: sub_0017D838
// Address: 0x17d838 - 0x17d858
void sub_0017D838_0x17d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D838_0x17d838");
#endif

    ctx->pc = 0x17d838u;

    // 0x17d838: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17d83c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d840: 0xac8200d8  sw          $v0, 0xD8($a0)
    ctx->pc = 0x17d840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 2));
    // 0x17d844: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x17d844u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x17d848: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x17d848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x17d84c: 0xac8000dc  sw          $zero, 0xDC($a0)
    ctx->pc = 0x17d84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x17d850: 0x3e00008  jr          $ra
    ctx->pc = 0x17D850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D850u;
        // 0x17d854: 0xac8000e4  sw          $zero, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D858u;
}
