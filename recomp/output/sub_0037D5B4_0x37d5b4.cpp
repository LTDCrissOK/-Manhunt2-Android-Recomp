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

// Function: sub_0037D5B4
// Address: 0x37d5b4 - 0x37d5c8
void sub_0037D5B4_0x37d5b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D5B4_0x37d5b4");
#endif

    ctx->pc = 0x37d5b4u;

    // 0x37d5b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37d5b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x37d5b8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x37d5b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37d5bc: 0x4be110ef  vmini.xyzw  $vf3, $vf2, $vf1
    ctx->pc = 0x37d5bcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x37d5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37D5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D5C0u;
        // 0x37d5c4: 0xf8830000  sqc2        $vf3, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D5C8u;
}
