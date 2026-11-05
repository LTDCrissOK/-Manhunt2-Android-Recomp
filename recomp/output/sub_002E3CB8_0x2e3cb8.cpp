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

// Function: sub_002E3CB8
// Address: 0x2e3cb8 - 0x2e3cd8
void sub_002E3CB8_0x2e3cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3CB8_0x2e3cb8");
#endif

    ctx->pc = 0x2e3cb8u;

    // 0x2e3cb8: 0x24820590  addiu       $v0, $a0, 0x590
    ctx->pc = 0x2e3cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2e3cbc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e3cbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e3cc0: 0xf8810590  sqc2        $vf1, 0x590($a0)
    ctx->pc = 0x2e3cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1424), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3cc4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3cc8: 0xf88105f0  sqc2        $vf1, 0x5F0($a0)
    ctx->pc = 0x2e3cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1520), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3CD4u;
    // 0x2e3cd4: 0x0  nop
    ctx->pc = 0x2e3cd4u;
    // NOP
    ctx->pc = 0x2e3cd8u;
}
