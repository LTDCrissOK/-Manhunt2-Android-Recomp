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

// Function: sub_00349F18
// Address: 0x349f18 - 0x349f28
void sub_00349F18_0x349f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349F18_0x349f18");
#endif

    ctx->pc = 0x349f18u;

    // 0x349f18: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x349f18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x349f1c: 0xf88100e0  sqc2        $vf1, 0xE0($a0)
    ctx->pc = 0x349f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349f20: 0x3e00008  jr          $ra
    ctx->pc = 0x349F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349F28u;
}
