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

// Function: sub_00354D78
// Address: 0x354d78 - 0x355450
void sub_00354D78_0x354d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354D78_0x354d78");
#endif

    switch (ctx->pc) {
        case 0x354de4u: goto label_354de4;
        case 0x354decu: goto label_354dec;
        case 0x354df4u: goto label_354df4;
        case 0x355048u: goto label_355048;
        case 0x355054u: goto label_355054;
        case 0x355158u: goto label_355158;
        case 0x3551e8u: goto label_3551e8;
        case 0x3551f4u: goto label_3551f4;
        case 0x355208u: goto label_355208;
        case 0x355358u: goto label_355358;
        case 0x355398u: goto label_355398;
        case 0x3553b0u: goto label_3553b0;
        case 0x3553e0u: goto label_3553e0;
        default: break;
    }

    ctx->pc = 0x354d78u;

    // 0x354d78: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x354d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x354d7c: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x354d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x354d80: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x354d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x354d84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x354d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d88: 0xe7bd01a8  swc1        $f29, 0x1A8($sp)
    ctx->pc = 0x354d88u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x354d8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x354d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354d90: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x354d90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x354d94: 0x46006746  mov.s       $f29, $f12
    ctx->pc = 0x354d94u;
    ctx->f[29] = FPU_MOV_S(ctx->f[12]);
    // 0x354d98: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x354d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x354d9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x354d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354da0: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x354da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x354da4: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x354da4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x354da8: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x354da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x354dac: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x354dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x354db0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x354db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x354db4: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x354db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x354db8: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x354db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x354dbc: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x354dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x354dc0: 0xe7bc01a0  swc1        $f28, 0x1A0($sp)
    ctx->pc = 0x354dc0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x354dc4: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x354dc4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x354dc8: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x354dc8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x354dcc: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x354dccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x354dd0: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x354dd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x354dd4: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x354dd4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x354dd8: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x354dd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x354ddc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x354DDCu;
    SET_GPR_U32(ctx, 31, 0x354DE4u);
    ctx->pc = 0x354DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354DDCu;
    // 0x354de0: 0xe7b50168  swc1        $f21, 0x168($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x354DDCu, 0x354DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DE4u;
label_354de4:
    // 0x354de4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x354DE4u;
    SET_GPR_U32(ctx, 31, 0x354DECu);
    ctx->pc = 0x354DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354DE4u;
    // 0x354de8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x354DE4u, 0x354DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DECu;
label_354dec:
    // 0x354dec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x354DECu;
    SET_GPR_U32(ctx, 31, 0x354DF4u);
    ctx->pc = 0x354DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354DECu;
    // 0x354df0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x354DECu, 0x354DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354DF4u;
