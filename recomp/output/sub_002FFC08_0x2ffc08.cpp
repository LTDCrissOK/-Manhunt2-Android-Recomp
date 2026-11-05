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

// Function: sub_002FFC08
// Address: 0x2ffc08 - 0x2ffc20
void sub_002FFC08_0x2ffc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFC08_0x2ffc08");
#endif

    ctx->pc = 0x2ffc08u;

    // 0x2ffc08: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ffc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ffc0c: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x2ffc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x2ffc10: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2ffc10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ffc14: 0xf8410290  sqc2        $vf1, 0x290($v0)
    ctx->pc = 0x2ffc14u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x595B00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x595B00u, _value); } while (0);
    // 0x2ffc18: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFC20u;
}
