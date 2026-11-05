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

// Function: sub_0017D780
// Address: 0x17d780 - 0x17d790
void sub_0017D780_0x17d780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D780_0x17d780");
#endif

    ctx->pc = 0x17d780u;

    // 0x17d780: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17d780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17d784: 0x7c800020  sq          $zero, 0x20($a0)
    ctx->pc = 0x17d784u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 0));
    // 0x17d788: 0x3e00008  jr          $ra
    ctx->pc = 0x17D788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D790u;
}
