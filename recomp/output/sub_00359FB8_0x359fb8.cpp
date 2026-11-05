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

// Function: sub_00359FB8
// Address: 0x359fb8 - 0x35b130
void sub_00359FB8_0x359fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359FB8_0x359fb8");
#endif

    switch (ctx->pc) {
        case 0x35a15cu: goto label_35a15c;
        case 0x35a2c0u: goto label_35a2c0;
        case 0x35a32cu: goto label_35a32c;
        case 0x35a408u: goto label_35a408;
        case 0x35a414u: goto label_35a414;
        case 0x35a470u: goto label_35a470;
        case 0x35a480u: goto label_35a480;
        case 0x35a4ecu: goto label_35a4ec;
        case 0x35a5c0u: goto label_35a5c0;
        case 0x35a5c8u: goto label_35a5c8;
        case 0x35a5dcu: goto label_35a5dc;
        case 0x35a5f0u: goto label_35a5f0;
        case 0x35a5f8u: goto label_35a5f8;
        case 0x35a608u: goto label_35a608;
        case 0x35a614u: goto label_35a614;
        case 0x35a658u: goto label_35a658;
        case 0x35a664u: goto label_35a664;
        case 0x35a710u: goto label_35a710;
        case 0x35a718u: goto label_35a718;
        case 0x35a720u: goto label_35a720;
        case 0x35a728u: goto label_35a728;
        case 0x35a730u: goto label_35a730;
        case 0x35a738u: goto label_35a738;
        case 0x35a7a4u: goto label_35a7a4;
        case 0x35a878u: goto label_35a878;
        case 0x35a9a0u: goto label_35a9a0;
        case 0x35a9fcu: goto label_35a9fc;
        case 0x35aaa4u: goto label_35aaa4;
        case 0x35ac64u: goto label_35ac64;
        case 0x35ad50u: goto label_35ad50;
        case 0x35ad58u: goto label_35ad58;
        case 0x35ade4u: goto label_35ade4;
        case 0x35adf8u: goto label_35adf8;
        case 0x35ae00u: goto label_35ae00;
        case 0x35ae2cu: goto label_35ae2c;
        case 0x35ae38u: goto label_35ae38;
        case 0x35ae40u: goto label_35ae40;
        case 0x35ae48u: goto label_35ae48;
        case 0x35ae5cu: goto label_35ae5c;
        case 0x35ae70u: goto label_35ae70;
        case 0x35ae7cu: goto label_35ae7c;
        case 0x35ae8cu: goto label_35ae8c;
        case 0x35ae98u: goto label_35ae98;
        case 0x35aeacu: goto label_35aeac;
        case 0x35aec0u: goto label_35aec0;
        case 0x35aed0u: goto label_35aed0;
        case 0x35aedcu: goto label_35aedc;
        case 0x35aef0u: goto label_35aef0;
        case 0x35aef8u: goto label_35aef8;
        case 0x35af04u: goto label_35af04;
        case 0x35af18u: goto label_35af18;
        case 0x35b098u: goto label_35b098;
        case 0x35b0b0u: goto label_35b0b0;
        case 0x35b0e0u: goto label_35b0e0;
        default: break;
    }

    ctx->pc = 0x359fb8u;

    // 0x359fb8: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x359fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
    // 0x359fbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x359fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x359fc0: 0xffb702d8  sd          $s7, 0x2D8($sp)
    ctx->pc = 0x359fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 23));
    // 0x359fc4: 0xffb002a0  sd          $s0, 0x2A0($sp)
    ctx->pc = 0x359fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 16));
    // 0x359fc8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x359fc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fcc: 0xffb102a8  sd          $s1, 0x2A8($sp)
    ctx->pc = 0x359fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 17));
    // 0x359fd0: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x359fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x359fd4: 0xffb302b8  sd          $s3, 0x2B8($sp)
    ctx->pc = 0x359fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 19));
    // 0x359fd8: 0xffb402c0  sd          $s4, 0x2C0($sp)
    ctx->pc = 0x359fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 20));
    // 0x359fdc: 0xffb502c8  sd          $s5, 0x2C8($sp)
    ctx->pc = 0x359fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 21));
    // 0x359fe0: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x359fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x359fe4: 0xffbe02e0  sd          $fp, 0x2E0($sp)
    ctx->pc = 0x359fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 30));
    // 0x359fe8: 0xffbf02e8  sd          $ra, 0x2E8($sp)
    ctx->pc = 0x359fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 31));
    // 0x359fec: 0xe7b502f8  swc1        $f21, 0x2F8($sp)
    ctx->pc = 0x359fecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
    // 0x359ff0: 0xe7b402f0  swc1        $f20, 0x2F0($sp)
    ctx->pc = 0x359ff0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 752), bits); }
    // 0x359ff4: 0xc6e80040  lwc1        $f8, 0x40($s7)
    ctx->pc = 0x359ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x359ff8: 0x46014032  c.eq.s      $f8, $f1
    ctx->pc = 0x359ff8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[8], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359ffc: 0x0  nop
    ctx->pc = 0x359ffcu;
    // NOP
    // 0x35a000: 0x4501043e  bc1t        . + 4 + (0x43E << 2)
    ctx->pc = 0x35A000u;
    {
        const bool branch_taken_0x35a000 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A000u;
        // 0x35a004: 0xdfb002a0  ld          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a000) {
            ctx->pc = 0x35B0FCu;
            goto label_35b0fc;
        }
    }
    ctx->pc = 0x35A008u;
    // 0x35a008: 0x26e20020  addiu       $v0, $s7, 0x20
    ctx->pc = 0x35a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x35a00c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x35a00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a010: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x35a010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a014: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x35a014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a018: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35a018u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x35a01c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35a01cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x35a020: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x35a020u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x35a024: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x35a024u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a028: 0x0  nop
    ctx->pc = 0x35a028u;
    // NOP
    // 0x35a02c: 0x45010432  bc1t        . + 4 + (0x432 << 2)
    ctx->pc = 0x35A02Cu;
    {
        const bool branch_taken_0x35a02c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A02Cu;
        // 0x35a030: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a02c) {
            ctx->pc = 0x35B0F8u;
            goto label_35b0f8;
        }
    }
    ctx->pc = 0x35A034u;
    // 0x35a034: 0xc6e00020  lwc1        $f0, 0x20($s7)
    ctx->pc = 0x35a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a038: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x35a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a03c: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x35a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a040: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x35a040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a044: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35a044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35a048: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35a048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35a04c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x35a04cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x35a050: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x35a050u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x35a054: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35a054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a058: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35a058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35a05c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35a05cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35a060: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35a060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35a064: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35a064u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x35a068: 0x4a0003bf  vwaitq
    ctx->pc = 0x35a068u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x35a06c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35a06cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a070: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x35a070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a074: 0x6ae20077  ldl         $v0, 0x77($s7)
    ctx->pc = 0x35a074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35a078: 0x6ee20070  ldr         $v0, 0x70($s7)
    ctx->pc = 0x35a078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35a07c: 0x6ae3007f  ldl         $v1, 0x7F($s7)
    ctx->pc = 0x35a07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35a080: 0x6ee30078  ldr         $v1, 0x78($s7)
    ctx->pc = 0x35a080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35a084: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x35a084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35a088: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x35a088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35a08c: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x35a08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35a090: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x35a090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35a094: 0x26f20010  addiu       $s2, $s7, 0x10
    ctx->pc = 0x35a094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x35a098: 0xc6e10080  lwc1        $f1, 0x80($s7)
    ctx->pc = 0x35a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a09c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x35a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a0a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35a0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35a0a4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x35a0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x35a0a8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x35a0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x35a0ac: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x35a0acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35a0b0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a0b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a0b4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x35a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a0b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x35a0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x35a0bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x35a0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x35a0c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35a0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35a0c4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x35a0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35a0c8: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x35a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x35a0cc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x35a0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a0d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x35a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a0d4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x35a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a0d8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x35a0d8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x35a0dc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x35a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a0e0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35a0e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35a0e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35a0e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35a0e8: 0xc7a70030  lwc1        $f7, 0x30($sp)
    ctx->pc = 0x35a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35a0ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35a0ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35a0f0: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x35a0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a0f4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x35a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a0f8: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x35a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35a0fc: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x35a0fcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x35a100: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x35a100u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x35a104: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x35a104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x35a108: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x35a108u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x35a10c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x35a10cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35a110: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x35a110u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x35a114: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x35a114u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35a118: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x35a118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x35a11c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a11cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a120: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35a120u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35a124: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a128: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x35a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a12c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x35a12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a130: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x35a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a134: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x35a134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a138: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35a138u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x35a13c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35a13cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x35a140: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x35a140u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x35a144: 0x46140504  c1          0x140504
    ctx->pc = 0x35a144u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x35a148: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x35a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x35a14c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x35a14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x35a150: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35a150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a154: 0xc0e3fd4  jal         func_38FF50
    ctx->pc = 0x35A154u;
    SET_GPR_U32(ctx, 31, 0x35A15Cu);
    ctx->pc = 0x35A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A154u;
    // 0x35a158: 0x460c4302  mul.s       $f12, $f8, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF50u, 0x35A154u, 0x35A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A15Cu;
