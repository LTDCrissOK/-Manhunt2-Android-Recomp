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

// Function: sub_0025CD30
// Address: 0x25cd30 - 0x25cfa8
void sub_0025CD30_0x25cd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD30_0x25cd30");
#endif

    switch (ctx->pc) {
        case 0x25ce7cu: goto label_25ce7c;
        case 0x25cf74u: goto label_25cf74;
        default: break;
    }

    ctx->pc = 0x25cd30u;

    // 0x25cd30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x25cd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x25cd34: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x25cd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x25cd38: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x25cd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x25cd3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25cd3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd40: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x25cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x25cd44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x25cd44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd48: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x25cd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x25cd4c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x25cd4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cd50: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x25cd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x25cd54: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x25cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x25cd58: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x25cd58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x25cd5c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x25cd5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x25cd60: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x25CD60u;
    {
        const bool branch_taken_0x25cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD60u;
        // 0x25cd64: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd60) {
            ctx->pc = 0x25CEE4u;
            goto label_25cee4;
        }
    }
    ctx->pc = 0x25CD68u;
    // 0x25cd68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25cd6c: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x25cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x25cd70: 0x50400084  beql        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x25CD70u;
    {
        const bool branch_taken_0x25cd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cd70) {
            ctx->pc = 0x25CD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CD70u;
            // 0x25cd74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CF84u;
            goto label_25cf84;
        }
    }
    ctx->pc = 0x25CD78u;
    // 0x25cd78: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x25cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x25cd7c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x25cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x25cd80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cd84: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x25cd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x25cd88: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x25cd88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25cd8c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x25cd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cd90: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25cd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25cd94: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x25cd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25cd98: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x25cd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cd9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x25cd9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25cda0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x25cda0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x25cda4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25cda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cda8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x25cda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25cdac: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x25cdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cdb0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x25cdb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25cdb4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x25cdb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25cdb8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x25cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x25cdbc: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x25cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x25cdc0: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x25CDC0u;
    {
        const bool branch_taken_0x25cdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cdc0) {
            ctx->pc = 0x25CDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CDC0u;
            // 0x25cdc4: 0x8e820100  lw          $v0, 0x100($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CEECu;
            goto label_25ceec;
        }
    }
    ctx->pc = 0x25CDC8u;
    // 0x25cdc8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x25cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25cdcc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x25cdccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cdd0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x25cdd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25cdd4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25cdd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25cdd8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x25cdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25cddc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x25cddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25cde0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x25cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25cde4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x25cde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cde8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x25cde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cdec: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x25cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cdf0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x25cdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25cdf4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25cdf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25cdf8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x25cdf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25cdfc: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x25cdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25ce00: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x25ce00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ce04: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x25ce04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ce08: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25ce08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25ce0c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x25ce0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25ce10: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x25ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ce14: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25ce14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ce18: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x25ce18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ce1c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x25ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25ce20: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x25ce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ce24: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x25ce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ce28: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x25ce28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x25ce2c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x25ce2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x25ce30: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x25ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x25ce34: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x25ce34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x25ce38: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x25ce38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ce3c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ce40: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x25ce40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ce44: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25ce44u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25ce48: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25ce48u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25ce4c: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x25ce4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25ce50: 0x46140504  c1          0x140504
    ctx->pc = 0x25ce50u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x25ce54: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x25ce54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ce58: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x25ce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ce5c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x25ce5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25ce60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25ce60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25ce64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25ce64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25ce68: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x25ce68u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25ce6c: 0x46000004  c1          0x4
    ctx->pc = 0x25ce6cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25ce70: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x25ce70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ce74: 0xc0791fe  jal         func_1E47F8
    ctx->pc = 0x25CE74u;
    SET_GPR_U32(ctx, 31, 0x25CE7Cu);
    ctx->pc = 0x25CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CE74u;
    // 0x25ce78: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E47F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E47F8u, 0x25CE74u, 0x25CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CE7Cu;
