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

// Function: sub_0017D770
// Address: 0x17d770 - 0x17d780
void sub_0017D770_0x17d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D770_0x17d770");
#endif

    ctx->pc = 0x17d770u;

    // 0x17d770: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x17d770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x17d774: 0x3e00008  jr          $ra
    ctx->pc = 0x17D774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D774u;
        // 0x17d778: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D77Cu;
    // 0x17d77c: 0x0  nop
    ctx->pc = 0x17d77cu;
    // NOP
    ctx->pc = 0x17d780u;
}
