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

// Function: sub_00105358
// Address: 0x105358 - 0x1054f8
void sub_00105358_0x105358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105358_0x105358");
#endif

    switch (ctx->pc) {
        case 0x105438u: goto label_105438;
        case 0x105440u: goto label_105440;
        case 0x1054b4u: goto label_1054b4;
        default: break;
    }

    ctx->pc = 0x105358u;

    // 0x105358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x105358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10535c: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x10535cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x105360: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x105360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x105364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x105364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x105368: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x105368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x10536c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10536cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105370: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x105370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x105374: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x105374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x105378: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x105378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x10537c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10537cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x105380: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x105380u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x105384: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x105384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x105388: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x105388u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x10538c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10538cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x105390: 0x0  nop
    ctx->pc = 0x105390u;
    // NOP
    // 0x105394: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x105394u;
    {
        const bool branch_taken_0x105394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x105398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105394u;
        // 0x105398: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105394) {
            ctx->pc = 0x1053CCu;
            goto label_1053cc;
        }
    }
    ctx->pc = 0x10539Cu;
    // 0x10539c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x10539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1053a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1053a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1053a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1053a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1053a8: 0x0  nop
    ctx->pc = 0x1053a8u;
    // NOP
    // 0x1053ac: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1053ACu;
    {
        const bool branch_taken_0x1053ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1053ac) {
            ctx->pc = 0x1053CCu;
            goto label_1053cc;
        }
    }
    ctx->pc = 0x1053B4u;
    // 0x1053b4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1053b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1053b8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1053b8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1053bc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1053bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1053c0: 0x0  nop
    ctx->pc = 0x1053c0u;
    // NOP
    // 0x1053c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1053C4u;
    {
        const bool branch_taken_0x1053c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1053c4) {
            ctx->pc = 0x1053C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1053C4u;
            // 0x1053c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1053CCu;
            goto label_1053cc;
        }
    }
    ctx->pc = 0x1053CCu;
label_1053cc:
    // 0x1053cc: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1053CCu;
    {
        const bool branch_taken_0x1053cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1053D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1053CCu;
        // 0x1053d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1053cc) {
            ctx->pc = 0x1054D8u;
            goto label_1054d8;
        }
    }
    ctx->pc = 0x1053D4u;
    // 0x1053d4: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x1053d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1053d8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1053d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1053dc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1053dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1053e0: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1053e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1053e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1053e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1053e8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1053e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1053ec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1053ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1053f0: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1053f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1053f4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1053f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1053f8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1053f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1053fc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1053fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105400: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x105400u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105404: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x105404u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x105408: 0x4a0003bf  vwaitq
    ctx->pc = 0x105408u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10540c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x10540cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105410: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x105410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105414: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x105414u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x105418: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x105418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10541c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x10541cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x105420: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x105420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x105424: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x105424u;
    {
        const bool branch_taken_0x105424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105424u;
        // 0x105428: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105424) {
            ctx->pc = 0x1054D4u;
            goto label_1054d4;
        }
    }
    ctx->pc = 0x10542Cu;
    // 0x10542c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x10542cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x105430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105434: 0x0  nop
    ctx->pc = 0x105434u;
    // NOP
label_105438:
    // 0x105438: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x105438u;
    SET_GPR_U32(ctx, 31, 0x105440u);
    ctx->pc = 0x10543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105438u;
    // 0x10543c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x105438u, 0x105440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105440u;
label_105440:
    // 0x105440: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x105440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105444: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x105444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105448: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x105448u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10544c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x10544cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105450: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x105450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105454: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x105454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105458: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x105458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10545c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x10545cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105460: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x105460u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x105464: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x105464u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x105468: 0x4a0003bf  vwaitq
    ctx->pc = 0x105468u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10546c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x10546cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x105470: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x105470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105474: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x105474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105478: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x105478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10547c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x10547cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x105480: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x105480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105484: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x105484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105488: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x105488u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x10548c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x10548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x105490: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x105490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x105494: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x105494u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x105498: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x105498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10549c: 0x0  nop
    ctx->pc = 0x10549cu;
    // NOP
    // 0x1054a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1054A0u;
    {
        const bool branch_taken_0x1054a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1054A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054A0u;
        // 0x1054a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054a0) {
            ctx->pc = 0x1054C0u;
            goto label_1054c0;
        }
    }
    ctx->pc = 0x1054A8u;
    // 0x1054a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1054a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1054ac: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1054ACu;
    SET_GPR_U32(ctx, 31, 0x1054B4u);
    ctx->pc = 0x1054B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1054ACu;
    // 0x1054b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1054ACu, 0x1054B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1054B4u;
label_1054b4:
    // 0x1054b4: 0x90430014  lbu         $v1, 0x14($v0)
    ctx->pc = 0x1054b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1054b8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1054b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1054bc: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x1054bcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1054c0:
    // 0x1054c0: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x1054c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1054c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1054c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1054c8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1054c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1054cc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1054CCu;
    {
        const bool branch_taken_0x1054cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1054D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054CCu;
        // 0x1054d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1054cc) {
            ctx->pc = 0x105438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105438;
        }
    }
    ctx->pc = 0x1054D4u;
label_1054d4:
    // 0x1054d4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1054d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1054d8:
    // 0x1054d8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1054d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1054dc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1054dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1054e0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1054e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1054e4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1054e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1054e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1054e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1054ec: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1054ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1054f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1054F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1054F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1054F0u;
        // 0x1054f4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1054F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1054F8u;
}
