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

// Function: sub_002E0578
// Address: 0x2e0578 - 0x2e0618
void sub_002E0578_0x2e0578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0578_0x2e0578");
#endif

    switch (ctx->pc) {
        case 0x2e0598u: goto label_2e0598;
        case 0x2e0608u: goto label_2e0608;
        default: break;
    }

    ctx->pc = 0x2e0578u;

    // 0x2e0578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e057c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0580: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x2e0580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2e0584: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x2e0584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x2e0588: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0588u;
    {
        const bool branch_taken_0x2e0588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0588) {
            ctx->pc = 0x2E058Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0588u;
            // 0x2e058c: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E05A0u;
            goto label_2e05a0;
        }
    }
    ctx->pc = 0x2E0590u;
    // 0x2e0590: 0xc0b826c  jal         func_2E09B0
    ctx->pc = 0x2E0590u;
    SET_GPR_U32(ctx, 31, 0x2E0598u);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2E0590u, 0x2E0598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0598u;
label_2e0598:
    // 0x2e0598: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2E0598u;
    {
        const bool branch_taken_0x2e0598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0598u;
        // 0x2e059c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0598) {
            ctx->pc = 0x2E060Cu;
            goto label_2e060c;
        }
    }
    ctx->pc = 0x2E05A0u;
label_2e05a0:
    // 0x2e05a0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2e05a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2e05a4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2e05a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2e05a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e05a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e05ac: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e05acu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e05b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e05b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e05b4: 0x0  nop
    ctx->pc = 0x2e05b4u;
    // NOP
    // 0x2e05b8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2E05B8u;
    {
        const bool branch_taken_0x2e05b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e05b8) {
            ctx->pc = 0x2E05BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E05B8u;
            // 0x2e05bc: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E05DCu;
            goto label_2e05dc;
        }
    }
    ctx->pc = 0x2E05C0u;
    // 0x2e05c0: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2e05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e05c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e05c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e05c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e05c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e05cc: 0x0  nop
    ctx->pc = 0x2e05ccu;
    // NOP
    // 0x2e05d0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2E05D0u;
    {
        const bool branch_taken_0x2e05d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e05d0) {
            ctx->pc = 0x2E0600u;
            goto label_2e0600;
        }
    }
    ctx->pc = 0x2E05D8u;
    // 0x2e05d8: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2e05d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_2e05dc:
    // 0x2e05dc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2e05e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e05e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e05e4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2e05e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e05e8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2e05e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e05ec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2e05ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2e05f0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2e05f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2e05f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2e05f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2e05f8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2e05f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e05fc: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x2e05fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e0600:
    // 0x2e0600: 0xc0b74b6  jal         func_2DD2D8
    ctx->pc = 0x2E0600u;
    SET_GPR_U32(ctx, 31, 0x2E0608u);
    ctx->pc = 0x2DD2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD2D8u, 0x2E0600u, 0x2E0608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0608u;
label_2e0608:
    // 0x2e0608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e060c:
    // 0x2e060c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E060Cu;
        // 0x2e0610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0614u;
    // 0x2e0614: 0x0  nop
    ctx->pc = 0x2e0614u;
    // NOP
    ctx->pc = 0x2e0618u;
}
