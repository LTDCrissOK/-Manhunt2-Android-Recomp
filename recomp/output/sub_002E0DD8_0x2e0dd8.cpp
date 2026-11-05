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

// Function: sub_002E0DD8
// Address: 0x2e0dd8 - 0x2e0e50
void sub_002E0DD8_0x2e0dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0DD8_0x2e0dd8");
#endif

    switch (ctx->pc) {
        case 0x2e0e44u: goto label_2e0e44;
        default: break;
    }

    ctx->pc = 0x2e0dd8u;

    // 0x2e0dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e0ddc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2e0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2e0de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0de4: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2e0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2e0de8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2e0de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e0dec: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e0decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e0df0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e0df4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e0df4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2e0df8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e0df8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2e0dfc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e0dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2e0e00: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2e0e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0e04: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e0e04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e0e08: 0x0  nop
    ctx->pc = 0x2e0e08u;
    // NOP
    // 0x2e0e0c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0E0Cu;
    {
        const bool branch_taken_0x2e0e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e0e0c) {
            ctx->pc = 0x2E0E1Cu;
            goto label_2e0e1c;
        }
    }
    ctx->pc = 0x2E0E14u;
    // 0x2e0e14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0E14u;
    {
        const bool branch_taken_0x2e0e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E14u;
        // 0x2e0e18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0e14) {
            ctx->pc = 0x2E0E44u;
            goto label_2e0e44;
        }
    }
    ctx->pc = 0x2E0E1Cu;
label_2e0e1c:
    // 0x2e0e1c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e0e1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0e20: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e0e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e0e24: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e0e24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e0e28: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e0e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e0e2c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e0e2cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e0e30: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e0e30u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e0e34: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e0e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e0e38: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x2e0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e0e3c: 0xc0b73d4  jal         func_2DCF50
    ctx->pc = 0x2E0E3Cu;
    SET_GPR_U32(ctx, 31, 0x2E0E44u);
    ctx->pc = 0x2DCF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCF50u, 0x2E0E3Cu, 0x2E0E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0E44u;
label_2e0e44:
    // 0x2e0e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e48: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E48u;
        // 0x2e0e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E50u;
}
