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

// Function: sub_0017D7B8
// Address: 0x17d7b8 - 0x17d7d0
void sub_0017D7B8_0x17d7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D7B8_0x17d7b8");
#endif

    ctx->pc = 0x17d7b8u;

    // 0x17d7b8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x17d7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x17d7bc: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x17d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x17d7c0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x17d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x17d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D7C4u;
        // 0x17d7c8: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D7CCu;
    // 0x17d7cc: 0x0  nop
    ctx->pc = 0x17d7ccu;
    // NOP
    ctx->pc = 0x17d7d0u;
}
