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

// Function: sub_00260828
// Address: 0x260828 - 0x2608f0
void sub_00260828_0x260828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260828_0x260828");
#endif

    switch (ctx->pc) {
        case 0x260844u: goto label_260844;
        case 0x2608d0u: goto label_2608d0;
        default: break;
    }

    ctx->pc = 0x260828u;

    // 0x260828: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x260828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26082c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x26082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x260830: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x260830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x260834: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x260834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x260838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26083c: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x26083Cu;
    SET_GPR_U32(ctx, 31, 0x260844u);
    ctx->pc = 0x260840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26083Cu;
    // 0x260840: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x26083Cu, 0x260844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260844u;
label_260844:
    // 0x260844: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x260844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x260848: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x260848u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x26084c: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26084Cu;
    {
        const bool branch_taken_0x26084c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x260850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26084Cu;
        // 0x260850: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26084c) {
            ctx->pc = 0x2608D0u;
            goto label_2608d0;
        }
    }
    ctx->pc = 0x260854u;
    // 0x260854: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x260854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x260858: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26085c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x260860: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x260860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260864: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x260864u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260868: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x260868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26086c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26086cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x260870: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x260870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260874: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x260874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x260878: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x260878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26087c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x260880: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x260880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x260884: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x260884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x260888: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x260888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x26088c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x260890: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x260890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x260894: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x260894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x260898: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x260898u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26089c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26089cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2608a0: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2608a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2608a4: 0x46010044  c1          0x10044
    ctx->pc = 0x2608a4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2608a8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2608a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2608ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2608acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2608b0: 0x0  nop
    ctx->pc = 0x2608b0u;
    // NOP
    // 0x2608b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2608b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2608b8: 0x0  nop
    ctx->pc = 0x2608b8u;
    // NOP
    // 0x2608bc: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2608BCu;
    {
        const bool branch_taken_0x2608bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2608bc) {
            ctx->pc = 0x2608C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2608BCu;
            // 0x2608c0: 0x8e220230  lw          $v0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2608D4u;
            goto label_2608d4;
        }
    }
    ctx->pc = 0x2608C4u;
    // 0x2608c4: 0x8ca40ffc  lw          $a0, 0xFFC($a1)
    ctx->pc = 0x2608c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4092)));
    // 0x2608c8: 0xc071e1a  jal         func_1C7868
    ctx->pc = 0x2608C8u;
    SET_GPR_U32(ctx, 31, 0x2608D0u);
    ctx->pc = 0x2608CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2608C8u;
    // 0x2608cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7868u, 0x2608C8u, 0x2608D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2608D0u;
label_2608d0:
    // 0x2608d0: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x2608d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_2608d4:
    // 0x2608d4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2608d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2608d8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2608d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2608dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2608dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2608e0: 0xae220230  sw          $v0, 0x230($s1)
    ctx->pc = 0x2608e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 2));
    // 0x2608e4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2608e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2608e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2608E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2608ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608E8u;
        // 0x2608ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2608E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2608F0u;
}
