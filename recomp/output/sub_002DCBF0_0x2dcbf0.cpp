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

// Function: sub_002DCBF0
// Address: 0x2dcbf0 - 0x2dccb8
void sub_002DCBF0_0x2dcbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCBF0_0x2dcbf0");
#endif

    switch (ctx->pc) {
        case 0x2dcc24u: goto label_2dcc24;
        case 0x2dcc84u: goto label_2dcc84;
        default: break;
    }

    ctx->pc = 0x2dcbf0u;

    // 0x2dcbf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dcbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dcbf4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2dcbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2dcbf8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2dcbf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2dcbfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dcbfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc00: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2dcc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2dcc04: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DCC04u;
    {
        const bool branch_taken_0x2dcc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc04) {
            ctx->pc = 0x2DCC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC04u;
            // 0x2dcc08: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCA4u;
            goto label_2dcca4;
        }
    }
    ctx->pc = 0x2DCC0Cu;
    // 0x2dcc0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2dcc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2dcc10: 0xdc430050  ld          $v1, 0x50($v0)
    ctx->pc = 0x2dcc10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2dcc14: 0x54600023  bnel        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DCC14u;
    {
        const bool branch_taken_0x2dcc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcc14) {
            ctx->pc = 0x2DCC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC14u;
            // 0x2dcc18: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCA4u;
            goto label_2dcca4;
        }
    }
    ctx->pc = 0x2DCC1Cu;
    // 0x2dcc1c: 0xc0fb7fe  jal         func_3EDFF8
    ctx->pc = 0x2DCC1Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC24u);
    ctx->pc = 0x3EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDFF8u, 0x2DCC1Cu, 0x2DCC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC24u;
label_2dcc24:
    // 0x2dcc24: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x2dcc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x2dcc28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dcc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dcc2c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2dcc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dcc30: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2dcc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2dcc34: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2dcc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dcc38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dcc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dcc3c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2dcc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2dcc40: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2dcc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2dcc44: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2dcc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2dcc48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dcc48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dcc4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dcc4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcc50: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dcc50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dcc54: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dcc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dcc58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2dcc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcc5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc60: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x2dcc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcc64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dcc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcc68: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x2dcc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dcc6c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x2dcc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dcc70: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2dcc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dcc74: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2dcc74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dcc78: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2dcc78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dcc7c: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2DCC7Cu;
    SET_GPR_U32(ctx, 31, 0x2DCC84u);
    ctx->pc = 0x2DCC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCC7Cu;
    // 0x2dcc80: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2DCC7Cu, 0x2DCC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCC84u;
label_2dcc84:
    // 0x2dcc84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dcc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2dcc88: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2dcc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dcc8c: 0xc441b660  lwc1        $f1, -0x49A0($v0)
    ctx->pc = 0x2dcc8cu;
    { uint32_t bits = FAST_READ32(0x3FB660u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcc90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dcc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dcc94: 0x0  nop
    ctx->pc = 0x2dcc94u;
    // NOP
    // 0x2dcc98: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2DCC98u;
    {
        const bool branch_taken_0x2dcc98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dcc98) {
            ctx->pc = 0x2DCC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCC98u;
            // 0x2dcc9c: 0xe6010034  swc1        $f1, 0x34($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCCA0u;
            goto label_2dcca0;
        }
    }
    ctx->pc = 0x2DCCA0u;
label_2dcca0:
    // 0x2dcca0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2dcca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2dcca4:
    // 0x2dcca4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2dcca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2dcca8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2dcca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dccac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2dccacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2dccb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCCB0u;
        // 0x2dccb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCCB8u;
}