label_354df4:
    // 0x354df4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x354df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x354df8: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x354df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354dfc: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x354dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x354e00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x354e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x354e04: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x354e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354e08: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x354e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x354e0c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x354e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354e10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x354e10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x354e14: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x354e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x354e18: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x354e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x354e1c: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x354e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354e20: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x354e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x354e24: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x354e24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x354e28: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x354e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x354e2c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x354e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354e30: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x354e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354e34: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x354e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354e38: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x354e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354e3c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x354e3cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x354e40: 0x4a0003bf  vwaitq
    ctx->pc = 0x354e40u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x354e44: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x354e44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354e48: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x354e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354e4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x354e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354e50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x354e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x354e54: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x354e54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x354e58: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x354e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354e5c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x354e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354e60: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x354e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x354e64: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x354e64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354e68: 0x0  nop
    ctx->pc = 0x354e68u;
    // NOP
    // 0x354e6c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x354E6Cu;
    {
        const bool branch_taken_0x354e6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E6Cu;
        // 0x354e70: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e6c) {
            ctx->pc = 0x354E94u;
            goto label_354e94;
        }
    }
    ctx->pc = 0x354E74u;
    // 0x354e74: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x354e74u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354e78: 0x0  nop
    ctx->pc = 0x354e78u;
    // NOP
    // 0x354e7c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x354E7Cu;
    {
        const bool branch_taken_0x354e7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354E7Cu;
        // 0x354e80: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354e7c) {
            ctx->pc = 0x354E98u;
            goto label_354e98;
        }
    }
    ctx->pc = 0x354E84u;
    // 0x354e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x354e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x354e88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354e8c: 0x0  nop
    ctx->pc = 0x354e8cu;
    // NOP
    // 0x354e90: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x354e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_354e94:
    // 0x354e94: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x354e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_354e98:
    // 0x354e98: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x354e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354e9c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x354e9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x354ea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x354ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x354ea4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x354ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x354ea8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x354ea8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x354eac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354eacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x354eb0: 0x0  nop
    ctx->pc = 0x354eb0u;
    // NOP
    // 0x354eb4: 0x0  nop
    ctx->pc = 0x354eb4u;
    // NOP
    // 0x354eb8: 0x46002816  rsqrt.s     $f0, $f5, $f0
    ctx->pc = 0x354eb8u;
    ctx->f[0] = FPU_RSQRT_S(ctx->f[5], ctx->f[0]);
    // 0x354ebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x354ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x354ec0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x354ec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354ec4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x354ec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x354ec8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x354ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354ecc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x354eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354ed0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x354ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x354ed4: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x354ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x354ed8: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x354ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x354edc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x354edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x354ee0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x354ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354ee4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x354ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x354ee8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x354ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x354eec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x354eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354ef0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x354ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354ef4: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x354ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x354ef8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x354ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354efc: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x354efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x354f00: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x354f00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x354f04: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x354f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354f08: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x354f08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x354f0c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x354f0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x354f10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x354f14: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x354f14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x354f18: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x354f18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x354f1c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x354f1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x354f20: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x354f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x354f24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x354f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354f28: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x354f28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x354f2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x354f2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354f30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x354f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354f34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x354f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354f38: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x354f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354f3c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x354f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354f40: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x354f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x354f44: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x354f44u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x354f48: 0x4a0003bf  vwaitq
    ctx->pc = 0x354f48u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x354f4c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x354f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354f50: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x354f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354f54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x354f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x354f58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354f5c: 0x0  nop
    ctx->pc = 0x354f5cu;
    // NOP
    // 0x354f60: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x354f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x354f64: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x354f64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354f68: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x354f68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x354f6c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x354f6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354f70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x354f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354f74: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x354f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x354f78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x354f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354f7c: 0x0  nop
    ctx->pc = 0x354f7cu;
    // NOP
    // 0x354f80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x354f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x354f84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x354f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354f88: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x354f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x354f8c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x354f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354f90: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x354f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354f94: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x354f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x354f98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x354f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x354f9c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x354f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x354fa0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x354fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x354fa4: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x354fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354fa8: 0x0  nop
    ctx->pc = 0x354fa8u;
    // NOP
    // 0x354fac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x354FACu;
    {
        const bool branch_taken_0x354fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FACu;
        // 0x354fb0: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fac) {
            ctx->pc = 0x354FBCu;
            goto label_354fbc;
        }
    }
    ctx->pc = 0x354FB4u;
    // 0x354fb4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x354FB4u;
    {
        const bool branch_taken_0x354fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354FB4u;
        // 0x354fb8: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x354fb4) {
            ctx->pc = 0x354FF4u;
            goto label_354ff4;
        }
    }
    ctx->pc = 0x354FBCu;
