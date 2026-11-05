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

// Function: sub_002E3828
// Address: 0x2e3828 - 0x2e3c80
void sub_002E3828_0x2e3828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3828_0x2e3828");
#endif

    switch (ctx->pc) {
        case 0x2e3854u: goto label_2e3854;
        case 0x2e385cu: goto label_2e385c;
        case 0x2e3948u: goto label_2e3948;
        case 0x2e3a1cu: goto label_2e3a1c;
        case 0x2e3a38u: goto label_2e3a38;
        case 0x2e3a54u: goto label_2e3a54;
        case 0x2e3b40u: goto label_2e3b40;
        case 0x2e3b50u: goto label_2e3b50;
        case 0x2e3b90u: goto label_2e3b90;
        case 0x2e3c10u: goto label_2e3c10;
        case 0x2e3c20u: goto label_2e3c20;
        case 0x2e3c34u: goto label_2e3c34;
        case 0x2e3c48u: goto label_2e3c48;
        case 0x2e3c5cu: goto label_2e3c5c;
        default: break;
    }

    ctx->pc = 0x2e3828u;

    // 0x2e3828: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e3828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e382c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2e382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2e3830: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2e3830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2e3834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e3838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e383c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2e383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2e3840: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2e3840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2e3844: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2e3844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2e3848: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2e3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2e384c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E384Cu;
    SET_GPR_U32(ctx, 31, 0x2E3854u);
    ctx->pc = 0x2E3850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E384Cu;
    // 0x2e3850: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E384Cu, 0x2E3854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3854u;
label_2e3854:
    // 0x2e3854: 0xc0bca40  jal         func_2F2900
    ctx->pc = 0x2E3854u;
    SET_GPR_U32(ctx, 31, 0x2E385Cu);
    ctx->pc = 0x2E3858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3854u;
    // 0x2e3858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2900u, 0x2E3854u, 0x2E385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E385Cu;
label_2e385c:
    // 0x2e385c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E385Cu;
    {
        const bool branch_taken_0x2e385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E385Cu;
        // 0x2e3860: 0x26220550  addiu       $v0, $s1, 0x550 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e385c) {
            ctx->pc = 0x2E3874u;
            goto label_2e3874;
        }
    }
    ctx->pc = 0x2E3864u;
    // 0x2e3864: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x2e3864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x2e3868: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3868u;
    {
        const bool branch_taken_0x2e3868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3868u;
        // 0x2e386c: 0x262205b0  addiu       $v0, $s1, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3868) {
            ctx->pc = 0x2E3874u;
            goto label_2e3874;
        }
    }
    ctx->pc = 0x2E3870u;
    // 0x2e3870: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x2e3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_2e3874:
    // 0x2e3874: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3878: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e387c: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x2e387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3880: 0x262205e0  addiu       $v0, $s1, 0x5E0
    ctx->pc = 0x2e3880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1504));
    // 0x2e3884: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x2e3884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e3888: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e3888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e388c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3890: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x2e3890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e3894: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e3894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3898: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x2e3898u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2e389c: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x2e389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e38a0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2e38a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2e38a4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x2e38a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e38a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e38a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e38ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e38acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e38b0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2e38b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e38b4: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x2e38b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e38b8: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2e38b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e38bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e38bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e38c0: 0xe7a40028  swc1        $f4, 0x28($sp)
    ctx->pc = 0x2e38c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e38c4: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2e38c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e38c8: 0xc62105e0  lwc1        $f1, 0x5E0($s1)
    ctx->pc = 0x2e38c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e38cc: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2e38ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e38d0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e38d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e38d4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e38d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e38d8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e38d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e38dc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e38dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e38e0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e38e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e38e4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e38e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e38e8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2e38e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e38ec: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2e38ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e38f0: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2e38f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e38f4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e38f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e38f8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2e38f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e38fc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e38fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3900: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e3900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e3904: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e3904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3908: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2e3908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e390c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2e390cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e3910: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2e3910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3914: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2e3914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3918: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x2e3918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e391c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2e391cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e3920: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2e3920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e3924: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x2e3924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e3928: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2e3928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e392c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e392cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3930: 0xfa2105e0  sqc2        $vf1, 0x5E0($s1)
    ctx->pc = 0x2e3930u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1504), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3934: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e3934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3938: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2e3938u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e393c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e393cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3940: 0xc0bca40  jal         func_2F2900
    ctx->pc = 0x2E3940u;
    SET_GPR_U32(ctx, 31, 0x2E3948u);
    ctx->pc = 0x2E3944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3940u;
    // 0x2e3944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2900u, 0x2E3940u, 0x2E3948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3948u;
