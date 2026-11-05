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

// Function: sub_00377A28
// Address: 0x377a28 - 0x377a40
void sub_00377A28_0x377a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A28_0x377a28");
#endif

    ctx->pc = 0x377a28u;

    // 0x377a28: 0x9020028  j           func_40800A0
    ctx->pc = 0x377A28u;
    ctx->pc = 0x377A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A28u;
    // 0x377a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800A0u, 0x377A28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A30u;
    // 0x377a30: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377a30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377a38: 0x8810028  j           func_20400A0
    ctx->pc = 0x377A38u;
    ctx->pc = 0x377A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A38u;
    // 0x377a3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400A0u, 0x377A38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A40u;
}