label_35a15c:
    // 0x35a15c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x35a15cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x35a160: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35a160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x35a164: 0x24445b30  addiu       $a0, $v0, 0x5B30
    ctx->pc = 0x35a164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
    // 0x35a168: 0xe6f40060  swc1        $f20, 0x60($s7)
    ctx->pc = 0x35a168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 96), bits); }
    // 0x35a16c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x35a16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a170: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x35a170u;
    { uint32_t bits = FAST_READ32(0x575B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a174: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x35a174u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35a178: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x35a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a17c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x35a17cu;
    { uint32_t bits = FAST_READ32(0x575B34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a180: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x35a180u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x35a184: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x35a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a188: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x35a188u;
    { uint32_t bits = FAST_READ32(0x575B38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a18c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x35a18cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35a190: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x35a190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x35a194: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x35a194u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x35a198: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x35a198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
    // 0x35a19c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x35a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a1a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x35a1a0u;
    { uint32_t bits = FAST_READ32(0x575B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a1a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x35a1a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35a1a8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x35a1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a1ac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x35a1acu;
    { uint32_t bits = FAST_READ32(0x575B54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a1b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x35a1b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x35a1b4: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x35a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a1b8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x35a1b8u;
    { uint32_t bits = FAST_READ32(0x575B58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a1bc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x35a1bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35a1c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x35a1c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x35a1c4: 0xafb2025c  sw          $s2, 0x25C($sp)
    ctx->pc = 0x35a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 18));
    // 0x35a1c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35a1c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a1cc: 0x0  nop
    ctx->pc = 0x35a1ccu;
    // NOP
    // 0x35a1d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x35A1D0u;
    {
        const bool branch_taken_0x35a1d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x35A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A1D0u;
        // 0x35a1d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a1d0) {
            ctx->pc = 0x35A1DCu;
            goto label_35a1dc;
        }
    }
    ctx->pc = 0x35A1D8u;
    // 0x35a1d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35a1d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35a1dc:
    // 0x35a1dc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35A1DCu;
    {
        const bool branch_taken_0x35a1dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35a1dc) {
            ctx->pc = 0x35A1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A1DCu;
            // 0x35a1e0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A1E4u;
            goto label_35a1e4;
        }
    }
    ctx->pc = 0x35A1E4u;
label_35a1e4:
    // 0x35a1e4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x35a1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a1e8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x35a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35a1ec: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x35a1ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35a1f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35a1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a1f4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x35a1f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x35a1f8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x35a1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a1fc: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x35a1fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35a200: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x35a200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a204: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x35a204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x35a208: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35a208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35a20c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x35a20cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35a210: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35a210u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35a214: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x35a214u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a218: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x35a218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a21c: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x35a21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a220: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x35a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a224: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x35a224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a228: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x35a228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a22c: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x35a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a230: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x35a230u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35a234: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x35a234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x35a238: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x35a238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35a23c: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x35a23cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x35a240: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35a240u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a244: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35a244u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35a248: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35a248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35a24c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35a24cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35a250: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35a250u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x35a254: 0x4a0003bf  vwaitq
    ctx->pc = 0x35a254u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x35a258: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35a258u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a25c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a260: 0xc6e00060  lwc1        $f0, 0x60($s7)
    ctx->pc = 0x35a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a264: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x35a264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x35a268: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35a268u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a26c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x35a26cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x35a270: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35a270u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a274: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x35a274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a278: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35a278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35a27c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x35a27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a280: 0x8c42bd48  lw          $v0, -0x42B8($v0)
    ctx->pc = 0x35a280u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x35a284: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x35a284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x35a288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a28c: 0x8fa30230  lw          $v1, 0x230($sp)
    ctx->pc = 0x35a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x35a290: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x35a290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x35a294: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x35a294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x35a298: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x35a298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a29c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x35a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x35a2a0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x35a2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x35a2a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x35a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a2a8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x35a2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x35a2ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x35a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a2b0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x35a2b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x35a2b4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x35a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a2b8: 0xc0d6c4c  jal         func_35B130
    ctx->pc = 0x35A2B8u;
    SET_GPR_U32(ctx, 31, 0x35A2C0u);
    ctx->pc = 0x35A2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A2B8u;
    // 0x35a2bc: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B130u, 0x35A2B8u, 0x35A2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A2C0u;
label_35a2c0:
    // 0x35a2c0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x35a2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a2c4: 0x0  nop
    ctx->pc = 0x35a2c4u;
    // NOP
    // 0x35a2c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x35a2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a2cc: 0x0  nop
    ctx->pc = 0x35a2ccu;
    // NOP
    // 0x35a2d0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x35A2D0u;
    {
        const bool branch_taken_0x35a2d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35a2d0) {
            ctx->pc = 0x35A2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35A2D0u;
            // 0x35a2d4: 0xafa00234  sw          $zero, 0x234($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35A2D8u;
            goto label_35a2d8;
        }
    }
    ctx->pc = 0x35A2D8u;
label_35a2d8:
    // 0x35a2d8: 0x92e20064  lbu         $v0, 0x64($s7)
    ctx->pc = 0x35a2d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 100)));
    // 0x35a2dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x35A2DCu;
    {
        const bool branch_taken_0x35a2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A2DCu;
        // 0x35a2e0: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a2dc) {
            ctx->pc = 0x35A320u;
            goto label_35a320;
        }
    }
    ctx->pc = 0x35A2E4u;
    // 0x35a2e4: 0x26e20030  addiu       $v0, $s7, 0x30
    ctx->pc = 0x35a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x35a2e8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x35a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a2ec: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x35a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a2f0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x35a2f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35a2f4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x35a2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a2f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x35a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a2fc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x35a2fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x35a300: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x35a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a304: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x35a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a308: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x35a308u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35a30c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x35a30cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35a310: 0x0  nop
    ctx->pc = 0x35a310u;
    // NOP
    // 0x35a314: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x35A314u;
    {
        const bool branch_taken_0x35a314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A314u;
        // 0x35a318: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a314) {
            ctx->pc = 0x35A320u;
            goto label_35a320;
        }
    }
    ctx->pc = 0x35A31Cu;
    // 0x35a31c: 0xafa40238  sw          $a0, 0x238($sp)
    ctx->pc = 0x35a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 4));
label_35a320:
    // 0x35a320: 0x24042400  addiu       $a0, $zero, 0x2400
    ctx->pc = 0x35a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
    // 0x35a324: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x35A324u;
    SET_GPR_U32(ctx, 31, 0x35A32Cu);
    ctx->pc = 0x35A328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A324u;
    // 0x35a328: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x35A324u, 0x35A32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A32Cu;
label_35a32c:
    // 0x35a32c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35a32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35a330: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x35a330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x35a334: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35a334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35a338: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x35a338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x35a33c: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x35a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x35a340: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x35a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x35a344: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x35a344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a348: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x35a348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x35a34c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x35a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a350: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x35a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x35a354: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x35a354u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x35a358: 0xafa50264  sw          $a1, 0x264($sp)
    ctx->pc = 0x35a358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
    // 0x35a35c: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x35a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x35a360: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x35a360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35a364: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x35a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a368: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x35a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x35a36c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x35a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a370: 0x27a201e0  addiu       $v0, $sp, 0x1E0
    ctx->pc = 0x35a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x35a374: 0xafa30274  sw          $v1, 0x274($sp)
    ctx->pc = 0x35a374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 3));
    // 0x35a378: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x35a378u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x35a37c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35a37cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35a380: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x35a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35a384: 0xafa50284  sw          $a1, 0x284($sp)
    ctx->pc = 0x35a384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 5));
    // 0x35a388: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x35a388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x35a38c: 0xafa40268  sw          $a0, 0x268($sp)
    ctx->pc = 0x35a38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
    // 0x35a390: 0x27be00e0  addiu       $fp, $sp, 0xE0
    ctx->pc = 0x35a390u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x35a394: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x35a394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x35a398: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x35a398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x35a39c: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x35a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x35a3a0: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a3a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35a3a4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x35a3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35a3a8: 0xafa40278  sw          $a0, 0x278($sp)
    ctx->pc = 0x35a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 4));
    // 0x35a3ac: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35a3b0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x35a3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35a3b4: 0xafa6026c  sw          $a2, 0x26C($sp)
    ctx->pc = 0x35a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 6));
    // 0x35a3b8: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a3b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35a3bc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x35a3bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35a3c0: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x35a3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x35a3c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35a3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35a3c8: 0xafa6027c  sw          $a2, 0x27C($sp)
    ctx->pc = 0x35a3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 6));
    // 0x35a3cc: 0x5b600  sll         $s6, $a1, 24
    ctx->pc = 0x35a3ccu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x35a3d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35a3d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35a3d4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x35a3d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35a3d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35a3dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x35a3dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x35a3e0: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x35a3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x35a3e4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x35a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x35a3e8: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x35a3e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35a3ec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x35a3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x35a3f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35a3f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x35a3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x35a3f8: 0x27b500b0  addiu       $s5, $sp, 0xB0
    ctx->pc = 0x35a3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35a3fc: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x35a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x35a400: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x35a400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35a404: 0x0  nop
    ctx->pc = 0x35a404u;
    // NOP