label_2e3948:
    // 0x2e3948: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3948u;
    {
        const bool branch_taken_0x2e3948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E394Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3948u;
        // 0x2e394c: 0x26220560  addiu       $v0, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3948) {
            ctx->pc = 0x2E3960u;
            goto label_2e3960;
        }
    }
    ctx->pc = 0x2E3950u;
    // 0x2e3950: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x2e3950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x2e3954: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E3954u;
    {
        const bool branch_taken_0x2e3954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3954u;
        // 0x2e3958: 0x262205c0  addiu       $v0, $s1, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3954) {
            ctx->pc = 0x2E3960u;
            goto label_2e3960;
        }
    }
    ctx->pc = 0x2E395Cu;
    // 0x2e395c: 0x26220590  addiu       $v0, $s1, 0x590
    ctx->pc = 0x2e395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1424));
label_2e3960:
    // 0x2e3960: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3960u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3964: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3968: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x2e3968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e396c: 0x262205f0  addiu       $v0, $s1, 0x5F0
    ctx->pc = 0x2e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
    // 0x2e3970: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e3970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3974: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e3974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3978: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2e3978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e397c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2e397cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e3980: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2e3980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3984: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2e3984u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2e3988: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x2e3988u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2e398c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e398cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3994: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x2e3994u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e3998: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2e3998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e399c: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2e399cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e39a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e39a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e39a4: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2e39a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e39a8: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x2e39a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e39ac: 0xc62105f0  lwc1        $f1, 0x5F0($s1)
    ctx->pc = 0x2e39acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e39b0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2e39b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e39b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e39b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e39b8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e39b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e39bc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e39bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e39c0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e39c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e39c4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e39c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e39c8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e39c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e39cc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2e39ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e39d0: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2e39d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e39d4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2e39d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e39d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e39d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e39dc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e39dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e39e0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2e39e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e39e4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e39e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e39e8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e39e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e39ec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2e39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e39f0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2e39f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e39f4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2e39f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e39f8: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2e39f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e39fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e39fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e3a00: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e3a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e3a04: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e3a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e3a08: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2e3a08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e3a0c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2e3a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3a10: 0xfa2105f0  sqc2        $vf1, 0x5F0($s1)
    ctx->pc = 0x2e3a10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1520), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3a14: 0xc0bca40  jal         func_2F2900
    ctx->pc = 0x2E3A14u;
    SET_GPR_U32(ctx, 31, 0x2E3A1Cu);
    ctx->pc = 0x2E3A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A14u;
    // 0x2e3a18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2900u, 0x2E3A14u, 0x2E3A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A1Cu;
label_2e3a1c:
    // 0x2e3a1c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3A1Cu;
    {
        const bool branch_taken_0x2e3a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A1Cu;
        // 0x2e3a20: 0x26220570  addiu       $v0, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a1c) {
            ctx->pc = 0x2E3A80u;
            goto label_2e3a80;
        }
    }
    ctx->pc = 0x2E3A24u;
    // 0x2e3a24: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x2e3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x2e3a28: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E3A28u;
    {
        const bool branch_taken_0x2e3a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A28u;
        // 0x2e3a2c: 0x262205d0  addiu       $v0, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a28) {
            ctx->pc = 0x2E3A80u;
            goto label_2e3a80;
        }
    }
    ctx->pc = 0x2E3A30u;
    // 0x2e3a30: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2E3A30u;
    SET_GPR_U32(ctx, 31, 0x2E3A38u);
    ctx->pc = 0x2E3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A30u;
    // 0x2e3a34: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2E3A30u, 0x2E3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A38u;
label_2e3a38:
    // 0x2e3a38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3A38u;
    {
        const bool branch_taken_0x2e3a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A38u;
        // 0x2e3a3c: 0x262205a0  addiu       $v0, $s1, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a38) {
            ctx->pc = 0x2E3A5Cu;
            goto label_2e3a5c;
        }
    }
    ctx->pc = 0x2E3A40u;
    // 0x2e3a40: 0x8e04121c  lw          $a0, 0x121C($s0)
    ctx->pc = 0x2e3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x2e3a44: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3A44u;
    {
        const bool branch_taken_0x2e3a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3a44) {
            ctx->pc = 0x2E3A80u;
            goto label_2e3a80;
        }
    }
    ctx->pc = 0x2E3A4Cu;
    // 0x2e3a4c: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2E3A4Cu;
    SET_GPR_U32(ctx, 31, 0x2E3A54u);
    ctx->pc = 0x2E3A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3A4Cu;
    // 0x2e3a50: 0x8c840334  lw          $a0, 0x334($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2E3A4Cu, 0x2E3A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3A54u;
