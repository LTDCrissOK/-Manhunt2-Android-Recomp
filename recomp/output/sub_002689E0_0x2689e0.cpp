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

// Function: sub_002689E0
// Address: 0x2689e0 - 0x268ae0
void sub_002689E0_0x2689e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002689E0_0x2689e0");
#endif

    switch (ctx->pc) {
        case 0x268a58u: goto label_268a58;
        default: break;
    }

    ctx->pc = 0x2689e0u;

    // 0x2689e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2689e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2689e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2689e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2689e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2689e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2689ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2689f0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2689f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2689f4: 0x260202b0  addiu       $v0, $s0, 0x2B0
    ctx->pc = 0x2689f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x2689f8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2689f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2689fc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2689fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268a00: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x268a00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x268a04: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x268a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x268a08: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x268a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268a0c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x268a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268a10: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x268a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268a14: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x268a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x268a18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x268a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268a1c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x268a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268a20: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x268a20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268a24: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x268a24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x268a28: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x268a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268a2c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x268a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268a30: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x268a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x268a34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x268a34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x268a38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x268a38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x268a3c: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x268a3cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x268a40: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x268a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268a44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268a48: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x268A48u;
    {
        const bool branch_taken_0x268a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268a48) {
            ctx->pc = 0x268A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268A48u;
            // 0x268a4c: 0xc44c0020  lwc1        $f12, 0x20($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x268A50u;
            goto label_268a50;
        }
    }
    ctx->pc = 0x268A50u;
label_268a50:
    // 0x268a50: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x268A50u;
    SET_GPR_U32(ctx, 31, 0x268A58u);
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x268A50u, 0x268A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A58u;
label_268a58:
    // 0x268a58: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x268a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x268a5c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x268a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x268a60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x268a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268a64: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x268a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x268a68: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x268a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268a6c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x268a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268a70: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x268a70u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x268a74: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x268a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268a78: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x268a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268a7c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x268a7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x268a80: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x268a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268a84: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x268a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268a88: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x268a88u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x268a8c: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x268a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x268a90: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x268a94: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x268a94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x268a98: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x268a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x268a9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x268a9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x268aa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x268aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268aa4: 0x0  nop
    ctx->pc = 0x268aa4u;
    // NOP
    // 0x268aa8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x268AA8u;
    {
        const bool branch_taken_0x268aa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x268AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AA8u;
        // 0x268aac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268aa8) {
            ctx->pc = 0x268AC8u;
            goto label_268ac8;
        }
    }
    ctx->pc = 0x268AB0u;
    // 0x268ab0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x268ab0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268ab4: 0x0  nop
    ctx->pc = 0x268ab4u;
    // NOP
    // 0x268ab8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x268ab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x268abc: 0x0  nop
    ctx->pc = 0x268abcu;
    // NOP
    // 0x268ac0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x268AC0u;
    {
        const bool branch_taken_0x268ac0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x268ac0) {
            ctx->pc = 0x268AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268AC0u;
            // 0x268ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268AC8u;
            goto label_268ac8;
        }
    }
    ctx->pc = 0x268AC8u;
label_268ac8:
    // 0x268ac8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x268ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268acc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x268accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x268ad0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x268ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x268ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x268AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AD4u;
        // 0x268ad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268ADCu;
    // 0x268adc: 0x0  nop
    ctx->pc = 0x268adcu;
    // NOP
    ctx->pc = 0x268ae0u;
}