label_35a408:
    // 0x35a408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a40c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A40Cu;
    SET_GPR_U32(ctx, 31, 0x35A414u);
    ctx->pc = 0x35A410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A40Cu;
    // 0x35a410: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A40Cu, 0x35A414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A414u;
label_35a414:
    // 0x35a414: 0x0  nop
    ctx->pc = 0x35a414u;
    // NOP
    // 0x35a418: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35A418u;
    {
        const bool branch_taken_0x35a418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x35A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A418u;
        // 0x35a41c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a418) {
            ctx->pc = 0x35A408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a408;
        }
    }
    ctx->pc = 0x35A420u;
    // 0x35a420: 0xc6e00060  lwc1        $f0, 0x60($s7)
    ctx->pc = 0x35a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35a424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a428: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x35a428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a42c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x35a42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35a430: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x35a430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a434: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x35a434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a438: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x35a438u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35a43c: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x35a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a440: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35a444: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x35a444u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35a448: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x35a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x35a44c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x35a44cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x35a450: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x35a450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x35a454: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x35a454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x35a458: 0xe7a300a0  swc1        $f3, 0xA0($sp)
    ctx->pc = 0x35a458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x35a45c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x35a45cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x35a460: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x35a460u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x35a464: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x35a464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x35a468: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x35a468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35a46c: 0x0  nop
    ctx->pc = 0x35a46cu;
    // NOP
label_35a470:
    // 0x35a470: 0x0  nop
    ctx->pc = 0x35a470u;
    // NOP
    // 0x35a474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a478: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x35A478u;
    SET_GPR_U32(ctx, 31, 0x35A480u);
    ctx->pc = 0x35A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A478u;
    // 0x35a47c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x35A478u, 0x35A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A480u;
label_35a480:
    // 0x35a480: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x35a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a484: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x35a484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a488: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x35a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a48c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x35a48cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35a490: 0xc7a4004c  lwc1        $f4, 0x4C($sp)
    ctx->pc = 0x35a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a494: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35a498: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x35a498u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35a49c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x35a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x35a4a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x35a4a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x35a4a4: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x35a4a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x35a4a8: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x35a4a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x35a4ac: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x35a4acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x35a4b0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x35a4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x35a4b4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35a4b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35a4b8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35a4b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a4bc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a4bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a4c0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x35a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a4c4: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x35a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a4c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a4c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a4cc: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x35a4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a4d0: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x35a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a4d4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x35a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a4d8: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x35a4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x35a4dc: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x35a4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x35a4e0: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x35a4e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x35a4e4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x35A4E4u;
    SET_GPR_U32(ctx, 31, 0x35A4ECu);
    ctx->pc = 0x35A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A4E4u;
    // 0x35a4e8: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x35A4E4u, 0x35A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A4ECu;
label_35a4ec:
    // 0x35a4ec: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x35a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a4f0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x35a4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a4f4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x35a4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a4f8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x35a4f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35a4fc: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x35a4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a500: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x35a500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35a504: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x35a504u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35a508: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x35a508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x35a50c: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x35a50cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x35a510: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x35a510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x35a514: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x35a514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x35a518: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x35a518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x35a51c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35a51cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35a520: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x35a520u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35a524: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a528: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x35a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a52c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x35a52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a530: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x35a530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a534: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x35a534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a538: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x35a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a53c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35a53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x35a540: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x35a540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x35a544: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x35a544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x35a548: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x35a548u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x35a54c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x35a54cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35a550: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a550u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a554: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x35a554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x35a558: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x35a558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x35a55c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x35A55Cu;
    {
        const bool branch_taken_0x35a55c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A55Cu;
        // 0x35a560: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a55c) {
            ctx->pc = 0x35A470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a470;
        }
    }
    ctx->pc = 0x35A564u;
    // 0x35a564: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x35a564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35a568: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35a568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35a56c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x35a56cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a570: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a570u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a574: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x35a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a578: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x35a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a57c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x35a57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a580: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x35a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a584: 0xc7a500cc  lwc1        $f5, 0xCC($sp)
    ctx->pc = 0x35a584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35a588: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x35a588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x35a58c: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x35a58cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x35a590: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x35a590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x35a594: 0xe7a500bc  swc1        $f5, 0xBC($sp)
    ctx->pc = 0x35a594u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x35a598: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x35a598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a59c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x35a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a5a0: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x35a5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35a5a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x35a5a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x35a5a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x35a5a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x35a5ac: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x35a5acu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x35a5b0: 0x46140504  c1          0x140504
    ctx->pc = 0x35a5b0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x35a5b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35a5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5b8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x35A5B8u;
    SET_GPR_U32(ctx, 31, 0x35A5C0u);
    ctx->pc = 0x35A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5B8u;
    // 0x35a5bc: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35A5B8u, 0x35A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5C0u;
label_35a5c0:
    // 0x35a5c0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x35A5C0u;
    SET_GPR_U32(ctx, 31, 0x35A5C8u);
    ctx->pc = 0x35A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5C0u;
    // 0x35a5c4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35A5C0u, 0x35A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5C8u;
label_35a5c8:
    // 0x35a5c8: 0x3c0141b4  lui         $at, 0x41B4
    ctx->pc = 0x35a5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16820 << 16));
    // 0x35a5cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35a5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a5d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x35a5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5d4: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x35A5D4u;
    SET_GPR_U32(ctx, 31, 0x35A5DCu);
    ctx->pc = 0x35A5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5D4u;
    // 0x35a5d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x35A5D4u, 0x35A5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5DCu;
label_35a5dc:
    // 0x35a5dc: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x35a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x35a5e0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x35a5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x35a5e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35a5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35a5e8: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x35A5E8u;
    SET_GPR_U32(ctx, 31, 0x35A5F0u);
    ctx->pc = 0x35A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A5E8u;
    // 0x35a5ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x35A5E8u, 0x35A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A5F0u;
label_35a5f0:
    // 0x35a5f0: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x35a5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x35a5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35a5f8:
    // 0x35a5f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5fc: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x35a5fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35a600: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x35a600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x35a604: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x35a604u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_35a608:
    // 0x35a608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a60c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A60Cu;
    SET_GPR_U32(ctx, 31, 0x35A614u);
    ctx->pc = 0x35A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A60Cu;
    // 0x35a610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A60Cu, 0x35A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A614u;
label_35a614:
    // 0x35a614: 0x0  nop
    ctx->pc = 0x35a614u;
    // NOP
    // 0x35a618: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35A618u;
    {
        const bool branch_taken_0x35a618 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x35A61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A618u;
        // 0x35a61c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a618) {
            ctx->pc = 0x35A608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a608;
        }
    }
    ctx->pc = 0x35A620u;
    // 0x35a620: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x35a620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a624: 0x1454fff4  bne         $v0, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x35A624u;
    {
        const bool branch_taken_0x35a624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x35A628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A624u;
        // 0x35a628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a624) {
            ctx->pc = 0x35A5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a5f8;
        }
    }
    ctx->pc = 0x35A62Cu;
    // 0x35a62c: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x35a62cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35a630: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35a630u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a634: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x35a634u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35a638: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x35a638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35a63c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x35a63cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35a640: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x35a640u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35a644: 0x7fa50140  sq          $a1, 0x140($sp)
    ctx->pc = 0x35a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 5));
    // 0x35a648: 0x7fa40150  sq          $a0, 0x150($sp)
    ctx->pc = 0x35a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 4));
    // 0x35a64c: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x35a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x35a650: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x35a650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
    // 0x35a654: 0x0  nop
    ctx->pc = 0x35a654u;
    // NOP
label_35a658:
    // 0x35a658: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x35a658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x35a65c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A65Cu;
    SET_GPR_U32(ctx, 31, 0x35A664u);
    ctx->pc = 0x35A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A65Cu;
    // 0x35a660: 0x138100  sll         $s0, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A65Cu, 0x35A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A664u;
