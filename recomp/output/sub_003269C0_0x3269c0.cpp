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

// Function: sub_003269C0
// Address: 0x3269c0 - 0x3269d8
void sub_003269C0_0x3269c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003269C0_0x3269c0");
#endif

    ctx->pc = 0x3269c0u;

    // 0x3269c0: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x3269c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x3269c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3269c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3269c8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3269c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3269cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3269CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3269CCu;
        // 0x3269d0: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3269CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3269D4u;
    // 0x3269d4: 0x0  nop
    ctx->pc = 0x3269d4u;
    // NOP
    ctx->pc = 0x3269d8u;
}
