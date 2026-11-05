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

// Function: sub_0030F6C0
// Address: 0x30f6c0 - 0x30f6e0
void sub_0030F6C0_0x30f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F6C0_0x30f6c0");
#endif

    ctx->pc = 0x30f6c0u;

    // 0x30f6c0: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x30f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x30f6c4: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x30f6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x30f6c8: 0x24422150  addiu       $v0, $v0, 0x2150
    ctx->pc = 0x30f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8528));
    // 0x30f6cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30f6ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B2150u));
    // 0x30f6d0: 0xf8617d90  sqc2        $vf1, 0x7D90($v1)
    ctx->pc = 0x30f6d0u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5A7D90u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5A7D90u, _value); } while (0);
    // 0x30f6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x30F6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F6DCu;
    // 0x30f6dc: 0x0  nop
    ctx->pc = 0x30f6dcu;
    // NOP
    ctx->pc = 0x30f6e0u;
}
