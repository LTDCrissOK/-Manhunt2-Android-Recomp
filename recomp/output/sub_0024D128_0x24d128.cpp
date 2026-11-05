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

// Function: sub_0024D128
// Address: 0x24d128 - 0x24f918
void sub_0024D128_0x24d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D128_0x24d128");
#endif

    switch (ctx->pc) {
        case 0x24d198u: goto label_24d198;
        case 0x24d204u: goto label_24d204;
        case 0x24d2c8u: goto label_24d2c8;
        case 0x24d2d8u: goto label_24d2d8;
        case 0x24d308u: goto label_24d308;
        case 0x24d3a8u: goto label_24d3a8;
        case 0x24d3b0u: goto label_24d3b0;
        case 0x24d3f8u: goto label_24d3f8;
        case 0x24d400u: goto label_24d400;
        case 0x24d410u: goto label_24d410;
        case 0x24d4dcu: goto label_24d4dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d698u: goto label_24d698;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d714u: goto label_24d714;
        case 0x24d720u: goto label_24d720;
        case 0x24d734u: goto label_24d734;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d9e8u: goto label_24d9e8;
        case 0x24d9f0u: goto label_24d9f0;
        case 0x24da40u: goto label_24da40;
        case 0x24db1cu: goto label_24db1c;
        case 0x24dcb4u: goto label_24dcb4;
        case 0x24dcbcu: goto label_24dcbc;
        case 0x24dcc4u: goto label_24dcc4;
        case 0x24dd2cu: goto label_24dd2c;
        case 0x24deb4u: goto label_24deb4;
        case 0x24df38u: goto label_24df38;
        case 0x24df40u: goto label_24df40;
        case 0x24df98u: goto label_24df98;
        case 0x24e068u: goto label_24e068;
        case 0x24e0c0u: goto label_24e0c0;
        case 0x24e0c8u: goto label_24e0c8;
        case 0x24e1f8u: goto label_24e1f8;
        case 0x24e200u: goto label_24e200;
        case 0x24e210u: goto label_24e210;
        case 0x24e218u: goto label_24e218;
        case 0x24e228u: goto label_24e228;
        case 0x24e230u: goto label_24e230;
        case 0x24e240u: goto label_24e240;
        case 0x24e280u: goto label_24e280;
        case 0x24e2e0u: goto label_24e2e0;
        case 0x24e368u: goto label_24e368;
        case 0x24e3d8u: goto label_24e3d8;
        case 0x24e420u: goto label_24e420;
        case 0x24e450u: goto label_24e450;
        case 0x24e540u: goto label_24e540;
        case 0x24e558u: goto label_24e558;
        case 0x24e560u: goto label_24e560;
        case 0x24e570u: goto label_24e570;
        case 0x24e590u: goto label_24e590;
        case 0x24e598u: goto label_24e598;
        case 0x24e608u: goto label_24e608;
        case 0x24e7b0u: goto label_24e7b0;
        case 0x24e7c0u: goto label_24e7c0;
        case 0x24e7e8u: goto label_24e7e8;
        case 0x24e7f0u: goto label_24e7f0;
        case 0x24e860u: goto label_24e860;
        case 0x24e988u: goto label_24e988;
        case 0x24e998u: goto label_24e998;
        case 0x24e9c0u: goto label_24e9c0;
        case 0x24e9c8u: goto label_24e9c8;
        case 0x24ea38u: goto label_24ea38;
        case 0x24eb60u: goto label_24eb60;
        case 0x24eb70u: goto label_24eb70;
        case 0x24eb98u: goto label_24eb98;
        case 0x24eba0u: goto label_24eba0;
        case 0x24ebf4u: goto label_24ebf4;
        case 0x24ed9cu: goto label_24ed9c;
        case 0x24edecu: goto label_24edec;
        case 0x24ee1cu: goto label_24ee1c;
        case 0x24ee24u: goto label_24ee24;
        case 0x24ee98u: goto label_24ee98;
        case 0x24eec8u: goto label_24eec8;
        case 0x24f064u: goto label_24f064;
        case 0x24f0c0u: goto label_24f0c0;
        case 0x24f2ccu: goto label_24f2cc;
        case 0x24f330u: goto label_24f330;
        case 0x24f45cu: goto label_24f45c;
        case 0x24f4c0u: goto label_24f4c0;
        case 0x24f510u: goto label_24f510;
        case 0x24f558u: goto label_24f558;
        case 0x24f5a8u: goto label_24f5a8;
        case 0x24f654u: goto label_24f654;
        case 0x24f6acu: goto label_24f6ac;
        case 0x24f6b4u: goto label_24f6b4;
        case 0x24f718u: goto label_24f718;
        case 0x24f8a8u: goto label_24f8a8;
        default: break;
    }

    ctx->pc = 0x24d128u;

    // 0x24d128: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x24d128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x24d12c: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x24d12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x24d130: 0xe7b70268  swc1        $f23, 0x268($sp)
    ctx->pc = 0x24d130u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x24d134: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24d134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d138: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x24d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x24d13c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x24d13cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x24d140: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x24d140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x24d144: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x24d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x24d148: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x24d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x24d14c: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x24d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x24d150: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x24d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x24d154: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x24d154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x24d158: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x24d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x24d15c: 0xffbf0248  sd          $ra, 0x248($sp)
    ctx->pc = 0x24d15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 31));
    // 0x24d160: 0xe7ba0280  swc1        $f26, 0x280($sp)
    ctx->pc = 0x24d160u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x24d164: 0xe7b90278  swc1        $f25, 0x278($sp)
    ctx->pc = 0x24d164u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x24d168: 0xe7b80270  swc1        $f24, 0x270($sp)
    ctx->pc = 0x24d168u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x24d16c: 0xe7b60260  swc1        $f22, 0x260($sp)
    ctx->pc = 0x24d16cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x24d170: 0xe7b50258  swc1        $f21, 0x258($sp)
    ctx->pc = 0x24d170u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
    // 0x24d174: 0xe7b40250  swc1        $f20, 0x250($sp)
    ctx->pc = 0x24d174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
    // 0x24d178: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x24D178u;
    {
        const bool branch_taken_0x24d178 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D178u;
        // 0x24d17c: 0xafa601bc  sw          $a2, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d178) {
            ctx->pc = 0x24D1A8u;
            goto label_24d1a8;
        }
    }
    ctx->pc = 0x24D180u;
    // 0x24d180: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24d180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24d184: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24d184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d188: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x24d188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24d18c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d190: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x24D190u;
    SET_GPR_U32(ctx, 31, 0x24D198u);
    ctx->pc = 0x24D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D190u;
    // 0x24d194: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x24D190u, 0x24D198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D198u;
label_24d198:
    // 0x24d198: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x24d198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x24d19c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d1a0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x24d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d1a4: 0xe6200134  swc1        $f0, 0x134($s1)
    ctx->pc = 0x24d1a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 308), bits); }
label_24d1a8:
    // 0x24d1a8: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x24d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x24d1ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24d1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d1b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d1b4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x24d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d1b8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x24d1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d1bc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24d1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24d1c0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24d1c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24d1c4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24d1c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24d1c8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x24d1c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24d1cc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24d1ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d1d0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24d1d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24d1d4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24d1d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24d1d8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24d1d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24d1dc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24d1dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x24d1e0: 0x4a0003bf  vwaitq
    ctx->pc = 0x24d1e0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24d1e4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24d1e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d1e8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24d1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d1ec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24d1ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d1f0: 0xfa210120  sqc2        $vf1, 0x120($s1)
    ctx->pc = 0x24d1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d1f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24d1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24d1f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24d1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24d1fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24D1FCu;
    SET_GPR_U32(ctx, 31, 0x24D204u);
    ctx->pc = 0x24D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1FCu;
    // 0x24d200: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24D1FCu, 0x24D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D204u;
label_24d204:
    // 0x24d204: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x24d204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d208: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x24d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24d20c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x24d20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d210: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24d210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24d214: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x24d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d218: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24d218u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x24d21c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24d21cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24d220: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x24d220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x24d224: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24d224u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24d228: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x24d228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x24d22c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x24d22cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24d230: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x24d230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x24d234: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x24d234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x24d238: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x24d238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24d23c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x24d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x24d240: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x24d240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x24d244: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24d244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d248: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24d248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d24c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x24d24cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24d250: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x24d250u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d254: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x24d254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d258: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x24d258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x24d25c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x24d260: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d264: 0xc4405374  lwc1        $f0, 0x5374($v0)
    ctx->pc = 0x24d264u;
    { uint32_t bits = FAST_READ32(0x465374u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d268: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x24d268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x24d26c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24d26cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d270: 0xe62000fc  swc1        $f0, 0xFC($s1)
    ctx->pc = 0x24d270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
    // 0x24d274: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x24d274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d278: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x24d278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x24d27c: 0xa2200110  sb          $zero, 0x110($s1)
    ctx->pc = 0x24d27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d280: 0xa2200130  sb          $zero, 0x130($s1)
    ctx->pc = 0x24d280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 304), (uint8_t)GPR_U32(ctx, 0));
    // 0x24d284: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d288: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x24d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d28c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24d290: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x24d290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24d294: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d298: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24d298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x24d29c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x24d29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d2a0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x24d2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x24d2a4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x24d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d2a8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x24d2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x24d2ac: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24d2acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d2b0: 0xfa210140  sqc2        $vf1, 0x140($s1)
    ctx->pc = 0x24d2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d2b4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x24d2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x24d2b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24d2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24d2bc: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x24d2bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x24d2c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24D2C0u;
    SET_GPR_U32(ctx, 31, 0x24D2C8u);
    ctx->pc = 0x24D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2C0u;
    // 0x24d2c4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24D2C0u, 0x24D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2C8u;
label_24d2c8:
    // 0x24d2c8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x24d2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x24d2cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x24d2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x24d2d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24D2D0u;
    SET_GPR_U32(ctx, 31, 0x24D2D8u);
    ctx->pc = 0x24D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2D0u;
    // 0x24d2d4: 0xafa001c4  sw          $zero, 0x1C4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24D2D0u, 0x24D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2D8u;
label_24d2d8:
    // 0x24d2d8: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x24d2d8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
    // 0x24d2dc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x24d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24d2e0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x24d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24d2e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d2e8: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x24d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x24d2ec: 0xafa401dc  sw          $a0, 0x1DC($sp)
    ctx->pc = 0x24d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 4));
    // 0x24d2f0: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x24d2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x24d2f4: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x24d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
    // 0x24d2f8: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x24d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
    // 0x24d2fc: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x24d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
    // 0x24d300: 0xafa001d8  sw          $zero, 0x1D8($sp)
    ctx->pc = 0x24d300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 0));
    // 0x24d304: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x24d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_24d308:
    // 0x24d308: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24d30c: 0x10820081  beq         $a0, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x24D30Cu;
    {
        const bool branch_taken_0x24d30c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D30Cu;
        // 0x24d310: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d30c) {
            ctx->pc = 0x24D514u;
            goto label_24d514;
        }
    }
    ctx->pc = 0x24D314u;
    // 0x24d314: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D314u;
    {
        const bool branch_taken_0x24d314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D314u;
        // 0x24d318: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d314) {
            ctx->pc = 0x24D32Cu;
            goto label_24d32c;
        }
    }
    ctx->pc = 0x24D31Cu;
    // 0x24d31c: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24D31Cu;
    {
        const bool branch_taken_0x24d31c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D31Cu;
        // 0x24d320: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d31c) {
            ctx->pc = 0x24D34Cu;
            goto label_24d34c;
        }
    }
    ctx->pc = 0x24D324u;
    // 0x24d324: 0x100003df  b           . + 4 + (0x3DF << 2)
    ctx->pc = 0x24D324u;
    {
        const bool branch_taken_0x24d324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D324u;
        // 0x24d328: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d324) {
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24D32Cu;
label_24d32c:
    // 0x24d32c: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x24d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x24d330: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24d330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24d334: 0x10620143  beq         $v1, $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x24D334u;
    {
        const bool branch_taken_0x24d334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D334u;
        // 0x24d338: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d334) {
            ctx->pc = 0x24D844u;
            goto label_24d844;
        }
    }
    ctx->pc = 0x24D33Cu;
    // 0x24d33c: 0x10620323  beq         $v1, $v0, . + 4 + (0x323 << 2)
    ctx->pc = 0x24D33Cu;
    {
        const bool branch_taken_0x24d33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D33Cu;
        // 0x24d340: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d33c) {
            ctx->pc = 0x24DFCCu;
            goto label_24dfcc;
        }
    }
    ctx->pc = 0x24D344u;
    // 0x24d344: 0x100003d7  b           . + 4 + (0x3D7 << 2)
    ctx->pc = 0x24D344u;
    {
        const bool branch_taken_0x24d344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d344) {
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24D34Cu;
label_24d34c:
    // 0x24d34c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24d350: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x24d350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d354: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x24d354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d358: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x24d358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d35c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24d35cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d360: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x24d360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24d364: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x24d364u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24d368: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x24d368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24d36c: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x24d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x24d370: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x24d370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x24d374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d378: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24d37c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d380: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x24d380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24d384: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d388: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x24d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d38c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d38cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d390: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d394: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24d394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24d398: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x24d398u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d39c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24d39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3a0: 0xc093240  jal         func_24C900
    ctx->pc = 0x24D3A0u;
    SET_GPR_U32(ctx, 31, 0x24D3A8u);
    ctx->pc = 0x24D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3A0u;
    // 0x24d3a4: 0xafa501f8  sw          $a1, 0x1F8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24D3A0u, 0x24D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3A8u;
label_24d3a8:
    // 0x24d3a8: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24D3A8u;
    SET_GPR_U32(ctx, 31, 0x24D3B0u);
    ctx->pc = 0x24D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3A8u;
    // 0x24d3ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24D3A8u, 0x24D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3B0u;
label_24d3b0:
    // 0x24d3b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d3b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d3b4: 0x56000014  bnel        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x24D3B4u;
    {
        const bool branch_taken_0x24d3b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d3b4) {
            ctx->pc = 0x24D3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D3B4u;
            // 0x24d3b8: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D408u;
            goto label_24d408;
        }
    }
    ctx->pc = 0x24D3BCu;
    // 0x24d3bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24d3c0: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x24d3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x24d3c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x24d3c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x24d3c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d3cc: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x24d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24d3d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d3d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d3d8: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x24d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d3dc: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x24d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24d3e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24d3e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24d3e4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24d3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d3e8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d3e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d3ec: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x24d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d3f0: 0xc093240  jal         func_24C900
    ctx->pc = 0x24D3F0u;
    SET_GPR_U32(ctx, 31, 0x24D3F8u);
    ctx->pc = 0x24D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3F0u;
    // 0x24d3f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24D3F0u, 0x24D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D3F8u;
label_24d3f8:
    // 0x24d3f8: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24D3F8u;
    SET_GPR_U32(ctx, 31, 0x24D400u);
    ctx->pc = 0x24D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D3F8u;
    // 0x24d3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24D3F8u, 0x24D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D400u;
label_24d400:
    // 0x24d400: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d404: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x24d404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_24d408:
    // 0x24d408: 0xc094362  jal         func_250D88
    ctx->pc = 0x24D408u;
    SET_GPR_U32(ctx, 31, 0x24D410u);
    ctx->pc = 0x24D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D408u;
    // 0x24d40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x24D408u, 0x24D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D410u;
label_24d410:
    // 0x24d410: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x24D410u;
    {
        const bool branch_taken_0x24d410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D410u;
        // 0x24d414: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d410) {
            ctx->pc = 0x24D504u;
            goto label_24d504;
        }
    }
    ctx->pc = 0x24D418u;
    // 0x24d418: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x24d418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x24d41c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x24d41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x24d420: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24D420u;
    {
        const bool branch_taken_0x24d420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D420u;
        // 0x24d424: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d420) {
            ctx->pc = 0x24D468u;
            goto label_24d468;
        }
    }
    ctx->pc = 0x24D428u;
    // 0x24d428: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x24d428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x24d42c: 0x8ca400c0  lw          $a0, 0xC0($a1)
    ctx->pc = 0x24d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x24d430: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x24d430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x24d434: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24D434u;
    {
        const bool branch_taken_0x24d434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D434u;
        // 0x24d438: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d434) {
            ctx->pc = 0x24D458u;
            goto label_24d458;
        }
    }
    ctx->pc = 0x24D43Cu;
    // 0x24d43c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x24d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24d440: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24D440u;
    {
        const bool branch_taken_0x24d440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D440u;
        // 0x24d444: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d440) {
            ctx->pc = 0x24D458u;
            goto label_24d458;
        }
    }
    ctx->pc = 0x24D448u;
    // 0x24d448: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x24d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x24d44c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x24d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x24d450: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D450u;
    {
        const bool branch_taken_0x24d450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D450u;
        // 0x24d454: 0x26220040  addiu       $v0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d450) {
            ctx->pc = 0x24D46Cu;
            goto label_24d46c;
        }
    }
    ctx->pc = 0x24D458u;
label_24d458:
    // 0x24d458: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24d458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d45c: 0xafb301cc  sw          $s3, 0x1CC($sp)
    ctx->pc = 0x24d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 19));
    // 0x24d460: 0xae3300f0  sw          $s3, 0xF0($s1)
    ctx->pc = 0x24d460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 19));
    // 0x24d464: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24d464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24d468:
    // 0x24d468: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x24d468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_24d46c:
    // 0x24d46c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24d46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d470: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x24d470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d474: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24d474u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24d478: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24d478u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24d47c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x24d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x24d480: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x24d480u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x24d484: 0x8fa301dc  lw          $v1, 0x1DC($sp)
    ctx->pc = 0x24d484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x24d488: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x24d488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24d48c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x24d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24d490: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x24d490u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24d494: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d498: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x24d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d49c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24d49cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24d4a0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x24d4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d4a4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x24d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d4a8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24d4a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24d4ac: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x24d4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d4b0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x24d4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d4b4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x24d4b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24d4b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24d4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24d4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24d4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d4c0: 0x0  nop
    ctx->pc = 0x24d4c0u;
    // NOP
    // 0x24d4c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d4c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d4c8: 0x0  nop
    ctx->pc = 0x24d4c8u;
    // NOP
    // 0x24d4cc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x24D4CCu;
    {
        const bool branch_taken_0x24d4cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4CCu;
        // 0x24d4d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4cc) {
            ctx->pc = 0x24D504u;
            goto label_24d504;
        }
    }
    ctx->pc = 0x24D4D4u;
    // 0x24d4d4: 0xc0932de  jal         func_24CB78
    ctx->pc = 0x24D4D4u;
    SET_GPR_U32(ctx, 31, 0x24D4DCu);
    ctx->pc = 0x24D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4D4u;
    // 0x24d4d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB78u, 0x24D4D4u, 0x24D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4DCu;
