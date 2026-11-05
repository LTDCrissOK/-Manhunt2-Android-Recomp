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

// Function: sub_00377AB8
// Address: 0x377ab8 - 0x377ad0
void sub_00377AB8_0x377ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377AB8_0x377ab8");
#endif

    switch (ctx->pc) {
        case 0x377ac4u: goto label_377ac4;
        default: break;
    }

    ctx->pc = 0x377ab8u;

    // 0x377ab8: 0x902002b  j           func_40800AC
    ctx->pc = 0x377AB8u;
    ctx->pc = 0x377ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AB8u;
    // 0x377abc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800ACu, 0x377AB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377AC0u;
    // 0x377ac0: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_377ac4:
    // 0x377ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ac8: 0x881002b  j           func_20400AC
    ctx->pc = 0x377AC8u;
    ctx->pc = 0x377ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377AC8u;
    // 0x377acc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400ACu, 0x377AC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377AD0u;
}
