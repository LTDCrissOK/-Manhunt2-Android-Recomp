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

// Function: sub_001C3750
// Address: 0x1c3750 - 0x1c3918
void sub_001C3750_0x1c3750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3750_0x1c3750");
#endif

    switch (ctx->pc) {
        case 0x1c3838u: goto label_1c3838;
        case 0x1c3840u: goto label_1c3840;
        case 0x1c38acu: goto label_1c38ac;
        case 0x1c38d8u: goto label_1c38d8;
        case 0x1c38e0u: goto label_1c38e0;
        default: break;
    }

    ctx->pc = 0x1c3750u;

label_1c3750:
    // 0x1c3750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c3750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c3754: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c3754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c3758: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c3758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c375c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c375cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3760: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c3760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c3764: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1c3764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c3768: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c376c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c376cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3770: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1c3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3774: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x1c3774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c3778: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c377c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1c377cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1c3780: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1c3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c3784: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1c3784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1c3788: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c3788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c378c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1c378cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1c3790: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1c3790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1c3794: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1c3794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1c3798: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c3798u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c379c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1c379cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c37a0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c37a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c37a4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c37a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c37a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c37a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c37ac: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c37acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c37b0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c37b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c37b4: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1c37b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c37b8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c37b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c37bc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c37bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c37c0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c37c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c37c4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1c37c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c37c8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c37c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c37cc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c37ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c37d0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c37d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c37d4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c37d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c37d8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c37d8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c37dc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c37dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c37e0: 0x46010044  c1          0x10044
    ctx->pc = 0x1c37e0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c37e4: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1c37e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c37e8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C37E8u;
    {
        const bool branch_taken_0x1c37e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C37E8u;
        // 0x1c37ec: 0xe6010040  swc1        $f1, 0x40($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37e8) {
            ctx->pc = 0x1C3808u;
            goto label_1c3808;
        }
    }
    ctx->pc = 0x1C37F0u;
    // 0x1c37f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c37f4: 0x8c4389a8  lw          $v1, -0x7658($v0)
    ctx->pc = 0x1c37f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F89A8u));
    // 0x1c37f8: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C37F8u;
    {
        const bool branch_taken_0x1c37f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c37f8) {
            ctx->pc = 0x1C38D8u;
            goto label_1c38d8;
        }
    }
    ctx->pc = 0x1C3800u;
    // 0x1c3800: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C3800u;
    {
        const bool branch_taken_0x1c3800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3800u;
        // 0x1c3804: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3800) {
            ctx->pc = 0x1C38C8u;
            goto label_1c38c8;
        }
    }
    ctx->pc = 0x1C3808u;
label_1c3808:
    // 0x1c3808: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c380c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c380cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3810: 0x0  nop
    ctx->pc = 0x1c3810u;
    // NOP
    // 0x1c3814: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c3814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3818: 0x0  nop
    ctx->pc = 0x1c3818u;
    // NOP
    // 0x1c381c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x1C381Cu;
    {
        const bool branch_taken_0x1c381c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C381Cu;
        // 0x1c3820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c381c) {
            ctx->pc = 0x1C389Cu;
            goto label_1c389c;
        }
    }
    ctx->pc = 0x1C3824u;
    // 0x1c3824: 0x3c0140a6  lui         $at, 0x40A6
    ctx->pc = 0x1c3824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16550 << 16));
    // 0x1c3828: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c3828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c382c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c382cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3830: 0xc070eb6  jal         func_1C3AD8
    ctx->pc = 0x1C3830u;
    SET_GPR_U32(ctx, 31, 0x1C3838u);
    ctx->pc = 0x1C3834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3830u;
    // 0x1c3834: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AD8u, 0x1C3830u, 0x1C3838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3838u;
label_1c3838:
    // 0x1c3838: 0xc070f4c  jal         func_1C3D30
    ctx->pc = 0x1C3838u;
    SET_GPR_U32(ctx, 31, 0x1C3840u);
    ctx->pc = 0x1C383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3838u;
    // 0x1c383c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3D30u, 0x1C3838u, 0x1C3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3840u;