label_24d4dc:
    // 0x24d4dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d4e0: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24d4e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d4e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d4e8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24d4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d4ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24d4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d4f0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24d4f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d4f4: 0xfa210140  sqc2        $vf1, 0x140($s1)
    ctx->pc = 0x24d4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d4f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d4fc: 0x10000368  b           . + 4 + (0x368 << 2)
    ctx->pc = 0x24D4FCu;
    {
        const bool branch_taken_0x24d4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4FCu;
        // 0x24d500: 0xafa201c8  sw          $v0, 0x1C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4fc) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24D504u;
label_24d504:
    // 0x24d504: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24d504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24d508: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24d508u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d50c: 0x10000364  b           . + 4 + (0x364 << 2)
    ctx->pc = 0x24D50Cu;
    {
        const bool branch_taken_0x24d50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D50Cu;
        // 0x24d510: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d50c) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24D514u;
label_24d514:
    // 0x24d514: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24d514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24d518: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x24d518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d51c: 0xc46098fc  lwc1        $f0, -0x6704($v1)
    ctx->pc = 0x24d51cu;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d520: 0x26220140  addiu       $v0, $s1, 0x140
    ctx->pc = 0x24d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x24d524: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x24d524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d528: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x24d528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d52c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x24d52cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24d530: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x24d530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d534: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24d534u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24d538: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x24d538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24d53c: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x24d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x24d540: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24d540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24d544: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x24d544u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24d548: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x24d548u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24d54c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x24d54cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24d550: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x24d550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24d554: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x24d554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x24d558: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d55c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24d55cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d560: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d564: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d568: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x24d568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d56c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24d56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d570: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x24d570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d574: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x24d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d578: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24d578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24d57c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x24d57cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d580: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x24d580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24d584: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x24d584u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24d588: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x24d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x24d58c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d58cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d590: 0xfa210100  sqc2        $vf1, 0x100($s1)
    ctx->pc = 0x24d590u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d598: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x24d598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24d59c: 0xa2220110  sb          $v0, 0x110($s1)
    ctx->pc = 0x24d59cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x24d5a0: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x24d5a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24d5a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24d5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24d5a8: 0x1660033d  bnez        $s3, . + 4 + (0x33D << 2)
    ctx->pc = 0x24D5A8u;
    {
        const bool branch_taken_0x24d5a8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A8u;
        // 0x24d5ac: 0xafa301f8  sw          $v1, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5a8) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24D5B0u;
    // 0x24d5b0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24d5b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d5b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d5b8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24d5b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24d5bc: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x24d5bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d5c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24d5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24d5c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d5c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d5c8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24d5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24d5cc: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x24d5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24d5d0: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x24d5d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24d5d4: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x24d5d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24d5d8: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x24d5d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x24d5dc: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x24d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_24d5e0:
    // 0x24d5e0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d5e4: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x24d5e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24d5e8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x24d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x24d5ec: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x24d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x24d5f0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24d5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d5f4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x24d5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24d5f8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d5fc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24d5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d600: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x24d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d604: 0xc7a60004  lwc1        $f6, 0x4($sp)
    ctx->pc = 0x24d604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d608: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x24d608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d60c: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x24d60cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x24d610: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x24d610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d614: 0x46163182  mul.s       $f6, $f6, $f22
    ctx->pc = 0x24d614u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[22]);
    // 0x24d618: 0x461639c2  mul.s       $f7, $f7, $f22
    ctx->pc = 0x24d618u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[22]);
    // 0x24d61c: 0xc7a40090  lwc1        $f4, 0x90($sp)
    ctx->pc = 0x24d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d620: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x24d620u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x24d624: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x24d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d628: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x24d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d62c: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x24d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d630: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x24d630u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24d634: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24d634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d638: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x24d638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24d63c: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x24d63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24d640: 0xe7a50090  swc1        $f5, 0x90($sp)
    ctx->pc = 0x24d640u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24d644: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x24d644u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24d648: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x24d648u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24d64c: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x24d64cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x24d650: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x24d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24d654: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d654u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d658: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x24d658u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24d65c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d65cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d660: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d664: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x24d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d668: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x24d668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d66c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x24d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d670: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x24d670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d674: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24d678: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x24d678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24d67c: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x24d67cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24d680: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x24d680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24d684: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d688: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x24d688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24d68c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x24d68cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d690: 0xc093240  jal         func_24C900
    ctx->pc = 0x24D690u;
    SET_GPR_U32(ctx, 31, 0x24D698u);
    ctx->pc = 0x24D694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D690u;
    // 0x24d694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24D690u, 0x24D698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D698u;
label_24d698:
    // 0x24d698: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24D698u;
    SET_GPR_U32(ctx, 31, 0x24D6A0u);
    ctx->pc = 0x24D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D698u;
    // 0x24d69c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24D698u, 0x24D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6A0u;
label_24d6a0:
    // 0x24d6a0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24D6A0u;
    {
        const bool branch_taken_0x24d6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6A0u;
        // 0x24d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6a0) {
            ctx->pc = 0x24D728u;
            goto label_24d728;
        }
    }
    ctx->pc = 0x24D6A8u;
    // 0x24d6a8: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x24d6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x24d6ac: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x24d6acu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
label_24d6b0:
    // 0x24d6b0: 0x8ce22b1c  lw          $v0, 0x2B1C($a3)
    ctx->pc = 0x24d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11036)));
    // 0x24d6b4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x24d6b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24d6b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24D6B8u;
    {
        const bool branch_taken_0x24d6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6B8u;
        // 0x24d6bc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6b8) {
            ctx->pc = 0x24D6FCu;
            goto label_24d6fc;
        }
    }
    ctx->pc = 0x24D6C0u;
    // 0x24d6c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x24d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24d6c4: 0x8c442b20  lw          $a0, 0x2B20($v0)
    ctx->pc = 0x24d6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x24d6c8: 0x3c01bf66  lui         $at, 0xBF66
    ctx->pc = 0x24d6c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48998 << 16));
    // 0x24d6cc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x24d6ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x24d6d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d6d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d6d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24d6d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d6dc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x24d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d6e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d6e4: 0x0  nop
    ctx->pc = 0x24d6e4u;
    // NOP
    // 0x24d6e8: 0x4500fff1  bc1f        . + 4 + (-0xF << 2)
    ctx->pc = 0x24D6E8u;
    {
        const bool branch_taken_0x24d6e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6E8u;
        // 0x24d6ec: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6e8) {
            ctx->pc = 0x24D6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d6b0;
        }
    }
    ctx->pc = 0x24D6F0u;
    // 0x24d6f0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24d6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d6f4: 0xafb301cc  sw          $s3, 0x1CC($sp)
    ctx->pc = 0x24d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 19));
    // 0x24d6f8: 0xae3300f0  sw          $s3, 0xF0($s1)
    ctx->pc = 0x24d6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 19));
label_24d6fc:
    // 0x24d6fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d700: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x24d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24d704: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24d704u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d708: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x24d708u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d70c: 0xc093240  jal         func_24C900
    ctx->pc = 0x24D70Cu;
    SET_GPR_U32(ctx, 31, 0x24D714u);
    ctx->pc = 0x24D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D70Cu;
    // 0x24d710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24D70Cu, 0x24D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D714u;
label_24d714:
    // 0x24d714: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x24d714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24d718: 0xc094362  jal         func_250D88
    ctx->pc = 0x24D718u;
    SET_GPR_U32(ctx, 31, 0x24D720u);
    ctx->pc = 0x24D71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D718u;
    // 0x24d71c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x24D718u, 0x24D720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D720u;
label_24d720:
    // 0x24d720: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x24D720u;
    {
        const bool branch_taken_0x24d720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d720) {
            ctx->pc = 0x24D7E8u;
            goto label_24d7e8;
        }
    }
    ctx->pc = 0x24D728u;
label_24d728:
    // 0x24d728: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x24d728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24d72c: 0xc094362  jal         func_250D88
    ctx->pc = 0x24D72Cu;
    SET_GPR_U32(ctx, 31, 0x24D734u);
    ctx->pc = 0x24D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D72Cu;
    // 0x24d730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x24D72Cu, 0x24D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D734u;
label_24d734:
    // 0x24d734: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d738: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d73c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x24d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d740: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x24d740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x24d744: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x24d744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d748: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x24d748u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x24d74c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x24d74cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x24d750: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24d750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24d754: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x24d754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x24d758: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x24d758u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x24d75c: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x24d75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x24d760: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x24d760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x24d764: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x24d764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24d768: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x24d768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24d76c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d76cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d770: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x24d770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d774: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x24d774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d778: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x24d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d77c: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x24d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d780: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x24d780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d784: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x24d784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24d788: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x24d788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x24d78c: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x24d78cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x24d790: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x24d790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x24d794: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x24d794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x24d798: 0xe6150004  swc1        $f21, 0x4($s0)
    ctx->pc = 0x24d798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x24d79c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x24d79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x24d7a0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x24d7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x24d7a4: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x24d7a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24d7a8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x24d7a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24d7ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d7acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d7b0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x24d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d7b4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x24d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d7b8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x24d7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d7bc: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x24d7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d7c0: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x24d7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d7c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24d7c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24d7c8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x24d7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24d7cc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x24d7ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24d7d0: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x24d7d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x24d7d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24d7d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24d7d8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d7dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d7e0: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x24D7E0u;
    {
        const bool branch_taken_0x24d7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7E0u;
        // 0x24d7e4: 0xafa401c8  sw          $a0, 0x1C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7e0) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24D7E8u;
label_24d7e8:
    // 0x24d7e8: 0xc0933fc  jal         func_24CFF0
    ctx->pc = 0x24D7E8u;
    SET_GPR_U32(ctx, 31, 0x24D7F0u);
    ctx->pc = 0x24D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7E8u;
    // 0x24d7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CFF0u, 0x24D7E8u, 0x24D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D7F0u;
label_24d7f0:
    // 0x24d7f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D7F0u;
    {
        const bool branch_taken_0x24d7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d7f0) {
            ctx->pc = 0x24D800u;
            goto label_24d800;
        }
    }
    ctx->pc = 0x24D7F8u;
    // 0x24d7f8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24d7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d7fc: 0xae3300f0  sw          $s3, 0xF0($s1)
    ctx->pc = 0x24d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 19));
label_24d800:
    // 0x24d800: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x24d800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x24d804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24d804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d808: 0x0  nop
    ctx->pc = 0x24d808u;
    // NOP
    // 0x24d80c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24d80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d810: 0x0  nop
    ctx->pc = 0x24d810u;
    // NOP
    // 0x24d814: 0x450202a3  bc1fl       . + 4 + (0x2A3 << 2)
    ctx->pc = 0x24D814u;
    {
        const bool branch_taken_0x24d814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d814) {
            ctx->pc = 0x24D818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D814u;
            // 0x24d818: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24D81Cu;
    // 0x24d81c: 0x5260ff70  beql        $s3, $zero, . + 4 + (-0x90 << 2)
    ctx->pc = 0x24D81Cu;
    {
        const bool branch_taken_0x24d81c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d81c) {
            ctx->pc = 0x24D820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D81Cu;
            // 0x24d820: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d5e0;
        }
    }
    ctx->pc = 0x24D824u;
    // 0x24d824: 0x1000029f  b           . + 4 + (0x29F << 2)
    ctx->pc = 0x24D824u;
    {
        const bool branch_taken_0x24d824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D824u;
        // 0x24d828: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d824) {
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24D82Cu;
label_24d82c:
    // 0x24d82c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24d830: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24d830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d834: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x24d834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d83c: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x24D83Cu;
    {
        const bool branch_taken_0x24d83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D83Cu;
        // 0x24d840: 0xafa201c8  sw          $v0, 0x1C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d83c) {
            ctx->pc = 0x24DF8Cu;
            goto label_24df8c;
        }
    }
    ctx->pc = 0x24D844u;
label_24d844:
    // 0x24d844: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24d844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24d848: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x24d848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x24d84c: 0xc46498fc  lwc1        $f4, -0x6704($v1)
    ctx->pc = 0x24d84cu;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d850: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x24d850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24d854: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x24d854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x24d858: 0xe7a40084  swc1        $f4, 0x84($sp)
    ctx->pc = 0x24d858u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24d85c: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x24d85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x24d860: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x24d860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x24d864: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x24d864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x24d868: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24d868u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d86c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24d86cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d870: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d874: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d878: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x24d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d87c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24d87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d880: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x24d880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d884: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x24d884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d888: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24d88c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x24d88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d890: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x24d890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24d894: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x24d894u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24d898: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x24d898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x24d89c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24d89cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d8a0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x24d8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d8a4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24d8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24d8a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24d8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24d8ac: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x24d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x24d8b0: 0xc4403cf0  lwc1        $f0, 0x3CF0($v0)
    ctx->pc = 0x24d8b0u;
    { uint32_t bits = FAST_READ32(0x4B3CF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24d8b8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24d8b8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24d8bc: 0xafa401f8  sw          $a0, 0x1F8($sp)
    ctx->pc = 0x24d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 4));
    // 0x24d8c0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24d8c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24d8c4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x24d8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x24d8c8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24d8c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d8cc: 0x0  nop
    ctx->pc = 0x24d8ccu;
    // NOP
    // 0x24d8d0: 0x450001ae  bc1f        . + 4 + (0x1AE << 2)
    ctx->pc = 0x24D8D0u;
    {
        const bool branch_taken_0x24d8d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8D0u;
        // 0x24d8d4: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8d0) {
            ctx->pc = 0x24DF8Cu;
            goto label_24df8c;
        }
    }
    ctx->pc = 0x24D8D8u;
    // 0x24d8d8: 0x566001ad  bnel        $s3, $zero, . + 4 + (0x1AD << 2)
    ctx->pc = 0x24D8D8u;
    {
        const bool branch_taken_0x24d8d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d8d8) {
            ctx->pc = 0x24D8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D8D8u;
            // 0x24d8dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF90u;
            goto label_24df90;
        }
    }
    ctx->pc = 0x24D8E0u;
    // 0x24d8e0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24d8e4: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x24d8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24d8e8: 0xafa201e4  sw          $v0, 0x1E4($sp)
    ctx->pc = 0x24d8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 2));
    // 0x24d8ec: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x24d8ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24d8f0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x24d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d8f4: 0x0  nop
    ctx->pc = 0x24d8f4u;
    // NOP
label_24d8f8:
    // 0x24d8f8: 0xc7a50040  lwc1        $f5, 0x40($sp)
    ctx->pc = 0x24d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24d8fc: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x24d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24d900: 0xc7a7004c  lwc1        $f7, 0x4C($sp)
    ctx->pc = 0x24d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24d904: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24d904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d908: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x24d908u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24d90c: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x24d90cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24d910: 0xe7a7007c  swc1        $f7, 0x7C($sp)
    ctx->pc = 0x24d910u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24d914: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d918: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x24d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d91c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x24d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24d920: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x24d920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x24d924: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x24d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d928: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x24d928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x24d92c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24d930: 0x4604a102  mul.s       $f4, $f20, $f4
    ctx->pc = 0x24d930u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x24d934: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x24d934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x24d938: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x24d938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24d93c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x24d93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d940: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x24d940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24d944: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24d944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24d948: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x24d948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x24d94c: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x24d94cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x24d950: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x24d950u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x24d954: 0x8fa401e4  lw          $a0, 0x1E4($sp)
    ctx->pc = 0x24d954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x24d958: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24d958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d95c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24d95cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24d960: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d964: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24d964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d968: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x24d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d96c: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x24d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24d970: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x24d970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d974: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x24d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d978: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x24d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d97c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24d97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24d980: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24d980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24d984: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24d984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24d988: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x24d988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24d98c: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x24d98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24d990: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x24d990u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24d994: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x24d994u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x24d998: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x24d998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x24d99c: 0xe7c40004  swc1        $f4, 0x4($fp)
    ctx->pc = 0x24d99cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x24d9a0: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x24d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x24d9a4: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x24d9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x24d9a8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24d9a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24d9ac: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x24d9acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x24d9b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24d9b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24d9b4: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x24d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d9b8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x24d9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d9bc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x24d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d9c0: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x24d9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24d9c4: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x24d9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24d9c8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24d9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24d9cc: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x24d9ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24d9d0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x24d9d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24d9d4: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x24d9d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24d9d8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x24d9d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24d9dc: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x24d9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24d9e0: 0xc093240  jal         func_24C900
    ctx->pc = 0x24D9E0u;
    SET_GPR_U32(ctx, 31, 0x24D9E8u);
    ctx->pc = 0x24D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9E0u;
    // 0x24d9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24D9E0u, 0x24D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9E8u;
label_24d9e8:
    // 0x24d9e8: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24D9E8u;
    SET_GPR_U32(ctx, 31, 0x24D9F0u);
    ctx->pc = 0x24D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D9E8u;
    // 0x24d9ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24D9E8u, 0x24D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D9F0u;
label_24d9f0:
    // 0x24d9f0: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x24D9F0u;
    {
        const bool branch_taken_0x24d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D9F0u;
        // 0x24d9f4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d9f0) {
            ctx->pc = 0x24DF00u;
            goto label_24df00;
        }
    }
    ctx->pc = 0x24D9F8u;
    // 0x24d9f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d9fc: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x24d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
    // 0x24da00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24da00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da04: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x24da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24da08: 0xafa401e8  sw          $a0, 0x1E8($sp)
    ctx->pc = 0x24da08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 4));
    // 0x24da0c: 0xafa201f4  sw          $v0, 0x1F4($sp)
    ctx->pc = 0x24da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 2));
    // 0x24da10: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x24da10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24da14: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x24da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x24da18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24da18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da1c: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x24da1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x24da20: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x24da20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24da24: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x24da24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24da28: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x24da28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x24da2c: 0xafa401ec  sw          $a0, 0x1EC($sp)
    ctx->pc = 0x24da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 4));
    // 0x24da30: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x24DA30u;
    {
        const bool branch_taken_0x24da30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DA30u;
        // 0x24da34: 0xafa201f0  sw          $v0, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24da30) {
            ctx->pc = 0x24DCACu;
            goto label_24dcac;
        }
    }
    ctx->pc = 0x24DA38u;
    // 0x24da38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x24da38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24da3c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x24da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_24da40:
    // 0x24da40: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x24da40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24da44: 0x8c642b20  lw          $a0, 0x2B20($v1)
    ctx->pc = 0x24da44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11040)));
    // 0x24da48: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24da48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24da4c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24da4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24da50: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x24da50u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x24da54: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x24da54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24da58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24da58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24da5c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24da5cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x24da60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24da64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24da64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x24da68: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x24da68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24da6c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x24da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24da70: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x24da70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x24da74: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x24da74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24da78: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x24da78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24da7c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24da80: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x24da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24da84: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24da84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24da88: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x24da88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24da8c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24da90: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24da90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24da94: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x24da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24da98: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x24da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24da9c: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x24da9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24daa0: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x24daa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x24daa4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x24daa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x24daa8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24daa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24daac: 0x0  nop
    ctx->pc = 0x24daacu;
    // NOP
    // 0x24dab0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24dab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dab4: 0x0  nop
    ctx->pc = 0x24dab4u;
    // NOP
    // 0x24dab8: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x24DAB8u;
    {
        const bool branch_taken_0x24dab8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24dab8) {
            ctx->pc = 0x24DABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DAB8u;
            // 0x24dabc: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DB28u;
            goto label_24db28;
        }
    }
    ctx->pc = 0x24DAC0u;
    // 0x24dac0: 0x3c013f30  lui         $at, 0x3F30
    ctx->pc = 0x24dac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16176 << 16));
    // 0x24dac4: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x24dac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x24dac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24dac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dacc: 0x0  nop
    ctx->pc = 0x24daccu;
    // NOP
    // 0x24dad0: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x24dad0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dad4: 0x0  nop
    ctx->pc = 0x24dad4u;
    // NOP
    // 0x24dad8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x24DAD8u;
    {
        const bool branch_taken_0x24dad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAD8u;
        // 0x24dadc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dad8) {
            ctx->pc = 0x24DB10u;
            goto label_24db10;
        }
    }
    ctx->pc = 0x24DAE0u;
    // 0x24dae0: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24dae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dae4: 0xafa301c4  sw          $v1, 0x1C4($sp)
    ctx->pc = 0x24dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 3));
    // 0x24dae8: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x24dae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24daec: 0x0  nop
    ctx->pc = 0x24daecu;
    // NOP
    // 0x24daf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24DAF0u;
    {
        const bool branch_taken_0x24daf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DAF0u;
        // 0x24daf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24daf0) {
            ctx->pc = 0x24DAFCu;
            goto label_24dafc;
        }
    }
    ctx->pc = 0x24DAF8u;
    // 0x24daf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24dafc:
    // 0x24dafc: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24db00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24db04: 0xafa401cc  sw          $a0, 0x1CC($sp)
    ctx->pc = 0x24db04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 4));
    // 0x24db08: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x24DB08u;
    {
        const bool branch_taken_0x24db08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB08u;
        // 0x24db0c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db08) {
            ctx->pc = 0x24DCA8u;
            goto label_24dca8;
        }
    }
    ctx->pc = 0x24DB10u;