label_35a664:
    // 0x35a664: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x35a664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35a668: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x35a668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35a66c: 0xdaa30010  lqc2        $vf3, 0x10($s5)
    ctx->pc = 0x35a66cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x35a670: 0xdaa40020  lqc2        $vf4, 0x20($s5)
    ctx->pc = 0x35a670u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x35a674: 0xdaa50030  lqc2        $vf5, 0x30($s5)
    ctx->pc = 0x35a674u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x35a678: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x35a678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35a67c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x35a67cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35a680: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x35a680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35a684: 0xfba501c0  sqc2        $vf5, 0x1C0($sp)
    ctx->pc = 0x35a684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35a688: 0xc7a301c0  lwc1        $f3, 0x1C0($sp)
    ctx->pc = 0x35a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a68c: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x35a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x35a690: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x35a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a694: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x35a694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a698: 0x908021  addu        $s0, $a0, $s0
    ctx->pc = 0x35a698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x35a69c: 0xc7a201cc  lwc1        $f2, 0x1CC($sp)
    ctx->pc = 0x35a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a6a0: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x35a6a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x35a6a4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x35a6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x35a6a8: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x35a6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x35a6ac: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x35a6acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x35a6b0: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x35a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x35a6b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35a6b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35a6b8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a6bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35a6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35a6c0: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x35a6c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x35a6c4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x35A6C4u;
    {
        const bool branch_taken_0x35a6c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A6C4u;
        // 0x35a6c8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a6c4) {
            ctx->pc = 0x35A658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a658;
        }
    }
    ctx->pc = 0x35A6CCu;
    // 0x35a6cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a6d0: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x35a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35a6d4: 0xafa60248  sw          $a2, 0x248($sp)
    ctx->pc = 0x35a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 6));
    // 0x35a6d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a6dc: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x35a6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x35a6e0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x35a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x35a6e4: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x35a6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x35a6e8: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x35a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
    // 0x35a6ec: 0xafa0024c  sw          $zero, 0x24C($sp)
    ctx->pc = 0x35a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 0));
    // 0x35a6f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35a6f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6f4: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x35a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x35a6f8: 0xafa30254  sw          $v1, 0x254($sp)
    ctx->pc = 0x35a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 3));
    // 0x35a6fc: 0xafa40258  sw          $a0, 0x258($sp)
    ctx->pc = 0x35a6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 4));
    // 0x35a700: 0x8fb2023c  lw          $s2, 0x23C($sp)
    ctx->pc = 0x35a700u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x35a704: 0xafa50294  sw          $a1, 0x294($sp)
    ctx->pc = 0x35a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 5));
    // 0x35a708: 0xafa60290  sw          $a2, 0x290($sp)
    ctx->pc = 0x35a708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 6));
    // 0x35a70c: 0x0  nop
    ctx->pc = 0x35a70cu;
    // NOP
label_35a710:
    // 0x35a710: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A710u;
    SET_GPR_U32(ctx, 31, 0x35A718u);
    ctx->pc = 0x35A714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A710u;
    // 0x35a714: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A710u, 0x35A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A718u;
label_35a718:
    // 0x35a718: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A718u;
    SET_GPR_U32(ctx, 31, 0x35A720u);
    ctx->pc = 0x35A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A718u;
    // 0x35a71c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A718u, 0x35A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A720u;
label_35a720:
    // 0x35a720: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A720u;
    SET_GPR_U32(ctx, 31, 0x35A728u);
    ctx->pc = 0x35A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A720u;
    // 0x35a724: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A720u, 0x35A728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A728u;
label_35a728:
    // 0x35a728: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A728u;
    SET_GPR_U32(ctx, 31, 0x35A730u);
    ctx->pc = 0x35A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A728u;
    // 0x35a72c: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A728u, 0x35A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A730u;
label_35a730:
    // 0x35a730: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35A730u;
    SET_GPR_U32(ctx, 31, 0x35A738u);
    ctx->pc = 0x35A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A730u;
    // 0x35a734: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35A730u, 0x35A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A738u;
label_35a738:
    // 0x35a738: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x35a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x35a73c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x35A73Cu;
    {
        const bool branch_taken_0x35a73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A73Cu;
        // 0x35a740: 0x8fa30244  lw          $v1, 0x244($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a73c) {
            ctx->pc = 0x35A7B8u;
            goto label_35a7b8;
        }
    }
    ctx->pc = 0x35A744u;
    // 0x35a744: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x35a744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x35a748: 0x38180  sll         $s0, $v1, 6
    ctx->pc = 0x35a748u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x35a74c: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x35a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x35a750: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x35a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x35a754: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a758: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35a758u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35a75c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a75cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a760: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x35a760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a764: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x35a764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a768: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x35a768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x35a76c: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x35a76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a770: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x35a770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a774: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x35a774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a778: 0x26e80030  addiu       $t0, $s7, 0x30
    ctx->pc = 0x35a778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x35a77c: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x35a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a780: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a784: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x35a784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x35a788: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x35a788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a78c: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x35a78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x35a790: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x35a790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x35a794: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x35a794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x35a798: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x35a798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x35a79c: 0xc0d6746  jal         func_359D18
    ctx->pc = 0x35A79Cu;
    SET_GPR_U32(ctx, 31, 0x35A7A4u);
    ctx->pc = 0x35A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A79Cu;
    // 0x35a7a0: 0xe7a3021c  swc1        $f3, 0x21C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D18u, 0x35A79Cu, 0x35A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A7A4u;
label_35a7a4:
    // 0x35a7a4: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x35a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x35a7a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35a7a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35a7ac: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x35a7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a7b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35A7B0u;
    {
        const bool branch_taken_0x35a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A7B0u;
        // 0x35a7b4: 0xafb0028c  sw          $s0, 0x28C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a7b0) {
            ctx->pc = 0x35A80Cu;
            goto label_35a80c;
        }
    }
    ctx->pc = 0x35A7B8u;
label_35a7b8:
    // 0x35a7b8: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x35a7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x35a7bc: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x35a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x35a7c0: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x35a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x35a7c4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x35a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35a7c8: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x35a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x35a7cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a7ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a7d0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35a7d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35a7d4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a7d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a7d8: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x35a7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a7dc: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x35a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a7e0: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x35a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a7e4: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x35a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a7e8: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x35a7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a7ec: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x35a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x35a7f0: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x35a7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x35a7f4: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x35a7f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x35a7f8: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x35a7f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x35a7fc: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x35a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35a800: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35a800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35a804: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x35a804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a808: 0xafa3028c  sw          $v1, 0x28C($sp)
    ctx->pc = 0x35a808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 3));
label_35a80c:
    // 0x35a80c: 0x8fa60238  lw          $a2, 0x238($sp)
    ctx->pc = 0x35a80cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x35a810: 0x10c0001e  beqz        $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x35A810u;
    {
        const bool branch_taken_0x35a810 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A810u;
        // 0x35a814: 0x8fa20248  lw          $v0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a810) {
            ctx->pc = 0x35A88Cu;
            goto label_35a88c;
        }
    }
    ctx->pc = 0x35A818u;
    // 0x35a818: 0x8fa30254  lw          $v1, 0x254($sp)
    ctx->pc = 0x35a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x35a81c: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x35a81cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x35a820: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x35a820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x35a824: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x35a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x35a828: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a82c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x35a82cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a830: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a834: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x35a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a838: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x35a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a83c: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x35a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x35a840: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x35a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a844: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x35a844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a848: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x35a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a84c: 0x26e80030  addiu       $t0, $s7, 0x30
    ctx->pc = 0x35a84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x35a850: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x35a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a854: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a858: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x35a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x35a85c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x35a85cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a860: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x35a860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x35a864: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x35a864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x35a868: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x35a868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x35a86c: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x35a86cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x35a870: 0xc0d6746  jal         func_359D18
    ctx->pc = 0x35A870u;
    SET_GPR_U32(ctx, 31, 0x35A878u);
    ctx->pc = 0x35A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A870u;
    // 0x35a874: 0xe7a3021c  swc1        $f3, 0x21C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D18u, 0x35A870u, 0x35A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A878u;
label_35a878:
    // 0x35a878: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x35a878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x35a87c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35a87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35a880: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x35a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a884: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x35A884u;
    {
        const bool branch_taken_0x35a884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A884u;
        // 0x35a888: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a884) {
            ctx->pc = 0x35A8DCu;
            goto label_35a8dc;
        }
    }
    ctx->pc = 0x35A88Cu;
label_35a88c:
    // 0x35a88c: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x35a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x35a890: 0x8fa6025c  lw          $a2, 0x25C($sp)
    ctx->pc = 0x35a890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x35a894: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x35a894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x35a898: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x35a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x35a89c: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x35a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x35a8a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a8a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a8a4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x35a8a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35a8a8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a8a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a8ac: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x35a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a8b0: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x35a8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a8b4: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x35a8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a8b8: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x35a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a8bc: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x35a8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a8c0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x35a8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x35a8c4: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x35a8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x35a8c8: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x35a8c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x35a8cc: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x35a8ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x35a8d0: 0x8fa20284  lw          $v0, 0x284($sp)
    ctx->pc = 0x35a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35a8d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35a8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35a8d8: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x35a8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
