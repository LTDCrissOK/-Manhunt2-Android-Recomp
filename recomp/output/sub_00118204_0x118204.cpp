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

// Function: sub_00118204
// Address: 0x118204 - 0x118218
void sub_00118204_0x118204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118204_0x118204");
#endif

    switch (ctx->pc) {
        case 0x11820cu: goto label_11820c;
        default: break;
    }

    ctx->pc = 0x118204u;

    // 0x118204: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x118204u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118208: 0xf8c10060  sqc2        $vf1, 0x60($a2)
    ctx->pc = 0x118208u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_11820c:
    // 0x11820c: 0x3e00008  jr          $ra
    ctx->pc = 0x11820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118214u;
    // 0x118214: 0x0  nop
    ctx->pc = 0x118214u;
    // NOP
    ctx->pc = 0x118218u;
}
