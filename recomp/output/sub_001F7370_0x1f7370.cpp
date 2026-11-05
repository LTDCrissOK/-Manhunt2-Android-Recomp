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

// Function: sub_001F7370
// Address: 0x1f7370 - 0x1f7620
void sub_001F7370_0x1f7370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7370_0x1f7370");
#endif

    switch (ctx->pc) {
        case 0x1f7458u: goto label_1f7458;
        case 0x1f7578u: goto label_1f7578;
        case 0x1f75f4u: goto label_1f75f4;
        default: break;
    }

    ctx->pc = 0x1f7370u;

    // 0x1f7370: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7374: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f7378: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f7378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f737c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1f737cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7380: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x1f7380u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x1f7384: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f7384u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7388: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1f7388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1f738c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1f738cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1f7390: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x1f7390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x1f7394: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x1F7394u;
    {
        const bool branch_taken_0x1f7394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7394u;
        // 0x1f7398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7394) {
            ctx->pc = 0x1F7604u;
            goto label_1f7604;
        }
    }
    ctx->pc = 0x1F739Cu;
    // 0x1f739c: 0x24c200d0  addiu       $v0, $a2, 0xD0
    ctx->pc = 0x1f739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
    // 0x1f73a0: 0x24c300c0  addiu       $v1, $a2, 0xC0
    ctx->pc = 0x1f73a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 192));
    // 0x1f73a4: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x1f73a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f73a8: 0x24c400a0  addiu       $a0, $a2, 0xA0
    ctx->pc = 0x1f73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1f73ac: 0xc466000c  lwc1        $f6, 0xC($v1)
    ctx->pc = 0x1f73acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f73b0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1f73b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f73b4: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x1f73b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f73b8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f73bc: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f73c0: 0xc4c300c0  lwc1        $f3, 0xC0($a2)
    ctx->pc = 0x1f73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f73c4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1f73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f73c8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f73c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f73cc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1f73ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f73d0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1f73d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f73d4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1f73d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f73d8: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1f73d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f73dc: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x1f73dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f73e0: 0xe7a6001c  swc1        $f6, 0x1C($sp)
    ctx->pc = 0x1f73e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1f73e4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f73e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f73e8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1f73e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f73ec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f73ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f73f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f73f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f73f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f73f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f73f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f73f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f73fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f73fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f7400: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f7400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f7404: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1f7404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7408: 0xc4c100a0  lwc1        $f1, 0xA0($a2)
    ctx->pc = 0x1f7408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f740c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f740cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7410: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1f7410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f7414: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1f7414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7418: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f7418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f741c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1f741cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7420: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1f7420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f7424: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1f7424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7428: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1f7428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1f742c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f7430: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1f7430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f7434: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f7434u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7438: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f7438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f743c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f743cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7440: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f7440u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f7444: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f7444u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f7448: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f7448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f744c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7450: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F7450u;
    SET_GPR_U32(ctx, 31, 0x1F7458u);
    ctx->pc = 0x1F7454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7450u;
    // 0x1f7454: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F7450u, 0x1F7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7458u;
label_1f7458:
    // 0x1f7458: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1f7458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f745c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1f745cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7460: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1f7460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7464: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1f7464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7468: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x1f7468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f746c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1f746cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f7470: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1f7470u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1f7474: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1f7474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f7478: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x1f7478u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1f747c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f747cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7480: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f7480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7484: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f7484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f7488: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f7488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f748c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1f748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7490: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1f7490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7494: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1f7494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1f7498: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1f7498u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1f749c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f749cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f74a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f74a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f74a4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f74a4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1f74a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f74a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f74ac: 0x0  nop
    ctx->pc = 0x1f74acu;
    // NOP
    // 0x1f74b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F74B0u;
    {
        const bool branch_taken_0x1f74b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F74B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74B0u;
        // 0x1f74b4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74b0) {
            ctx->pc = 0x1F74D0u;
            goto label_1f74d0;
        }
    }
    ctx->pc = 0x1F74B8u;
    // 0x1f74b8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1f74b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f74bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f74bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1f74c0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f74c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f74c4: 0x0  nop
    ctx->pc = 0x1f74c4u;
    // NOP
    // 0x1f74c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F74C8u;
    {
        const bool branch_taken_0x1f74c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f74c8) {
            ctx->pc = 0x1F74CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F74C8u;
            // 0x1f74cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F74D0u;
            goto label_1f74d0;
        }
    }
    ctx->pc = 0x1F74D0u;
