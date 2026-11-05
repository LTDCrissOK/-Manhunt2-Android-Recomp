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

// Function: sub_00377AA0
// Address: 0x377aa0 - 0x377ab8
void sub_00377AA0_0x377aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377AA0_0x377aa0");
#endif

    ctx->pc = 0x377aa0u;

    // 0x377aa0: 0x842002a  j           func_10800A8
    ctx->pc = 0x377AA0u;
    ctx->pc = 0x377AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AA0u;
    // 0x377aa4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10800A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10800A8u, 0x377AA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377AA8u;
    // 0x377aa8: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377aac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377aacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ab0: 0x821002a  j           func_8400A8
    ctx->pc = 0x377AB0u;
    ctx->pc = 0x377AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AB0u;
    // 0x377ab4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8400A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8400A8u, 0x377AB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377AB8u;
}
