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

// Function: sub_002DCB38
// Address: 0x2dcb38 - 0x2dcb50
void sub_002DCB38_0x2dcb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCB38_0x2dcb38");
#endif

    ctx->pc = 0x2dcb38u;

    // 0x2dcb38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dcb3c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2dcb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x2dcb40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dcb40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcb44: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x2dcb44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dcb48: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCB50u;
}