label_24db10:
    // 0x24db10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24db10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24db14: 0xc094224  jal         func_250890
    ctx->pc = 0x24DB14u;
    SET_GPR_U32(ctx, 31, 0x24DB1Cu);
    ctx->pc = 0x24DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DB14u;
    // 0x24db18: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24DB14u, 0x24DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DB1Cu;
label_24db1c:
    // 0x24db1c: 0xafb301cc  sw          $s3, 0x1CC($sp)
    ctx->pc = 0x24db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 19));
    // 0x24db20: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x24DB20u;
    {
        const bool branch_taken_0x24db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB20u;
        // 0x24db24: 0xae3300f0  sw          $s3, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db20) {
            ctx->pc = 0x24DCA8u;
            goto label_24dca8;
        }
    }
    ctx->pc = 0x24DB28u;
label_24db28:
    // 0x24db28: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x24db28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x24db2c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24db2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24db30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24db30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24db34: 0x0  nop
    ctx->pc = 0x24db34u;
    // NOP
    // 0x24db38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24db38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24db3c: 0x0  nop
    ctx->pc = 0x24db3cu;
    // NOP
    // 0x24db40: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x24DB40u;
    {
        const bool branch_taken_0x24db40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB40u;
        // 0x24db44: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db40) {
            ctx->pc = 0x24DC94u;
            goto label_24dc94;
        }
    }
    ctx->pc = 0x24DB48u;
    // 0x24db48: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x24db48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x24db4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24db4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24db50: 0xc48098fc  lwc1        $f0, -0x6704($a0)
    ctx->pc = 0x24db50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24db54: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24db54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x24db58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24db58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24db5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24db5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24db60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24db60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24db64: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x24db64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x24db68: 0xafa001e8  sw          $zero, 0x1E8($sp)
    ctx->pc = 0x24db68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 0));
    // 0x24db6c: 0x10800049  beqz        $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x24DB6Cu;
    {
        const bool branch_taken_0x24db6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DB6Cu;
        // 0x24db70: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24db6c) {
            ctx->pc = 0x24DC94u;
            goto label_24dc94;
        }
    }
    ctx->pc = 0x24DB74u;
    // 0x24db74: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x24db74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24db78: 0x0  nop
    ctx->pc = 0x24db78u;
    // NOP
    // 0x24db7c: 0x45020046  bc1fl       . + 4 + (0x46 << 2)
    ctx->pc = 0x24DB7Cu;
    {
        const bool branch_taken_0x24db7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24db7c) {
            ctx->pc = 0x24DB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DB7Cu;
            // 0x24db80: 0x8ce22b1c  lw          $v0, 0x2B1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DC98u;
            goto label_24dc98;
        }
    }
    ctx->pc = 0x24DB84u;
    // 0x24db84: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24db84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24db88: 0x0  nop
    ctx->pc = 0x24db88u;
    // NOP
    // 0x24db8c: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x24DB8Cu;
    {
        const bool branch_taken_0x24db8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24db8c) {
            ctx->pc = 0x24DB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DB8Cu;
            // 0x24db90: 0x8ce22b1c  lw          $v0, 0x2B1C($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DC98u;
            goto label_24dc98;
        }
    }
    ctx->pc = 0x24DB94u;
    // 0x24db94: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x24db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24db98: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24db98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24db9c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dba0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x24dba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24dba4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24dba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dba8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x24dba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24dbac: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x24dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dbb0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x24dbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x24dbb4: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x24dbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x24dbb8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x24dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24dbbc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x24dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24dbc0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x24dbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24dbc4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24dbc4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24dbc8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24dbc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24dbcc: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x24dbccu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24dbd0: 0x46050144  c1          0x50144
    ctx->pc = 0x24dbd0u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x24dbd4: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24dbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dbd8: 0x46050834  c.lt.s      $f1, $f5
    ctx->pc = 0x24dbd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dbdc: 0x0  nop
    ctx->pc = 0x24dbdcu;
    // NOP
    // 0x24dbe0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x24DBE0u;
    {
        const bool branch_taken_0x24dbe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24dbe0) {
            ctx->pc = 0x24DC2Cu;
            goto label_24dc2c;
        }
    }
    ctx->pc = 0x24DBE8u;
    // 0x24dbe8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24dbe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dbec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24dbecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24dbf0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24dbf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24dbf4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24dbf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24dbf8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24dbf8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x24dbfc: 0x4a0003bf  vwaitq
    ctx->pc = 0x24dbfcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24dc00: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24dc00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24dc04: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24dc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24dc08: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x24dc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24dc0c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x24dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24dc10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24dc10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24dc14: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x24dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24dc18: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x24dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24dc1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24dc1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24dc20: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x24dc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24dc24: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x24dc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24dc28: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x24dc28u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_24dc2c:
    // 0x24dc2c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x24dc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x24dc30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24dc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dc34: 0x0  nop
    ctx->pc = 0x24dc34u;
    // NOP
    // 0x24dc38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24dc38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dc3c: 0x0  nop
    ctx->pc = 0x24dc3cu;
    // NOP
    // 0x24dc40: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x24DC40u;
    {
        const bool branch_taken_0x24dc40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC40u;
        // 0x24dc44: 0x8fa401d8  lw          $a0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc40) {
            ctx->pc = 0x24DC7Cu;
            goto label_24dc7c;
        }
    }
    ctx->pc = 0x24DC48u;
    // 0x24dc48: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x24dc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x24dc4c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24dc4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24dc50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24dc50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dc54: 0x0  nop
    ctx->pc = 0x24dc54u;
    // NOP
    // 0x24dc58: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x24dc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dc5c: 0x0  nop
    ctx->pc = 0x24dc5cu;
    // NOP
    // 0x24dc60: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24DC60u;
    {
        const bool branch_taken_0x24dc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC60u;
        // 0x24dc64: 0x8fa201d8  lw          $v0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc60) {
            ctx->pc = 0x24DC7Cu;
            goto label_24dc7c;
        }
    }
    ctx->pc = 0x24DC68u;
    // 0x24dc68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dc6c: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x24dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
    // 0x24dc70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24dc74: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x24dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
    // 0x24dc78: 0x8fa401d8  lw          $a0, 0x1D8($sp)
    ctx->pc = 0x24dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_24dc7c:
    // 0x24dc7c: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x24dc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24dc80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24DC80u;
    {
        const bool branch_taken_0x24dc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DC80u;
        // 0x24dc84: 0x8ce22b1c  lw          $v0, 0x2B1C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dc80) {
            ctx->pc = 0x24DC98u;
            goto label_24dc98;
        }
    }
    ctx->pc = 0x24DC88u;
    // 0x24dc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dc8c: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x24dc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
    // 0x24dc90: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x24dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_24dc94:
    // 0x24dc94: 0x8ce22b1c  lw          $v0, 0x2B1C($a3)
    ctx->pc = 0x24dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11036)));
label_24dc98:
    // 0x24dc98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24dc9c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x24dc9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24dca0: 0x1440ff67  bnez        $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x24DCA0u;
    {
        const bool branch_taken_0x24dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DCA0u;
        // 0x24dca4: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dca0) {
            ctx->pc = 0x24DA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24da40;
        }
    }
    ctx->pc = 0x24DCA8u;
label_24dca8:
    // 0x24dca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24dca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24dcac:
    // 0x24dcac: 0xc0932de  jal         func_24CB78
    ctx->pc = 0x24DCACu;
    SET_GPR_U32(ctx, 31, 0x24DCB4u);
    ctx->pc = 0x24DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCACu;
    // 0x24dcb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB78u, 0x24DCACu, 0x24DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCB4u;
label_24dcb4:
    // 0x24dcb4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24DCB4u;
    SET_GPR_U32(ctx, 31, 0x24DCBCu);
    ctx->pc = 0x24DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCB4u;
    // 0x24dcb8: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24DCB4u, 0x24DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCBCu;
label_24dcbc:
    // 0x24dcbc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24DCBCu;
    SET_GPR_U32(ctx, 31, 0x24DCC4u);
    ctx->pc = 0x24DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DCBCu;
    // 0x24dcc0: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24DCBCu, 0x24DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DCC4u;
label_24dcc4:
    // 0x24dcc4: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x24dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x24dcc8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x24dcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x24dccc: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x24dcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x24dcd0: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x24dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x24dcd4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x24dcd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24dcd8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x24dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x24dcdc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x24dcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x24dce0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x24dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x24dce4: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x24dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x24dce8: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x24dce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x24dcec: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x24dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x24dcf0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24dcf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dcf4: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x24dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24dcf8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x24dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x24dcfc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x24dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x24dd00: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x24dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x24dd04: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x24dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x24dd08: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24dd08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dd0c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x24dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24dd10: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x24dd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x24dd14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24dd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24dd18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x24dd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24dd1c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x24dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x24dd20: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x24dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x24dd24: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24DD24u;
    SET_GPR_U32(ctx, 31, 0x24DD2Cu);
    ctx->pc = 0x24DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DD24u;
    // 0x24dd28: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24DD24u, 0x24DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DD2Cu;
label_24dd2c:
    // 0x24dd2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24dd30: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24dd34: 0xc46098fc  lwc1        $f0, -0x6704($v1)
    ctx->pc = 0x24dd34u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dd38: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24dd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24dd3c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24dd40: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x24dd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x24dd44: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x24dd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x24dd48: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x24dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x24dd4c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x24dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x24dd50: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24dd50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dd54: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24dd54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24dd58: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24dd58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24dd5c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24dd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24dd60: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24dd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dd64: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x24dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd68: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x24dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24dd6c: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x24dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24dd70: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24dd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24dd74: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x24dd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24dd78: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x24dd78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24dd7c: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x24dd7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x24dd80: 0x8fa201f4  lw          $v0, 0x1F4($sp)
    ctx->pc = 0x24dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x24dd84: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24dd84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24dd88: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24dd88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dd8c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24dd8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24dd90: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24dd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24dd94: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x24dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dd98: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x24dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24dd9c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x24dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24dda0: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x24dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24dda4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x24dda4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24dda8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x24dda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24ddac: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x24ddacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x24ddb0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x24ddb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x24ddb4: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x24ddb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x24ddb8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x24ddb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x24ddbc: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x24ddbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24ddc0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x24ddc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24ddc4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ddc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ddc8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x24ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ddcc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ddd0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ddd4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x24ddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ddd8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24ddd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24dddc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24dddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24dde0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24dde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24dde4: 0x0  nop
    ctx->pc = 0x24dde4u;
    // NOP
    // 0x24dde8: 0x0  nop
    ctx->pc = 0x24dde8u;
    // NOP
    // 0x24ddec: 0x46000044  c1          0x44
    ctx->pc = 0x24ddecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ddf0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24ddf4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24ddf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24ddf8: 0x0  nop
    ctx->pc = 0x24ddf8u;
    // NOP
    // 0x24ddfc: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24ddfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24de00: 0x0  nop
    ctx->pc = 0x24de00u;
    // NOP
    // 0x24de04: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24DE04u;
    {
        const bool branch_taken_0x24de04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE04u;
        // 0x24de08: 0xe7a10130  swc1        $f1, 0x130($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de04) {
            ctx->pc = 0x24DE2Cu;
            goto label_24de2c;
        }
    }
    ctx->pc = 0x24DE0Cu;
    // 0x24de0c: 0x0  nop
    ctx->pc = 0x24de0cu;
    // NOP
    // 0x24de10: 0x0  nop
    ctx->pc = 0x24de10u;
    // NOP
    // 0x24de14: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x24de14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x24de18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24de18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24de1c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24de1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24de20: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24de20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24de24: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24de24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24de28: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x24de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_24de2c:
    // 0x24de2c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x24de2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24de30: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x24de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x24de34: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x24de34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x24de38: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x24de38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24de3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24de3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24de40: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x24de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24de44: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24de48: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24de4c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x24de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24de50: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24de50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24de54: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24de54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24de58: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24de58u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24de5c: 0x0  nop
    ctx->pc = 0x24de5cu;
    // NOP
    // 0x24de60: 0x0  nop
    ctx->pc = 0x24de60u;
    // NOP
    // 0x24de64: 0x46000044  c1          0x44
    ctx->pc = 0x24de64u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24de68: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24de68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24de6c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24de6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24de70: 0x0  nop
    ctx->pc = 0x24de70u;
    // NOP
    // 0x24de74: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24DE74u;
    {
        const bool branch_taken_0x24de74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DE74u;
        // 0x24de78: 0xe7a10130  swc1        $f1, 0x130($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24de74) {
            ctx->pc = 0x24DE9Cu;
            goto label_24de9c;
        }
    }
    ctx->pc = 0x24DE7Cu;
    // 0x24de7c: 0x0  nop
    ctx->pc = 0x24de7cu;
    // NOP
    // 0x24de80: 0x0  nop
    ctx->pc = 0x24de80u;
    // NOP
    // 0x24de84: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x24de84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x24de88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24de88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24de8c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24de8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24de90: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24de90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24de94: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24de94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24de98: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x24de98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_24de9c:
    // 0x24de9c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24de9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24dea0: 0x8fa401ec  lw          $a0, 0x1EC($sp)
    ctx->pc = 0x24dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x24dea4: 0x8fa701f0  lw          $a3, 0x1F0($sp)
    ctx->pc = 0x24dea4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x24dea8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x24dea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24deac: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24DEACu;
    SET_GPR_U32(ctx, 31, 0x24DEB4u);
    ctx->pc = 0x24DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DEACu;
    // 0x24deb0: 0x34a57210  ori         $a1, $a1, 0x7210 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24DEACu, 0x24DEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DEB4u;
label_24deb4:
    // 0x24deb4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24DEB4u;
    {
        const bool branch_taken_0x24deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEB4u;
        // 0x24deb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24deb4) {
            ctx->pc = 0x24DEC0u;
            goto label_24dec0;
        }
    }
    ctx->pc = 0x24DEBCu;
    // 0x24debc: 0xa2220130  sb          $v0, 0x130($s1)
    ctx->pc = 0x24debcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 304), (uint8_t)GPR_U32(ctx, 2));
label_24dec0:
    // 0x24dec0: 0x8fa201e8  lw          $v0, 0x1E8($sp)
    ctx->pc = 0x24dec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x24dec4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x24DEC4u;
    {
        const bool branch_taken_0x24dec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEC4u;
        // 0x24dec8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dec4) {
            ctx->pc = 0x24DF2Cu;
            goto label_24df2c;
        }
    }
    ctx->pc = 0x24DECCu;
    // 0x24decc: 0xc46098fc  lwc1        $f0, -0x6704($v1)
    ctx->pc = 0x24deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ded0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24ded0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x24ded4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24ded4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ded8: 0x0  nop
    ctx->pc = 0x24ded8u;
    // NOP
    // 0x24dedc: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x24DEDCu;
    {
        const bool branch_taken_0x24dedc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24dedc) {
            ctx->pc = 0x24DEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DEDCu;
            // 0x24dee0: 0x8e250024  lw          $a1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF30u;
            goto label_24df30;
        }
    }
    ctx->pc = 0x24DEE4u;
    // 0x24dee4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24dee8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24deec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24deecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24def0: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24def0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24def4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24def4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24def8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x24DEF8u;
    {
        const bool branch_taken_0x24def8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DEF8u;
        // 0x24defc: 0xafa401c8  sw          $a0, 0x1C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24def8) {
            ctx->pc = 0x24DF8Cu;
            goto label_24df8c;
        }
    }
    ctx->pc = 0x24DF00u;
label_24df00:
    // 0x24df00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24df00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24df04: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x24df04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x24df08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24df08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24df0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24df0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24df10: 0xc44098fc  lwc1        $f0, -0x6704($v0)
    ctx->pc = 0x24df10u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24df14: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24df14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x24df18: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24df18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24df1c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x24df1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24df20: 0x0  nop
    ctx->pc = 0x24df20u;
    // NOP
    // 0x24df24: 0x4503fe41  bc1tl       . + 4 + (-0x1BF << 2)
    ctx->pc = 0x24DF24u;
    {
        const bool branch_taken_0x24df24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24df24) {
            ctx->pc = 0x24DF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF24u;
            // 0x24df28: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D82Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d82c;
        }
    }
    ctx->pc = 0x24DF2Cu;
label_24df2c:
    // 0x24df2c: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x24df2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_24df30:
    // 0x24df30: 0xc094362  jal         func_250D88
    ctx->pc = 0x24DF30u;
    SET_GPR_U32(ctx, 31, 0x24DF38u);
    ctx->pc = 0x24DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF30u;
    // 0x24df34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x24DF30u, 0x24DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF38u;
label_24df38:
    // 0x24df38: 0xc0933fc  jal         func_24CFF0
    ctx->pc = 0x24DF38u;
    SET_GPR_U32(ctx, 31, 0x24DF40u);
    ctx->pc = 0x24DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF38u;
    // 0x24df3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CFF0u, 0x24DF38u, 0x24DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF40u;
label_24df40:
    // 0x24df40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24DF40u;
    {
        const bool branch_taken_0x24df40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF40u;
        // 0x24df44: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df40) {
            ctx->pc = 0x24DF54u;
            goto label_24df54;
        }
    }
    ctx->pc = 0x24DF48u;
    // 0x24df48: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24df48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24df4c: 0xafb301cc  sw          $s3, 0x1CC($sp)
    ctx->pc = 0x24df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 19));
    // 0x24df50: 0xae3300f0  sw          $s3, 0xF0($s1)
    ctx->pc = 0x24df50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 19));
label_24df54:
    // 0x24df54: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x24df54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24df58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24df58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24df5c: 0xc46098fc  lwc1        $f0, -0x6704($v1)
    ctx->pc = 0x24df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24df60: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x24df60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x24df64: 0xc4813cf0  lwc1        $f1, 0x3CF0($a0)
    ctx->pc = 0x24df64u;
    { uint32_t bits = FAST_READ32(0x4B3CF0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24df68: 0x4617a500  add.s       $f20, $f20, $f23
    ctx->pc = 0x24df68u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
    // 0x24df6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24df6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24df70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24df70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24df74: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x24df74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24df78: 0x0  nop
    ctx->pc = 0x24df78u;
    // NOP
    // 0x24df7c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x24DF7Cu;
    {
        const bool branch_taken_0x24df7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24df7c) {
            ctx->pc = 0x24DF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24DF7Cu;
            // 0x24df80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24DF90u;
            goto label_24df90;
        }
    }
    ctx->pc = 0x24DF84u;
    // 0x24df84: 0x1260fe5c  beqz        $s3, . + 4 + (-0x1A4 << 2)
    ctx->pc = 0x24DF84u;
    {
        const bool branch_taken_0x24df84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF84u;
        // 0x24df88: 0xc7a00044  lwc1        $f0, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df84) {
            ctx->pc = 0x24D8F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d8f8;
        }
    }
    ctx->pc = 0x24DF8Cu;