label_354fbc:
    // 0x354fbc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x354fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x354fc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354fc4: 0x0  nop
    ctx->pc = 0x354fc4u;
    // NOP
    // 0x354fc8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x354fc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354fcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x354fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x354fd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x354fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354fd4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x354FD4u;
    {
        const bool branch_taken_0x354fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x354fd4) {
            ctx->pc = 0x354FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354FD4u;
            // 0x354fd8: 0x4600b582  mul.s       $f22, $f22, $f0 (Delay Slot)
            ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x354FF8u;
            goto label_354ff8;
        }
    }
    ctx->pc = 0x354FDCu;
    // 0x354fdc: 0x460da001  sub.s       $f0, $f20, $f13
    ctx->pc = 0x354fdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
    // 0x354fe0: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x354fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x354fe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x354fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354fe8: 0x0  nop
    ctx->pc = 0x354fe8u;
    // NOP
    // 0x354fec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x354fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x354ff0: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x354ff0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_354ff4:
    // 0x354ff4: 0x4600b582  mul.s       $f22, $f22, $f0
    ctx->pc = 0x354ff4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_354ff8:
    // 0x354ff8: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x354ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x354ffc: 0x4600b6c6  mov.s       $f27, $f22
    ctx->pc = 0x354ffcu;
    ctx->f[27] = FPU_MOV_S(ctx->f[22]);
    // 0x355000: 0x4600bd46  mov.s       $f21, $f23
    ctx->pc = 0x355000u;
    ctx->f[21] = FPU_MOV_S(ctx->f[23]);
    // 0x355004: 0x4600bf06  mov.s       $f28, $f23
    ctx->pc = 0x355004u;
    ctx->f[28] = FPU_MOV_S(ctx->f[23]);
    // 0x355008: 0x4490c000  mtc1        $s0, $f24
    ctx->pc = 0x355008u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x35500c: 0x0  nop
    ctx->pc = 0x35500cu;
    // NOP
    // 0x355010: 0x4680c620  cvt.s.w     $f24, $f24
    ctx->pc = 0x355010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[24], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
    // 0x355014: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x355014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x355018: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x355018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x35501c: 0x4600b687  neg.s       $f26, $f22
    ctx->pc = 0x35501cu;
    ctx->f[26] = FPU_NEG_S(ctx->f[22]);
    // 0x355020: 0x4617b640  add.s       $f25, $f22, $f23
    ctx->pc = 0x355020u;
    ctx->f[25] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x355024: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x355024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x355028: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x355028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x35502c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x35502cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355030: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x355030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x355034: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x355034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x355038: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x355038u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x35503c: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x35503cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x355040: 0x27b600a4  addiu       $s6, $sp, 0xA4
    ctx->pc = 0x355040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x355044: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x355044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_355048:
    // 0x355048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35504c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35504Cu;
    SET_GPR_U32(ctx, 31, 0x355054u);
    ctx->pc = 0x355050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35504Cu;
    // 0x355050: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35504Cu, 0x355054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355054u;
label_355054:
    // 0x355054: 0x0  nop
    ctx->pc = 0x355054u;
    // NOP
    // 0x355058: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x355058u;
    {
        const bool branch_taken_0x355058 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x35505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355058u;
        // 0x35505c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355058) {
            ctx->pc = 0x355048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355048;
        }
    }
    ctx->pc = 0x355060u;
    // 0x355060: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x355060u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x355064: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x355064u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355068: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x355068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35506c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x35506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355070: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x355070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355074: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x355074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355078: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x355078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35507c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x35507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355080: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x355080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355084: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x355084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x355088: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x355088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x35508c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x35508cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x355090: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x355090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x355094: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x355094u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355098: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x355098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35509c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35509cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3550a0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3550a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3550a4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3550a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3550a8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3550a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3550ac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3550acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3550b0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3550b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3550b4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x3550b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3550b8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3550b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3550bc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3550bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3550c0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3550c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3550c4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x3550c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3550c8: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x3550c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3550cc: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x3550ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3550d0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3550d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3550d4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3550d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3550d8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3550d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3550dc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x3550dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3550e0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3550e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3550e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3550e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3550e8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3550e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3550ec: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x3550ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3550f0: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x3550f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3550f4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x3550f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3550f8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3550f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3550fc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3550fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x355100: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x355100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x355104: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x355104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x355108: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x355108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x35510c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x35510cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x355110: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x355110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355114: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x355114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x355118: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x355118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35511c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35511cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355120: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x355120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355124: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x355124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355128: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x355128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35512c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x35512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355130: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x355130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355134: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x355134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x355138: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x355138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x35513c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x35513cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x355140: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x355140u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x355144: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x355144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x355148: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x355148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35514c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x35514cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355150: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x355150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x355154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355158:
    // 0x355158: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x355158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x35515c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35515cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x355160: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x355160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x355164: 0x0  nop
    ctx->pc = 0x355164u;
    // NOP
    // 0x355168: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x355168u;
    {
        const bool branch_taken_0x355168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355168u;
        // 0x35516c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355168) {
            ctx->pc = 0x355158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355158;
        }
    }
    ctx->pc = 0x355170u;
    // 0x355170: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x355170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x355174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355178: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x355178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x35517c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x35517cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x355180: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x355180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x355184: 0x4600d8c2  mul.s       $f3, $f27, $f0
    ctx->pc = 0x355184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    // 0x355188: 0xe7b500ac  swc1        $f21, 0xAC($sp)
    ctx->pc = 0x355188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x35518c: 0x4600b102  mul.s       $f4, $f22, $f0
    ctx->pc = 0x35518cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x355190: 0xe7b500b4  swc1        $f21, 0xB4($sp)
    ctx->pc = 0x355190u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x355194: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x355194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x355198: 0xe7b500bc  swc1        $f21, 0xBC($sp)
    ctx->pc = 0x355198u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x35519c: 0x461c1840  add.s       $f1, $f3, $f28
    ctx->pc = 0x35519cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[28]);
    // 0x3551a0: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x3551a0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x3551a4: 0x461c1881  sub.s       $f2, $f3, $f28
    ctx->pc = 0x3551a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[28]);
    // 0x3551a8: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x3551a8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3551ac: 0x46152100  add.s       $f4, $f4, $f21
    ctx->pc = 0x3551acu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[21]);
    // 0x3551b0: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x3551b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x3551b4: 0x4614ed02  mul.s       $f20, $f29, $f20
    ctx->pc = 0x3551b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[29], ctx->f[20]);
    // 0x3551b8: 0x46171080  add.s       $f2, $f2, $f23
    ctx->pc = 0x3551b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x3551bc: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x3551bcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x3551c0: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3551c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x3551c4: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x3551c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x3551c8: 0x461718c0  add.s       $f3, $f3, $f23
    ctx->pc = 0x3551c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[23]);
    // 0x3551cc: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x3551ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x3551d0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x3551d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x3551d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3551d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3551d8: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x3551d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3551dc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3551dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3551e0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x3551E0u;
    SET_GPR_U32(ctx, 31, 0x3551E8u);
    ctx->pc = 0x3551E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551E0u;
    // 0x3551e4: 0xe7a300b0  swc1        $f3, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x3551E0u, 0x3551E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551E8u;
