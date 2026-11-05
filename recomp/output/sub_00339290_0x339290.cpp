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

// Function: sub_00339290
// Address: 0x339290 - 0x3394e8
void sub_00339290_0x339290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339290_0x339290");
#endif

    switch (ctx->pc) {
        case 0x33934cu: goto label_33934c;
        case 0x3393b0u: goto label_3393b0;
        case 0x3393b8u: goto label_3393b8;
        case 0x339454u: goto label_339454;
        case 0x3394acu: goto label_3394ac;
        default: break;
    }

    ctx->pc = 0x339290u;

    // 0x339290: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x339290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x339294: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x339294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x339298: 0x8c436ec0  lw          $v1, 0x6EC0($v0)
    ctx->pc = 0x339298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x33929c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x33929cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3392a0: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x3392a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x3392a4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x3392a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3392a8: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x3392a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x3392ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3392acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3392b0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x3392b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x3392b4: 0x24426ec0  addiu       $v0, $v0, 0x6EC0
    ctx->pc = 0x3392b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28352));
    // 0x3392b8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x3392b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x3392bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3392bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3392c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3392c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3392c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3392c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3392c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3392c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3392cc: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x3392ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3392d0: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x3392d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3392d4: 0xc6240054  lwc1        $f4, 0x54($s1)
    ctx->pc = 0x3392d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3392d8: 0xc6250058  lwc1        $f5, 0x58($s1)
    ctx->pc = 0x3392d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3392dc: 0x460c18c2  mul.s       $f3, $f3, $f12
    ctx->pc = 0x3392dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    // 0x3392e0: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x3392e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3392e4: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x3392e4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x3392e8: 0xc6210060  lwc1        $f1, 0x60($s1)
    ctx->pc = 0x3392e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3392ec: 0x460c2942  mul.s       $f5, $f5, $f12
    ctx->pc = 0x3392ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x3392f0: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x3392f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3392f4: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x3392f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x3392f8: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x3392f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x3392fc: 0x92220074  lbu         $v0, 0x74($s1)
    ctx->pc = 0x3392fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x339300: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x339300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x339304: 0xe6230050  swc1        $f3, 0x50($s1)
    ctx->pc = 0x339304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x339308: 0xe6240054  swc1        $f4, 0x54($s1)
    ctx->pc = 0x339308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x33930c: 0xe6250058  swc1        $f5, 0x58($s1)
    ctx->pc = 0x33930cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x339310: 0xe622005c  swc1        $f2, 0x5C($s1)
    ctx->pc = 0x339310u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x339314: 0xe6210060  swc1        $f1, 0x60($s1)
    ctx->pc = 0x339314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x339318: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x339318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x33931c: 0xa2260076  sb          $a2, 0x76($s1)
    ctx->pc = 0x33931cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 118), (uint8_t)GPR_U32(ctx, 6));
    // 0x339320: 0xae250068  sw          $a1, 0x68($s1)
    ctx->pc = 0x339320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 5));
    // 0x339324: 0xe62e006c  swc1        $f14, 0x6C($s1)
    ctx->pc = 0x339324u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x339328: 0xa2200075  sb          $zero, 0x75($s1)
    ctx->pc = 0x339328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x33932c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33932Cu;
    {
        const bool branch_taken_0x33932c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33932Cu;
        // 0x339330: 0xa2200077  sb          $zero, 0x77($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 119), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33932c) {
            ctx->pc = 0x339344u;
            goto label_339344;
        }
    }
    ctx->pc = 0x339334u;
    // 0x339334: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x339334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
    // 0x339338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x339338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33933c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x33933Cu;
    {
        const bool branch_taken_0x33933c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33933Cu;
        // 0x339340: 0xe620006c  swc1        $f0, 0x6C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33933c) {
            ctx->pc = 0x3394CCu;
            goto label_3394cc;
        }
    }
    ctx->pc = 0x339344u;
label_339344:
    // 0x339344: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x339344u;
    SET_GPR_U32(ctx, 31, 0x33934Cu);
    ctx->pc = 0x339348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339344u;
    // 0x339348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x339344u, 0x33934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33934Cu;
