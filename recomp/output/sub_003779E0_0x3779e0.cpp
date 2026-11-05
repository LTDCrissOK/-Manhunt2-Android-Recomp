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

// Function: sub_003779E0
// Address: 0x3779e0 - 0x3779f8
void sub_003779E0_0x3779e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003779E0_0x3779e0");
#endif

    ctx->pc = 0x3779e0u;

    // 0x3779e0: 0x8420026  j           func_1080098
    ctx->pc = 0x3779E0u;
    ctx->pc = 0x3779E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779E0u;
    // 0x3779e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1080098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1080098u, 0x3779E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3779E8u;
    // 0x3779e8: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x3779e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x3779ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779f0: 0x8210026  j           func_840098
    ctx->pc = 0x3779F0u;
    ctx->pc = 0x3779F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779F0u;
    // 0x3779f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x840098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x840098u, 0x3779F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3779F8u;
}