label_35a8dc:
    // 0x35a8dc: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x35a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x35a8e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x35a8e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x35a8e4: 0xc6e00010  lwc1        $f0, 0x10($s7)
    ctx->pc = 0x35a8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a8e8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x35a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35a8ec: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x35a8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x35a8f0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35a8f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a8f4: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x35a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x35a8f8: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x35a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x35a8fc: 0xc6e10014  lwc1        $f1, 0x14($s7)
    ctx->pc = 0x35a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a900: 0x800013  mtlo        $a0
    ctx->pc = 0x35a900u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x35a904: 0xc6e20018  lwc1        $f2, 0x18($s7)
    ctx->pc = 0x35a904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a908: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x35a908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x35a90c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x35a90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35a910: 0xafb30288  sw          $s3, 0x288($sp)
    ctx->pc = 0x35a910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 19));
    // 0x35a914: 0x70828800  madd        $s1, $a0, $v0
    ctx->pc = 0x35a914u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x35a918: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x35a918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x35a91c: 0x8fa50294  lw          $a1, 0x294($sp)
    ctx->pc = 0x35a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x35a920: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x35a920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x35a924: 0x65a821  addu        $s5, $v1, $a1
    ctx->pc = 0x35a924u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35a928: 0x8fa60240  lw          $a2, 0x240($sp)
    ctx->pc = 0x35a928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x35a92c: 0xae460014  sw          $a2, 0x14($s2)
    ctx->pc = 0x35a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 6));
    // 0x35a930: 0x8fb40284  lw          $s4, 0x284($sp)
    ctx->pc = 0x35a930u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35a934: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x35a934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x35a938: 0x8fb0025c  lw          $s0, 0x25C($sp)
    ctx->pc = 0x35a938u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x35a93c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x35a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x35a940: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x35a940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x35a944: 0xc7a201c0  lwc1        $f2, 0x1C0($sp)
    ctx->pc = 0x35a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a948: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x35a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a94c: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x35a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a950: 0x8fa2028c  lw          $v0, 0x28C($sp)
    ctx->pc = 0x35a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x35a954: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x35a954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35a958: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x35a958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x35a95c: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x35a95cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35a960: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x35a960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x35a964: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x35a964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x35a968: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x35a968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x35a96c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x35a96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x35a970: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x35a970u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x35a974: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x35a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a978: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x35a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a97c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x35a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a980: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x35a980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35a984: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x35a984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x35a988: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x35a988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x35a98c: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x35a98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x35a990: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x35a990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x35a994: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x35a994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x35a998: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x35a998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x35a99c: 0x0  nop
    ctx->pc = 0x35a99cu;
    // NOP
label_35a9a0:
    // 0x35a9a0: 0x8fa30238  lw          $v1, 0x238($sp)
    ctx->pc = 0x35a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x35a9a4: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35A9A4u;
    {
        const bool branch_taken_0x35a9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9A4u;
        // 0x35a9a8: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9a4) {
            ctx->pc = 0x35AA0Cu;
            goto label_35aa0c;
        }
    }
    ctx->pc = 0x35A9ACu;
    // 0x35a9ac: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35a9acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35a9b0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x35a9b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35a9b4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35a9b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35a9b8: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x35a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35a9bc: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x35a9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35a9c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9c4: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x35a9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35a9c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35a9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9cc: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x35a9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35a9d0: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x35a9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x35a9d4: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x35a9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35a9d8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x35a9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35a9dc: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x35a9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x35a9e0: 0x26e80030  addiu       $t0, $s7, 0x30
    ctx->pc = 0x35a9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x35a9e4: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x35a9e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x35a9e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35a9e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35a9ec: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x35a9ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x35a9f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35a9f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a9f4: 0xc0d6746  jal         func_359D18
    ctx->pc = 0x35A9F4u;
    SET_GPR_U32(ctx, 31, 0x35A9FCu);
    ctx->pc = 0x35A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A9F4u;
    // 0x35a9f8: 0xe7a3021c  swc1        $f3, 0x21C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D18u, 0x35A9F4u, 0x35A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A9FCu;
label_35a9fc:
    // 0x35a9fc: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35a9fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35aa00: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x35aa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aa04: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35AA04u;
    {
        const bool branch_taken_0x35aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA04u;
        // 0x35aa08: 0x8fa60238  lw          $a2, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa04) {
            ctx->pc = 0x35AA4Cu;
            goto label_35aa4c;
        }
    }
    ctx->pc = 0x35AA0Cu;
label_35aa0c:
    // 0x35aa0c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x35aa0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35aa10: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35aa10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35aa14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35aa14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35aa18: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x35aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aa1c: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x35aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35aa20: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x35aa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35aa24: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x35aa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35aa28: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x35aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35aa2c: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x35aa2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x35aa30: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x35aa30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x35aa34: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x35aa34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x35aa38: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x35aa38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x35aa3c: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x35aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35aa40: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35aa40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35aa44: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x35aa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aa48: 0x8fa60238  lw          $a2, 0x238($sp)
    ctx->pc = 0x35aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_35aa4c:
    // 0x35aa4c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x35AA4Cu;
    {
        const bool branch_taken_0x35aa4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA4Cu;
        // 0x35aa50: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa4c) {
            ctx->pc = 0x35AAB4u;
            goto label_35aab4;
        }
    }
    ctx->pc = 0x35AA54u;
    // 0x35aa54: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x35aa54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35aa58: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x35aa58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35aa5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35aa5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35aa60: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x35aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aa64: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x35aa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35aa68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35aa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa6c: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x35aa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35aa70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35aa70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa74: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x35aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35aa78: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x35aa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x35aa7c: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x35aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35aa80: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x35aa80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35aa84: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x35aa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x35aa88: 0x26e80030  addiu       $t0, $s7, 0x30
    ctx->pc = 0x35aa88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x35aa8c: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x35aa8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x35aa90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35aa90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35aa94: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x35aa94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x35aa98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35aa98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aa9c: 0xc0d6746  jal         func_359D18
    ctx->pc = 0x35AA9Cu;
    SET_GPR_U32(ctx, 31, 0x35AAA4u);
    ctx->pc = 0x35AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA9Cu;
    // 0x35aaa0: 0xe7a3021c  swc1        $f3, 0x21C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D18u, 0x35AA9Cu, 0x35AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AAA4u;
label_35aaa4:
    // 0x35aaa4: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x35aaa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35aaa8: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x35aaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aaac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35AAACu;
    {
        const bool branch_taken_0x35aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AAACu;
        // 0x35aab0: 0x8fa4024c  lw          $a0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aaac) {
            ctx->pc = 0x35AAF4u;
            goto label_35aaf4;
        }
    }
    ctx->pc = 0x35AAB4u;