label_33934c:
    // 0x33934c: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x33934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x339350: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x339354: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x339354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339358: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x339358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33935c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x33935cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x339360: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x339360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x339364: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x339364u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x339368: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x339368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33936c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x33936cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339370: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x339370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339374: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x339374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339378: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x339378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33937c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x33937cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339380: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x339380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x339384: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x339384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x339388: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x339388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x33938c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x33938cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x339390: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x339390u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x339394: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x339394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339398: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x339398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33939c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x33939cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3393a0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3393a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3393a4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x3393a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3393a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3393A8u;
    SET_GPR_U32(ctx, 31, 0x3393B0u);
    ctx->pc = 0x3393ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3393A8u;
    // 0x3393ac: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3393A8u, 0x3393B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3393B0u;
label_3393b0:
    // 0x3393b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3393B0u;
    SET_GPR_U32(ctx, 31, 0x3393B8u);
    ctx->pc = 0x3393B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3393B0u;
    // 0x3393b4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3393B0u, 0x3393B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3393B8u;
label_3393b8:
    // 0x3393b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3393b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3393bc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3393bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3393c0: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3393c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3393c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3393c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3393c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3393c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3393cc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3393ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3393d0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3393d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3393d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3393d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3393d8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3393d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3393dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3393dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3393e0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3393e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3393e4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3393e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3393e8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3393e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3393ec: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3393ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3393f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3393f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3393f4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3393f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3393f8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3393f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3393fc: 0x0  nop
    ctx->pc = 0x3393fcu;
    // NOP
    // 0x339400: 0x0  nop
    ctx->pc = 0x339400u;
    // NOP
    // 0x339404: 0x46010084  c1          0x10084
    ctx->pc = 0x339404u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x339408: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x339408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x33940c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33940cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339410: 0x0  nop
    ctx->pc = 0x339410u;
    // NOP
    // 0x339414: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x339414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x339418: 0x0  nop
    ctx->pc = 0x339418u;
    // NOP
    // 0x33941c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x33941Cu;
    {
        const bool branch_taken_0x33941c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x339420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33941Cu;
        // 0x339420: 0xe7a20070  swc1        $f2, 0x70($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33941c) {
            ctx->pc = 0x339448u;
            goto label_339448;
        }
    }
    ctx->pc = 0x339424u;
    // 0x339424: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x339424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x339428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x339428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33942c: 0x0  nop
    ctx->pc = 0x33942cu;
    // NOP
    // 0x339430: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x339430u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x339434: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x339434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x339438: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x339438u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33943c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33943cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x339440: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x339440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x339444: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x339444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_339448:
    // 0x339448: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x339448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33944c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x33944Cu;
    SET_GPR_U32(ctx, 31, 0x339454u);
    ctx->pc = 0x339450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33944Cu;
    // 0x339450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x33944Cu, 0x339454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339454u;
label_339454:
    // 0x339454: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x339454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x339458: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x339458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x33945c: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x33945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x339460: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x339460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x339464: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x339464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x339468: 0xc4405cc4  lwc1        $f0, 0x5CC4($v0)
    ctx->pc = 0x339468u;
    { uint32_t bits = FAST_READ32(0x475CC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33946c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x33946cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339470: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x339470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x339474: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x339474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339478: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x339478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x33947c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x33947cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x339480: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x339480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x339484: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x339484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x339488: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x339488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x33948c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x33948cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x339490: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x339490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x339494: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x339494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x339498: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x339498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x33949c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x33949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x3394a0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3394a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x3394a4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x3394A4u;
    SET_GPR_U32(ctx, 31, 0x3394ACu);
    ctx->pc = 0x3394A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394A4u;
    // 0x3394a8: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x3394A4u, 0x3394ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394ACu;
label_3394ac:
    // 0x3394ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3394ACu;
    {
        const bool branch_taken_0x3394ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3394B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394ACu;
        // 0x3394b0: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394ac) {
            ctx->pc = 0x3394CCu;
            goto label_3394cc;
        }
    }
    ctx->pc = 0x3394B4u;
    // 0x3394b4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3394b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x3394b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3394b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3394bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3394bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3394c0: 0x0  nop
    ctx->pc = 0x3394c0u;
    // NOP
    // 0x3394c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3394c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3394c8: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x3394c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_3394cc:
    // 0x3394cc: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x3394ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3394d0: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x3394d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3394d4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x3394d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3394d8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x3394d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3394dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3394DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394DCu;
        // 0x3394e0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3394DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3394E4u;
    // 0x3394e4: 0x0  nop
    ctx->pc = 0x3394e4u;
    // NOP
    ctx->pc = 0x3394e8u;
}