label_1c3840:
    // 0x1c3840: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1c3840u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c3844: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c3844u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c3848: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1c3848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1c384c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1c384cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1c3850: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C3850u;
    {
        const bool branch_taken_0x1c3850 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C3854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3850u;
        // 0x1c3854: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3850) {
            ctx->pc = 0x1C386Cu;
            goto label_1c386c;
        }
    }
    ctx->pc = 0x1C3858u;
    // 0x1c3858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c385c: 0x0  nop
    ctx->pc = 0x1c385cu;
    // NOP
    // 0x1c3860: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c3860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c3864: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3864u;
    {
        const bool branch_taken_0x1c3864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3864) {
            ctx->pc = 0x1C3884u;
            goto label_1c3884;
        }
    }
    ctx->pc = 0x1C386Cu;
label_1c386c:
    // 0x1c386c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c386cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c3870: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c3870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1c3874: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3878: 0x0  nop
    ctx->pc = 0x1c3878u;
    // NOP
    // 0x1c387c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c387cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c3880: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1c3880u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1c3884:
    // 0x1c3884: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1c3888: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c3888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c388c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c388cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3890: 0x0  nop
    ctx->pc = 0x1c3890u;
    // NOP
    // 0x1c3894: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c3894u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c3898: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1c3898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1c389c:
    // 0x1c389c: 0x8e110030  lw          $s1, 0x30($s0)
    ctx->pc = 0x1c389cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c38a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38a4: 0xc070e46  jal         func_1C3918
    ctx->pc = 0x1C38A4u;
    SET_GPR_U32(ctx, 31, 0x1C38ACu);
    ctx->pc = 0x1C38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38A4u;
    // 0x1c38a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3918u, 0x1C38A4u, 0x1C38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38ACu;
label_1c38ac:
    // 0x1c38ac: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1c38acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1c38b0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C38B0u;
    {
        const bool branch_taken_0x1c38b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38B0u;
        // 0x1c38b4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38b0) {
            ctx->pc = 0x1C38F4u;
            goto label_1c38f4;
        }
    }
    ctx->pc = 0x1C38B8u;
    // 0x1c38b8: 0x8c6289a8  lw          $v0, -0x7658($v1)
    ctx->pc = 0x1c38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937000)));
    // 0x1c38bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C38BCu;
    {
        const bool branch_taken_0x1c38bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38BCu;
        // 0x1c38c0: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38bc) {
            ctx->pc = 0x1C38D8u;
            goto label_1c38d8;
        }
    }
    ctx->pc = 0x1C38C4u;
    // 0x1c38c4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1c38c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1c38c8:
    // 0x1c38c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c38c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c38ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38d0: 0xc070dd4  jal         func_1C3750
    ctx->pc = 0x1C38D0u;
    SET_GPR_U32(ctx, 31, 0x1C38D8u);
    ctx->pc = 0x1C38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38D0u;
    // 0x1c38d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3750u;
    goto label_1c3750;
    ctx->pc = 0x1C38D8u;
label_1c38d8:
    // 0x1c38d8: 0xc040d5c  jal         func_103570
    ctx->pc = 0x1C38D8u;
    SET_GPR_U32(ctx, 31, 0x1C38E0u);
    ctx->pc = 0x1C38DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C38D8u;
    // 0x1c38dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x1C38D8u, 0x1C38E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C38E0u;
label_1c38e0:
    // 0x1c38e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c38e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c38e4: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x1c38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x1c38e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c38ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C38ECu;
    {
        const bool branch_taken_0x1c38ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38ECu;
        // 0x1c38f0: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c38ec) {
            ctx->pc = 0x1C3900u;
            goto label_1c3900;
        }
    }
    ctx->pc = 0x1C38F4u;
label_1c38f4:
    // 0x1c38f4: 0x54510001  bnel        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C38F4u;
    {
        const bool branch_taken_0x1c38f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1c38f4) {
            ctx->pc = 0x1C38F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C38F4u;
            // 0x1c38f8: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C38FCu;
            goto label_1c38fc;
        }
    }
    ctx->pc = 0x1C38FCu;
label_1c38fc:
    // 0x1c38fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3900:
    // 0x1c3900: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c3900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3904: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c3904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c3908: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c3908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c390c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c390cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3910: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3910u;
        // 0x1c3914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3918u;
}