label_35aab4:
    // 0x35aab4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x35aab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x35aab8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35aab8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35aabc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35aabcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35aac0: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x35aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aac4: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x35aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35aac8: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x35aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35aacc: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x35aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35aad0: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x35aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35aad4: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x35aad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x35aad8: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x35aad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x35aadc: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x35aadcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x35aae0: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x35aae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x35aae4: 0x8fa30284  lw          $v1, 0x284($sp)
    ctx->pc = 0x35aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35aae8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35aae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35aaec: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x35aaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35aaf0: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x35aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_35aaf4:
    // 0x35aaf4: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x35aaf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x35aaf8: 0xc7a801e0  lwc1        $f8, 0x1E0($sp)
    ctx->pc = 0x35aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x35aafc: 0xc7a701e4  lwc1        $f7, 0x1E4($sp)
    ctx->pc = 0x35aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35ab00: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x35ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x35ab04: 0xc7a601e8  lwc1        $f6, 0x1E8($sp)
    ctx->pc = 0x35ab04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x35ab08: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x35ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x35ab0c: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x35ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x35ab10: 0xe6280000  swc1        $f8, 0x0($s1)
    ctx->pc = 0x35ab10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35ab14: 0xe6270004  swc1        $f7, 0x4($s1)
    ctx->pc = 0x35ab14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35ab18: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x35ab18u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35ab1c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x35ab1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x35ab20: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x35ab24: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x35ab24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x35ab28: 0xc7a501c0  lwc1        $f5, 0x1C0($sp)
    ctx->pc = 0x35ab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35ab2c: 0xc7a301c4  lwc1        $f3, 0x1C4($sp)
    ctx->pc = 0x35ab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35ab30: 0xc7a401c8  lwc1        $f4, 0x1C8($sp)
    ctx->pc = 0x35ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35ab34: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x35ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x35ab38: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x35ab38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35ab3c: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x35ab3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35ab40: 0xe6240008  swc1        $f4, 0x8($s1)
    ctx->pc = 0x35ab40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35ab44: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x35ab44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x35ab48: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35ab48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x35ab4c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x35ab4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x35ab50: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x35ab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ab54: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x35ab54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ab58: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x35ab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ab5c: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x35ab5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35ab60: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x35ab60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35ab64: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x35ab64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35ab68: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x35ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x35ab6c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x35ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x35ab70: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x35ab74: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x35ab74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x35ab78: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x35ab78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35ab7c: 0xe6230004  swc1        $f3, 0x4($s1)
    ctx->pc = 0x35ab7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35ab80: 0xe6240008  swc1        $f4, 0x8($s1)
    ctx->pc = 0x35ab80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35ab84: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x35ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x35ab88: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x35ab8c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x35ab8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x35ab90: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x35ab90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x35ab94: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x35ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x35ab98: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x35ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ab9c: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x35ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35aba0: 0xc7a201d8  lwc1        $f2, 0x1D8($sp)
    ctx->pc = 0x35aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35aba4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35aba8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x35aba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35abac: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x35abacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35abb0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x35abb4: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x35abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x35abb8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x35abb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x35abbc: 0xe6280000  swc1        $f8, 0x0($s1)
    ctx->pc = 0x35abbcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35abc0: 0xe6270004  swc1        $f7, 0x4($s1)
    ctx->pc = 0x35abc0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35abc4: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x35abc4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x35abc8: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x35abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x35abcc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x35abccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x35abd0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x35abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x35abd4: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x35abd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x35abd8: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x35abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x35abdc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35abdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35abe0: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x35abe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35abe4: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x35abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x35abe8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35abe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35abec: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x35abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35abf0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x35abf0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x35abf4: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x35abf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x35abf8: 0x2fc20003  sltiu       $v0, $fp, 0x3
    ctx->pc = 0x35abf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35abfc: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x35ABFCu;
    {
        const bool branch_taken_0x35abfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ABFCu;
        // 0x35ac00: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35abfc) {
            ctx->pc = 0x35A9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a9a0;
        }
    }
    ctx->pc = 0x35AC04u;
    // 0x35ac04: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x35ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x35ac08: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x35AC08u;
    {
        const bool branch_taken_0x35ac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC08u;
        // 0x35ac0c: 0x8fa30258  lw          $v1, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac08) {
            ctx->pc = 0x35AC78u;
            goto label_35ac78;
        }
    }
    ctx->pc = 0x35AC10u;
    // 0x35ac10: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x35ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x35ac14: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35ac14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35ac18: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35ac18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ac1c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35ac1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35ac20: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x35ac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ac24: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x35ac24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ac28: 0x27a60210  addiu       $a2, $sp, 0x210
    ctx->pc = 0x35ac28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x35ac2c: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x35ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ac30: 0x26e80030  addiu       $t0, $s7, 0x30
    ctx->pc = 0x35ac30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x35ac34: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x35ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ac38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x35ac38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x35ac3c: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x35ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35ac40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x35ac40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ac44: 0x8fa5025c  lw          $a1, 0x25C($sp)
    ctx->pc = 0x35ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x35ac48: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x35ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x35ac4c: 0x8fa70258  lw          $a3, 0x258($sp)
    ctx->pc = 0x35ac4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x35ac50: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x35ac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x35ac54: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x35ac54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x35ac58: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x35ac58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x35ac5c: 0xc0d6746  jal         func_359D18
    ctx->pc = 0x35AC5Cu;
    SET_GPR_U32(ctx, 31, 0x35AC64u);
    ctx->pc = 0x35AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AC5Cu;
    // 0x35ac60: 0xe7a3021c  swc1        $f3, 0x21C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x359D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359D18u, 0x35AC5Cu, 0x35AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AC64u;
label_35ac64:
    // 0x35ac64: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x35ac64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x35ac68: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35ac68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35ac6c: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x35ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ac70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x35AC70u;
    {
        const bool branch_taken_0x35ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AC70u;
        // 0x35ac74: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ac70) {
            ctx->pc = 0x35ACC0u;
            goto label_35acc0;
        }
    }
    ctx->pc = 0x35AC78u;
label_35ac78:
    // 0x35ac78: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x35ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35ac7c: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x35ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x35ac80: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x35ac80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35ac84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35ac84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35ac88: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35ac88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35ac8c: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x35ac8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35ac90: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x35ac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ac94: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x35ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ac98: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x35ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ac9c: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x35ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35aca0: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x35aca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x35aca4: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x35aca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x35aca8: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x35aca8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x35acac: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x35acacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x35acb0: 0x8fa30284  lw          $v1, 0x284($sp)
    ctx->pc = 0x35acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35acb4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35acb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35acb8: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x35acb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35acbc: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x35acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_35acc0:
    // 0x35acc0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x35acc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35acc4: 0xc7a201c0  lwc1        $f2, 0x1C0($sp)
    ctx->pc = 0x35acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35acc8: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x35acc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35accc: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x35acccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x35acd0: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x35acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35acd4: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x35acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x35acd8: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x35acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x35acdc: 0xafa6024c  sw          $a2, 0x24C($sp)
    ctx->pc = 0x35acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 6));
    // 0x35ace0: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x35ace0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35ace4: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x35ace4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x35ace8: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x35ace8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x35acec: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x35acecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x35acf0: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x35acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x35acf4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x35acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x35acf8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x35acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x35acfc: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x35acfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x35ad00: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x35ad00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ad04: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x35ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ad08: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x35ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ad0c: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x35ad0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35ad10: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x35ad10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x35ad14: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x35ad14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x35ad18: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x35ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x35ad1c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x35ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x35ad20: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x35ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x35ad24: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x35ad24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x35ad28: 0xc7a201f0  lwc1        $f2, 0x1F0($sp)
    ctx->pc = 0x35ad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ad2c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x35ad2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ad30: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x35ad30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ad34: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x35ad34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x35ad38: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x35ad38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x35ad3c: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x35ad3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x35ad40: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x35ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x35ad44: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x35ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x35ad48: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x35ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x35ad4c: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x35ad4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_35ad50:
    // 0x35ad50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35AD50u;
    SET_GPR_U32(ctx, 31, 0x35AD58u);
    ctx->pc = 0x35AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AD50u;
    // 0x35ad54: 0x27a40210  addiu       $a0, $sp, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35AD50u, 0x35AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AD58u;
label_35ad58:
    // 0x35ad58: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x35ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x35ad5c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35ad5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ad60: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x35ad60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35ad64: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x35ad64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35ad68: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x35ad68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x35ad6c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x35ad6cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x35ad70: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x35ad70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35ad74: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x35ad74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x35ad78: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x35ad78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ad7c: 0xfba50210  sqc2        $vf5, 0x210($sp)
    ctx->pc = 0x35ad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x35ad80: 0xc7a00210  lwc1        $f0, 0x210($sp)
    ctx->pc = 0x35ad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ad84: 0xc7a10214  lwc1        $f1, 0x214($sp)
    ctx->pc = 0x35ad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ad88: 0xc7a20218  lwc1        $f2, 0x218($sp)
    ctx->pc = 0x35ad88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35ad8c: 0xc7a3021c  lwc1        $f3, 0x21C($sp)
    ctx->pc = 0x35ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35ad90: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x35ad90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x35ad94: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x35ad94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x35ad98: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x35ad98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x35ad9c: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x35ad9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x35ada0: 0x8fa30284  lw          $v1, 0x284($sp)
    ctx->pc = 0x35ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x35ada4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35ada4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35ada8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35adac: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x35adacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x35adb0: 0x2fc20004  sltiu       $v0, $fp, 0x4
    ctx->pc = 0x35adb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x35adb4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x35ADB4u;
    {
        const bool branch_taken_0x35adb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADB4u;
        // 0x35adb8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35adb4) {
            ctx->pc = 0x35AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ad50;
        }
    }
    ctx->pc = 0x35ADBCu;
    // 0x35adbc: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x35adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x35adc0: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x35adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x35adc4: 0x8fb30288  lw          $s3, 0x288($sp)
    ctx->pc = 0x35adc4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x35adc8: 0xafa40244  sw          $a0, 0x244($sp)
    ctx->pc = 0x35adc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 4));
    // 0x35adcc: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x35adccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x35add0: 0x1440fe4f  bnez        $v0, . + 4 + (-0x1B1 << 2)
    ctx->pc = 0x35ADD0u;
    {
        const bool branch_taken_0x35add0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ADD0u;
        // 0x35add4: 0xafa30248  sw          $v1, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35add0) {
            ctx->pc = 0x35A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35a710;
        }
    }
    ctx->pc = 0x35ADD8u;
    // 0x35add8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x35add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35addc: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x35ADDCu;
    SET_GPR_U32(ctx, 31, 0x35ADE4u);
    ctx->pc = 0x35ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADDCu;
    // 0x35ade0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x35ADDCu, 0x35ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADE4u;
label_35ade4:
    // 0x35ade4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35ade4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35ade8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x35ade8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35adec: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x35adecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x35adf0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x35ADF0u;
    SET_GPR_U32(ctx, 31, 0x35ADF8u);
    ctx->pc = 0x35ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ADF0u;
    // 0x35adf4: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x35ADF0u, 0x35ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ADF8u;