label_3551e8:
    // 0x3551e8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3551e8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3551ec: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x3551ECu;
    SET_GPR_U32(ctx, 31, 0x3551F4u);
    ctx->pc = 0x3551F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3551ECu;
    // 0x3551f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x3551ECu, 0x3551F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3551F4u;
label_3551f4:
    // 0x3551f4: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x3551f4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
    // 0x3551f8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x3551f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3551fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3551fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355200: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x355200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355204: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x355204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_355208:
    // 0x355208: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x355208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35520c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x35520cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x355210: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x355210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355214: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x355214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x355218: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x355218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x35521c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x35521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x355220: 0x461500c2  mul.s       $f3, $f0, $f21
    ctx->pc = 0x355220u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x355224: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x355224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x355228: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x355228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x35522c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x35522cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x355230: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x355230u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x355234: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x355234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x355238: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x355238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x35523c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x35523cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x355240: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x355240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355244: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x355244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x355248: 0x4a1ffef  bgez        $a1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x355248u;
    {
        const bool branch_taken_0x355248 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x35524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355248u;
        // 0x35524c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355248) {
            ctx->pc = 0x355208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355208;
        }
    }
    ctx->pc = 0x355250u;
    // 0x355250: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x355250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x355254: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x355254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x355258: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x355258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x35525c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35525cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355260: 0x9045c8fc  lbu         $a1, -0x3704($v0)
    ctx->pc = 0x355260u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x3FC8FCu));
    // 0x355264: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x355264u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355268: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x355268u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x35526c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x355270: 0x8fb00104  lw          $s0, 0x104($sp)
    ctx->pc = 0x355270u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x355274: 0x9044c8fd  lbu         $a0, -0x3703($v0)
    ctx->pc = 0x355274u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3FC8FDu));
    // 0x355278: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x355278u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35527c: 0x0  nop
    ctx->pc = 0x35527cu;
    // NOP
    // 0x355280: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x355280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x355284: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x355284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x355288: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x355288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x35528c: 0x9043c8fe  lbu         $v1, -0x3702($v0)
    ctx->pc = 0x35528cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FC8FEu));
    // 0x355290: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x355290u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x355294: 0x0  nop
    ctx->pc = 0x355294u;
    // NOP
    // 0x355298: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x355298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x35529c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35529cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3552a0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x3552a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x3552a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3552a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3552a8: 0x0  nop
    ctx->pc = 0x3552a8u;
    // NOP
    // 0x3552ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3552acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3552b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3552b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3552b4: 0x244368c0  addiu       $v1, $v0, 0x68C0
    ctx->pc = 0x3552b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26816));
    // 0x3552b8: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x3552b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3552bc: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x3552bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3552c0: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x3552c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3552c4: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x3552c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3552c8: 0x68660017  ldl         $a2, 0x17($v1)
    ctx->pc = 0x3552c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3552cc: 0x6c660010  ldr         $a2, 0x10($v1)
    ctx->pc = 0x3552ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3552d0: 0xb3a400d7  sdl         $a0, 0xD7($sp)
    ctx->pc = 0x3552d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3552d4: 0xb7a400d0  sdr         $a0, 0xD0($sp)
    ctx->pc = 0x3552d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3552d8: 0xb3a500df  sdl         $a1, 0xDF($sp)
    ctx->pc = 0x3552d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3552dc: 0xb7a500d8  sdr         $a1, 0xD8($sp)
    ctx->pc = 0x3552dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3552e0: 0xb3a600e7  sdl         $a2, 0xE7($sp)
    ctx->pc = 0x3552e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3552e4: 0xb7a600e0  sdr         $a2, 0xE0($sp)
    ctx->pc = 0x3552e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3552e8: 0x6864001f  ldl         $a0, 0x1F($v1)
    ctx->pc = 0x3552e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3552ec: 0x6c640018  ldr         $a0, 0x18($v1)
    ctx->pc = 0x3552ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3552f0: 0x68650027  ldl         $a1, 0x27($v1)
    ctx->pc = 0x3552f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3552f4: 0x6c650020  ldr         $a1, 0x20($v1)
    ctx->pc = 0x3552f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3552f8: 0x6866002f  ldl         $a2, 0x2F($v1)
    ctx->pc = 0x3552f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3552fc: 0x6c660028  ldr         $a2, 0x28($v1)
    ctx->pc = 0x3552fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x355300: 0xb3a400ef  sdl         $a0, 0xEF($sp)
    ctx->pc = 0x355300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355304: 0xb7a400e8  sdr         $a0, 0xE8($sp)
    ctx->pc = 0x355304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355308: 0xb3a500f7  sdl         $a1, 0xF7($sp)
    ctx->pc = 0x355308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35530c: 0xb7a500f0  sdr         $a1, 0xF0($sp)
    ctx->pc = 0x35530cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355310: 0xb3a600ff  sdl         $a2, 0xFF($sp)
    ctx->pc = 0x355310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355314: 0xb7a600f8  sdr         $a2, 0xF8($sp)
    ctx->pc = 0x355314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x355318: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x355318u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x35531c: 0xa3a00093  sb          $zero, 0x93($sp)
    ctx->pc = 0x35531cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x355320: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x355320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355324: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x355324u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x355328: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355328u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35532c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x35532cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x355330: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x355330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x355334: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355334u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x355338: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x355338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35533c: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x35533cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
    // 0x355340: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355340u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x355344: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x355344u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x355348: 0xa3a30091  sb          $v1, 0x91($sp)
    ctx->pc = 0x355348u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 145), (uint8_t)GPR_U32(ctx, 3));
    // 0x35534c: 0xa3a40092  sb          $a0, 0x92($sp)
    ctx->pc = 0x35534cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 146), (uint8_t)GPR_U32(ctx, 4));
    // 0x355350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x355350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355354: 0x0  nop
    ctx->pc = 0x355354u;
    // NOP
