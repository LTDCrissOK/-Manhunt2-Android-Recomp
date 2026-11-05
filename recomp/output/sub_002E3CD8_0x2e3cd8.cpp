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

// Function: sub_002E3CD8
// Address: 0x2e3cd8 - 0x2e3cf8
void sub_002E3CD8_0x2e3cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3CD8_0x2e3cd8");
#endif

    ctx->pc = 0x2e3cd8u;

    // 0x2e3cd8: 0x248205a0  addiu       $v0, $a0, 0x5A0
    ctx->pc = 0x2e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x2e3cdc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e3cdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e3ce0: 0xf88105a0  sqc2        $vf1, 0x5A0($a0)
    ctx->pc = 0x2e3ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1440), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3ce4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3ce4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3ce8: 0xf8810600  sqc2        $vf1, 0x600($a0)
    ctx->pc = 0x2e3ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1536), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3CF4u;
    // 0x2e3cf4: 0x0  nop
    ctx->pc = 0x2e3cf4u;
    // NOP
    ctx->pc = 0x2e3cf8u;
}
