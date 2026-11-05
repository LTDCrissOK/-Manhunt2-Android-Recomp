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

// Function: sub_002BF280
// Address: 0x2bf280 - 0x2bf3b0
void sub_002BF280_0x2bf280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF280_0x2bf280");
#endif

    switch (ctx->pc) {
        case 0x2bf2a4u: goto label_2bf2a4;
        case 0x2bf2acu: goto label_2bf2ac;
        case 0x2bf2b4u: goto label_2bf2b4;
        default: break;
    }

    ctx->pc = 0x2bf280u;

    // 0x2bf280: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2bf280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2bf284: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf288: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2bf288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2bf28c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf28cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf290: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2bf290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2bf294: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bf294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf298: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2bf298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2bf29c: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BF29Cu;
    SET_GPR_U32(ctx, 31, 0x2BF2A4u);
    ctx->pc = 0x2BF2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF29Cu;
    // 0x2bf2a0: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BF29Cu, 0x2BF2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2A4u;
label_2bf2a4:
    // 0x2bf2a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF2A4u;
    SET_GPR_U32(ctx, 31, 0x2BF2ACu);
    ctx->pc = 0x2BF2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2A4u;
    // 0x2bf2a8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF2A4u, 0x2BF2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2ACu;
label_2bf2ac:
    // 0x2bf2ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BF2ACu;
    SET_GPR_U32(ctx, 31, 0x2BF2B4u);
    ctx->pc = 0x2BF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF2ACu;
    // 0x2bf2b0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BF2ACu, 0x2BF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF2B4u;
label_2bf2b4:
    // 0x2bf2b4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2bf2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf2b8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x2bf2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bf2bc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2bf2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf2c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2bf2c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2bf2c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2bf2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf2c8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x2bf2c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bf2cc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bf2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bf2d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x2bf2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bf2d4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2bf2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bf2d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bf2d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf2dc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2bf2dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf2e0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2bf2e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bf2e4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2bf2e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bf2e8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2bf2e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bf2ec: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2bf2ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bf2f0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2bf2f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bf2f4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x2bf2f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bf2f8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x2bf2f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf2fc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2bf2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf300: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2bf300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bf304: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bf304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bf308: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2bf308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bf30c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bf30cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf310: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2bf310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf314: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2bf314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf318: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2bf318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf31c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2bf31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf320: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2bf320u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2bf324: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2bf324u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2bf328: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2bf328u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2bf32c: 0x46010044  c1          0x10044
    ctx->pc = 0x2bf32cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2bf330: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2bf330u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf334: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2bf334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf338: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2bf338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf33c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2bf33cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2bf340: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2bf340u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2bf344: 0x4a0003bf  vwaitq
    ctx->pc = 0x2bf344u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2bf348: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2bf348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf34c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2bf34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf350: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2bf350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2bf354: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2bf354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2bf358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bf358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf35c: 0x0  nop
    ctx->pc = 0x2bf35cu;
    // NOP
    // 0x2bf360: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2bf360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bf364: 0x0  nop
    ctx->pc = 0x2bf364u;
    // NOP
    // 0x2bf368: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2BF368u;
    {
        const bool branch_taken_0x2bf368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BF36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF368u;
        // 0x2bf36c: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bf368) {
            ctx->pc = 0x2BF39Cu;
            goto label_2bf39c;
        }
    }
    ctx->pc = 0x2BF370u;
    // 0x2bf370: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bf370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2bf374: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2bf374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bf378: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2bf378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf37c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2bf37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bf380: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2bf380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf384: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2bf384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bf388: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2bf388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bf38c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bf38cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bf390: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2bf390u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bf394: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2bf394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2bf398: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2bf398u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2bf39c:
    // 0x2bf39c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2bf39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bf3a0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2bf3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bf3a4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2bf3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF3A8u;
        // 0x2bf3ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF3B0u;
}