label_24df8c:
    // 0x24df8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24df8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24df90:
    // 0x24df90: 0xc09341c  jal         func_24D070
    ctx->pc = 0x24DF90u;
    SET_GPR_U32(ctx, 31, 0x24DF98u);
    ctx->pc = 0x24DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24DF90u;
    // 0x24df94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D070u, 0x24DF90u, 0x24DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24DF98u;
label_24df98:
    // 0x24df98: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x24DF98u;
    {
        const bool branch_taken_0x24df98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DF98u;
        // 0x24df9c: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24df98) {
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24DFA0u;
    // 0x24dfa0: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24dfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dfa4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24dfa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dfa8: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x24dfa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24dfac: 0x0  nop
    ctx->pc = 0x24dfacu;
    // NOP
    // 0x24dfb0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24DFB0u;
    {
        const bool branch_taken_0x24dfb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFB0u;
        // 0x24dfb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfb0) {
            ctx->pc = 0x24DFBCu;
            goto label_24dfbc;
        }
    }
    ctx->pc = 0x24DFB8u;
    // 0x24dfb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24dfbc:
    // 0x24dfbc: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24dfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24dfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24dfc4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x24DFC4u;
    {
        const bool branch_taken_0x24dfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24DFC4u;
        // 0x24dfc8: 0xafa201cc  sw          $v0, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24dfc4) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24DFCCu;
label_24dfcc:
    // 0x24dfcc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24dfd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24dfd4: 0xc46098fc  lwc1        $f0, -0x6704($v1)
    ctx->pc = 0x24dfd4u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24dfd8: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x24dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
    // 0x24dfdc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24dfe0: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x24dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x24dfe4: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x24dfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24dfe8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x24dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x24dfec: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x24dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x24dff0: 0x8fa401dc  lw          $a0, 0x1DC($sp)
    ctx->pc = 0x24dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x24dff4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24dff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24dff8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24dff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24dffc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24dffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e000: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e004: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x24e004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e008: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24e008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e00c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x24e00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e010: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x24e010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e014: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24e014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24e018: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x24e018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24e01c: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x24e01cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24e020: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x24e020u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24e024: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x24e024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x24e028: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24e028u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e02c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x24e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e030: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e034: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x24e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24e038: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x24e038u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24e03c: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x24e03cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24e040: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x24e040u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x24e044: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x24e044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e048: 0x0  nop
    ctx->pc = 0x24e048u;
    // NOP
    // 0x24e04c: 0x45000094  bc1f        . + 4 + (0x94 << 2)
    ctx->pc = 0x24E04Cu;
    {
        const bool branch_taken_0x24e04c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E04Cu;
        // 0x24e050: 0xafa301f8  sw          $v1, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e04c) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24E054u;
    // 0x24e054: 0x56600093  bnel        $s3, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x24E054u;
    {
        const bool branch_taken_0x24e054 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e054) {
            ctx->pc = 0x24E058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E054u;
            // 0x24e058: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24E05Cu;
    // 0x24e05c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x24e05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x24e060: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x24e060u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24e064: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24e064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24e068:
    // 0x24e068: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x24e068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x24e06c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x24e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x24e070: 0xe7b50084  swc1        $f21, 0x84($sp)
    ctx->pc = 0x24e070u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24e074: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x24e074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x24e078: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x24e078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x24e07c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24e07cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e080: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24e080u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e084: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24e084u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e088: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24e088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e08c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x24e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e090: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x24e090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e094: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x24e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e098: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x24e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e09c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x24e09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24e0a0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x24e0a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24e0a4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x24e0a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24e0a8: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x24e0a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24e0ac: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x24e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24e0b0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24e0b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24e0b4: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x24e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e0b8: 0xc093240  jal         func_24C900
    ctx->pc = 0x24E0B8u;
    SET_GPR_U32(ctx, 31, 0x24E0C0u);
    ctx->pc = 0x24E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0B8u;
    // 0x24e0bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24E0B8u, 0x24E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0C0u;
label_24e0c0:
    // 0x24e0c0: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24E0C0u;
    SET_GPR_U32(ctx, 31, 0x24E0C8u);
    ctx->pc = 0x24E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E0C0u;
    // 0x24e0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24E0C0u, 0x24E0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E0C8u;
label_24e0c8:
    // 0x24e0c8: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x24E0C8u;
    {
        const bool branch_taken_0x24e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E0C8u;
        // 0x24e0cc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e0c8) {
            ctx->pc = 0x24E254u;
            goto label_24e254;
        }
    }
    ctx->pc = 0x24E0D0u;
    // 0x24e0d0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x24e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e0d4: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x24e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e0d8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24e0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24e0dc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x24e0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24e0e0: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x24e0e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24e0e4: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x24e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x24e0e8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x24e0e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e0ec: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24e0ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e0f0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24e0f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e0f4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24e0f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e0f8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24e0f8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x24e0fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x24e0fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24e100: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24e100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e104: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x24e104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e108: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x24e108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24e10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e110: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x24e110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x24e114: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x24e114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x24e118: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e11c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24e11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24e120: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x24e120u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x24e124: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x24e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e128: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x24e128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24e12c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24e12cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e130: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x24e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e134: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x24e134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24e138: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x24e138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e13c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x24e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x24e140: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24E140u;
    {
        const bool branch_taken_0x24e140 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E140u;
        // 0x24e144: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e140) {
            ctx->pc = 0x24E15Cu;
            goto label_24e15c;
        }
    }
    ctx->pc = 0x24E148u;
    // 0x24e148: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x24e148u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x24e14c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x24e14cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e150: 0x0  nop
    ctx->pc = 0x24e150u;
    // NOP
    // 0x24e154: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24E154u;
    {
        const bool branch_taken_0x24e154 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e154) {
            ctx->pc = 0x24E158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E154u;
            // 0x24e158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E15Cu;
            goto label_24e15c;
        }
    }
    ctx->pc = 0x24E15Cu;
label_24e15c:
    // 0x24e15c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24E15Cu;
    {
        const bool branch_taken_0x24e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E15Cu;
        // 0x24e160: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e15c) {
            ctx->pc = 0x24E184u;
            goto label_24e184;
        }
    }
    ctx->pc = 0x24E164u;
    // 0x24e164: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x24e164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24e168: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x24e168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e16c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x24e16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e170: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x24e170u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x24e174: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x24e174u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x24e178: 0x4a0003bf  vwaitq
    ctx->pc = 0x24e178u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x24e17c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x24e17cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e180: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24e180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_24e184:
    // 0x24e184: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x24e184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e188: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x24e188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e18c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x24e18cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24e190: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x24e190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e194: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x24e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e198: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x24e198u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x24e19c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x24e19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e1a0: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x24e1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e1a4: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x24e1a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x24e1a8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x24e1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x24e1ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24e1acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24e1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e1b4: 0x0  nop
    ctx->pc = 0x24e1b4u;
    // NOP
    // 0x24e1b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24e1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e1bc: 0x0  nop
    ctx->pc = 0x24e1bcu;
    // NOP
    // 0x24e1c0: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x24E1C0u;
    {
        const bool branch_taken_0x24e1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e1c0) {
            ctx->pc = 0x24E1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E1C0u;
            // 0x24e1c4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E24Cu;
            goto label_24e24c;
        }
    }
    ctx->pc = 0x24E1C8u;
    // 0x24e1c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e1cc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24e1d0: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x24e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x24e1d4: 0xc4610034  lwc1        $f1, 0x34($v1)
    ctx->pc = 0x24e1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e1d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24e1dc: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x24e1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e1e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24e1e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e1e4: 0x0  nop
    ctx->pc = 0x24e1e4u;
    // NOP
    // 0x24e1e8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x24E1E8u;
    {
        const bool branch_taken_0x24e1e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E1E8u;
        // 0x24e1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e1e8) {
            ctx->pc = 0x24E254u;
            goto label_24e254;
        }
    }
    ctx->pc = 0x24E1F0u;
    // 0x24e1f0: 0xc0932de  jal         func_24CB78
    ctx->pc = 0x24E1F0u;
    SET_GPR_U32(ctx, 31, 0x24E1F8u);
    ctx->pc = 0x24E1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1F0u;
    // 0x24e1f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB78u, 0x24E1F0u, 0x24E1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E1F8u;
label_24e1f8:
    // 0x24e1f8: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24E1F8u;
    SET_GPR_U32(ctx, 31, 0x24E200u);
    ctx->pc = 0x24E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E1F8u;
    // 0x24e1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24E1F8u, 0x24E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E200u;
label_24e200:
    // 0x24e200: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E200u;
    {
        const bool branch_taken_0x24e200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E200u;
        // 0x24e204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e200) {
            ctx->pc = 0x24E210u;
            goto label_24e210;
        }
    }
    ctx->pc = 0x24E208u;
    // 0x24e208: 0xc0932de  jal         func_24CB78
    ctx->pc = 0x24E208u;
    SET_GPR_U32(ctx, 31, 0x24E210u);
    ctx->pc = 0x24E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E208u;
    // 0x24e20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB78u, 0x24E208u, 0x24E210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E210u;
label_24e210:
    // 0x24e210: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24E210u;
    SET_GPR_U32(ctx, 31, 0x24E218u);
    ctx->pc = 0x24E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E210u;
    // 0x24e214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24E210u, 0x24E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E218u;
label_24e218:
    // 0x24e218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E218u;
    {
        const bool branch_taken_0x24e218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E218u;
        // 0x24e21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e218) {
            ctx->pc = 0x24E228u;
            goto label_24e228;
        }
    }
    ctx->pc = 0x24E220u;
    // 0x24e220: 0xc0932de  jal         func_24CB78
    ctx->pc = 0x24E220u;
    SET_GPR_U32(ctx, 31, 0x24E228u);
    ctx->pc = 0x24E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E220u;
    // 0x24e224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CB78u, 0x24E220u, 0x24E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E228u;
label_24e228:
    // 0x24e228: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24E228u;
    SET_GPR_U32(ctx, 31, 0x24E230u);
    ctx->pc = 0x24E22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E228u;
    // 0x24e22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24E228u, 0x24E230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E230u;
label_24e230:
    // 0x24e230: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24E230u;
    {
        const bool branch_taken_0x24e230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E230u;
        // 0x24e234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e230) {
            ctx->pc = 0x24E254u;
            goto label_24e254;
        }
    }
    ctx->pc = 0x24E238u;
    // 0x24e238: 0xc094224  jal         func_250890
    ctx->pc = 0x24E238u;
    SET_GPR_U32(ctx, 31, 0x24E240u);
    ctx->pc = 0x24E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E238u;
    // 0x24e23c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E238u, 0x24E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E240u;
label_24e240:
    // 0x24e240: 0xafb301cc  sw          $s3, 0x1CC($sp)
    ctx->pc = 0x24e240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 19));
    // 0x24e244: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24E244u;
    {
        const bool branch_taken_0x24e244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E244u;
        // 0x24e248: 0xae3300f0  sw          $s3, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e244) {
            ctx->pc = 0x24E254u;
            goto label_24e254;
        }
    }
    ctx->pc = 0x24E24Cu;
label_24e24c:
    // 0x24e24c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24E24Cu;
    {
        const bool branch_taken_0x24e24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E24Cu;
        // 0x24e250: 0xafb301c8  sw          $s3, 0x1C8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e24c) {
            ctx->pc = 0x24E2A0u;
            goto label_24e2a0;
        }
    }
    ctx->pc = 0x24E254u;
label_24e254:
    // 0x24e254: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24e254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24e258: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24e25c: 0xc46298fc  lwc1        $f2, -0x6704($v1)
    ctx->pc = 0x24e25cu;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e264: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x24e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e268: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x24e268u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x24e26c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x24e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e270: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x24e270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x24e274: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x24e274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24e278: 0xc094362  jal         func_250D88
    ctx->pc = 0x24E278u;
    SET_GPR_U32(ctx, 31, 0x24E280u);
    ctx->pc = 0x24E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E278u;
    // 0x24e27c: 0x46000e81  sub.s       $f26, $f1, $f0 (Delay Slot)
    ctx->f[26] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x250D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250D88u, 0x24E278u, 0x24E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E280u;
label_24e280:
    // 0x24e280: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24e280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e284: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x24e284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x24e288: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x24e288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e28c: 0x0  nop
    ctx->pc = 0x24e28cu;
    // NOP
    // 0x24e290: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x24E290u;
    {
        const bool branch_taken_0x24e290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E290u;
        // 0x24e294: 0x8fa401c8  lw          $a0, 0x1C8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e290) {
            ctx->pc = 0x24E2A4u;
            goto label_24e2a4;
        }
    }
    ctx->pc = 0x24E298u;
    // 0x24e298: 0x5260ff73  beql        $s3, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x24E298u;
    {
        const bool branch_taken_0x24e298 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e298) {
            ctx->pc = 0x24E29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E298u;
            // 0x24e29c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24e068;
        }
    }
    ctx->pc = 0x24E2A0u;
label_24e2a0:
    // 0x24e2a0: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24e2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_24e2a4:
    // 0x24e2a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E2A4u;
    {
        const bool branch_taken_0x24e2a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2A4u;
        // 0x24e2a8: 0x8fa201c0  lw          $v0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2a4) {
            ctx->pc = 0x24E2B8u;
            goto label_24e2b8;
        }
    }
    ctx->pc = 0x24E2ACu;
    // 0x24e2ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24e2b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24E2B0u;
    {
        const bool branch_taken_0x24e2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2B0u;
        // 0x24e2b4: 0xafa201c0  sw          $v0, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2b0) {
            ctx->pc = 0x24E2BCu;
            goto label_24e2bc;
        }
    }
    ctx->pc = 0x24E2B8u;
label_24e2b8:
    // 0x24e2b8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24e2b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24e2bc:
    // 0x24e2bc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24e2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x24e2c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24e2c4: 0x10620033  beq         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x24E2C4u;
    {
        const bool branch_taken_0x24e2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2C4u;
        // 0x24e2c8: 0x8fa301cc  lw          $v1, 0x1CC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2c4) {
            ctx->pc = 0x24E394u;
            goto label_24e394;
        }
    }
    ctx->pc = 0x24E2CCu;
    // 0x24e2cc: 0x54600032  bnel        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x24E2CCu;
    {
        const bool branch_taken_0x24e2cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e2cc) {
            ctx->pc = 0x24E2D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E2CCu;
            // 0x24e2d0: 0xc62100f4  lwc1        $f1, 0xF4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E398u;
            goto label_24e398;
        }
    }
    ctx->pc = 0x24E2D4u;
    // 0x24e2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24e2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e2d8: 0xc09341c  jal         func_24D070
    ctx->pc = 0x24E2D8u;
    SET_GPR_U32(ctx, 31, 0x24E2E0u);
    ctx->pc = 0x24E2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E2D8u;
    // 0x24e2dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D070u, 0x24E2D8u, 0x24E2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E2E0u;
label_24e2e0:
    // 0x24e2e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24E2E0u;
    {
        const bool branch_taken_0x24e2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2E0u;
        // 0x24e2e4: 0x8fa401c0  lw          $a0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2e0) {
            ctx->pc = 0x24E310u;
            goto label_24e310;
        }
    }
    ctx->pc = 0x24E2E8u;
    // 0x24e2e8: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e2ec: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x24e2ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e2f0: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x24e2f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e2f4: 0x0  nop
    ctx->pc = 0x24e2f4u;
    // NOP
    // 0x24e2f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24E2F8u;
    {
        const bool branch_taken_0x24e2f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E2F8u;
        // 0x24e2fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e2f8) {
            ctx->pc = 0x24E304u;
            goto label_24e304;
        }
    }
    ctx->pc = 0x24E300u;
    // 0x24e300: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24e300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24e304:
    // 0x24e304: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24e308: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x24E308u;
    {
        const bool branch_taken_0x24e308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E308u;
        // 0x24e30c: 0xa2330110  sb          $s3, 0x110($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e308) {
            ctx->pc = 0x24E394u;
            goto label_24e394;
        }
    }
    ctx->pc = 0x24E310u;
label_24e310:
    // 0x24e310: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x24e310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x24e314: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x24E314u;
    {
        const bool branch_taken_0x24e314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24e314) {
            ctx->pc = 0x24E318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E314u;
            // 0x24e318: 0xc62100f4  lwc1        $f1, 0xF4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E398u;
            goto label_24e398;
        }
    }
    ctx->pc = 0x24E31Cu;
    // 0x24e31c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x24e31cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x24e320: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x24e320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x24e324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e328: 0x0  nop
    ctx->pc = 0x24e328u;
    // NOP
    // 0x24e32c: 0x461a0036  c.le.s      $f0, $f26
    ctx->pc = 0x24e32cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e330: 0x0  nop
    ctx->pc = 0x24e330u;
    // NOP
    // 0x24e334: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x24E334u;
    {
        const bool branch_taken_0x24e334 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e334) {
            ctx->pc = 0x24E338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E334u;
            // 0x24e338: 0xc62100f4  lwc1        $f1, 0xF4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E398u;
            goto label_24e398;
        }
    }
    ctx->pc = 0x24E33Cu;
    // 0x24e33c: 0xc62100f8  lwc1        $f1, 0xF8($s1)
    ctx->pc = 0x24e33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e340: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x24e340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x24e344: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x24e344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x24e348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e34c: 0x0  nop
    ctx->pc = 0x24e34cu;
    // NOP
    // 0x24e350: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e350u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e354: 0x0  nop
    ctx->pc = 0x24e354u;
    // NOP
    // 0x24e358: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24E358u;
    {
        const bool branch_taken_0x24e358 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e358) {
            ctx->pc = 0x24E35Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E358u;
            // 0x24e35c: 0xc62000f4  lwc1        $f0, 0xF4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E374u;
            goto label_24e374;
        }
    }
    ctx->pc = 0x24E360u;
    // 0x24e360: 0xc094224  jal         func_250890
    ctx->pc = 0x24E360u;
    SET_GPR_U32(ctx, 31, 0x24E368u);
    ctx->pc = 0x24E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E360u;
    // 0x24e364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E360u, 0x24E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E368u;
label_24e368:
    // 0x24e368: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e36c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24E36Cu;
    {
        const bool branch_taken_0x24e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E36Cu;
        // 0x24e370: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e36c) {
            ctx->pc = 0x24E394u;
            goto label_24e394;
        }
    }
    ctx->pc = 0x24E374u;
label_24e374:
    // 0x24e374: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x24e374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e378: 0x0  nop
    ctx->pc = 0x24e378u;
    // NOP
    // 0x24e37c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24E37Cu;
    {
        const bool branch_taken_0x24e37c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E37Cu;
        // 0x24e380: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e37c) {
            ctx->pc = 0x24E388u;
            goto label_24e388;
        }
    }
    ctx->pc = 0x24E384u;
    // 0x24e384: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24e384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24e388:
    // 0x24e388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e38c: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x24e38cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x24e390: 0xa2220110  sb          $v0, 0x110($s1)
    ctx->pc = 0x24e390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 272), (uint8_t)GPR_U32(ctx, 2));
