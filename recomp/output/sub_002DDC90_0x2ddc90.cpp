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

// Function: sub_002DDC90
// Address: 0x2ddc90 - 0x2dddd0
void sub_002DDC90_0x2ddc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDC90_0x2ddc90");
#endif

    switch (ctx->pc) {
        case 0x2ddcc0u: goto label_2ddcc0;
        case 0x2ddcc8u: goto label_2ddcc8;
        default: break;
    }

    ctx->pc = 0x2ddc90u;

    // 0x2ddc90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ddc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ddc94: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2ddc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2ddc98: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2ddc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2ddc9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ddc9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddca0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2ddca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2ddca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ddca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddca8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2ddca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2ddcac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ddcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcb0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ddcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ddcb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ddcb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddcb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DDCB8u;
    SET_GPR_U32(ctx, 31, 0x2DDCC0u);
    ctx->pc = 0x2DDCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCB8u;
    // 0x2ddcbc: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DDCB8u, 0x2DDCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCC0u;
label_2ddcc0:
    // 0x2ddcc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2DDCC0u;
    SET_GPR_U32(ctx, 31, 0x2DDCC8u);
    ctx->pc = 0x2DDCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDCC0u;
    // 0x2ddcc4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DDCC0u, 0x2DDCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDCC8u;
label_2ddcc8:
    // 0x2ddcc8: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x2ddcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2ddccc: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2ddcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2ddcd0: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2DDCD0u;
    {
        const bool branch_taken_0x2ddcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ddcd0) {
            ctx->pc = 0x2DDCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDCD0u;
            // 0x2ddcd4: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDDB8u;
            goto label_2dddb8;
        }
    }
    ctx->pc = 0x2DDCD8u;
    // 0x2ddcd8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2ddcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2ddcdc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2ddcdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddce0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddce0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddce4: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddce4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddce8: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddce8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddcec: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddcecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddcf0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddcf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddcf4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddcf4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddcf8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2ddcf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ddcfc: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2ddcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ddd00: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2ddd00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ddd04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddd04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddd08: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddd08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddd0c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddd0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddd10: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddd10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddd14: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddd18: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddd18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddd1c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2ddd1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2ddd20: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2ddd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2ddd24: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDD24u;
    {
        const bool branch_taken_0x2ddd24 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDD24u;
        // 0x2ddd28: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddd24) {
            ctx->pc = 0x2DDD40u;
            goto label_2ddd40;
        }
    }
    ctx->pc = 0x2DDD2Cu;
    // 0x2ddd2c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2ddd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2ddd30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2ddd30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddd34: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddd34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddd38: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ddd38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddd3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2ddd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2ddd40:
    // 0x2ddd40: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2ddd40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddd44: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2ddd44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddd48: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2ddd48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddd4c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2ddd4cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddd50: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2ddd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ddd54: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2ddd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddd58: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2ddd58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ddd5c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x2ddd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddd60: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2ddd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ddd64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ddd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddd68: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2ddd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddd6c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2ddd6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ddd70: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2ddd70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2ddd74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2ddd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2ddd78: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2ddd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2ddd7c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2ddd7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ddd80: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2ddd80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ddd84: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2ddd84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2ddd88: 0xfa010090  sqc2        $vf1, 0x90($s0)
    ctx->pc = 0x2ddd88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ddd8c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2ddd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2ddd90: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2ddd90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ddd94: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2ddd94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddd98: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2ddd98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2ddd9c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2ddd9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2ddda0: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2ddda0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2ddda4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2ddda4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2ddda8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2ddda8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2dddac: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2dddacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2dddb0: 0xfa0500a0  sqc2        $vf5, 0xA0($s0)
    ctx->pc = 0x2dddb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2dddb4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2dddb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2dddb8:
    // 0x2dddb8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2dddb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dddbc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2dddbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dddc0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2dddc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2dddc4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2dddc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dddc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDDC8u;
        // 0x2dddcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDDD0u;
}
