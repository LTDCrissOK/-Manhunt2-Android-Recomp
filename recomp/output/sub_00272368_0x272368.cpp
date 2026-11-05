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

// Function: sub_00272368
// Address: 0x272368 - 0x272480
void sub_00272368_0x272368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272368_0x272368");
#endif

    switch (ctx->pc) {
        case 0x2723b0u: goto label_2723b0;
        default: break;
    }

    ctx->pc = 0x272368u;

    // 0x272368: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x272368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x27236c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27236cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x272370: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x272370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x272374: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x272374u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x272378: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x272378u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B477Cu));
    // 0x27237c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27237cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272380: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x272380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x272384: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x272384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x272388: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x272388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x27238c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x27238cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x272390: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x272390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x272394: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x272394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x272398: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x272398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27239c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x27239Cu;
    {
        const bool branch_taken_0x27239c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27239Cu;
        // 0x2723a0: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27239c) {
            ctx->pc = 0x272474u;
            goto label_272474;
        }
    }
    ctx->pc = 0x2723A4u;
    // 0x2723a4: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2723a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2723a8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2723a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2723ac: 0x0  nop
    ctx->pc = 0x2723acu;
    // NOP
label_2723b0:
    // 0x2723b0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2723b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2723b4: 0x90c302d5  lbu         $v1, 0x2D5($a2)
    ctx->pc = 0x2723b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 725)));
    // 0x2723b8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2723B8u;
    {
        const bool branch_taken_0x2723b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2723b8) {
            ctx->pc = 0x272440u;
            goto label_272440;
        }
    }
    ctx->pc = 0x2723C0u;
    // 0x2723c0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2723C0u;
    {
        const bool branch_taken_0x2723c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2723c0) {
            ctx->pc = 0x2723C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2723C0u;
            // 0x2723c4: 0x8cc30104  lw          $v1, 0x104($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2723D8u;
            goto label_2723d8;
        }
    }
    ctx->pc = 0x2723C8u;
    // 0x2723c8: 0x90c202d4  lbu         $v0, 0x2D4($a2)
    ctx->pc = 0x2723c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 724)));
    // 0x2723cc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2723CCu;
    {
        const bool branch_taken_0x2723cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2723D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723CCu;
        // 0x2723d0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723cc) {
            ctx->pc = 0x272440u;
            goto label_272440;
        }
    }
    ctx->pc = 0x2723D4u;
    // 0x2723d4: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_2723d8:
    // 0x2723d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2723d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2723dc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2723e0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2723e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2723e4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2723e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2723e8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2723e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2723ec: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2723ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2723f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2723f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2723f4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2723f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2723f8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x2723f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2723fc: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x2723fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x272400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x272400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x272404: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x272404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x272408: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x272408u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27240c: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x27240cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x272410: 0xc5020000  lwc1        $f2, 0x0($t0)
    ctx->pc = 0x272410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272414: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x272414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272418: 0xc5040008  lwc1        $f4, 0x8($t0)
    ctx->pc = 0x272418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27241c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x27241cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x272420: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x272420u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x272424: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x272424u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x272428: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x272428u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27242c: 0x0  nop
    ctx->pc = 0x27242cu;
    // NOP
    // 0x272430: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x272430u;
    {
        const bool branch_taken_0x272430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272430u;
        // 0x272434: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272430) {
            ctx->pc = 0x272440u;
            goto label_272440;
        }
    }
    ctx->pc = 0x272438u;
    // 0x272438: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x272438u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27243c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x27243cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_272440:
    // 0x272440: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x272440u;
    {
        const bool branch_taken_0x272440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272440) {
            ctx->pc = 0x272444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272440u;
            // 0x272444: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272454u;
            goto label_272454;
        }
    }
    ctx->pc = 0x272448u;
    // 0x272448: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27244c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27244Cu;
    {
        const bool branch_taken_0x27244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27244Cu;
        // 0x272450: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27244c) {
            ctx->pc = 0x272464u;
            goto label_272464;
        }
    }
    ctx->pc = 0x272454u;
label_272454:
    // 0x272454: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x272454u;
    {
        const bool branch_taken_0x272454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272454u;
        // 0x272458: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272454) {
            ctx->pc = 0x272468u;
            goto label_272468;
        }
    }
    ctx->pc = 0x27245Cu;
    // 0x27245c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x27245cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x272460: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x272460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_272464:
    // 0x272464: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x272464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_272468:
    // 0x272468: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x272468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x27246c: 0x1462ffd0  bne         $v1, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x27246Cu;
    {
        const bool branch_taken_0x27246c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x272470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27246Cu;
        // 0x272470: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27246c) {
            ctx->pc = 0x2723B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2723b0;
        }
    }
    ctx->pc = 0x272474u;
label_272474:
    // 0x272474: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x272474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272478: 0x3e00008  jr          $ra
    ctx->pc = 0x272478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272478u;
        // 0x27247c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272480u;
}