label_24e394:
    // 0x24e394: 0xc62100f4  lwc1        $f1, 0xF4($s1)
    ctx->pc = 0x24e394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24e398:
    // 0x24e398: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x24e398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x24e39c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e39cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e3a0: 0x0  nop
    ctx->pc = 0x24e3a0u;
    // NOP
    // 0x24e3a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24e3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e3a8: 0x0  nop
    ctx->pc = 0x24e3a8u;
    // NOP
    // 0x24e3ac: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x24E3ACu;
    {
        const bool branch_taken_0x24e3ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24e3ac) {
            ctx->pc = 0x24E3D0u;
            goto label_24e3d0;
        }
    }
    ctx->pc = 0x24E3B4u;
    // 0x24e3b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24e3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24e3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e3bc: 0x0  nop
    ctx->pc = 0x24e3bcu;
    // NOP
    // 0x24e3c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24e3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e3c4: 0x0  nop
    ctx->pc = 0x24e3c4u;
    // NOP
    // 0x24e3c8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x24E3C8u;
    {
        const bool branch_taken_0x24e3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3C8u;
        // 0x24e3cc: 0x8fa301c0  lw          $v1, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3c8) {
            ctx->pc = 0x24E3E4u;
            goto label_24e3e4;
        }
    }
    ctx->pc = 0x24E3D0u;
label_24e3d0:
    // 0x24e3d0: 0xc094224  jal         func_250890
    ctx->pc = 0x24E3D0u;
    SET_GPR_U32(ctx, 31, 0x24E3D8u);
    ctx->pc = 0x24E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E3D0u;
    // 0x24e3d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E3D0u, 0x24E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E3D8u;
label_24e3d8:
    // 0x24e3d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e3dc: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24e3e0: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x24e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_24e3e4:
    // 0x24e3e4: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x24e3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x24e3e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E3E8u;
    {
        const bool branch_taken_0x24e3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3E8u;
        // 0x24e3ec: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3e8) {
            ctx->pc = 0x24E3FCu;
            goto label_24e3fc;
        }
    }
    ctx->pc = 0x24E3F0u;
    // 0x24e3f0: 0x1260fbc5  beqz        $s3, . + 4 + (-0x43B << 2)
    ctx->pc = 0x24E3F0u;
    {
        const bool branch_taken_0x24e3f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3F0u;
        // 0x24e3f4: 0x8fa401c0  lw          $a0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3f0) {
            ctx->pc = 0x24D308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d308;
        }
    }
    ctx->pc = 0x24E3F8u;
    // 0x24e3f8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x24e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_24e3fc:
    // 0x24e3fc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E3FCu;
    {
        const bool branch_taken_0x24e3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E3FCu;
        // 0x24e400: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e3fc) {
            ctx->pc = 0x24E428u;
            goto label_24e428;
        }
    }
    ctx->pc = 0x24E404u;
    // 0x24e404: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24e404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x24e408: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E408u;
    {
        const bool branch_taken_0x24e408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E408u;
        // 0x24e40c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e408) {
            ctx->pc = 0x24E418u;
            goto label_24e418;
        }
    }
    ctx->pc = 0x24E410u;
    // 0x24e410: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E410u;
    {
        const bool branch_taken_0x24e410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E410u;
        // 0x24e414: 0x8fa201d0  lw          $v0, 0x1D0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e410) {
            ctx->pc = 0x24E42Cu;
            goto label_24e42c;
        }
    }
    ctx->pc = 0x24E418u;
label_24e418:
    // 0x24e418: 0xc094224  jal         func_250890
    ctx->pc = 0x24E418u;
    SET_GPR_U32(ctx, 31, 0x24E420u);
    ctx->pc = 0x24E41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E418u;
    // 0x24e41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E418u, 0x24E420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E420u;
label_24e420:
    // 0x24e420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e424: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_24e428:
    // 0x24e428: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x24e428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_24e42c:
    // 0x24e42c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E42Cu;
    {
        const bool branch_taken_0x24e42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E42Cu;
        // 0x24e430: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e42c) {
            ctx->pc = 0x24E458u;
            goto label_24e458;
        }
    }
    ctx->pc = 0x24E434u;
    // 0x24e434: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24e434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x24e438: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E438u;
    {
        const bool branch_taken_0x24e438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E438u;
        // 0x24e43c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e438) {
            ctx->pc = 0x24E448u;
            goto label_24e448;
        }
    }
    ctx->pc = 0x24E440u;
    // 0x24e440: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E440u;
    {
        const bool branch_taken_0x24e440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e440) {
            ctx->pc = 0x24E444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E440u;
            // 0x24e444: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E45Cu;
            goto label_24e45c;
        }
    }
    ctx->pc = 0x24E448u;
label_24e448:
    // 0x24e448: 0xc094224  jal         func_250890
    ctx->pc = 0x24E448u;
    SET_GPR_U32(ctx, 31, 0x24E450u);
    ctx->pc = 0x24E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E448u;
    // 0x24e44c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E448u, 0x24E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E450u;
label_24e450:
    // 0x24e450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e454: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_24e458:
    // 0x24e458: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x24e458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24e45c:
    // 0x24e45c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24e45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24e460: 0x10a60003  beq         $a1, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E460u;
    {
        const bool branch_taken_0x24e460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x24E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E460u;
        // 0x24e464: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e460) {
            ctx->pc = 0x24E470u;
            goto label_24e470;
        }
    }
    ctx->pc = 0x24E468u;
    // 0x24e468: 0x54a20044  bnel        $a1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x24E468u;
    {
        const bool branch_taken_0x24e468 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e468) {
            ctx->pc = 0x24E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E468u;
            // 0x24e46c: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E57Cu;
            goto label_24e57c;
        }
    }
    ctx->pc = 0x24E470u;
label_24e470:
    // 0x24e470: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24e474: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x24e474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x24e478: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e47c: 0xc44498fc  lwc1        $f4, -0x6704($v0)
    ctx->pc = 0x24e47cu;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e480: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x24e480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24e484: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x24e484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x24e488: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x24e488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24e48c: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x24e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x24e490: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x24e490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e494: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24e494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e498: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24e498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24e49c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x24e49cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x24e4a0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x24e4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24e4a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24e4a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x24e4a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x24e4ac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24e4acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24e4b0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24e4b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x24e4b4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x24e4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x24e4b8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24e4bc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x24e4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x24e4c0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x24e4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x24e4c4: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x24e4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x24e4c8: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x24e4c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24e4cc: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x24e4ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24e4d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24e4d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e4d4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24e4d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24e4d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24e4d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e4dc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e4e0: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x24e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e4e4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x24e4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e4e8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x24e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e4ec: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x24e4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e4f0: 0xafa301f8  sw          $v1, 0x1F8($sp)
    ctx->pc = 0x24e4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
    // 0x24e4f4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24e4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24e4f8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x24e4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24e4fc: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x24e4fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24e500: 0x10a60004  beq         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x24E500u;
    {
        const bool branch_taken_0x24e500 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x24E504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E500u;
        // 0x24e504: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e500) {
            ctx->pc = 0x24E514u;
            goto label_24e514;
        }
    }
    ctx->pc = 0x24E508u;
    // 0x24e508: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24e50c: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24E50Cu;
    {
        const bool branch_taken_0x24e50c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x24e50c) {
            ctx->pc = 0x24E510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E50Cu;
            // 0x24e510: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E538u;
            goto label_24e538;
        }
    }
    ctx->pc = 0x24E514u;
label_24e514:
    // 0x24e514: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24e514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e518: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e51c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24e51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24e520: 0x0  nop
    ctx->pc = 0x24e520u;
    // NOP
    // 0x24e524: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24e524u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24e528: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x24e528u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x24e52c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x24e52cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x24e530: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x24e530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24e534: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24e534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24e538:
    // 0x24e538: 0xc0b1534  jal         func_2C54D0
    ctx->pc = 0x24E538u;
    SET_GPR_U32(ctx, 31, 0x24E540u);
    ctx->pc = 0x24E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E538u;
    // 0x24e53c: 0x8fa501f8  lw          $a1, 0x1F8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C54D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C54D0u, 0x24E538u, 0x24E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E540u;
label_24e540:
    // 0x24e540: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x24e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24e544: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x24e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24e548: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24e548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e54c: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x24e54cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e550: 0xc093240  jal         func_24C900
    ctx->pc = 0x24E550u;
    SET_GPR_U32(ctx, 31, 0x24E558u);
    ctx->pc = 0x24E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E550u;
    // 0x24e554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24E550u, 0x24E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E558u;
label_24e558:
    // 0x24e558: 0xc0932a6  jal         func_24CA98
    ctx->pc = 0x24E558u;
    SET_GPR_U32(ctx, 31, 0x24E560u);
    ctx->pc = 0x24E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E558u;
    // 0x24e55c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CA98u, 0x24E558u, 0x24E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E560u;
label_24e560:
    // 0x24e560: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E560u;
    {
        const bool branch_taken_0x24e560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e560) {
            ctx->pc = 0x24E564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E560u;
            // 0x24e564: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E57Cu;
            goto label_24e57c;
        }
    }
    ctx->pc = 0x24E568u;
    // 0x24e568: 0xc094224  jal         func_250890
    ctx->pc = 0x24E568u;
    SET_GPR_U32(ctx, 31, 0x24E570u);
    ctx->pc = 0x24E56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E568u;
    // 0x24e56c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E568u, 0x24E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E570u;
label_24e570:
    // 0x24e570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e574: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24e578: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24e57c:
    // 0x24e57c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24e57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24e580: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x24E580u;
    {
        const bool branch_taken_0x24e580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E580u;
        // 0x24e584: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e580) {
            ctx->pc = 0x24E7D0u;
            goto label_24e7d0;
        }
    }
    ctx->pc = 0x24E588u;
    // 0x24e588: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24E588u;
    SET_GPR_U32(ctx, 31, 0x24E590u);
    ctx->pc = 0x24E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E588u;
    // 0x24e58c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24E588u, 0x24E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E590u;
label_24e590:
    // 0x24e590: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24E590u;
    SET_GPR_U32(ctx, 31, 0x24E598u);
    ctx->pc = 0x24E594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E590u;
    // 0x24e594: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24E590u, 0x24E598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E598u;
label_24e598:
    // 0x24e598: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e59c: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x24e59cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24e5a0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e5a4: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e5a8: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e5ac: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24e5acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24e5b0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e5b4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24e5b8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24e5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24e5bc: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e5c0: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e5c4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e5c8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24e5c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e5cc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e5d0: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x24e5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24e5d4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e5d8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e5dc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e5e0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e5e4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24e5e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e5e8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e5ec: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24e5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24e5f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e5f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e5f8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x24e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x24e5fc: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x24e5fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
    // 0x24e600: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24E600u;
    SET_GPR_U32(ctx, 31, 0x24E608u);
    ctx->pc = 0x24E604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E600u;
    // 0x24e604: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24E600u, 0x24E608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E608u;
label_24e608:
    // 0x24e608: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24e608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24e60c: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x24e60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24e610: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x24e610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x24e614: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x24e614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x24e618: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24e618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24e61c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x24e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24e620: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x24e620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x24e624: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e628: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x24e628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e62c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x24e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x24e630: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24e630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24e634: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x24e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e638: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x24e638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24e63c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24e63cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24e640: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x24e640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e644: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x24e644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24e648: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x24e648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e64c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x24e64cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24e650: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x24e650u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24e654: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24e654u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24e658: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24e658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24e65c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x24e65cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24e660: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x24e660u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24e664: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24e664u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e668: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e66c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24e66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e670: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24e670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e674: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x24e674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e678: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24e678u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24e67c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24e67cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24e680: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24e680u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24e684: 0x0  nop
    ctx->pc = 0x24e684u;
    // NOP
    // 0x24e688: 0x0  nop
    ctx->pc = 0x24e688u;
    // NOP
    // 0x24e68c: 0x46000044  c1          0x44
    ctx->pc = 0x24e68cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24e690: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x24e690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e694: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24e694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24e698: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x24e698u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e69c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24e69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24e6a0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24e6a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e6a4: 0x0  nop
    ctx->pc = 0x24e6a4u;
    // NOP
    // 0x24e6a8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24E6A8u;
    {
        const bool branch_taken_0x24e6a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E6A8u;
        // 0x24e6ac: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e6a8) {
            ctx->pc = 0x24E6DCu;
            goto label_24e6dc;
        }
    }
    ctx->pc = 0x24E6B0u;
    // 0x24e6b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e6b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e6b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e6b8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24e6bc: 0x0  nop
    ctx->pc = 0x24e6bcu;
    // NOP
    // 0x24e6c0: 0x0  nop
    ctx->pc = 0x24e6c0u;
    // NOP
    // 0x24e6c4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e6c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24e6c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24e6c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24e6cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24e6ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e6d0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24e6d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24e6d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24e6d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e6d8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24e6dc:
    // 0x24e6dc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x24e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24e6e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x24e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x24e6e4: 0xc62200fc  lwc1        $f2, 0xFC($s1)
    ctx->pc = 0x24e6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e6e8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x24e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e6ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x24e6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x24e6f0: 0xc44198fc  lwc1        $f1, -0x6704($v0)
    ctx->pc = 0x24e6f0u;
    { uint32_t bits = FAST_READ32(0x3F98FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e6f4: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24e6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24e6f8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x24e6f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x24e6fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x24e6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e700: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x24e700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24e704: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x24e704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e708: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x24e708u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24e70c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x24e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e710: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x24e710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24e714: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x24e714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24e718: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x24e718u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24e71c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24e71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24e720: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24e720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24e724: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24e724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e728: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24e728u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e72c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e730: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24e730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24e734: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24e734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e738: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24e738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e73c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x24e73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e740: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24e740u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24e744: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24e744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24e748: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24e748u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24e74c: 0x0  nop
    ctx->pc = 0x24e74cu;
    // NOP
    // 0x24e750: 0x0  nop
    ctx->pc = 0x24e750u;
    // NOP
    // 0x24e754: 0x46000044  c1          0x44
    ctx->pc = 0x24e754u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24e758: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24e758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24e75c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24e75cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e760: 0x0  nop
    ctx->pc = 0x24e760u;
    // NOP
    // 0x24e764: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24E764u;
    {
        const bool branch_taken_0x24e764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E764u;
        // 0x24e768: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e764) {
            ctx->pc = 0x24E798u;
            goto label_24e798;
        }
    }
    ctx->pc = 0x24E76Cu;
    // 0x24e76c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e774: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24e774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e778: 0x0  nop
    ctx->pc = 0x24e778u;
    // NOP
    // 0x24e77c: 0x0  nop
    ctx->pc = 0x24e77cu;
    // NOP
    // 0x24e780: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e780u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24e784: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24e784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24e788: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24e788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24e78c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24e78cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24e790: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24e790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e794: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24e798:
    // 0x24e798: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24e798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24e79c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24e79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e7a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24e7a4: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24e7a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24e7a8: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24E7A8u;
    SET_GPR_U32(ctx, 31, 0x24E7B0u);
    ctx->pc = 0x24E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7A8u;
    // 0x24e7ac: 0x27a701a4  addiu       $a3, $sp, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24E7A8u, 0x24E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7B0u;
label_24e7b0:
    // 0x24e7b0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E7B0u;
    {
        const bool branch_taken_0x24e7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e7b0) {
            ctx->pc = 0x24E7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E7B0u;
            // 0x24e7b4: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E7CCu;
            goto label_24e7cc;
        }
    }
    ctx->pc = 0x24E7B8u;
    // 0x24e7b8: 0xc094224  jal         func_250890
    ctx->pc = 0x24E7B8u;
    SET_GPR_U32(ctx, 31, 0x24E7C0u);
    ctx->pc = 0x24E7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7B8u;
    // 0x24e7bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E7B8u, 0x24E7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7C0u;
label_24e7c0:
    // 0x24e7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e7c4: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24e7c8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24e7cc:
    // 0x24e7cc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24e7d0:
    // 0x24e7d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E7D0u;
    {
        const bool branch_taken_0x24e7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7D0u;
        // 0x24e7d4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7d0) {
            ctx->pc = 0x24E7E0u;
            goto label_24e7e0;
        }
    }
    ctx->pc = 0x24E7D8u;
    // 0x24e7d8: 0x14620073  bne         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x24E7D8u;
    {
        const bool branch_taken_0x24e7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E7D8u;
        // 0x24e7dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e7d8) {
            ctx->pc = 0x24E9A8u;
            goto label_24e9a8;
        }
    }
    ctx->pc = 0x24E7E0u;
label_24e7e0:
    // 0x24e7e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24E7E0u;
    SET_GPR_U32(ctx, 31, 0x24E7E8u);
    ctx->pc = 0x24E7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7E0u;
    // 0x24e7e4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24E7E0u, 0x24E7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7E8u;
label_24e7e8:
    // 0x24e7e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24E7E8u;
    SET_GPR_U32(ctx, 31, 0x24E7F0u);
    ctx->pc = 0x24E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E7E8u;
    // 0x24e7ec: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24E7E8u, 0x24E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E7F0u;
label_24e7f0:
    // 0x24e7f0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e7f4: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x24e7f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24e7f8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e7fc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e800: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e804: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24e804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24e808: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e80c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24e810: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24e810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24e814: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e818: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e81c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e820: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24e820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e824: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e828: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x24e828u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24e82c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e830: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e834: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e838: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e83c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24e83cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e840: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e844: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24e844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24e848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e84c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24e84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e850: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x24e850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x24e854: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x24e854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x24e858: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24E858u;
    SET_GPR_U32(ctx, 31, 0x24E860u);
    ctx->pc = 0x24E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E858u;
    // 0x24e85c: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24E858u, 0x24E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E860u;
label_24e860:
    // 0x24e860: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x24e860u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24e864: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24e868: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x24e868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24e86c: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x24e86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x24e870: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24e870u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24e874: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24e874u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e878: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24e878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e87c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e880: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24e880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e884: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e888: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x24e888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e88c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24e88cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24e890: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24e890u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24e894: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24e894u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24e898: 0x0  nop
    ctx->pc = 0x24e898u;
    // NOP
    // 0x24e89c: 0x0  nop
    ctx->pc = 0x24e89cu;
    // NOP
    // 0x24e8a0: 0x46000044  c1          0x44
    ctx->pc = 0x24e8a0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24e8a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24e8a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8a8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24e8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24e8ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24e8acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e8b0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24e8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24e8b4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24e8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e8b8: 0x0  nop
    ctx->pc = 0x24e8b8u;
    // NOP
    // 0x24e8bc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24E8BCu;
    {
        const bool branch_taken_0x24e8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E8BCu;
        // 0x24e8c0: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e8bc) {
            ctx->pc = 0x24E8F0u;
            goto label_24e8f0;
        }
    }
    ctx->pc = 0x24E8C4u;
    // 0x24e8c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e8c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e8c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e8cc: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24e8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24e8d0: 0x0  nop
    ctx->pc = 0x24e8d0u;
    // NOP
    // 0x24e8d4: 0x0  nop
    ctx->pc = 0x24e8d4u;
    // NOP
    // 0x24e8d8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e8d8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24e8dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24e8dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24e8e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24e8e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e8e4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24e8e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e8e8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24e8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e8ec: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24e8f0:
    // 0x24e8f0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x24e8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24e8f4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24e8f8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24e8f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24e8fc: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24e8fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24e900: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24e900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e904: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24e904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24e908: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24e908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24e90c: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x24e90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e910: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24e914: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x24e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24e918: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24e918u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24e91c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24e91cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24e920: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24e920u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24e924: 0x0  nop
    ctx->pc = 0x24e924u;
    // NOP
    // 0x24e928: 0x0  nop
    ctx->pc = 0x24e928u;
    // NOP
    // 0x24e92c: 0x46000044  c1          0x44
    ctx->pc = 0x24e92cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24e930: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24e930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24e934: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24e934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e938: 0x0  nop
    ctx->pc = 0x24e938u;
    // NOP
    // 0x24e93c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24E93Cu;
    {
        const bool branch_taken_0x24e93c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E93Cu;
        // 0x24e940: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e93c) {
            ctx->pc = 0x24E970u;
            goto label_24e970;
        }
    }
    ctx->pc = 0x24E944u;
    // 0x24e944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e94c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24e94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e950: 0x0  nop
    ctx->pc = 0x24e950u;
    // NOP
    // 0x24e954: 0x0  nop
    ctx->pc = 0x24e954u;
    // NOP
    // 0x24e958: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24e958u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24e95c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24e95cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24e960: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24e960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24e964: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24e964u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24e968: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24e968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24e96c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24e970:
    // 0x24e970: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24e970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24e974: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24e974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24e978: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24e97c: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24e97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24e980: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24E980u;
    SET_GPR_U32(ctx, 31, 0x24E988u);
    ctx->pc = 0x24E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E980u;
    // 0x24e984: 0x27a701a8  addiu       $a3, $sp, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24E980u, 0x24E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E988u;
