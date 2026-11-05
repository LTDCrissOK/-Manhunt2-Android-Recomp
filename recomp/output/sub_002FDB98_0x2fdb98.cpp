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

// Function: sub_002FDB98
// Address: 0x2fdb98 - 0x2fdd10
void sub_002FDB98_0x2fdb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FDB98_0x2fdb98");
#endif

    switch (ctx->pc) {
        case 0x2fdc00u: goto label_2fdc00;
        default: break;
    }

    ctx->pc = 0x2fdb98u;

    // 0x2fdb98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fdb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2fdb9c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2fdb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x2fdba0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2fdba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2fdba4: 0x24423d20  addiu       $v0, $v0, 0x3D20
    ctx->pc = 0x2fdba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
    // 0x2fdba8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2fdba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2fdbac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fdbb0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2fdbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4B3D24u));
    // 0x2fdbb4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2fdbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2fdbb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fdbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2fdbbc: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2fdbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2fdbc0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2fdbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2fdbc4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2fdbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2fdbc8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2fdbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2fdbcc: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2fdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2fdbd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fdbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdbd4: 0x10a0004b  beqz        $a1, . + 4 + (0x4B << 2)
    ctx->pc = 0x2FDBD4u;
    {
        const bool branch_taken_0x2fdbd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDBD4u;
        // 0x2fdbd8: 0x24680070  addiu       $t0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbd4) {
            ctx->pc = 0x2FDD04u;
            goto label_2fdd04;
        }
    }
    ctx->pc = 0x2FDBDCu;
    // 0x2fdbdc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2fdbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2fdbe0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2fdbe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2fdbe4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2fdbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2fdbe8: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2fdbe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x2fdbec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2fdbecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2fdbf0: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2fdbf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fdbf4: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2fdbf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2fdbf8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fdbfc: 0x0  nop
    ctx->pc = 0x2fdbfcu;
    // NOP
label_2fdc00:
    // 0x2fdc00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fdc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdc04: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x2fdc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x2fdc08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fdc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fdc0c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2fdc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2fdc10: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x2fdc10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fdc14: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2fdc14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fdc18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fdc18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fdc1c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fdc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fdc20: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2fdc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdc24: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2fdc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fdc28: 0xc4a0b994  lwc1        $f0, -0x466C($a1)
    ctx->pc = 0x2fdc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294949268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdc2c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2fdc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdc30: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2fdc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdc34: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2fdc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fdc38: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x2fdc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdc3c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2fdc3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fdc40: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2fdc40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fdc44: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2fdc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fdc48: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2FDC48u;
    {
        const bool branch_taken_0x2fdc48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC48u;
        // 0x2fdc4c: 0xe7a30024  swc1        $f3, 0x24($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc48) {
            ctx->pc = 0x2FDC80u;
            goto label_2fdc80;
        }
    }
    ctx->pc = 0x2FDC50u;
    // 0x2fdc50: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2fdc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdc54: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x2fdc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdc58: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x2fdc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdc5c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fdc5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fdc60: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fdc60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fdc64: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fdc64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fdc68: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2fdc68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdc6c: 0x0  nop
    ctx->pc = 0x2fdc6cu;
    // NOP
    // 0x2fdc70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FDC70u;
    {
        const bool branch_taken_0x2fdc70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fdc70) {
            ctx->pc = 0x2FDC80u;
            goto label_2fdc80;
        }
    }
    ctx->pc = 0x2FDC78u;
    // 0x2fdc78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2FDC78u;
    {
        const bool branch_taken_0x2fdc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDC78u;
        // 0x2fdc7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdc78) {
            ctx->pc = 0x2FDD08u;
            goto label_2fdd08;
        }
    }
    ctx->pc = 0x2FDC80u;
label_2fdc80:
    // 0x2fdc80: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2fdc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fdc84: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2fdc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fdc88: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2fdc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fdc8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fdc8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fdc90: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fdc90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fdc94: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fdc94u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fdc98: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2fdc98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdc9c: 0x0  nop
    ctx->pc = 0x2fdc9cu;
    // NOP
    // 0x2fdca0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2FDCA0u;
    {
        const bool branch_taken_0x2fdca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCA0u;
        // 0x2fdca4: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdca0) {
            ctx->pc = 0x2FDCCCu;
            goto label_2fdccc;
        }
    }
    ctx->pc = 0x2FDCA8u;
    // 0x2fdca8: 0xc4a0b994  lwc1        $f0, -0x466C($a1)
    ctx->pc = 0x2fdca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294949268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fdcac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2fdcacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdcb0: 0x0  nop
    ctx->pc = 0x2fdcb0u;
    // NOP
    // 0x2fdcb4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FDCB4u;
    {
        const bool branch_taken_0x2fdcb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FDCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCB4u;
        // 0x2fdcb8: 0xc520b998  lwc1        $f0, -0x4668($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294949272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcb4) {
            ctx->pc = 0x2FDCCCu;
            goto label_2fdccc;
        }
    }
    ctx->pc = 0x2FDCBCu;
    // 0x2fdcbc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2fdcbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fdcc0: 0x0  nop
    ctx->pc = 0x2fdcc0u;
    // NOP
    // 0x2fdcc4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FDCC4u;
    {
        const bool branch_taken_0x2fdcc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fdcc4) {
            ctx->pc = 0x2FDCC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDCC4u;
            // 0x2fdcc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDCCCu;
            goto label_2fdccc;
        }
    }
    ctx->pc = 0x2FDCCCu;
label_2fdccc:
    // 0x2fdccc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2fdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fdcd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDCD0u;
    {
        const bool branch_taken_0x2fdcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdcd0) {
            ctx->pc = 0x2FDCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FDCD0u;
            // 0x2fdcd4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FDCE4u;
            goto label_2fdce4;
        }
    }
    ctx->pc = 0x2FDCD8u;
    // 0x2fdcd8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2fdcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2fdcdc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FDCDCu;
    {
        const bool branch_taken_0x2fdcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCDCu;
        // 0x2fdce0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcdc) {
            ctx->pc = 0x2FDCF4u;
            goto label_2fdcf4;
        }
    }
    ctx->pc = 0x2FDCE4u;
label_2fdce4:
    // 0x2fdce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FDCE4u;
    {
        const bool branch_taken_0x2fdce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCE4u;
        // 0x2fdce8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdce4) {
            ctx->pc = 0x2FDCF8u;
            goto label_2fdcf8;
        }
    }
    ctx->pc = 0x2FDCECu;
    // 0x2fdcec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2fdcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2fdcf0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2fdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2fdcf4:
    // 0x2fdcf4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2fdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2fdcf8:
    // 0x2fdcf8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2fdcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2fdcfc: 0x1462ffc0  bne         $v1, $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2FDCFCu;
    {
        const bool branch_taken_0x2fdcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDCFCu;
        // 0x2fdd00: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdcfc) {
            ctx->pc = 0x2FDC00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fdc00;
        }
    }
    ctx->pc = 0x2FDD04u;
label_2fdd04:
    // 0x2fdd04: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2fdd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fdd08:
    // 0x2fdd08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDD08u;
        // 0x2fdd0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDD10u;
}