label_355358:
    // 0x355358: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x355358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x35535c: 0x8ba20093  lwl         $v0, 0x93($sp)
    ctx->pc = 0x35535cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x355360: 0x9ba20090  lwr         $v0, 0x90($sp)
    ctx->pc = 0x355360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x355364: 0xaba20033  swl         $v0, 0x33($sp)
    ctx->pc = 0x355364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x355368: 0xbba20030  swr         $v0, 0x30($sp)
    ctx->pc = 0x355368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x35536c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x35536cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x355370: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x355370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x355374: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x355374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x355378: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x355378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35537c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x35537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x355380: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x355380u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x355384: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x355384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355388: 0x2e42021  addu        $a0, $s7, $a0
    ctx->pc = 0x355388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x35538c: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x35538cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x355390: 0xc0dab34  jal         func_36ACD0
    ctx->pc = 0x355390u;
    SET_GPR_U32(ctx, 31, 0x355398u);
    ctx->pc = 0x355394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355390u;
    // 0x355394: 0xb22824  and         $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36ACD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36ACD0u, 0x355390u, 0x355398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355398u;
label_355398:
    // 0x355398: 0x623ffef  bgezl       $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x355398u;
    {
        const bool branch_taken_0x355398 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x355398) {
            ctx->pc = 0x35539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355398u;
            // 0x35539c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355358;
        }
    }
    ctx->pc = 0x3553A0u;
    // 0x3553a0: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x3553a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3553a4: 0x12830008  beq         $s4, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3553A4u;
    {
        const bool branch_taken_0x3553a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        ctx->pc = 0x3553A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3553A4u;
        // 0x3553a8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3553a4) {
            ctx->pc = 0x3553C8u;
            goto label_3553c8;
        }
    }
    ctx->pc = 0x3553ACu;
    // 0x3553ac: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3553acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_3553b0:
    // 0x3553b0: 0x0  nop
    ctx->pc = 0x3553b0u;
    // NOP
    // 0x3553b4: 0x0  nop
    ctx->pc = 0x3553b4u;
    // NOP
    // 0x3553b8: 0x0  nop
    ctx->pc = 0x3553b8u;
    // NOP
    // 0x3553bc: 0x0  nop
    ctx->pc = 0x3553bcu;
    // NOP
    // 0x3553c0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3553C0u;
    {
        const bool branch_taken_0x3553c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3553c0) {
            ctx->pc = 0x3553C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3553C0u;
            // 0x3553c4: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3553B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3553b0;
        }
    }
    ctx->pc = 0x3553C8u;