label_24e988:
    // 0x24e988: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24E988u;
    {
        const bool branch_taken_0x24e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24e988) {
            ctx->pc = 0x24E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24E988u;
            // 0x24e98c: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24E9A4u;
            goto label_24e9a4;
        }
    }
    ctx->pc = 0x24E990u;
    // 0x24e990: 0xc094224  jal         func_250890
    ctx->pc = 0x24E990u;
    SET_GPR_U32(ctx, 31, 0x24E998u);
    ctx->pc = 0x24E994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E990u;
    // 0x24e994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24E990u, 0x24E998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E998u;
label_24e998:
    // 0x24e998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24e99c: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24e9a0: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24e9a4:
    // 0x24e9a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24e9a8:
    // 0x24e9a8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24E9A8u;
    {
        const bool branch_taken_0x24e9a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9A8u;
        // 0x24e9ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9a8) {
            ctx->pc = 0x24E9B8u;
            goto label_24e9b8;
        }
    }
    ctx->pc = 0x24E9B0u;
    // 0x24e9b0: 0x14620073  bne         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x24E9B0u;
    {
        const bool branch_taken_0x24e9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9B0u;
        // 0x24e9b4: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9b0) {
            ctx->pc = 0x24EB80u;
            goto label_24eb80;
        }
    }
    ctx->pc = 0x24E9B8u;
label_24e9b8:
    // 0x24e9b8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24E9B8u;
    SET_GPR_U32(ctx, 31, 0x24E9C0u);
    ctx->pc = 0x24E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9B8u;
    // 0x24e9bc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24E9B8u, 0x24E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9C0u;
label_24e9c0:
    // 0x24e9c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24E9C0u;
    SET_GPR_U32(ctx, 31, 0x24E9C8u);
    ctx->pc = 0x24E9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24E9C0u;
    // 0x24e9c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24E9C0u, 0x24E9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24E9C8u;
label_24e9c8:
    // 0x24e9c8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e9cc: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x24e9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24e9d0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e9d4: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e9d8: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e9dc: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24e9dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24e9e0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24e9e4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24e9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24e9e8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24e9ec: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24e9f0: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24e9f4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24e9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24e9f8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24e9f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24e9fc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24e9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ea00: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x24ea00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24ea04: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24ea08: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24ea0c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24ea10: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24ea14: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24ea14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24ea18: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ea1c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x24ea1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x24ea20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ea20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ea24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ea24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea28: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x24ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x24ea2c: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24ea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x24ea30: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24EA30u;
    SET_GPR_U32(ctx, 31, 0x24EA38u);
    ctx->pc = 0x24EA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EA30u;
    // 0x24ea34: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24EA30u, 0x24EA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EA38u;
label_24ea38:
    // 0x24ea38: 0x7a230140  lq          $v1, 0x140($s1)
    ctx->pc = 0x24ea38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x24ea3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24ea40: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x24ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24ea44: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x24ea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x24ea48: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24ea48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ea4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24ea4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ea50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ea50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ea54: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ea54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ea58: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ea5c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ea60: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x24ea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ea64: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24ea64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24ea68: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24ea68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24ea6c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24ea6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24ea70: 0x0  nop
    ctx->pc = 0x24ea70u;
    // NOP
    // 0x24ea74: 0x0  nop
    ctx->pc = 0x24ea74u;
    // NOP
    // 0x24ea78: 0x46000044  c1          0x44
    ctx->pc = 0x24ea78u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ea7c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24ea7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea80: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24ea80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24ea84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24ea84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ea88: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24ea88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24ea8c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24ea8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ea90: 0x0  nop
    ctx->pc = 0x24ea90u;
    // NOP
    // 0x24ea94: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24EA94u;
    {
        const bool branch_taken_0x24ea94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA94u;
        // 0x24ea98: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ea94) {
            ctx->pc = 0x24EAC8u;
            goto label_24eac8;
        }
    }
    ctx->pc = 0x24EA9Cu;
    // 0x24ea9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ea9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24eaa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24eaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eaa4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24eaa8: 0x0  nop
    ctx->pc = 0x24eaa8u;
    // NOP
    // 0x24eaac: 0x0  nop
    ctx->pc = 0x24eaacu;
    // NOP
    // 0x24eab0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24eab0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24eab4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24eab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24eab8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24eab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24eabc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24eabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24eac0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24eac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24eac4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24eac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24eac8:
    // 0x24eac8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x24eac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24eacc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24eaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24ead0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24ead0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24ead4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24ead4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24ead8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ead8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24eadc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24eadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24eae0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24eae4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x24eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eae8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x24eae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24eaec: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x24eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24eaf0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24eaf0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24eaf4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24eaf4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24eaf8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24eaf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24eafc: 0x0  nop
    ctx->pc = 0x24eafcu;
    // NOP
    // 0x24eb00: 0x0  nop
    ctx->pc = 0x24eb00u;
    // NOP
    // 0x24eb04: 0x46000044  c1          0x44
    ctx->pc = 0x24eb04u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24eb08: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24eb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24eb0c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24eb0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb10: 0x0  nop
    ctx->pc = 0x24eb10u;
    // NOP
    // 0x24eb14: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24EB14u;
    {
        const bool branch_taken_0x24eb14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB14u;
        // 0x24eb18: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb14) {
            ctx->pc = 0x24EB48u;
            goto label_24eb48;
        }
    }
    ctx->pc = 0x24EB1Cu;
    // 0x24eb1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24eb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24eb20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24eb20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb24: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24eb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb28: 0x0  nop
    ctx->pc = 0x24eb28u;
    // NOP
    // 0x24eb2c: 0x0  nop
    ctx->pc = 0x24eb2cu;
    // NOP
    // 0x24eb30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24eb30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24eb34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24eb34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24eb38: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24eb38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24eb3c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24eb3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24eb40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24eb40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24eb44: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24eb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24eb48:
    // 0x24eb48: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24eb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24eb4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24eb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb50: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24eb54: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24eb54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24eb58: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24EB58u;
    SET_GPR_U32(ctx, 31, 0x24EB60u);
    ctx->pc = 0x24EB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB58u;
    // 0x24eb5c: 0x27a701ac  addiu       $a3, $sp, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24EB58u, 0x24EB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB60u;
label_24eb60:
    // 0x24eb60: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x24EB60u;
    {
        const bool branch_taken_0x24eb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24eb60) {
            ctx->pc = 0x24EB64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EB60u;
            // 0x24eb64: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EB7Cu;
            goto label_24eb7c;
        }
    }
    ctx->pc = 0x24EB68u;
    // 0x24eb68: 0xc094224  jal         func_250890
    ctx->pc = 0x24EB68u;
    SET_GPR_U32(ctx, 31, 0x24EB70u);
    ctx->pc = 0x24EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB68u;
    // 0x24eb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24EB68u, 0x24EB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB70u;
label_24eb70:
    // 0x24eb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eb74: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24eb78: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24eb7c:
    // 0x24eb7c: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x24eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_24eb80:
    // 0x24eb80: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24eb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24eb84: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x24EB84u;
    {
        const bool branch_taken_0x24eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB84u;
        // 0x24eb88: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb84) {
            ctx->pc = 0x24EDFCu;
            goto label_24edfc;
        }
    }
    ctx->pc = 0x24EB8Cu;
    // 0x24eb8c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x24eb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24eb90: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24EB90u;
    SET_GPR_U32(ctx, 31, 0x24EB98u);
    ctx->pc = 0x24EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB90u;
    // 0x24eb94: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24EB90u, 0x24EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EB98u;
label_24eb98:
    // 0x24eb98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24EB98u;
    SET_GPR_U32(ctx, 31, 0x24EBA0u);
    ctx->pc = 0x24EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB98u;
    // 0x24eb9c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24EB98u, 0x24EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBA0u;
label_24eba0:
    // 0x24eba0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x24eba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x24eba4: 0x27b300d0  addiu       $s3, $sp, 0xD0
    ctx->pc = 0x24eba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24eba8: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x24eba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x24ebac: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x24ebacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x24ebb0: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x24ebb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x24ebb4: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24ebb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24ebb8: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24ebb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24ebbc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24ebbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24ebc0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24ebc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24ebc4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24ebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ebc8: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x24ebc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24ebcc: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x24ebccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x24ebd0: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x24ebd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x24ebd4: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x24ebd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x24ebd8: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x24ebd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x24ebdc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x24ebdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24ebe0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ebe4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ebe8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x24ebe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x24ebec: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24EBECu;
    SET_GPR_U32(ctx, 31, 0x24EBF4u);
    ctx->pc = 0x24EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EBECu;
    // 0x24ebf0: 0xe7b400c4  swc1        $f20, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24EBECu, 0x24EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EBF4u;
label_24ebf4:
    // 0x24ebf4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x24ebf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ebf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ebfc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x24ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x24ec00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24ec00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24ec04: 0xe7a001b0  swc1        $f0, 0x1B0($sp)
    ctx->pc = 0x24ec04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x24ec08: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24ec08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24ec0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ec0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24ec10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ec10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ec14: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x24ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x24ec18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ec1c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x24ec1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24ec20: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x24ec20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x24ec24: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x24ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x24ec28: 0xe7b40148  swc1        $f20, 0x148($sp)
    ctx->pc = 0x24ec28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24ec2c: 0xe7b4014c  swc1        $f20, 0x14C($sp)
    ctx->pc = 0x24ec2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24ec30: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24ec30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ec34: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x24ec34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24ec38: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ec38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ec3c: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x24ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ec40: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x24ec40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ec44: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24ec44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24ec48: 0xc7a20154  lwc1        $f2, 0x154($sp)
    ctx->pc = 0x24ec48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ec4c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x24ec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24ec50: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x24ec50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ec54: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x24ec54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ec58: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x24ec58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24ec5c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x24ec5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24ec60: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x24ec60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24ec64: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x24ec64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24ec68: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24ec68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24ec6c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24ec6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24ec70: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24ec70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ec74: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24ec74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ec78: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ec78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ec7c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ec7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ec80: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x24ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ec84: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x24ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ec88: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x24ec88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ec8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24ec8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24ec90: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24ec90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24ec94: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24ec94u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24ec98: 0x0  nop
    ctx->pc = 0x24ec98u;
    // NOP
    // 0x24ec9c: 0x0  nop
    ctx->pc = 0x24ec9cu;
    // NOP
    // 0x24eca0: 0x46000044  c1          0x44
    ctx->pc = 0x24eca0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24eca4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x24eca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eca8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24eca8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ecac: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24ecacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24ecb0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x24ecb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ecb4: 0x0  nop
    ctx->pc = 0x24ecb4u;
    // NOP
    // 0x24ecb8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24ECB8u;
    {
        const bool branch_taken_0x24ecb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ECBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ECB8u;
        // 0x24ecbc: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ecb8) {
            ctx->pc = 0x24ECECu;
            goto label_24ecec;
        }
    }
    ctx->pc = 0x24ECC0u;
    // 0x24ecc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ecc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ecc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ecc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ecc8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24eccc: 0x0  nop
    ctx->pc = 0x24ecccu;
    // NOP
    // 0x24ecd0: 0x0  nop
    ctx->pc = 0x24ecd0u;
    // NOP
    // 0x24ecd4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24ecd4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24ecd8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24ecd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24ecdc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24ecdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ece0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24ece0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24ece4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24ece4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ece8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24ece8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24ecec:
    // 0x24ecec: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ecf0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x24ecf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x24ecf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24ecf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24ecf8: 0x0  nop
    ctx->pc = 0x24ecf8u;
    // NOP
    // 0x24ecfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24ecfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24ed00: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24ed00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24ed04: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24ed04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24ed08: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24ed0c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24ed0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24ed10: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24ed10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24ed14: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ed14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ed18: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ed18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ed1c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24ed20: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x24ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ed24: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24ed24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ed28: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x24ed28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ed2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24ed2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24ed30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24ed30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24ed34: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24ed34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24ed38: 0x0  nop
    ctx->pc = 0x24ed38u;
    // NOP
    // 0x24ed3c: 0x0  nop
    ctx->pc = 0x24ed3cu;
    // NOP
    // 0x24ed40: 0x46000044  c1          0x44
    ctx->pc = 0x24ed40u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ed44: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24ed44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24ed48: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x24ed48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ed4c: 0x0  nop
    ctx->pc = 0x24ed4cu;
    // NOP
    // 0x24ed50: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x24ED50u;
    {
        const bool branch_taken_0x24ed50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24ED54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED50u;
        // 0x24ed54: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed50) {
            ctx->pc = 0x24ED84u;
            goto label_24ed84;
        }
    }
    ctx->pc = 0x24ED58u;
    // 0x24ed58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ed58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ed5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ed5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ed60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24ed60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed64: 0x0  nop
    ctx->pc = 0x24ed64u;
    // NOP
    // 0x24ed68: 0x0  nop
    ctx->pc = 0x24ed68u;
    // NOP
    // 0x24ed6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24ed6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24ed70: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24ed70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24ed74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24ed74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24ed78: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24ed78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24ed7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24ed7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ed80: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24ed84:
    // 0x24ed84: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24ed84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24ed88: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24ed88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ed8c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24ed90: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24ed90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24ed94: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24ED94u;
    SET_GPR_U32(ctx, 31, 0x24ED9Cu);
    ctx->pc = 0x24ED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ED94u;
    // 0x24ed98: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24ED94u, 0x24ED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ED9Cu;
label_24ed9c:
    // 0x24ed9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24ED9Cu;
    {
        const bool branch_taken_0x24ed9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ED9Cu;
        // 0x24eda0: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ed9c) {
            ctx->pc = 0x24EDB8u;
            goto label_24edb8;
        }
    }
    ctx->pc = 0x24EDA4u;
    // 0x24eda4: 0x0  nop
    ctx->pc = 0x24eda4u;
    // NOP
    // 0x24eda8: 0x0  nop
    ctx->pc = 0x24eda8u;
    // NOP
    // 0x24edac: 0x46000504  c1          0x504
    ctx->pc = 0x24edacu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x24edb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24EDB0u;
    {
        const bool branch_taken_0x24edb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDB0u;
        // 0x24edb4: 0xc62000f4  lwc1        $f0, 0xF4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edb0) {
            ctx->pc = 0x24EDC4u;
            goto label_24edc4;
        }
    }
    ctx->pc = 0x24EDB8u;
label_24edb8:
    // 0x24edb8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x24edb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24edbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24edbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24edc0: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x24edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24edc4:
    // 0x24edc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24edc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24edc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24edc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24edcc: 0x0  nop
    ctx->pc = 0x24edccu;
    // NOP
    // 0x24edd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24edd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24edd4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x24edd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24edd8: 0x0  nop
    ctx->pc = 0x24edd8u;
    // NOP
    // 0x24eddc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24EDDCu;
    {
        const bool branch_taken_0x24eddc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24eddc) {
            ctx->pc = 0x24EDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24EDDCu;
            // 0x24ede0: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24EDF8u;
            goto label_24edf8;
        }
    }
    ctx->pc = 0x24EDE4u;
    // 0x24ede4: 0xc094224  jal         func_250890
    ctx->pc = 0x24EDE4u;
    SET_GPR_U32(ctx, 31, 0x24EDECu);
    ctx->pc = 0x24EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EDE4u;
    // 0x24ede8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24EDE4u, 0x24EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EDECu;
label_24edec:
    // 0x24edec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24edecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24edf0: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24edf4: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24edf8:
    // 0x24edf8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24edfc:
    // 0x24edfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24EDFCu;
    {
        const bool branch_taken_0x24edfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EDFCu;
        // 0x24ee00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24edfc) {
            ctx->pc = 0x24EE0Cu;
            goto label_24ee0c;
        }
    }
    ctx->pc = 0x24EE04u;
    // 0x24ee04: 0x14620150  bne         $v1, $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x24EE04u;
    {
        const bool branch_taken_0x24ee04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EE04u;
        // 0x24ee08: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ee04) {
            ctx->pc = 0x24F348u;
            goto label_24f348;
        }
    }
    ctx->pc = 0x24EE0Cu;
label_24ee0c:
    // 0x24ee0c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x24ee10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24ee10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24ee14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24EE14u;
    SET_GPR_U32(ctx, 31, 0x24EE1Cu);
    ctx->pc = 0x24EE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE14u;
    // 0x24ee18: 0xc4555378  lwc1        $f21, 0x5378($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 21368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24EE14u, 0x24EE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE1Cu;
label_24ee1c:
    // 0x24ee1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24EE1Cu;
    SET_GPR_U32(ctx, 31, 0x24EE24u);
    ctx->pc = 0x24EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE1Cu;
    // 0x24ee20: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24EE1Cu, 0x24EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE24u;
label_24ee24:
    // 0x24ee24: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24ee28: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x24ee28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24ee2c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24ee30: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24ee30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24ee34: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24ee34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24ee38: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24ee38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24ee3c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24ee3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24ee40: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24ee44: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24ee48: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24ee48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24ee4c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24ee50: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24ee54: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24ee54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ee58: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24ee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ee5c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24ee5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24ee60: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24ee60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24ee64: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24ee64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24ee68: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24ee6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24ee6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ee70: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ee74: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x24ee74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24ee78: 0x263e0100  addiu       $fp, $s1, 0x100
    ctx->pc = 0x24ee78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x24ee7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x24ee7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x24ee80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ee80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24ee84: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x24ee84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x24ee88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24ee88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ee8c: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x24ee8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x24ee90: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24EE90u;
    SET_GPR_U32(ctx, 31, 0x24EE98u);
    ctx->pc = 0x24EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EE90u;
    // 0x24ee94: 0xe7b600c4  swc1        $f22, 0xC4($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24EE90u, 0x24EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24EE98u;
