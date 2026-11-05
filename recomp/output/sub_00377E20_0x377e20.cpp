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

// Function: sub_00377E20
// Address: 0x377e20 - 0x377e80
void sub_00377E20_0x377e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377E20_0x377e20");
#endif

    ctx->pc = 0x377e20u;

    // 0x377e20: 0x8220022  j           func_880088
    ctx->pc = 0x377E20u;
    ctx->pc = 0x377E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E20u;
    // 0x377e24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x880088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880088u, 0x377E20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E28u;
    // 0x377e28: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377e30: 0x8810022  j           func_2040088
    ctx->pc = 0x377E30u;
    ctx->pc = 0x377E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E30u;
    // 0x377e34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040088u, 0x377E30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E38u;
    // 0x377e38: 0x8220023  j           func_88008C
    ctx->pc = 0x377E38u;
    ctx->pc = 0x377E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E38u;
    // 0x377e3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88008Cu, 0x377E38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E40u;
    // 0x377e40: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377e48: 0x8810023  j           func_204008C
    ctx->pc = 0x377E48u;
    ctx->pc = 0x377E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E48u;
    // 0x377e4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204008Cu, 0x377E48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E50u;
    // 0x377e50: 0x8220024  j           func_880090
    ctx->pc = 0x377E50u;
    ctx->pc = 0x377E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E50u;
    // 0x377e54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x880090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880090u, 0x377E50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E58u;
    // 0x377e58: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377e5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377e60: 0x8810024  j           func_2040090
    ctx->pc = 0x377E60u;
    ctx->pc = 0x377E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E60u;
    // 0x377e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040090u, 0x377E60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E68u;
    // 0x377e68: 0x8220025  j           func_880094
    ctx->pc = 0x377E68u;
    ctx->pc = 0x377E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E68u;
    // 0x377e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x880094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880094u, 0x377E68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E70u;
    // 0x377e70: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377e78: 0x8810025  j           func_2040094
    ctx->pc = 0x377E78u;
    ctx->pc = 0x377E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E78u;
    // 0x377e7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040094u, 0x377E78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E80u;
}
