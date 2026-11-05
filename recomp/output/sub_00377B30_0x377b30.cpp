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

// Function: sub_00377B30
// Address: 0x377b30 - 0x377b50
void sub_00377B30_0x377b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B30_0x377b30");
#endif

    ctx->pc = 0x377b30u;

    // 0x377b30: 0x842002d  j           func_10800B4
    ctx->pc = 0x377B30u;
    ctx->pc = 0x377B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B30u;
    // 0x377b34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10800B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10800B4u, 0x377B30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377B38u;
    // 0x377b38: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377b38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377b40: 0x821002d  j           func_8400B4
    ctx->pc = 0x377B40u;
    ctx->pc = 0x377B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B40u;
    // 0x377b44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8400B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8400B4u, 0x377B40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377B48u;
    // 0x377b48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377b4c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x377b4cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    ctx->pc = 0x377b50u;
}