label_2e3a54:
    // 0x2e3a54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E3A54u;
    {
        const bool branch_taken_0x2e3a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A54u;
        // 0x2e3a58: 0x262205a0  addiu       $v0, $s1, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a54) {
            ctx->pc = 0x2E3A80u;
            goto label_2e3a80;
        }
    }
    ctx->pc = 0x2E3A5Cu;
label_2e3a5c:
    // 0x2e3a5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3a60: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3a64: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e3a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3a68: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x2e3a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x2e3a6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3a70: 0x0  nop
    ctx->pc = 0x2e3a70u;
    // NOP
    // 0x2e3a74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3a74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3a78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3A78u;
    {
        const bool branch_taken_0x2e3a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3A78u;
        // 0x2e3a7c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3a78) {
            ctx->pc = 0x2E3A88u;
            goto label_2e3a88;
        }
    }
    ctx->pc = 0x2E3A80u;
label_2e3a80:
    // 0x2e3a80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e3a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3a84: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e3a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e3a88:
    // 0x2e3a88: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x2e3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3a8c: 0x26220600  addiu       $v0, $s1, 0x600
    ctx->pc = 0x2e3a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x2e3a90: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e3a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3a94: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e3a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3a98: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x2e3a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2e3a9c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2e3a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2e3aa0: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x2e3aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3aa4: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x2e3aa4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2e3aa8: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x2e3aa8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2e3aac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e3aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e3ab0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3ab4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x2e3ab4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2e3ab8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2e3ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2e3abc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2e3abcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2e3ac0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e3ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2e3ac4: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x2e3ac4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2e3ac8: 0xe7a4002c  swc1        $f4, 0x2C($sp)
    ctx->pc = 0x2e3ac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2e3acc: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x2e3accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3ad0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x2e3ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3ad4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2e3ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3ad8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e3ad8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e3adc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2e3adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e3ae0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e3ae0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e3ae4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e3ae4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e3ae8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e3ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e3aec: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2e3aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2e3af0: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x2e3af0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2e3af4: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x2e3af4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2e3af8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2e3af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2e3afc: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e3afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e3b00: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x2e3b00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2e3b04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e3b04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2e3b08: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2e3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3b0c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2e3b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e3b10: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2e3b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e3b14: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2e3b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e3b18: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x2e3b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e3b1c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2e3b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e3b20: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2e3b20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e3b24: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2e3b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e3b28: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x2e3b28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e3b2c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2e3b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e3b30: 0xfa210600  sqc2        $vf1, 0x600($s1)
    ctx->pc = 0x2e3b30u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 1536), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e3b34: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2e3b34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2e3b38: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2E3B38u;
    SET_GPR_U32(ctx, 31, 0x2E3B40u);
    ctx->pc = 0x2E3B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B38u;
    // 0x2e3b3c: 0x8e04bd50  lw          $a0, -0x42B0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2E3B38u, 0x2E3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B40u;
label_2e3b40:
    // 0x2e3b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3B40u;
    {
        const bool branch_taken_0x2e3b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B40u;
        // 0x2e3b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b40) {
            ctx->pc = 0x2E3B58u;
            goto label_2e3b58;
        }
    }
    ctx->pc = 0x2E3B48u;
    // 0x2e3b48: 0xc0b8f6e  jal         func_2E3DB8
    ctx->pc = 0x2E3B48u;
    SET_GPR_U32(ctx, 31, 0x2E3B50u);
    ctx->pc = 0x2E3B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B48u;
    // 0x2e3b4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2E3B48u, 0x2E3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B50u;
