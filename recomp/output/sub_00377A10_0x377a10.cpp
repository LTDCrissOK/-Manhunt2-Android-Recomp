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

// Function: sub_00377A10
// Address: 0x377a10 - 0x377a28
void sub_00377A10_0x377a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A10_0x377a10");
#endif

    ctx->pc = 0x377a10u;

    // 0x377a10: 0x8420027  j           func_108009C
    ctx->pc = 0x377A10u;
    ctx->pc = 0x377A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A10u;
    // 0x377a14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108009Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108009Cu, 0x377A10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A18u;
    // 0x377a18: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377a20: 0x8210027  j           func_84009C
    ctx->pc = 0x377A20u;
    ctx->pc = 0x377A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A20u;
    // 0x377a24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x84009Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x84009Cu, 0x377A20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A28u;
}