label_3553c8:
    // 0x3553c8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3553c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553cc: 0x52e2000b  beql        $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3553CCu;
    {
        const bool branch_taken_0x3553cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        if (branch_taken_0x3553cc) {
            ctx->pc = 0x3553D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3553CCu;
            // 0x3553d0: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3553FCu;
            goto label_3553fc;
        }
    }
    ctx->pc = 0x3553D4u;
    // 0x3553d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3553d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3553d8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3553d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3553dc: 0x0  nop
    ctx->pc = 0x3553dcu;
    // NOP
label_3553e0:
    // 0x3553e0: 0x0  nop
    ctx->pc = 0x3553e0u;
    // NOP
    // 0x3553e4: 0x0  nop
    ctx->pc = 0x3553e4u;
    // NOP
    // 0x3553e8: 0x0  nop
    ctx->pc = 0x3553e8u;
    // NOP
    // 0x3553ec: 0x0  nop
    ctx->pc = 0x3553ecu;
    // NOP
    // 0x3553f0: 0x5482fffb  bnel        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3553F0u;
    {
        const bool branch_taken_0x3553f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3553f0) {
            ctx->pc = 0x3553F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3553F0u;
            // 0x3553f4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3553E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3553e0;
        }
    }
    ctx->pc = 0x3553F8u;
    // 0x3553f8: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x3553f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_3553fc:
    // 0x3553fc: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x3553fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x355400: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x355400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x355404: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x355404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x355408: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x355408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x35540c: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x35540cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x355410: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x355410u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x355414: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x355414u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x355418: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x355418u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x35541c: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x35541cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x355420: 0xc7bd01a8  lwc1        $f29, 0x1A8($sp)
    ctx->pc = 0x355420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x355424: 0xc7bc01a0  lwc1        $f28, 0x1A0($sp)
    ctx->pc = 0x355424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x355428: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x355428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x35542c: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x35542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x355430: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x355430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x355434: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x355434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x355438: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x355438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x35543c: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x35543cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x355440: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x355440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x355444: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x355444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x355448: 0x3e00008  jr          $ra
    ctx->pc = 0x355448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35544Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355448u;
        // 0x35544c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355450u;
}