label_2e3b50:
    // 0x2e3b50: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E3B50u;
    {
        const bool branch_taken_0x2e3b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B50u;
        // 0x2e3b54: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b50) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3B58u;
label_2e3b58:
    // 0x2e3b58: 0x8e03bd50  lw          $v1, -0x42B0($s0)
    ctx->pc = 0x2e3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x2e3b5c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e3b5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3b60: 0x8c700334  lw          $s0, 0x334($v1)
    ctx->pc = 0x2e3b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x2e3b64: 0x8c72041c  lw          $s2, 0x41C($v1)
    ctx->pc = 0x2e3b64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1052)));
    // 0x2e3b68: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x2e3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e3b6c: 0x2482fffa  addiu       $v0, $a0, -0x6
    ctx->pc = 0x2e3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
    // 0x2e3b70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2e3b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3b74: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2E3B74u;
    {
        const bool branch_taken_0x2e3b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3B74u;
        // 0x2e3b78: 0x8c730418  lw          $s3, 0x418($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3b74) {
            ctx->pc = 0x2E3BB0u;
            goto label_2e3bb0;
        }
    }
    ctx->pc = 0x2E3B7Cu;
    // 0x2e3b7c: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x2e3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2e3b80: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E3B80u;
    {
        const bool branch_taken_0x2e3b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3b80) {
            ctx->pc = 0x2E3B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B80u;
            // 0x2e3b84: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3BB4u;
            goto label_2e3bb4;
        }
    }
    ctx->pc = 0x2E3B88u;
    // 0x2e3b88: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x2E3B88u;
    SET_GPR_U32(ctx, 31, 0x2E3B90u);
    ctx->pc = 0x2E3B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3B88u;
    // 0x2e3b8c: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x2E3B88u, 0x2E3B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3B90u;
label_2e3b90:
    // 0x2e3b90: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3B90u;
    {
        const bool branch_taken_0x2e3b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3b90) {
            ctx->pc = 0x2E3B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3B90u;
            // 0x2e3b94: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3BB4u;
            goto label_2e3bb4;
        }
    }
    ctx->pc = 0x2E3B98u;
    // 0x2e3b98: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x2e3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x2e3b9c: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x2e3b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x2e3ba0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3BA0u;
    {
        const bool branch_taken_0x2e3ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA0u;
        // 0x2e3ba4: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ba0) {
            ctx->pc = 0x2E3BB0u;
            goto label_2e3bb0;
        }
    }
    ctx->pc = 0x2E3BA8u;
    // 0x2e3ba8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3BA8u;
    {
        const bool branch_taken_0x2e3ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BA8u;
        // 0x2e3bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3ba8) {
            ctx->pc = 0x2E3BB8u;
            goto label_2e3bb8;
        }
    }
    ctx->pc = 0x2E3BB0u;
label_2e3bb0:
    // 0x2e3bb0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2e3bb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3bb4:
    // 0x2e3bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3bb8:
    // 0x2e3bb8: 0x1242001b  beq         $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E3BB8u;
    {
        const bool branch_taken_0x2e3bb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BB8u;
        // 0x2e3bbc: 0x14182b  sltu        $v1, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bb8) {
            ctx->pc = 0x2E3C28u;
            goto label_2e3c28;
        }
    }
    ctx->pc = 0x2E3BC0u;
    // 0x2e3bc0: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2e3bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e3bc4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3BC4u;
    {
        const bool branch_taken_0x2e3bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3bc4) {
            ctx->pc = 0x2E3BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3BC4u;
            // 0x2e3bc8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3BDCu;
            goto label_2e3bdc;
        }
    }
    ctx->pc = 0x2E3BCCu;
    // 0x2e3bcc: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E3BCCu;
    {
        const bool branch_taken_0x2e3bcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BCCu;
        // 0x2e3bd0: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bcc) {
            ctx->pc = 0x2E3BF4u;
            goto label_2e3bf4;
        }
    }
    ctx->pc = 0x2E3BD4u;
    // 0x2e3bd4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2E3BD4u;
    {
        const bool branch_taken_0x2e3bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BD4u;
        // 0x2e3bd8: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bd4) {
            ctx->pc = 0x2E3C64u;
            goto label_2e3c64;
        }
    }
    ctx->pc = 0x2E3BDCu;