label_24ee98:
    // 0x24ee98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24ee98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24ee9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24ee9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24eea0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x24eea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24eea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eea8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x24eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24eeac: 0xafa201f8  sw          $v0, 0x1F8($sp)
    ctx->pc = 0x24eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 2));
    // 0x24eeb0: 0x27b601b4  addiu       $s6, $sp, 0x1B4
    ctx->pc = 0x24eeb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x24eeb4: 0xe7a001b4  swc1        $f0, 0x1B4($sp)
    ctx->pc = 0x24eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
    // 0x24eeb8: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x24eeb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24eebc: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x24eebcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24eec0: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x24eec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24eec4: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x24eec4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_24eec8:
    // 0x24eec8: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24eec8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eecc: 0x0  nop
    ctx->pc = 0x24eeccu;
    // NOP
    // 0x24eed0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24eed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24eed4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x24eed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eed8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x24eed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24eedc: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x24eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eee0: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x24eee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x24eee4: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x24eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24eee8: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x24eee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x24eeec: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24eeecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24eef0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x24eef0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24eef4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x24eef4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24eef8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x24eef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24eefc: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x24eefcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24ef00: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x24ef00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24ef04: 0xe7a30144  swc1        $f3, 0x144($sp)
    ctx->pc = 0x24ef04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24ef08: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x24ef08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24ef0c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x24ef0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x24ef10: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x24ef10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24ef14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ef14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ef18: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x24ef18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ef1c: 0xc62100fc  lwc1        $f1, 0xFC($s1)
    ctx->pc = 0x24ef1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ef20: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x24ef20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x24ef24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24ef24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24ef28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24ef28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24ef2c: 0xc7a30150  lwc1        $f3, 0x150($sp)
    ctx->pc = 0x24ef2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ef30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24ef30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24ef34: 0xc7a20158  lwc1        $f2, 0x158($sp)
    ctx->pc = 0x24ef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ef38: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x24ef38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ef3c: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x24ef3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24ef40: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x24ef40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24ef44: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24ef44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24ef48: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x24ef48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24ef4c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24ef4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24ef50: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24ef50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24ef54: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24ef54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24ef58: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24ef58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24ef5c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ef5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ef60: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ef64: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x24ef64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ef68: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x24ef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24ef6c: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x24ef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24ef70: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24ef70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24ef74: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24ef74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24ef78: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24ef78u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24ef7c: 0x0  nop
    ctx->pc = 0x24ef7cu;
    // NOP
    // 0x24ef80: 0x0  nop
    ctx->pc = 0x24ef80u;
    // NOP
    // 0x24ef84: 0x46000044  c1          0x44
    ctx->pc = 0x24ef84u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24ef88: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24ef88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24ef8c: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x24ef8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24ef90: 0x0  nop
    ctx->pc = 0x24ef90u;
    // NOP
    // 0x24ef94: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24EF94u;
    {
        const bool branch_taken_0x24ef94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EF94u;
        // 0x24ef98: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ef94) {
            ctx->pc = 0x24EFC0u;
            goto label_24efc0;
        }
    }
    ctx->pc = 0x24EF9Cu;
    // 0x24ef9c: 0x0  nop
    ctx->pc = 0x24ef9cu;
    // NOP
    // 0x24efa0: 0x0  nop
    ctx->pc = 0x24efa0u;
    // NOP
    // 0x24efa4: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x24efa4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x24efa8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24efa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24efac: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x24efacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x24efb0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24efb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24efb4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x24efb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x24efb8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24efb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24efbc: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24efbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24efc0:
    // 0x24efc0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24efc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24efc4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x24efc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x24efc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24efc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24efcc: 0x0  nop
    ctx->pc = 0x24efccu;
    // NOP
    // 0x24efd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24efd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24efd4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24efd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24efd8: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24efd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24efdc: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24efe0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24efe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24efe4: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24efe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24efe8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24efe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24efec: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24efecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24eff0: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x24eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24eff4: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x24eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24eff8: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x24eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24effc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24effcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f000: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24f000u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24f004: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24f004u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24f008: 0x0  nop
    ctx->pc = 0x24f008u;
    // NOP
    // 0x24f00c: 0x0  nop
    ctx->pc = 0x24f00cu;
    // NOP
    // 0x24f010: 0x46000044  c1          0x44
    ctx->pc = 0x24f010u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f014: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24f014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24f018: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x24f018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f01c: 0x0  nop
    ctx->pc = 0x24f01cu;
    // NOP
    // 0x24f020: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24F020u;
    {
        const bool branch_taken_0x24f020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F020u;
        // 0x24f024: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f020) {
            ctx->pc = 0x24F04Cu;
            goto label_24f04c;
        }
    }
    ctx->pc = 0x24F028u;
    // 0x24f028: 0x0  nop
    ctx->pc = 0x24f028u;
    // NOP
    // 0x24f02c: 0x0  nop
    ctx->pc = 0x24f02cu;
    // NOP
    // 0x24f030: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x24f030u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x24f034: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x24f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24f038: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24f038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f03c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24f03cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f040: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24f040u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24f044: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24f044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f048: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24f04c:
    // 0x24f04c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24f050: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x24f050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24f054: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24f054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24f058: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x24f058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24f05c: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24F05Cu;
    SET_GPR_U32(ctx, 31, 0x24F064u);
    ctx->pc = 0x24F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F05Cu;
    // 0x24f060: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24F05Cu, 0x24F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F064u;
label_24f064:
    // 0x24f064: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24F064u;
    {
        const bool branch_taken_0x24f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F064u;
        // 0x24f068: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f064) {
            ctx->pc = 0x24F090u;
            goto label_24f090;
        }
    }
    ctx->pc = 0x24F06Cu;
    // 0x24f06c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x24f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f070: 0x0  nop
    ctx->pc = 0x24f070u;
    // NOP
    // 0x24f074: 0x0  nop
    ctx->pc = 0x24f074u;
    // NOP
    // 0x24f078: 0x46000004  c1          0x4
    ctx->pc = 0x24f078u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f07c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f07cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f080: 0x0  nop
    ctx->pc = 0x24f080u;
    // NOP
    // 0x24f084: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F084u;
    {
        const bool branch_taken_0x24f084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F084u;
        // 0x24f088: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f084) {
            ctx->pc = 0x24F090u;
            goto label_24f090;
        }
    }
    ctx->pc = 0x24F08Cu;
    // 0x24f08c: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x24f08cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_24f090:
    // 0x24f090: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24f090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24f094: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x24f094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24f098: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x24F098u;
    {
        const bool branch_taken_0x24f098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F098u;
        // 0x24f09c: 0x27b00150  addiu       $s0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f098) {
            ctx->pc = 0x24EEC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24eec8;
        }
    }
    ctx->pc = 0x24F0A0u;
    // 0x24f0a0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24f0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24f0a4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24f0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24f0a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24f0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24f0ac: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x24f0acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f0b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f0b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x24f0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x24f0b8: 0x27b50160  addiu       $s5, $sp, 0x160
    ctx->pc = 0x24f0b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x24f0bc: 0x0  nop
    ctx->pc = 0x24f0bcu;
    // NOP
label_24f0c0:
    // 0x24f0c0: 0x1260008d  beqz        $s3, . + 4 + (0x8D << 2)
    ctx->pc = 0x24F0C0u;
    {
        const bool branch_taken_0x24f0c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F0C0u;
        // 0x24f0c4: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f0c0) {
            ctx->pc = 0x24F2F8u;
            goto label_24f2f8;
        }
    }
    ctx->pc = 0x24F0C8u;
    // 0x24f0c8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x24f0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f0cc: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x24f0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f0d0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x24f0d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x24f0d4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x24f0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f0d8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x24f0d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x24f0dc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x24f0dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x24f0e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x24f0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24f0e4: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x24f0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x24f0e8: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x24f0e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x24f0ec: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x24f0ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x24f0f0: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x24f0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x24f0f4: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x24f0f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x24f0f8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x24f0f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f0fc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f100: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x24f100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f104: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x24f104u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f108: 0x0  nop
    ctx->pc = 0x24f108u;
    // NOP
    // 0x24f10c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f10cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f110: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x24f110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f114: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x24f114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f118: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x24f118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f11c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x24f11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x24f120: 0xc7a80018  lwc1        $f8, 0x18($sp)
    ctx->pc = 0x24f120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x24f124: 0xc7a50160  lwc1        $f5, 0x160($sp)
    ctx->pc = 0x24f124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24f128: 0xc7a70164  lwc1        $f7, 0x164($sp)
    ctx->pc = 0x24f128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x24f12c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x24f12cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f130: 0xc7a60168  lwc1        $f6, 0x168($sp)
    ctx->pc = 0x24f130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x24f134: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x24f134u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24f138: 0xc7a4016c  lwc1        $f4, 0x16C($sp)
    ctx->pc = 0x24f138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f13c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x24f13cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24f140: 0xe7a50140  swc1        $f5, 0x140($sp)
    ctx->pc = 0x24f140u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24f144: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x24f144u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x24f148: 0xe7a70144  swc1        $f7, 0x144($sp)
    ctx->pc = 0x24f148u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24f14c: 0xe7a60148  swc1        $f6, 0x148($sp)
    ctx->pc = 0x24f14cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24f150: 0xe7a4014c  swc1        $f4, 0x14C($sp)
    ctx->pc = 0x24f150u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24f154: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x24f154u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x24f158: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x24f158u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x24f15c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x24f15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x24f160: 0xe7a1016c  swc1        $f1, 0x16C($sp)
    ctx->pc = 0x24f160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x24f164: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x24f164u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x24f168: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x24f168u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x24f16c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f16cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f170: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x24f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f174: 0xc62100fc  lwc1        $f1, 0xFC($s1)
    ctx->pc = 0x24f174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f178: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x24f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x24f17c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24f17cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24f180: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f184: 0xc7a30170  lwc1        $f3, 0x170($sp)
    ctx->pc = 0x24f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f188: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24f188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24f18c: 0xc7a20178  lwc1        $f2, 0x178($sp)
    ctx->pc = 0x24f18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f190: 0xc7a0017c  lwc1        $f0, 0x17C($sp)
    ctx->pc = 0x24f190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f194: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x24f194u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24f198: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x24f198u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24f19c: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24f19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24f1a0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x24f1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24f1a4: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24f1a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24f1a8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24f1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24f1ac: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24f1acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f1b0: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24f1b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24f1b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f1b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f1b8: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f1bc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24f1c0: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x24f1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f1c4: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f1c8: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x24f1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f1cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24f1ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f1d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24f1d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24f1d4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24f1d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24f1d8: 0x0  nop
    ctx->pc = 0x24f1d8u;
    // NOP
    // 0x24f1dc: 0x0  nop
    ctx->pc = 0x24f1dcu;
    // NOP
    // 0x24f1e0: 0x46000044  c1          0x44
    ctx->pc = 0x24f1e0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f1e4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24f1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24f1e8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24f1e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24f1ec: 0x0  nop
    ctx->pc = 0x24f1ecu;
    // NOP
    // 0x24f1f0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24f1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f1f4: 0x0  nop
    ctx->pc = 0x24f1f4u;
    // NOP
    // 0x24f1f8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24F1F8u;
    {
        const bool branch_taken_0x24f1f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1F8u;
        // 0x24f1fc: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1f8) {
            ctx->pc = 0x24F224u;
            goto label_24f224;
        }
    }
    ctx->pc = 0x24F200u;
    // 0x24f200: 0x0  nop
    ctx->pc = 0x24f200u;
    // NOP
    // 0x24f204: 0x0  nop
    ctx->pc = 0x24f204u;
    // NOP
    // 0x24f208: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x24f208u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x24f20c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24f20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f210: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24f210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f214: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24f214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f218: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24f218u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24f21c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24f21cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f220: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24f220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24f224:
    // 0x24f224: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24f224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f228: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x24f228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x24f22c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f230: 0x0  nop
    ctx->pc = 0x24f230u;
    // NOP
    // 0x24f234: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x24f234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24f238: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24f23c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24f23cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24f240: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24f240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24f244: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24f244u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f248: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x24f248u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x24f24c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f24cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f250: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24f250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f254: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24f254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24f258: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x24f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f25c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x24f25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f260: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x24f260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f264: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24f264u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f268: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24f268u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24f26c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24f26cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24f270: 0x0  nop
    ctx->pc = 0x24f270u;
    // NOP
    // 0x24f274: 0x0  nop
    ctx->pc = 0x24f274u;
    // NOP
    // 0x24f278: 0x46000044  c1          0x44
    ctx->pc = 0x24f278u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f27c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24f27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24f280: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24f280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f284: 0x0  nop
    ctx->pc = 0x24f284u;
    // NOP
    // 0x24f288: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24F288u;
    {
        const bool branch_taken_0x24f288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F288u;
        // 0x24f28c: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f288) {
            ctx->pc = 0x24F2B4u;
            goto label_24f2b4;
        }
    }
    ctx->pc = 0x24F290u;
    // 0x24f290: 0x0  nop
    ctx->pc = 0x24f290u;
    // NOP
    // 0x24f294: 0x0  nop
    ctx->pc = 0x24f294u;
    // NOP
    // 0x24f298: 0x4601b003  div.s       $f0, $f22, $f1
    ctx->pc = 0x24f298u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[22], ctx->f[1]); }
    // 0x24f29c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24f29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f2a0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24f2a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f2a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24f2a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f2a8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24f2a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24f2ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24f2acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f2b0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24f2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24f2b4:
    // 0x24f2b4: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24f2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24f2b8: 0x8fa401f8  lw          $a0, 0x1F8($sp)
    ctx->pc = 0x24f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x24f2bc: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24f2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24f2c0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x24f2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24f2c4: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24F2C4u;
    SET_GPR_U32(ctx, 31, 0x24F2CCu);
    ctx->pc = 0x24F2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F2C4u;
    // 0x24f2c8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24F2C4u, 0x24F2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F2CCu;
label_24f2cc:
    // 0x24f2cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x24F2CCu;
    {
        const bool branch_taken_0x24f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2CCu;
        // 0x24f2d0: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2cc) {
            ctx->pc = 0x24F2F8u;
            goto label_24f2f8;
        }
    }
    ctx->pc = 0x24F2D4u;
    // 0x24f2d4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x24f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f2d8: 0x0  nop
    ctx->pc = 0x24f2d8u;
    // NOP
    // 0x24f2dc: 0x0  nop
    ctx->pc = 0x24f2dcu;
    // NOP
    // 0x24f2e0: 0x46000004  c1          0x4
    ctx->pc = 0x24f2e0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f2e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24f2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f2e8: 0x0  nop
    ctx->pc = 0x24f2e8u;
    // NOP
    // 0x24f2ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F2ECu;
    {
        const bool branch_taken_0x24f2ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F2ECu;
        // 0x24f2f0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f2ec) {
            ctx->pc = 0x24F2F8u;
            goto label_24f2f8;
        }
    }
    ctx->pc = 0x24F2F4u;
    // 0x24f2f4: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x24f2f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_24f2f8:
    // 0x24f2f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x24f2f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x24f2fc: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x24f2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x24f300: 0x1440ff6f  bnez        $v0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x24F300u;
    {
        const bool branch_taken_0x24f300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f300) {
            ctx->pc = 0x24F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f0c0;
        }
    }
    ctx->pc = 0x24F308u;
    // 0x24f308: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x24f308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x24f30c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24f30cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24f310: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f314: 0x0  nop
    ctx->pc = 0x24f314u;
    // NOP
    // 0x24f318: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x24f318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f31c: 0x0  nop
    ctx->pc = 0x24f31cu;
    // NOP
    // 0x24f320: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x24F320u;
    {
        const bool branch_taken_0x24f320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24f320) {
            ctx->pc = 0x24F324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F320u;
            // 0x24f324: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F33Cu;
            goto label_24f33c;
        }
    }
    ctx->pc = 0x24F328u;
    // 0x24f328: 0xc094224  jal         func_250890
    ctx->pc = 0x24F328u;
    SET_GPR_U32(ctx, 31, 0x24F330u);
    ctx->pc = 0x24F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F328u;
    // 0x24f32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24F328u, 0x24F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F330u;
label_24f330:
    // 0x24f330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f334: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24f334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24f338: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24f338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24f33c:
    // 0x24f33c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f340: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F340u;
    {
        const bool branch_taken_0x24f340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F340u;
        // 0x24f344: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f340) {
            ctx->pc = 0x24F360u;
            goto label_24f360;
        }
    }
    ctx->pc = 0x24F348u;
label_24f348:
    // 0x24f348: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24F348u;
    {
        const bool branch_taken_0x24f348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F348u;
        // 0x24f34c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f348) {
            ctx->pc = 0x24F360u;
            goto label_24f360;
        }
    }
    ctx->pc = 0x24F350u;
    // 0x24f350: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24F350u;
    {
        const bool branch_taken_0x24f350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F350u;
        // 0x24f354: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f350) {
            ctx->pc = 0x24F374u;
            goto label_24f374;
        }
    }
    ctx->pc = 0x24F358u;
    // 0x24f358: 0x14620096  bne         $v1, $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x24F358u;
    {
        const bool branch_taken_0x24f358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F358u;
        // 0x24f35c: 0x3c02004b  lui         $v0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f358) {
            ctx->pc = 0x24F5B4u;
            goto label_24f5b4;
        }
    }
    ctx->pc = 0x24F360u;
label_24f360:
    // 0x24f360: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f364: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F364u;
    {
        const bool branch_taken_0x24f364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F364u;
        // 0x24f368: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f364) {
            ctx->pc = 0x24F374u;
            goto label_24f374;
        }
    }
    ctx->pc = 0x24F36Cu;
    // 0x24f36c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x24F36Cu;
    {
        const bool branch_taken_0x24f36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F36Cu;
        // 0x24f370: 0x26220120  addiu       $v0, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f36c) {
            ctx->pc = 0x24F3A4u;
            goto label_24f3a4;
        }
    }
    ctx->pc = 0x24F374u;
label_24f374:
    // 0x24f374: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x24f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24f378: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x24f378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x24f37c: 0x24853d00  addiu       $a1, $a0, 0x3D00
    ctx->pc = 0x24f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 15616));
    // 0x24f380: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24f380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24f384: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24f384u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f388: 0xf8813d00  sqc2        $vf1, 0x3D00($a0)
    ctx->pc = 0x24f388u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D00u, _value); } while (0);
    // 0x24f38c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24f38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f390: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x24f390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24f394: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24f394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f398: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x24f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f39c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x24F39Cu;
    {
        const bool branch_taken_0x24f39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F39Cu;
        // 0x24f3a0: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f39c) {
            ctx->pc = 0x24F434u;
            goto label_24f434;
        }
    }
    ctx->pc = 0x24F3A4u;
label_24f3a4:
    // 0x24f3a4: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x24f3a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f3a8: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x24f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f3ac: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x24f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x24f3b0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f3b4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x24f3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24f3b8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x24f3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f3bc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24f3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24f3c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f3c4: 0x0  nop
    ctx->pc = 0x24f3c4u;
    // NOP
    // 0x24f3c8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24f3c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24f3cc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x24f3ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x24f3d0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24f3d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24f3d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24f3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f3d8: 0xe7a4008c  swc1        $f4, 0x8C($sp)
    ctx->pc = 0x24f3d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24f3dc: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x24f3dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24f3e0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x24f3e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24f3e4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24f3e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24f3e8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24f3e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f3ec: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24f3ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f3f0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f3f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f3f4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f3f8: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x24f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f3fc: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x24f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x24f400: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x24f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f404: 0x24643d00  addiu       $a0, $v1, 0x3D00
    ctx->pc = 0x24f404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15616));
    // 0x24f408: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x24f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f40c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x24f40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f410: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x24f410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f414: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x24f414u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24f418: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x24f418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24f41c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x24f41cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24f420: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x24f420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x24f424: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24f424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f428: 0xf8613d00  sqc2        $vf1, 0x3D00($v1)
    ctx->pc = 0x24f428u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4B3D00u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4B3D00u, _value); } while (0);
    // 0x24f42c: 0xc62000fc  lwc1        $f0, 0xFC($s1)
    ctx->pc = 0x24f42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f430: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24f430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4B3D04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D04u, _value); } while (0); }
