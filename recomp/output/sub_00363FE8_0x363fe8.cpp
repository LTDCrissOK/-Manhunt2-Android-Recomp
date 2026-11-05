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

// Function: sub_00363FE8
// Address: 0x363fe8 - 0x364010
void sub_00363FE8_0x363fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363FE8_0x363fe8");
#endif

    ctx->pc = 0x363fe8u;

    // 0x363fe8: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x363fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x363fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x363fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363ff0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x363ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x363ff4: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x363ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x363FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364000u;
    // 0x364000: 0x0  nop
    ctx->pc = 0x364000u;
    // NOP
    // 0x364004: 0x0  nop
    ctx->pc = 0x364004u;
    // NOP
    // 0x364008: 0x0  nop
    ctx->pc = 0x364008u;
    // NOP
    // 0x36400c: 0x0  nop
    ctx->pc = 0x36400cu;
    // NOP
    ctx->pc = 0x364010u;
}