label_2e3bdc:
    // 0x2e3bdc: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3BDCu;
    {
        const bool branch_taken_0x2e3bdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BDCu;
        // 0x2e3be0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bdc) {
            ctx->pc = 0x2E3C3Cu;
            goto label_2e3c3c;
        }
    }
    ctx->pc = 0x2E3BE4u;
    // 0x2e3be4: 0x1242001a  beq         $s2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E3BE4u;
    {
        const bool branch_taken_0x2e3be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BE4u;
        // 0x2e3be8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3be4) {
            ctx->pc = 0x2E3C50u;
            goto label_2e3c50;
        }
    }
    ctx->pc = 0x2E3BECu;
    // 0x2e3bec: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3BECu;
    {
        const bool branch_taken_0x2e3bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BECu;
        // 0x2e3bf0: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bec) {
            ctx->pc = 0x2E3C64u;
            goto label_2e3c64;
        }
    }
    ctx->pc = 0x2E3BF4u;
label_2e3bf4:
    // 0x2e3bf4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e3bf8: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3BF8u;
    {
        const bool branch_taken_0x2e3bf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3BF8u;
        // 0x2e3bfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3bf8) {
            ctx->pc = 0x2E3C18u;
            goto label_2e3c18;
        }
    }
    ctx->pc = 0x2E3C00u;
    // 0x2e3c00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3C00u;
    {
        const bool branch_taken_0x2e3c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3c00) {
            ctx->pc = 0x2E3C18u;
            goto label_2e3c18;
        }
    }
    ctx->pc = 0x2E3C08u;
    // 0x2e3c08: 0xc0b8f6e  jal         func_2E3DB8
    ctx->pc = 0x2E3C08u;
    SET_GPR_U32(ctx, 31, 0x2E3C10u);
    ctx->pc = 0x2E3C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C08u;
    // 0x2e3c0c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2E3C08u, 0x2E3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C10u;
label_2e3c10:
    // 0x2e3c10: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E3C10u;
    {
        const bool branch_taken_0x2e3c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C10u;
        // 0x2e3c14: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c10) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C18u;
label_2e3c18:
    // 0x2e3c18: 0xc0b8f6e  jal         func_2E3DB8
    ctx->pc = 0x2E3C18u;
    SET_GPR_U32(ctx, 31, 0x2E3C20u);
    ctx->pc = 0x2E3C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C18u;
    // 0x2e3c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2E3C18u, 0x2E3C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C20u;
label_2e3c20:
    // 0x2e3c20: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E3C20u;
    {
        const bool branch_taken_0x2e3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C20u;
        // 0x2e3c24: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c20) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C28u;
label_2e3c28:
    // 0x2e3c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c2c: 0xc0b8f6e  jal         func_2E3DB8
    ctx->pc = 0x2E3C2Cu;
    SET_GPR_U32(ctx, 31, 0x2E3C34u);
    ctx->pc = 0x2E3C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C2Cu;
    // 0x2e3c30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2E3C2Cu, 0x2E3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C34u;
label_2e3c34:
    // 0x2e3c34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E3C34u;
    {
        const bool branch_taken_0x2e3c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C34u;
        // 0x2e3c38: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c34) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C3Cu;
label_2e3c3c:
    // 0x2e3c3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c40: 0xc0b8f6e  jal         func_2E3DB8
    ctx->pc = 0x2E3C40u;
    SET_GPR_U32(ctx, 31, 0x2E3C48u);
    ctx->pc = 0x2E3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C40u;
    // 0x2e3c44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2E3C40u, 0x2E3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C48u;
label_2e3c48:
    // 0x2e3c48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3C48u;
    {
        const bool branch_taken_0x2e3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C48u;
        // 0x2e3c4c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c48) {
            ctx->pc = 0x2E3C60u;
            goto label_2e3c60;
        }
    }
    ctx->pc = 0x2E3C50u;
label_2e3c50:
    // 0x2e3c50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c54: 0xc0b8f6e  jal         func_2E3DB8
    ctx->pc = 0x2E3C54u;
    SET_GPR_U32(ctx, 31, 0x2E3C5Cu);
    ctx->pc = 0x2E3C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3C54u;
    // 0x2e3c58: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3DB8u, 0x2E3C54u, 0x2E3C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3C5Cu;
label_2e3c5c:
    // 0x2e3c5c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2e3c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e3c60:
    // 0x2e3c60: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2e3c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2e3c64:
    // 0x2e3c64: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2e3c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3c68: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2e3c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e3c6c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2e3c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e3c70: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2e3c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e3c74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C74u;
        // 0x2e3c78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3C7Cu;
    // 0x2e3c7c: 0x0  nop
    ctx->pc = 0x2e3c7cu;
    // NOP
    ctx->pc = 0x2e3c80u;
}