label_24f434:
    // 0x24f434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f438: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x24f438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x24f43c: 0xac823d10  sw          $v0, 0x3D10($a0)
    ctx->pc = 0x24f43cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4B3D10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B3D10u, _value); } while (0);
    // 0x24f440: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x24f440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f444: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x24f444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x24f448: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x24f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x24f44c: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x24F44Cu;
    {
        const bool branch_taken_0x24f44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f44c) {
            ctx->pc = 0x24F450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F44Cu;
            // 0x24f450: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F5BCu;
            goto label_24f5bc;
        }
    }
    ctx->pc = 0x24F454u;
    // 0x24f454: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24F454u;
    SET_GPR_U32(ctx, 31, 0x24F45Cu);
    ctx->pc = 0x24F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F454u;
    // 0x24f458: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24F454u, 0x24F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F45Cu;
label_24f45c:
    // 0x24f45c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x24f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x24f460: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x24f460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x24f464: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x24f464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x24f468: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x24f468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x24f46c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x24f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x24f470: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x24f470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x24f474: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x24f474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x24f478: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x24f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x24f47c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x24f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x24f480: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x24f480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x24f484: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x24f484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x24f488: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x24f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x24f48c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24f490: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24f490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24f494: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x24F494u;
    {
        const bool branch_taken_0x24f494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F494u;
        // 0x24f498: 0xafa000dc  sw          $zero, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f494) {
            ctx->pc = 0x24F5B8u;
            goto label_24f5b8;
        }
    }
    ctx->pc = 0x24F49Cu;
    // 0x24f49c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x24f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x24f4a0: 0x3c014033  lui         $at, 0x4033
    ctx->pc = 0x24f4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16435 << 16));
    // 0x24f4a4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24f4a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x24f4a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x24f4a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x24f4ac: 0x24533d00  addiu       $s3, $v0, 0x3D00
    ctx->pc = 0x24f4acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15616));
    // 0x24f4b0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x24f4b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x24f4b4: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x24f4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24f4b8: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x24f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x24f4bc: 0x0  nop
    ctx->pc = 0x24f4bcu;
    // NOP
label_24f4c0:
    // 0x24f4c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f4c4: 0x8c621060  lw          $v0, 0x1060($v1)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4192)));
    // 0x24f4c8: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x24f4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
    // 0x24f4cc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x24F4CCu;
    {
        const bool branch_taken_0x24f4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4CCu;
        // 0x24f4d0: 0x8fa200c4  lw          $v0, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4cc) {
            ctx->pc = 0x24F564u;
            goto label_24f564;
        }
    }
    ctx->pc = 0x24F4D4u;
    // 0x24f4d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f4d8: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x24F4D8u;
    {
        const bool branch_taken_0x24f4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F4D8u;
        // 0x24f4dc: 0xc64098fc  lwc1        $f0, -0x6704($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294940924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f4d8) {
            ctx->pc = 0x24F560u;
            goto label_24f560;
        }
    }
    ctx->pc = 0x24F4E0u;
    // 0x24f4e0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x24f4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x24f4e4: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x24f4e8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x24f4e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x24f4ec: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x24f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x24f4f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f4f4: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x24f4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24f4f8: 0x78620070  lq          $v0, 0x70($v1)
    ctx->pc = 0x24f4f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x24f4fc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x24f4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x24f500: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24f500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24f504: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x24f504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x24f508: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24F508u;
    SET_GPR_U32(ctx, 31, 0x24F510u);
    ctx->pc = 0x24F50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F508u;
    // 0x24f50c: 0xc4b40020  lwc1        $f20, 0x20($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24F508u, 0x24F510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F510u;
label_24f510:
    // 0x24f510: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x24f510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24f514: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x24f514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x24f518: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x24f518u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x24f51c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x24f51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x24f520: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x24f520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x24f524: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x24f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f528: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x24f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f52c: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x24f52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f530: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x24f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f534: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x24f534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24f538: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24f538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24f53c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x24f53cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24f540: 0xe7a3013c  swc1        $f3, 0x13C($sp)
    ctx->pc = 0x24f540u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24f544: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24f544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f548: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x24f548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f54c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x24f54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24f550: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x24F550u;
    SET_GPR_U32(ctx, 31, 0x24F558u);
    ctx->pc = 0x24F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F550u;
    // 0x24f554: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x24F550u, 0x24F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F558u;
label_24f558:
    // 0x24f558: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24F558u;
    {
        const bool branch_taken_0x24f558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f558) {
            ctx->pc = 0x24F5A0u;
            goto label_24f5a0;
        }
    }
    ctx->pc = 0x24F560u;
label_24f560:
    // 0x24f560: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x24f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_24f564:
    // 0x24f564: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F564u;
    {
        const bool branch_taken_0x24f564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f564) {
            ctx->pc = 0x24F568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F564u;
            // 0x24f568: 0x8fa200cc  lw          $v0, 0xCC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F578u;
            goto label_24f578;
        }
    }
    ctx->pc = 0x24F56Cu;
    // 0x24f56c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24f570: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24F570u;
    {
        const bool branch_taken_0x24f570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F570u;
        // 0x24f574: 0xafa200c4  sw          $v0, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f570) {
            ctx->pc = 0x24F588u;
            goto label_24f588;
        }
    }
    ctx->pc = 0x24F578u;
label_24f578:
    // 0x24f578: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F578u;
    {
        const bool branch_taken_0x24f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F578u;
        // 0x24f57c: 0x8fa300c4  lw          $v1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f578) {
            ctx->pc = 0x24F58Cu;
            goto label_24f58c;
        }
    }
    ctx->pc = 0x24F580u;
    // 0x24f580: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x24f580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x24f584: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x24f584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_24f588:
    // 0x24f588: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x24f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_24f58c:
    // 0x24f58c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x24f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x24f590: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x24F590u;
    {
        const bool branch_taken_0x24f590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F590u;
        // 0x24f594: 0x8fa300c4  lw          $v1, 0xC4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f590) {
            ctx->pc = 0x24F4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f4c0;
        }
    }
    ctx->pc = 0x24F598u;
    // 0x24f598: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24F598u;
    {
        const bool branch_taken_0x24f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F598u;
        // 0x24f59c: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f598) {
            ctx->pc = 0x24F5BCu;
            goto label_24f5bc;
        }
    }
    ctx->pc = 0x24F5A0u;
label_24f5a0:
    // 0x24f5a0: 0xc094224  jal         func_250890
    ctx->pc = 0x24F5A0u;
    SET_GPR_U32(ctx, 31, 0x24F5A8u);
    ctx->pc = 0x24F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F5A0u;
    // 0x24f5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250890u, 0x24F5A0u, 0x24F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F5A8u;
label_24f5a8:
    // 0x24f5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x24f5ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24F5ACu;
    {
        const bool branch_taken_0x24f5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5ACu;
        // 0x24f5b0: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5ac) {
            ctx->pc = 0x24F5B8u;
            goto label_24f5b8;
        }
    }
    ctx->pc = 0x24F5B4u;
label_24f5b4:
    // 0x24f5b4: 0xac403d10  sw          $zero, 0x3D10($v0)
    ctx->pc = 0x24f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15632), GPR_U32(ctx, 0));
label_24f5b8:
    // 0x24f5b8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24f5bc:
    // 0x24f5bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f5c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F5C0u;
    {
        const bool branch_taken_0x24f5c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F5C0u;
        // 0x24f5c4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f5c0) {
            ctx->pc = 0x24F5D0u;
            goto label_24f5d0;
        }
    }
    ctx->pc = 0x24F5C8u;
    // 0x24f5c8: 0x54620033  bnel        $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x24F5C8u;
    {
        const bool branch_taken_0x24f5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24f5c8) {
            ctx->pc = 0x24F5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24F5C8u;
            // 0x24f5cc: 0x8e2300f0  lw          $v1, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24F698u;
            goto label_24f698;
        }
    }
    ctx->pc = 0x24F5D0u;
label_24f5d0:
    // 0x24f5d0: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x24f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x24f5d4: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x24f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f5d8: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x24f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f5dc: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x24f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x24f5e0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f5e4: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x24f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24f5e8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x24f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f5ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24f5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24f5f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24f5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24f5f4: 0x0  nop
    ctx->pc = 0x24f5f4u;
    // NOP
    // 0x24f5f8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24f5f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x24f5fc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x24f5fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x24f600: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24f600u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x24f604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24f604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x24f608: 0xe7a4008c  swc1        $f4, 0x8C($sp)
    ctx->pc = 0x24f608u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x24f60c: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x24f60cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x24f610: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x24f610u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x24f614: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x24f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x24f618: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24f618u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f61c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24f61cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f620: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f620u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f624: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x24f624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f628: 0xc62100fc  lwc1        $f1, 0xFC($s1)
    ctx->pc = 0x24f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f62c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24f62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f630: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x24f630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f634: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24f634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f638: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x24f638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f63c: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x24f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f640: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x24f640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x24f644: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x24f644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x24f648: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x24f648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24f64c: 0xc0942a2  jal         func_250A88
    ctx->pc = 0x24F64Cu;
    SET_GPR_U32(ctx, 31, 0x24F654u);
    ctx->pc = 0x24F650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F64Cu;
    // 0x24f650: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x250A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250A88u, 0x24F64Cu, 0x24F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F654u;
label_24f654:
    // 0x24f654: 0xc62200fc  lwc1        $f2, 0xFC($s1)
    ctx->pc = 0x24f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f658: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24f65c: 0xc62100f4  lwc1        $f1, 0xF4($s1)
    ctx->pc = 0x24f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f660: 0x460010c1  sub.s       $f3, $f2, $f0
    ctx->pc = 0x24f660u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24f664: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x24f664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x24f668: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x24f668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x24f66c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24f66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x24f670: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x24f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x24f674: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x24f674u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x24f678: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x24f678u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x24f67c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x24f67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f680: 0xe62100f4  swc1        $f1, 0xF4($s1)
    ctx->pc = 0x24f680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x24f684: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24F684u;
    {
        const bool branch_taken_0x24f684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F684u;
        // 0x24f688: 0xe62200fc  swc1        $f2, 0xFC($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 252), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f684) {
            ctx->pc = 0x24F690u;
            goto label_24f690;
        }
    }
    ctx->pc = 0x24F68Cu;
    // 0x24f68c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24f690:
    // 0x24f690: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x24f690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    // 0x24f694: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x24f694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_24f698:
    // 0x24f698: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24f69c: 0x1462008b  bne         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x24F69Cu;
    {
        const bool branch_taken_0x24f69c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F69Cu;
        // 0x24f6a0: 0xdfb00200  ld          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f69c) {
            ctx->pc = 0x24F8CCu;
            goto label_24f8cc;
        }
    }
    ctx->pc = 0x24F6A4u;
    // 0x24f6a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24F6A4u;
    SET_GPR_U32(ctx, 31, 0x24F6ACu);
    ctx->pc = 0x24F6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6A4u;
    // 0x24f6a8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24F6A4u, 0x24F6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6ACu;
label_24f6ac:
    // 0x24f6ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x24F6ACu;
    SET_GPR_U32(ctx, 31, 0x24F6B4u);
    ctx->pc = 0x24F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F6ACu;
    // 0x24f6b0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x24F6ACu, 0x24F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F6B4u;
label_24f6b4:
    // 0x24f6b4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24f6b8: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x24f6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x24f6bc: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24f6c0: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24f6c4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24f6c8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x24f6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x24f6cc: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24f6d0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24f6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24f6d4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24f6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24f6d8: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24f6dc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24f6e0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24f6e4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24f6e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f6e8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24f6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f6ec: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x24f6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24f6f0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x24f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x24f6f4: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x24f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x24f6f8: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x24f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x24f6fc: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x24f6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x24f700: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x24f700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24f704: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f708: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x24f708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x24f70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f710: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x24F710u;
    SET_GPR_U32(ctx, 31, 0x24F718u);
    ctx->pc = 0x24F714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F710u;
    // 0x24f714: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x24F710u, 0x24F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F718u;
label_24f718:
    // 0x24f718: 0xc62100fc  lwc1        $f1, 0xFC($s1)
    ctx->pc = 0x24f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f71c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x24f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x24f720: 0xc7a50060  lwc1        $f5, 0x60($sp)
    ctx->pc = 0x24f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24f724: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x24f724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x24f728: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x24f728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f72c: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x24f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f730: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x24f730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x24f734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f738: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x24f738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x24f73c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24f73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24f740: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x24f740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x24f744: 0xe7a50130  swc1        $f5, 0x130($sp)
    ctx->pc = 0x24f744u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24f748: 0xe7a40138  swc1        $f4, 0x138($sp)
    ctx->pc = 0x24f748u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24f74c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x24f74cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24f750: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x24f750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24f754: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x24f754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
    // 0x24f758: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x24f758u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x24f75c: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x24f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x24f760: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x24f760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x24f764: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x24f764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f768: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x24f768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f76c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f76cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f770: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x24f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f774: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x24f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f778: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x24f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x24f77c: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x24f77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24f780: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x24f780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x24f784: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x24f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f788: 0xc7a3016c  lwc1        $f3, 0x16C($sp)
    ctx->pc = 0x24f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f78c: 0x7ba20130  lq          $v0, 0x130($sp)
    ctx->pc = 0x24f78cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x24f790: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x24f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x24f794: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x24f794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x24f798: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x24f798u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x24f79c: 0xe7a3014c  swc1        $f3, 0x14C($sp)
    ctx->pc = 0x24f79cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x24f7a0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x24f7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x24f7a4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24f7a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f7a8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24f7a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f7ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f7acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f7b0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f7b4: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x24f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f7b8: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x24f7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f7bc: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x24f7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f7c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24f7c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f7c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24f7c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24f7c8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24f7c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24f7cc: 0x0  nop
    ctx->pc = 0x24f7ccu;
    // NOP
    // 0x24f7d0: 0x0  nop
    ctx->pc = 0x24f7d0u;
    // NOP
    // 0x24f7d4: 0x46000044  c1          0x44
    ctx->pc = 0x24f7d4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f7d8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24f7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24f7dc: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x24f7dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x24f7e0: 0x0  nop
    ctx->pc = 0x24f7e0u;
    // NOP
    // 0x24f7e4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24f7e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f7e8: 0x0  nop
    ctx->pc = 0x24f7e8u;
    // NOP
    // 0x24f7ec: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24F7ECu;
    {
        const bool branch_taken_0x24f7ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F7ECu;
        // 0x24f7f0: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f7ec) {
            ctx->pc = 0x24F818u;
            goto label_24f818;
        }
    }
    ctx->pc = 0x24F7F4u;
    // 0x24f7f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f7f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f7fc: 0x0  nop
    ctx->pc = 0x24f7fcu;
    // NOP
    // 0x24f800: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24f800u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24f804: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x24f804u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x24f808: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24f808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f80c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24f80cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x24f810: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24f810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f814: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24f818:
    // 0x24f818: 0x7ba20140  lq          $v0, 0x140($sp)
    ctx->pc = 0x24f818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x24f81c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x24f81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x24f820: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x24f820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f824: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x24f824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f828: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24f828u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f82c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x24f82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24f830: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x24f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24f834: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x24f834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24f838: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x24f838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24f83c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x24f83cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x24f840: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x24f840u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x24f844: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x24f844u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x24f848: 0x0  nop
    ctx->pc = 0x24f848u;
    // NOP
    // 0x24f84c: 0x0  nop
    ctx->pc = 0x24f84cu;
    // NOP
    // 0x24f850: 0x46000044  c1          0x44
    ctx->pc = 0x24f850u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24f854: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x24f854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x24f858: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x24f858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24f85c: 0x0  nop
    ctx->pc = 0x24f85cu;
    // NOP
    // 0x24f860: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x24F860u;
    {
        const bool branch_taken_0x24f860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F860u;
        // 0x24f864: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f860) {
            ctx->pc = 0x24F88Cu;
            goto label_24f88c;
        }
    }
    ctx->pc = 0x24F868u;
    // 0x24f868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24f868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24f86c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24f86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f870: 0x0  nop
    ctx->pc = 0x24f870u;
    // NOP
    // 0x24f874: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x24f874u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x24f878: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x24f878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24f87c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x24f87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x24f880: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x24f880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x24f884: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x24f884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24f888: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x24f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_24f88c:
    // 0x24f88c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x24f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x24f890: 0xe6250154  swc1        $f5, 0x154($s1)
    ctx->pc = 0x24f890u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x24f894: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24f894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f898: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24f898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f89c: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x24f89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x24f8a0: 0xc077912  jal         func_1DE448
    ctx->pc = 0x24F8A0u;
    SET_GPR_U32(ctx, 31, 0x24F8A8u);
    ctx->pc = 0x24F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24F8A0u;
    // 0x24f8a4: 0x27a701b8  addiu       $a3, $sp, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x24F8A0u, 0x24F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F8A8u;
label_24f8a8:
    // 0x24f8a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F8A8u;
    {
        const bool branch_taken_0x24f8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F8A8u;
        // 0x24f8ac: 0xc7a100d4  lwc1        $f1, 0xD4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f8a8) {
            ctx->pc = 0x24F8C8u;
            goto label_24f8c8;
        }
    }
    ctx->pc = 0x24F8B0u;
    // 0x24f8b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x24f8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24f8b4: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x24f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x24f8b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24f8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f8bc: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x24f8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24f8c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24f8c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24f8c4: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x24f8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
label_24f8c8:
    // 0x24f8c8: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x24f8c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_24f8cc:
    // 0x24f8cc: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x24f8ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x24f8d0: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x24f8d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x24f8d4: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x24f8d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x24f8d8: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x24f8d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x24f8dc: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x24f8dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x24f8e0: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x24f8e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x24f8e4: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x24f8e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x24f8e8: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x24f8e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x24f8ec: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x24f8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x24f8f0: 0xc7ba0280  lwc1        $f26, 0x280($sp)
    ctx->pc = 0x24f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x24f8f4: 0xc7b90278  lwc1        $f25, 0x278($sp)
    ctx->pc = 0x24f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x24f8f8: 0xc7b80270  lwc1        $f24, 0x270($sp)
    ctx->pc = 0x24f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x24f8fc: 0xc7b70268  lwc1        $f23, 0x268($sp)
    ctx->pc = 0x24f8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x24f900: 0xc7b60260  lwc1        $f22, 0x260($sp)
    ctx->pc = 0x24f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x24f904: 0xc7b50258  lwc1        $f21, 0x258($sp)
    ctx->pc = 0x24f904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x24f908: 0xc7b40250  lwc1        $f20, 0x250($sp)
    ctx->pc = 0x24f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24f90c: 0x3e00008  jr          $ra
    ctx->pc = 0x24F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F90Cu;
        // 0x24f910: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F914u;
    // 0x24f914: 0x0  nop
    ctx->pc = 0x24f914u;
    // NOP
    ctx->pc = 0x24f918u;
}
