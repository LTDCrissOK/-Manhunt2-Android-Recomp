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

// Function: sub_002D8F50
// Address: 0x2d8f50 - 0x2d8ff0
void sub_002D8F50_0x2d8f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8F50_0x2d8f50");
#endif

    switch (ctx->pc) {
        case 0x2d8f70u: goto label_2d8f70;
        default: break;
    }

    ctx->pc = 0x2d8f50u;

    // 0x2d8f50: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x2d8f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2d8f54: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2d8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2d8f58: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2d8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2d8f5c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2d8f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d8f60: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x2d8f60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2d8f64: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D8F64u;
    {
        const bool branch_taken_0x2d8f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D8F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8F64u;
        // 0x2d8f68: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8f64) {
            ctx->pc = 0x2D8FD0u;
            goto label_2d8fd0;
        }
    }
    ctx->pc = 0x2D8F6Cu;
    // 0x2d8f6c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2d8f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d8f70:
    // 0x2d8f70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d8f74: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x2d8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x2d8f78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2d8f78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8f7c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2d8f7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d8f80: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2d8f80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2d8f84: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2d8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2d8f88: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d8f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d8f8c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d8f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d8f90: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2d8f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8f94: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x2d8f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d8f98: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d8f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d8f9c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d8f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d8fa0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2d8fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d8fa4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x2d8fa4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d8fa8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2d8fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d8fac: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2d8facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d8fb0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2d8fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d8fb4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2d8fb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2d8fb8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2d8fb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2d8fbc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2d8fbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2d8fc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d8fc4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2d8fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d8fc8: 0x14a2ffe9  bne         $a1, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2D8FC8u;
    {
        const bool branch_taken_0x2d8fc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D8FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FC8u;
        // 0x2d8fcc: 0x46003180  add.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fc8) {
            ctx->pc = 0x2D8F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8f70;
        }
    }
    ctx->pc = 0x2D8FD0u;
label_2d8fd0:
    // 0x2d8fd0: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2d8fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2d8fd4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2d8fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8fd8: 0x0  nop
    ctx->pc = 0x2d8fd8u;
    // NOP
    // 0x2d8fdc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D8FDCu;
    {
        const bool branch_taken_0x2d8fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FDCu;
        // 0x2d8fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8fdc) {
            ctx->pc = 0x2D8FE8u;
            goto label_2d8fe8;
        }
    }
    ctx->pc = 0x2D8FE4u;
    // 0x2d8fe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8fe8:
    // 0x2d8fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8FE8u;
        // 0x2d8fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8FF0u;
}
