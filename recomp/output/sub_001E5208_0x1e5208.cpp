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

// Function: sub_001E5208
// Address: 0x1e5208 - 0x1e5378
void sub_001E5208_0x1e5208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5208_0x1e5208");
#endif

    switch (ctx->pc) {
        case 0x1e5270u: goto label_1e5270;
        case 0x1e527cu: goto label_1e527c;
        case 0x1e52a4u: goto label_1e52a4;
        case 0x1e52b8u: goto label_1e52b8;
        default: break;
    }

    ctx->pc = 0x1e5208u;

    // 0x1e5208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e5208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e520c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e520cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e5210: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1e5210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1e5214: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e5214u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5218: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1e5218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1e521c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1e521cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5228: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e522c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e522cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e5230: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e5230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e5234: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1e5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1e5238: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1e5238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1e523c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1e523cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1e5240: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1e5240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1e5244: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1e5244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1e5248: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1E5248u;
    {
        const bool branch_taken_0x1e5248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5248u;
        // 0x1e524c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5248) {
            ctx->pc = 0x1E5340u;
            goto label_1e5340;
        }
    }
    ctx->pc = 0x1E5250u;
    // 0x1e5250: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e5254: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1E5254u;
    {
        const bool branch_taken_0x1e5254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5254u;
        // 0x1e5258: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5254) {
            ctx->pc = 0x1E5338u;
            goto label_1e5338;
        }
    }
    ctx->pc = 0x1E525Cu;
    // 0x1e525c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1e525cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1e5260: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e5260u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5268: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1e5268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e526c: 0x0  nop
    ctx->pc = 0x1e526cu;
    // NOP
label_1e5270:
    // 0x1e5270: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1e5270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5274: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E5274u;
    SET_GPR_U32(ctx, 31, 0x1E527Cu);
    ctx->pc = 0x1E5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5274u;
    // 0x1e5278: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E55F0u, 0x1E5274u, 0x1E527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E527Cu;
label_1e527c:
    // 0x1e527c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x1e527cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1e5280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5284: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1e5284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e5288: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1e5288u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e528c: 0x2e39821  addu        $s3, $s7, $v1
    ctx->pc = 0x1e528cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1e5290: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e5290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5294: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1e5298: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1e529c: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x1E529Cu;
    SET_GPR_U32(ctx, 31, 0x1E52A4u);
    ctx->pc = 0x1E52A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E529Cu;
    // 0x1e52a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x1E529Cu, 0x1E52A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52A4u;
label_1e52a4:
    // 0x1e52a4: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1e52a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1e52a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e52a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e52acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e52b0: 0xc0b1ace  jal         func_2C6B38
    ctx->pc = 0x1E52B0u;
    SET_GPR_U32(ctx, 31, 0x1E52B8u);
    ctx->pc = 0x1E52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E52B0u;
    // 0x1e52b4: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6B38u, 0x1E52B0u, 0x1E52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E52B8u;
label_1e52b8:
    // 0x1e52b8: 0x26620030  addiu       $v0, $s3, 0x30
    ctx->pc = 0x1e52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1e52bc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e52bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e52c0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1e52c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e52c4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e52c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e52c8: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x1e52c8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e52cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1e52ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e52d0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e52d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e52d4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1e52d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e52d8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e52d8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e52dc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e52dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e52e0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1e52e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e52e4: 0x0  nop
    ctx->pc = 0x1e52e4u;
    // NOP
    // 0x1e52e8: 0x0  nop
    ctx->pc = 0x1e52e8u;
    // NOP
    // 0x1e52ec: 0x46000044  c1          0x44
    ctx->pc = 0x1e52ecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e52f0: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x1e52f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x1e52f4: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1e52f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e52f8: 0x0  nop
    ctx->pc = 0x1e52f8u;
    // NOP
    // 0x1e52fc: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1E52FCu;
    {
        const bool branch_taken_0x1e52fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E52FCu;
        // 0x1e5300: 0xe6610050  swc1        $f1, 0x50($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52fc) {
            ctx->pc = 0x1E5324u;
            goto label_1e5324;
        }
    }
    ctx->pc = 0x1E5304u;
    // 0x1e5304: 0x0  nop
    ctx->pc = 0x1e5304u;
    // NOP
    // 0x1e5308: 0x0  nop
    ctx->pc = 0x1e5308u;
    // NOP
    // 0x1e530c: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x1e530cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
    // 0x1e5310: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e5310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e5314: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e5314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5318: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e5318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e531c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e531cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5320: 0xfa610040  sqc2        $vf1, 0x40($s3)
    ctx->pc = 0x1e5320u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e5324:
    // 0x1e5324: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1e5324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1e5328: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e5328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e532c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1e532cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5330: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1E5330u;
    {
        const bool branch_taken_0x1e5330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5330u;
        // 0x1e5334: 0x26f70060  addiu       $s7, $s7, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5330) {
            ctx->pc = 0x1E5270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5270;
        }
    }
    ctx->pc = 0x1E5338u;
label_1e5338:
    // 0x1e5338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e533c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1e533cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
label_1e5340:
    // 0x1e5340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e534c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e534cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5350: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e5350u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5354: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e5354u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5358: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1e5358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e535c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1e535cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e5360: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1e5360u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5364: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1e5364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e5368: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1e5368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1e536c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1e536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5370: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5370u;
        // 0x1e5374: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5378u;
}
