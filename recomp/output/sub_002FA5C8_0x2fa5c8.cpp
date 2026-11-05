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

// Function: sub_002FA5C8
// Address: 0x2fa5c8 - 0x2fa750
void sub_002FA5C8_0x2fa5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA5C8_0x2fa5c8");
#endif

    switch (ctx->pc) {
        case 0x2fa604u: goto label_2fa604;
        case 0x2fa690u: goto label_2fa690;
        case 0x2fa704u: goto label_2fa704;
        default: break;
    }

    ctx->pc = 0x2fa5c8u;

    // 0x2fa5c8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2fa5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2fa5cc: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x2fa5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x2fa5d0: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2fa5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2fa5d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fa5d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5d8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2fa5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x2fa5dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2fa5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5e0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2fa5e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2fa5e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fa5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5e8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2fa5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2fa5ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fa5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa5f0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2fa5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x2fa5f4: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2fa5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x2fa5f8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2fa5f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2fa5fc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2FA5FCu;
    SET_GPR_U32(ctx, 31, 0x2FA604u);
    ctx->pc = 0x2FA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5FCu;
    // 0x2fa600: 0xe7b500a8  swc1        $f21, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FA5FCu, 0x2FA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA604u;
label_2fa604:
    // 0x2fa604: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2fa604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fa608: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fa608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa60c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fa60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa610: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fa610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fa614: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fa614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa618: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fa618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa61c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fa61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2fa620: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2fa620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fa624: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2fa624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x2fa628: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa628u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x2fa62c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fa62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa630: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fa630u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fa634: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2fa634u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa638: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2fa638u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2fa63c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2fa63cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa640: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2fa640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa644: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x2fa644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa648: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2fa648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fa64c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x2fa64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa650: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x2fa650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa654: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2fa654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa658: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x2fa658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fa65c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2fa65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2fa660: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2fa660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fa664: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x2fa664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2fa668: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fa66c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fa66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa670: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fa670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fa674: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fa674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fa678: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fa678u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa67c: 0x3c013fcb  lui         $at, 0x3FCB
    ctx->pc = 0x2fa67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16331 << 16));
    // 0x2fa680: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x2fa680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x2fa684: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2fa684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2fa688: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2fa688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fa68c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2fa68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2fa690:
    // 0x2fa690: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2fa690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa694: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2fa694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa698: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2fa698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2fa69c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2fa69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa6a0: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2fa6a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x2fa6a4: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2fa6a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x2fa6a8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2fa6a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2fa6ac: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2fa6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2fa6b0: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x2fa6b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2fa6b4: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2fa6b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2fa6b8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2fa6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2fa6bc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fa6bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa6c0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2fa6c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2fa6c4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fa6c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fa6c8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x2fa6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa6cc: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2fa6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fa6d0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2fa6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fa6d4: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x2fa6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fa6d8: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x2fa6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fa6dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2fa6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2fa6e0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2fa6e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2fa6e4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2fa6e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2fa6e8: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x2fa6e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2fa6ec: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fa6ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fa6f0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fa6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fa6f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fa6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa6f8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2fa6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2fa6fc: 0xc08fca8  jal         func_23F2A0
    ctx->pc = 0x2FA6FCu;
    SET_GPR_U32(ctx, 31, 0x2FA704u);
    ctx->pc = 0x2FA700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA6FCu;
    // 0x2fa700: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F2A0u, 0x2FA6FCu, 0x2FA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA704u;
label_2fa704:
    // 0x2fa704: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA704u;
    {
        const bool branch_taken_0x2fa704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA704u;
        // 0x2fa708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa704) {
            ctx->pc = 0x2FA724u;
            goto label_2fa724;
        }
    }
    ctx->pc = 0x2FA70Cu;
    // 0x2fa70c: 0x4616a500  add.s       $f20, $f20, $f22
    ctx->pc = 0x2fa70cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2fa710: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x2fa710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fa714: 0x0  nop
    ctx->pc = 0x2fa714u;
    // NOP
    // 0x2fa718: 0x4503ffdd  bc1tl       . + 4 + (-0x23 << 2)
    ctx->pc = 0x2FA718u;
    {
        const bool branch_taken_0x2fa718 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fa718) {
            ctx->pc = 0x2FA71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA718u;
            // 0x2fa71c: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fa690;
        }
    }
    ctx->pc = 0x2FA720u;
    // 0x2fa720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa724:
    // 0x2fa724: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2fa724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fa728: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2fa728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2fa72c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2fa72cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fa730: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x2fa730u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2fa734: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2fa734u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fa738: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2fa738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2fa73c: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x2fa73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fa740: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2fa740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fa744: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2fa744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fa748: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA748u;
        // 0x2fa74c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA750u;
}
