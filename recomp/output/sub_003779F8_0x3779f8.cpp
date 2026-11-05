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

// Function: sub_003779F8
// Address: 0x3779f8 - 0x377a10
void sub_003779F8_0x3779f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003779F8_0x3779f8");
#endif

    ctx->pc = 0x3779f8u;

    // 0x3779f8: 0x9020027  j           func_408009C
    ctx->pc = 0x3779F8u;
    ctx->pc = 0x3779FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779F8u;
    // 0x3779fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408009Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408009Cu, 0x3779F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A00u;
    // 0x377a00: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377a08: 0x8810027  j           func_204009C
    ctx->pc = 0x377A08u;
    ctx->pc = 0x377A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377A08u;
    // 0x377a0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204009Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204009Cu, 0x377A08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377A10u;
}