label_1f74d0:
    // 0x1f74d0: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F74D0u;
    {
        const bool branch_taken_0x1f74d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F74D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F74D0u;
        // 0x1f74d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f74d0) {
            ctx->pc = 0x1F7604u;
            goto label_1f7604;
        }
    }
    ctx->pc = 0x1F74D8u;
    // 0x1f74d8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1f74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f74dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f74dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f74e0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f74e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f74e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f74e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f74e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f74e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f74ec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f74ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f74f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f74f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f74f4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f74f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f74f8: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f74f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f74fc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f74fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7500: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x1f7500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7504: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f7504u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f7508: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f7508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f750c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x1f750cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7510: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f7510u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f7514: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f7514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7518: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x1f7518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f751c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1f751cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f7520: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f7520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f7524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7528: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f752c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f752cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7530: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1f7530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7534: 0x0  nop
    ctx->pc = 0x1f7534u;
    // NOP
    // 0x1f7538: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7538u;
    {
        const bool branch_taken_0x1f7538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7538u;
        // 0x1f753c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7538) {
            ctx->pc = 0x1F7548u;
            goto label_1f7548;
        }
    }
    ctx->pc = 0x1F7540u;
    // 0x1f7540: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7540u;
    {
        const bool branch_taken_0x1f7540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7540u;
        // 0x1f7544: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7540) {
            ctx->pc = 0x1F7558u;
            goto label_1f7558;
        }
    }
    ctx->pc = 0x1F7548u;
label_1f7548:
    // 0x1f7548: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1f7548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f754c: 0x0  nop
    ctx->pc = 0x1f754cu;
    // NOP
    // 0x1f7550: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F7550u;
    {
        const bool branch_taken_0x1f7550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7550) {
            ctx->pc = 0x1F7554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7550u;
            // 0x1f7554: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7558u;
            goto label_1f7558;
        }
    }
    ctx->pc = 0x1F7558u;
label_1f7558:
    // 0x1f7558: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1f7558u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1f755c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f755cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f7560: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f7560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7564: 0x0  nop
    ctx->pc = 0x1f7564u;
    // NOP
    // 0x1f7568: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1f7568u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1f756c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1f756cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f7570: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1F7570u;
    SET_GPR_U32(ctx, 31, 0x1F7578u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1F7570u, 0x1F7578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7578u;
label_1f7578:
    // 0x1f7578: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f7578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1f757c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1f757cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1f7580: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f7580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7584: 0x0  nop
    ctx->pc = 0x1f7584u;
    // NOP
    // 0x1f7588: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1f7588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f758c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1f758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7590: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1f7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7594: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f7594u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f7598: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1f7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f759c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f75a0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f75a0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f75a4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1f75a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f75a8: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1f75a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f75ac: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1f75acu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f75b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f75b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f75b4: 0x0  nop
    ctx->pc = 0x1f75b4u;
    // NOP
    // 0x1f75b8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1f75b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f75bc: 0x0  nop
    ctx->pc = 0x1f75bcu;
    // NOP
    // 0x1f75c0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F75C0u;
    {
        const bool branch_taken_0x1f75c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f75c0) {
            ctx->pc = 0x1F75D8u;
            goto label_1f75d8;
        }
    }
    ctx->pc = 0x1F75C8u;
    // 0x1f75c8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f75c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f75cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f75ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f75d0: 0x0  nop
    ctx->pc = 0x1f75d0u;
    // NOP
    // 0x1f75d4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f75d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f75d8:
    // 0x1f75d8: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f75d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f75dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f75dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f75e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f75e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f75e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f75e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f75e8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f75e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f75ec: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F75ECu;
    SET_GPR_U32(ctx, 31, 0x1F75F4u);
    ctx->pc = 0x1F75F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F75ECu;
    // 0x1f75f0: 0x460c0b00  add.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F75ECu, 0x1F75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F75F4u;
label_1f75f4:
    // 0x1f75f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f75f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f75f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f75f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f75fc: 0x38430168  xori        $v1, $v0, 0x168
    ctx->pc = 0x1f75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)360);
    // 0x1f7600: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1f7600u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1f7604:
    // 0x1f7604: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1f7604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7608: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1f7608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f760c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f760cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7610: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x1f7610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7614: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7614u;
        // 0x1f7618: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F761Cu;
    // 0x1f761c: 0x0  nop
    ctx->pc = 0x1f761cu;
    // NOP
    ctx->pc = 0x1f7620u;
}
