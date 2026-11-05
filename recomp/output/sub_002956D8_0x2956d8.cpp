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

// Function: sub_002956D8
// Address: 0x2956d8 - 0x2956f0
void sub_002956D8_0x2956d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002956D8_0x2956d8");
#endif

    ctx->pc = 0x2956d8u;

    // 0x2956d8: 0xac890014  sw          $t1, 0x14($a0)
    ctx->pc = 0x2956d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 9));
    // 0x2956dc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2956dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2956e0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2956e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2956e4: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2956e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2956e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2956E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2956ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956E8u;
        // 0x2956ec: 0xac880010  sw          $t0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2956E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2956F0u;
}
