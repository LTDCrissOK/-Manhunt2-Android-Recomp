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

// Function: sub_0017D690
// Address: 0x17d690 - 0x17d6a0
void sub_0017D690_0x17d690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D690_0x17d690");
#endif

    ctx->pc = 0x17d690u;

    // 0x17d690: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x17d690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17d694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17d698: 0x3e00008  jr          $ra
    ctx->pc = 0x17D698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D698u;
        // 0x17d69c: 0xa0820018  sb          $v0, 0x18($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D6A0u;
}
