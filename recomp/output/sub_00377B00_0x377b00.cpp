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

// Function: sub_00377B00
// Address: 0x377b00 - 0x377b18
void sub_00377B00_0x377b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B00_0x377b00");
#endif

    ctx->pc = 0x377b00u;

    // 0x377b00: 0x842002c  j           func_10800B0
    ctx->pc = 0x377B00u;
    ctx->pc = 0x377B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B00u;
    // 0x377b04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10800B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10800B0u, 0x377B00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377B08u;
    // 0x377b08: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377b08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377b10: 0x821002c  j           func_8400B0
    ctx->pc = 0x377B10u;
    ctx->pc = 0x377B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B10u;
    // 0x377b14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8400B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8400B0u, 0x377B10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377B18u;
}
