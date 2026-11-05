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

// Function: sub_00377DB0
// Address: 0x377db0 - 0x377e20
void sub_00377DB0_0x377db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377DB0_0x377db0");
#endif

    ctx->pc = 0x377db0u;

    // 0x377db0: 0x8220022  j           func_880088
    ctx->pc = 0x377DB0u;
    ctx->pc = 0x377DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DB0u;
    // 0x377db4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x880088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880088u, 0x377DB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377DB8u;
    // 0x377db8: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377db8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377dc0: 0x8810022  j           func_2040088
    ctx->pc = 0x377DC0u;
    ctx->pc = 0x377DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DC0u;
    // 0x377dc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040088u, 0x377DC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377DC8u;
    // 0x377dc8: 0x8220023  j           func_88008C
    ctx->pc = 0x377DC8u;
    ctx->pc = 0x377DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DC8u;
    // 0x377dcc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88008Cu, 0x377DC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377DD0u;
    // 0x377dd0: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377dd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377dd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377dd8: 0x8810023  j           func_204008C
    ctx->pc = 0x377DD8u;
    ctx->pc = 0x377DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DD8u;
    // 0x377ddc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204008Cu, 0x377DD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377DE0u;
    // 0x377de0: 0x8220024  j           func_880090
    ctx->pc = 0x377DE0u;
    ctx->pc = 0x377DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DE0u;
    // 0x377de4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x880090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880090u, 0x377DE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377DE8u;
    // 0x377de8: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377df0: 0x8810024  j           func_2040090
    ctx->pc = 0x377DF0u;
    ctx->pc = 0x377DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DF0u;
    // 0x377df4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040090u, 0x377DF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377DF8u;
    // 0x377df8: 0x8220025  j           func_880094
    ctx->pc = 0x377DF8u;
    ctx->pc = 0x377DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377DF8u;
    // 0x377dfc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x880094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x880094u, 0x377DF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E00u;
    // 0x377e00: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377e00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377e08: 0x8810025  j           func_2040094
    ctx->pc = 0x377E08u;
    ctx->pc = 0x377E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377E08u;
    // 0x377e0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040094u, 0x377E08u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377E10u;
    // 0x377e10: 0x400007ad  .word       0x400007AD                   # mfc0        $zero, Index # 000007AD <InstrIdType: R5900_COP0>
    ctx->pc = 0x377e10u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x377e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377e18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377e18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x377e20u;
}