label_35adf8:
    // 0x35adf8: 0xc0db22c  jal         func_36C8B0
    ctx->pc = 0x35ADF8u;
    SET_GPR_U32(ctx, 31, 0x35AE00u);
    ctx->pc = 0x36C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C8B0u, 0x35ADF8u, 0x35AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE00u;
label_35ae00:
    // 0x35ae00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x35ae00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ae04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35ae04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae08: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x35ae08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x35ae0c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x35ae0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x35ae10: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x35ae10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x35ae14: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x35ae14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x35ae18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35ae18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x35ae1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35ae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae24: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x35AE24u;
    SET_GPR_U32(ctx, 31, 0x35AE2Cu);
    ctx->pc = 0x35AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE24u;
    // 0x35ae28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x35AE24u, 0x35AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE2Cu;
label_35ae2c:
    // 0x35ae2c: 0x3c050007  lui         $a1, 0x7
    ctx->pc = 0x35ae2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    // 0x35ae30: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x35AE30u;
    SET_GPR_U32(ctx, 31, 0x35AE38u);
    ctx->pc = 0x35AE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE30u;
    // 0x35ae34: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x35AE30u, 0x35AE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE38u;
label_35ae38:
    // 0x35ae38: 0xc0dd1ac  jal         func_3746B0
    ctx->pc = 0x35AE38u;
    SET_GPR_U32(ctx, 31, 0x35AE40u);
    ctx->pc = 0x35AE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE38u;
    // 0x35ae3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3746B0u, 0x35AE38u, 0x35AE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE40u;
label_35ae40:
    // 0x35ae40: 0xc0dd1c8  jal         func_374720
    ctx->pc = 0x35AE40u;
    SET_GPR_U32(ctx, 31, 0x35AE48u);
    ctx->pc = 0x35AE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE40u;
    // 0x35ae44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x374720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374720u, 0x35AE40u, 0x35AE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE48u;
label_35ae48:
    // 0x35ae48: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x35ae48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x35ae4c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x35ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35ae50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35ae50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae54: 0xc0d63b0  jal         func_358EC0
    ctx->pc = 0x35AE54u;
    SET_GPR_U32(ctx, 31, 0x35AE5Cu);
    ctx->pc = 0x35AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE54u;
    // 0x35ae58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358EC0u, 0x35AE54u, 0x35AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE5Cu;
label_35ae5c:
    // 0x35ae5c: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x35ae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x35ae60: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35AE60u;
    {
        const bool branch_taken_0x35ae60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ae60) {
            ctx->pc = 0x35AE7Cu;
            goto label_35ae7c;
        }
    }
    ctx->pc = 0x35AE68u;
    // 0x35ae68: 0xc0dd1ac  jal         func_3746B0
    ctx->pc = 0x35AE68u;
    SET_GPR_U32(ctx, 31, 0x35AE70u);
    ctx->pc = 0x35AE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE68u;
    // 0x35ae6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3746B0u, 0x35AE68u, 0x35AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE70u;
label_35ae70:
    // 0x35ae70: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x35ae70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x35ae74: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x35AE74u;
    SET_GPR_U32(ctx, 31, 0x35AE7Cu);
    ctx->pc = 0x35AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE74u;
    // 0x35ae78: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x35AE74u, 0x35AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE7Cu;
label_35ae7c:
    // 0x35ae7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x35ae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x35ae80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x35ae80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ae84: 0xc0dd1c8  jal         func_374720
    ctx->pc = 0x35AE84u;
    SET_GPR_U32(ctx, 31, 0x35AE8Cu);
    ctx->pc = 0x374720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374720u, 0x35AE84u, 0x35AE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE8Cu;
label_35ae8c:
    // 0x35ae8c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x35ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x35ae90: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x35AE90u;
    SET_GPR_U32(ctx, 31, 0x35AE98u);
    ctx->pc = 0x35AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE90u;
    // 0x35ae94: 0x24050059  addiu       $a1, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x35AE90u, 0x35AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE98u;
label_35ae98:
    // 0x35ae98: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x35ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x35ae9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35ae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35aea0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x35aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35aea4: 0xc0d63b0  jal         func_358EC0
    ctx->pc = 0x35AEA4u;
    SET_GPR_U32(ctx, 31, 0x35AEACu);
    ctx->pc = 0x35AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEA4u;
    // 0x35aea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358EC0u, 0x35AEA4u, 0x35AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEACu;
label_35aeac:
    // 0x35aeac: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x35aeacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x35aeb0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x35AEB0u;
    {
        const bool branch_taken_0x35aeb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEB0u;
        // 0x35aeb4: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aeb0) {
            ctx->pc = 0x35AEC8u;
            goto label_35aec8;
        }
    }
    ctx->pc = 0x35AEB8u;
    // 0x35aeb8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x35AEB8u;
    SET_GPR_U32(ctx, 31, 0x35AEC0u);
    ctx->pc = 0x35AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEB8u;
    // 0x35aebc: 0x3c050007  lui         $a1, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)7 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x35AEB8u, 0x35AEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEC0u;
label_35aec0:
    // 0x35aec0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35AEC0u;
    {
        const bool branch_taken_0x35aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AEC0u;
        // 0x35aec4: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aec0) {
            ctx->pc = 0x35AED4u;
            goto label_35aed4;
        }
    }
    ctx->pc = 0x35AEC8u;
label_35aec8:
    // 0x35aec8: 0xc0dd1ac  jal         func_3746B0
    ctx->pc = 0x35AEC8u;
    SET_GPR_U32(ctx, 31, 0x35AED0u);
    ctx->pc = 0x35AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEC8u;
    // 0x35aecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3746B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3746B0u, 0x35AEC8u, 0x35AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AED0u;
label_35aed0:
    // 0x35aed0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x35aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_35aed4:
    // 0x35aed4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x35AED4u;
    SET_GPR_U32(ctx, 31, 0x35AEDCu);
    ctx->pc = 0x35AED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AED4u;
    // 0x35aed8: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x35AED4u, 0x35AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEDCu;
label_35aedc:
    // 0x35aedc: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x35aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x35aee0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x35aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x35aee4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35aee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35aee8: 0xc0d63b0  jal         func_358EC0
    ctx->pc = 0x35AEE8u;
    SET_GPR_U32(ctx, 31, 0x35AEF0u);
    ctx->pc = 0x35AEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEE8u;
    // 0x35aeec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358EC0u, 0x35AEE8u, 0x35AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEF0u;
label_35aef0:
    // 0x35aef0: 0xc0db190  jal         func_36C640
    ctx->pc = 0x35AEF0u;
    SET_GPR_U32(ctx, 31, 0x35AEF8u);
    ctx->pc = 0x36C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C640u, 0x35AEF0u, 0x35AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AEF8u;
label_35aef8:
    // 0x35aef8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x35aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35aefc: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x35AEFCu;
    SET_GPR_U32(ctx, 31, 0x35AF04u);
    ctx->pc = 0x35AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AEFCu;
    // 0x35af00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x35AEFCu, 0x35AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF04u;
label_35af04:
    // 0x35af04: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x35af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x35af08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35AF08u;
    {
        const bool branch_taken_0x35af08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AF08u;
        // 0x35af0c: 0x27a30050  addiu       $v1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35af08) {
            ctx->pc = 0x35AF1Cu;
            goto label_35af1c;
        }
    }
    ctx->pc = 0x35AF10u;
    // 0x35af10: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x35AF10u;
    SET_GPR_U32(ctx, 31, 0x35AF18u);
    ctx->pc = 0x35AF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AF10u;
    // 0x35af14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x35AF10u, 0x35AF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AF18u;
