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

// Function: sub_001C4A08
// Address: 0x1c4a08 - 0x1c4b08
void sub_001C4A08_0x1c4a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4A08_0x1c4a08");
#endif

    switch (ctx->pc) {
        case 0x1c4a7cu: goto label_1c4a7c;
        default: break;
    }

    ctx->pc = 0x1c4a08u;

    // 0x1c4a08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4a0c: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x1c4a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1c4a10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4a14: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1c4a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c4a18: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x1c4a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1c4a1c: 0x8ca304c0  lw          $v1, 0x4C0($a1)
    ctx->pc = 0x1c4a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1216)));
    // 0x1c4a20: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1c4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1c4a24: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1c4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1c4a28: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c4a28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1c4a2c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c4a2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4a30: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c4a30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4a34: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4a38: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a3c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c4a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4a40: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c4a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4a44: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1c4a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1c4a48: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c4a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c4a4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c4a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c4a50: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c4a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c4a54: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1c4a54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c4a58: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c4a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4a5c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4a60: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c4a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c4a64: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c4a64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c4a68: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c4a68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c4a6c: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1c4a6cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c4a70: 0x46140504  c1          0x140504
    ctx->pc = 0x1c4a70u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c4a74: 0xc0712c2  jal         func_1C4B08
    ctx->pc = 0x1C4A74u;
    SET_GPR_U32(ctx, 31, 0x1C4A7Cu);
    ctx->pc = 0x1C4B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4B08u, 0x1C4A74u, 0x1C4A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4A7Cu;
label_1c4a7c:
    // 0x1c4a7c: 0x8c420fe8  lw          $v0, 0xFE8($v0)
    ctx->pc = 0x1c4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1c4a80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c4a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c4a84: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1c4a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4a88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c4a88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4a8c: 0x0  nop
    ctx->pc = 0x1c4a8cu;
    // NOP
    // 0x1c4a90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4A90u;
    {
        const bool branch_taken_0x1c4a90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4A90u;
        // 0x1c4a94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4a90) {
            ctx->pc = 0x1C4A9Cu;
            goto label_1c4a9c;
        }
    }
    ctx->pc = 0x1C4A98u;
    // 0x1c4a98: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1c4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1c4a9c:
    // 0x1c4a9c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1c4a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1c4aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4aa4: 0x0  nop
    ctx->pc = 0x1c4aa4u;
    // NOP
    // 0x1c4aa8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c4aa8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4aac: 0x0  nop
    ctx->pc = 0x1c4aacu;
    // NOP
    // 0x1c4ab0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1C4AB0u;
    {
        const bool branch_taken_0x1c4ab0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AB0u;
        // 0x1c4ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ab0) {
            ctx->pc = 0x1C4AF4u;
            goto label_1c4af4;
        }
    }
    ctx->pc = 0x1C4AB8u;
    // 0x1c4ab8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1C4AB8u;
    {
        const bool branch_taken_0x1c4ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AB8u;
        // 0x1c4abc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ab8) {
            ctx->pc = 0x1C4AF8u;
            goto label_1c4af8;
        }
    }
    ctx->pc = 0x1C4AC0u;
    // 0x1c4ac0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c4ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4ac4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1c4ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4ac8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1c4ac8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c4acc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1c4accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4ad0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1c4ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4ad4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1c4ad4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1c4ad8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1c4ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4adc: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1c4adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4ae0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1c4ae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1c4ae4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c4ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4ae8: 0x0  nop
    ctx->pc = 0x1c4ae8u;
    // NOP
    // 0x1c4aec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C4AECu;
    {
        const bool branch_taken_0x1c4aec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4aec) {
            ctx->pc = 0x1C4AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4AECu;
            // 0x1c4af0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4AF4u;
            goto label_1c4af4;
        }
    }
    ctx->pc = 0x1C4AF4u;
label_1c4af4:
    // 0x1c4af4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4af8:
    // 0x1c4af8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1c4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4afc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4AFCu;
        // 0x1c4b00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4B04u;
    // 0x1c4b04: 0x0  nop
    ctx->pc = 0x1c4b04u;
    // NOP
    ctx->pc = 0x1c4b08u;
}