label_25ce7c:
    // 0x25ce7c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x25ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25ce80: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x25ce80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25ce84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x25ce84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ce88: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25ce88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25ce8c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x25ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25ce90: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x25ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ce94: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x25ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ce98: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x25ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ce9c: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x25ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25cea0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25cea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25cea4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x25cea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25cea8: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x25cea8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25ceac: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x25ceacu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x25ceb0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x25ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25ceb4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x25ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25ceb8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x25ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25cebc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25cebcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25cec0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25cec0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25cec4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x25cec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25cec8: 0x46000004  c1          0x4
    ctx->pc = 0x25cec8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25cecc: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25ceccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25ced0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x25ced0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25ced4: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x25ced4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25ced8: 0x0  nop
    ctx->pc = 0x25ced8u;
    // NOP
    // 0x25cedc: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x25CEDCu;
    {
        const bool branch_taken_0x25cedc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25cedc) {
            ctx->pc = 0x25CEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25CEDCu;
            // 0x25cee0: 0xc6410000  lwc1        $f1, 0x0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25CF4Cu;
            goto label_25cf4c;
        }
    }
    ctx->pc = 0x25CEE4u;
label_25cee4:
    // 0x25cee4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x25CEE4u;
    {
        const bool branch_taken_0x25cee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CEE4u;
        // 0x25cee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cee4) {
            ctx->pc = 0x25CF84u;
            goto label_25cf84;
        }
    }
    ctx->pc = 0x25CEECu;
label_25ceec:
    // 0x25ceec: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x25ceecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25cef0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x25cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x25cef4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x25cef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cef8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x25cef8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cefc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25cefcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25cf00: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x25cf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25cf04: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x25cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cf08: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x25cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25cf0c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x25cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cf10: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x25cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cf14: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x25cf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x25cf18: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x25cf18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25cf1c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x25cf1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x25cf20: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x25cf20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x25cf24: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x25cf24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25cf28: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x25cf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cf2c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x25cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25cf30: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x25cf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25cf34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25cf34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25cf38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25cf38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25cf3c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x25cf3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25cf40: 0x46000004  c1          0x4
    ctx->pc = 0x25cf40u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25cf44: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x25cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x25cf48: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x25cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_25cf4c:
    // 0x25cf4c: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x25cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cf50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25cf50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cf54: 0x0  nop
    ctx->pc = 0x25cf54u;
    // NOP
    // 0x25cf58: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x25CF58u;
    {
        const bool branch_taken_0x25cf58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF58u;
        // 0x25cf5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf58) {
            ctx->pc = 0x25CF84u;
            goto label_25cf84;
        }
    }
    ctx->pc = 0x25CF60u;
    // 0x25cf60: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x25cf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x25cf64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25CF64u;
    {
        const bool branch_taken_0x25cf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF64u;
        // 0x25cf68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf64) {
            ctx->pc = 0x25CF80u;
            goto label_25cf80;
        }
    }
    ctx->pc = 0x25CF6Cu;
    // 0x25cf6c: 0xc0974aa  jal         func_25D2A8
    ctx->pc = 0x25CF6Cu;
    SET_GPR_U32(ctx, 31, 0x25CF74u);
    ctx->pc = 0x25CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25CF6Cu;
    // 0x25cf70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D2A8u, 0x25CF6Cu, 0x25CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CF74u;
label_25cf74:
    // 0x25cf74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25cf74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cf78: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25CF78u;
    {
        const bool branch_taken_0x25cf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CF78u;
        // 0x25cf7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cf78) {
            ctx->pc = 0x25CF84u;
            goto label_25cf84;
        }
    }
    ctx->pc = 0x25CF80u;
label_25cf80:
    // 0x25cf80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25cf84:
    // 0x25cf84: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x25cf84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25cf88: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x25cf88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25cf8c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x25cf8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25cf90: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x25cf90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x25cf94: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x25cf94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25cf98: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x25cf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25cf9c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x25cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25cfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFA0u;
        // 0x25cfa4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CFA8u;
}
