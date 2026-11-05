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

// Function: sub_00377A58
// Address: 0x377a58 - 0x377a70
void sub_00377A58_0x377a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A58_0x377a58");
#endif

    ctx->pc = 0x377a58u;

    // 0x377a58: 0x9020029  j           func_40800A4
    ctx->pc = 0x377A58u;
    ctx->pc = 0x377A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A58u;
    // 0x377a5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800A4u, 0x377A58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A60u;
    // 0x377a60: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377a68: 0x8810029  j           func_20400A4
    ctx->pc = 0x377A68u;
    ctx->pc = 0x377A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A68u;
    // 0x377a6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400A4u, 0x377A68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A70u;
}