label_35af18:
    // 0x35af18: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x35af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35af1c:
    // 0x35af1c: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x35af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x35af20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35af20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35af24: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35af24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35af28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35af28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35af2c: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x35af2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35af30: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x35af30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35af34: 0xc7a101c4  lwc1        $f1, 0x1C4($sp)
    ctx->pc = 0x35af34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35af38: 0xc7a201c8  lwc1        $f2, 0x1C8($sp)
    ctx->pc = 0x35af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35af3c: 0xc7a301cc  lwc1        $f3, 0x1CC($sp)
    ctx->pc = 0x35af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35af40: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x35af40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x35af44: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x35af44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x35af48: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x35af48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x35af4c: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x35af4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x35af50: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x35af50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x35af54: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x35af54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35af58: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x35af58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35af5c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35af5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35af60: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x35af60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35af64: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x35af64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x35af68: 0x4a0003bf  vwaitq
    ctx->pc = 0x35af68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x35af6c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35af6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35af70: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x35af70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35af74: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x35af74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35af78: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x35af78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35af7c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x35af7cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35af80: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x35af80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35af84: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x35af84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35af88: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x35af88u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x35af8c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x35af8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35af90: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x35af90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35af94: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x35af94u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x35af98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35af98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35af9c: 0x0  nop
    ctx->pc = 0x35af9cu;
    // NOP
    // 0x35afa0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x35afa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35afa4: 0x0  nop
    ctx->pc = 0x35afa4u;
    // NOP
    // 0x35afa8: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
    ctx->pc = 0x35AFA8u;
    {
        const bool branch_taken_0x35afa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AFA8u;
        // 0x35afac: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35afa8) {
            ctx->pc = 0x35B098u;
            goto label_35b098;
        }
    }
    ctx->pc = 0x35AFB0u;
    // 0x35afb0: 0xc6ec0084  lwc1        $f12, 0x84($s7)
    ctx->pc = 0x35afb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35afb4: 0xc6e30088  lwc1        $f3, 0x88($s7)
    ctx->pc = 0x35afb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35afb8: 0xc6e2008c  lwc1        $f2, 0x8C($s7)
    ctx->pc = 0x35afb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35afbc: 0x460c18c1  sub.s       $f3, $f3, $f12
    ctx->pc = 0x35afbcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
    // 0x35afc0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x35afc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35afc4: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x35afc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35afc8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x35afc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35afcc: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x35afccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35afd0: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x35afd0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x35afd4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x35afd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x35afd8: 0x8fa6027c  lw          $a2, 0x27C($sp)
    ctx->pc = 0x35afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x35afdc: 0x460330c2  mul.s       $f3, $f6, $f3
    ctx->pc = 0x35afdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x35afe0: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x35afe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x35afe4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x35afe4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x35afe8: 0xe7a401d4  swc1        $f4, 0x1D4($sp)
    ctx->pc = 0x35afe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
    // 0x35afec: 0xe7a101dc  swc1        $f1, 0x1DC($sp)
    ctx->pc = 0x35afecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x35aff0: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x35aff0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x35aff4: 0xe7a201d8  swc1        $f2, 0x1D8($sp)
    ctx->pc = 0x35aff4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x35aff8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x35aff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35affc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x35affcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35b000: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35b000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35b004: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x35b004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35b008: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x35b008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x35b00c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35b00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35b010: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x35b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x35b014: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x35b014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35b018: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x35b018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35b01c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x35b01cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35b020: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x35b020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x35b024: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x35b024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x35b028: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x35b028u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35b02c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x35b02cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x35b030: 0x8c46f480  lw          $a2, -0xB80($v0)
    ctx->pc = 0x35b030u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BF480u));
    // 0x35b034: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x35b034u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x35b038: 0xc7a501e0  lwc1        $f5, 0x1E0($sp)
    ctx->pc = 0x35b038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x35b03c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b03cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35b040: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x35b040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x35b044: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x35b044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x35b048: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35b04c: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x35b04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x35b050: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x35b050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35b054: 0x460018a4  .word       0x460018A4                   # cvt.w.s     $f2, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b054u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x35b058: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x35b058u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35b05c: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x35b05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35b060: 0x460020e4  .word       0x460020E4                   # cvt.w.s     $f3, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35b060u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x35b064: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x35b064u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35b068: 0xc7a201ec  lwc1        $f2, 0x1EC($sp)
    ctx->pc = 0x35b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35b06c: 0x8fa70230  lw          $a3, 0x230($sp)
    ctx->pc = 0x35b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x35b070: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x35b070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x35b074: 0xe7a501c0  swc1        $f5, 0x1C0($sp)
    ctx->pc = 0x35b074u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x35b078: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x35b078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
    // 0x35b07c: 0xe7a101c8  swc1        $f1, 0x1C8($sp)
    ctx->pc = 0x35b07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x35b080: 0xe7a201cc  swc1        $f2, 0x1CC($sp)
    ctx->pc = 0x35b080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x35b084: 0xa3a901d0  sb          $t1, 0x1D0($sp)
    ctx->pc = 0x35b084u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 9));
    // 0x35b088: 0xa3a801d1  sb          $t0, 0x1D1($sp)
    ctx->pc = 0x35b088u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 8));
    // 0x35b08c: 0xa3a301d2  sb          $v1, 0x1D2($sp)
    ctx->pc = 0x35b08cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 466), (uint8_t)GPR_U32(ctx, 3));
    // 0x35b090: 0xc0d1116  jal         func_344458
    ctx->pc = 0x35B090u;
    SET_GPR_U32(ctx, 31, 0x35B098u);
    ctx->pc = 0x35B094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B090u;
    // 0x35b094: 0xa3a201d3  sb          $v0, 0x1D3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 467), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344458u, 0x35B090u, 0x35B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B098u;
label_35b098:
    // 0x35b098: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x35b098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x35b09c: 0x8fa20270  lw          $v0, 0x270($sp)
    ctx->pc = 0x35b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x35b0a0: 0x5044000a  beql        $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x35B0A0u;
    {
        const bool branch_taken_0x35b0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x35b0a0) {
            ctx->pc = 0x35B0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B0A0u;
            // 0x35b0a4: 0x8fa20260  lw          $v0, 0x260($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B0CCu;
            goto label_35b0cc;
        }
    }
    ctx->pc = 0x35B0A8u;
    // 0x35b0a8: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x35b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x35b0ac: 0x0  nop
    ctx->pc = 0x35b0acu;
    // NOP
label_35b0b0:
    // 0x35b0b0: 0x0  nop
    ctx->pc = 0x35b0b0u;
    // NOP
    // 0x35b0b4: 0x0  nop
    ctx->pc = 0x35b0b4u;
    // NOP
    // 0x35b0b8: 0x0  nop
    ctx->pc = 0x35b0b8u;
    // NOP
    // 0x35b0bc: 0x0  nop
    ctx->pc = 0x35b0bcu;
    // NOP
    // 0x35b0c0: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B0C0u;
    {
        const bool branch_taken_0x35b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x35b0c0) {
            ctx->pc = 0x35B0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B0C0u;
            // 0x35b0c4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b0b0;
        }
    }
    ctx->pc = 0x35B0C8u;
    // 0x35b0c8: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x35b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_35b0cc:
    // 0x35b0cc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x35b0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35b0d0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35B0D0u;
    {
        const bool branch_taken_0x35b0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B0D0u;
        // 0x35b0d4: 0xdfb002a0  ld          $s0, 0x2A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b0d0) {
            ctx->pc = 0x35B0FCu;
            goto label_35b0fc;
        }
    }
    ctx->pc = 0x35B0D8u;
    // 0x35b0d8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x35b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x35b0dc: 0x0  nop
    ctx->pc = 0x35b0dcu;
    // NOP
label_35b0e0:
    // 0x35b0e0: 0x0  nop
    ctx->pc = 0x35b0e0u;
    // NOP
    // 0x35b0e4: 0x0  nop
    ctx->pc = 0x35b0e4u;
    // NOP
    // 0x35b0e8: 0x0  nop
    ctx->pc = 0x35b0e8u;
    // NOP
    // 0x35b0ec: 0x0  nop
    ctx->pc = 0x35b0ecu;
    // NOP
    // 0x35b0f0: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B0F0u;
    {
        const bool branch_taken_0x35b0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35b0f0) {
            ctx->pc = 0x35B0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B0F0u;
            // 0x35b0f4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b0e0;
        }
    }
    ctx->pc = 0x35B0F8u;
label_35b0f8:
    // 0x35b0f8: 0xdfb002a0  ld          $s0, 0x2A0($sp)
    ctx->pc = 0x35b0f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_35b0fc:
    // 0x35b0fc: 0xdfb102a8  ld          $s1, 0x2A8($sp)
    ctx->pc = 0x35b0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x35b100: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x35b100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x35b104: 0xdfb302b8  ld          $s3, 0x2B8($sp)
    ctx->pc = 0x35b104u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x35b108: 0xdfb402c0  ld          $s4, 0x2C0($sp)
    ctx->pc = 0x35b108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x35b10c: 0xdfb502c8  ld          $s5, 0x2C8($sp)
    ctx->pc = 0x35b10cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x35b110: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x35b110u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x35b114: 0xdfb702d8  ld          $s7, 0x2D8($sp)
    ctx->pc = 0x35b114u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x35b118: 0xdfbe02e0  ld          $fp, 0x2E0($sp)
    ctx->pc = 0x35b118u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x35b11c: 0xdfbf02e8  ld          $ra, 0x2E8($sp)
    ctx->pc = 0x35b11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x35b120: 0xc7b502f8  lwc1        $f21, 0x2F8($sp)
    ctx->pc = 0x35b120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35b124: 0xc7b402f0  lwc1        $f20, 0x2F0($sp)
    ctx->pc = 0x35b124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35b128: 0x3e00008  jr          $ra
    ctx->pc = 0x35B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B128u;
        // 0x35b12c: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B130u;
}
