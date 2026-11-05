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

// Function: sub_001DC9F8
// Address: 0x1dc9f8 - 0x1dcbb0
void sub_001DC9F8_0x1dc9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC9F8_0x1dc9f8");
#endif

    switch (ctx->pc) {
        case 0x1dca20u: goto label_1dca20;
        default: break;
    }

    ctx->pc = 0x1dc9f8u;

    // 0x1dc9f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dc9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dc9fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1dc9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1dca00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1dca00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1dca04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dca04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1dca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1dca0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dca0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1dca10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1dca14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dca14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dca18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DCA18u;
    SET_GPR_U32(ctx, 31, 0x1DCA20u);
    ctx->pc = 0x1DCA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA18u;
    // 0x1dca1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DCA18u, 0x1DCA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCA20u;
label_1dca20:
    // 0x1dca20: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1dca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1dca24: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1dca24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dca28: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1dca28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dca2c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1dca2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dca30: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1dca30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1dca34: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1dca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1dca38: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1dca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1dca3c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dca3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dca40: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dca40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dca44: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dca44u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dca48: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dca4c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dca50: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dca50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dca54: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dca54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dca58: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dca58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dca5c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x1dca5cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dca60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dca60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dca64: 0x0  nop
    ctx->pc = 0x1dca64u;
    // NOP
    // 0x1dca68: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x1dca68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dca6c: 0x0  nop
    ctx->pc = 0x1dca6cu;
    // NOP
    // 0x1dca70: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCA70u;
    {
        const bool branch_taken_0x1dca70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dca70) {
            ctx->pc = 0x1DCA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCA70u;
            // 0x1dca74: 0x26220030  addiu       $v0, $s1, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCA94u;
            goto label_1dca94;
        }
    }
    ctx->pc = 0x1DCA78u;
    // 0x1dca78: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1dca78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dca7c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1dca7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1dca80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dca80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dca84: 0x0  nop
    ctx->pc = 0x1dca84u;
    // NOP
    // 0x1dca88: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x1DCA88u;
    {
        const bool branch_taken_0x1dca88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA88u;
        // 0x1dca8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca88) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DCA90u;
    // 0x1dca90: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1dca94:
    // 0x1dca94: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dca98: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dca9c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dca9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcaa0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcaa4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcaa8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dcaa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dcaac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dcaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcab0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dcab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcab4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dcab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcab8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1dcab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dcabc: 0x0  nop
    ctx->pc = 0x1dcabcu;
    // NOP
    // 0x1dcac0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcac0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcac4: 0x0  nop
    ctx->pc = 0x1dcac4u;
    // NOP
    // 0x1dcac8: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x1DCAC8u;
    {
        const bool branch_taken_0x1dcac8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCAC8u;
        // 0x1dcacc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcac8) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DCAD0u;
    // 0x1dcad0: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1dcad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1dcad4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dcad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcad8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dcad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcadc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dcadcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcae0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dcae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcae4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcae8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dcae8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dcaec: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dcaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcaf0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dcaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcaf4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dcaf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcaf8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcaf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcafc: 0x0  nop
    ctx->pc = 0x1dcafcu;
    // NOP
    // 0x1dcb00: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x1DCB00u;
    {
        const bool branch_taken_0x1dcb00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB00u;
        // 0x1dcb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb00) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DCB08u;
    // 0x1dcb08: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1dcb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dcb0c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dcb0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb10: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dcb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb14: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dcb14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcb18: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dcb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb1c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb20: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dcb20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dcb24: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dcb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb28: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dcb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb2c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dcb2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcb30: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcb30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcb34: 0x0  nop
    ctx->pc = 0x1dcb34u;
    // NOP
    // 0x1dcb38: 0x45010017  bc1t        . + 4 + (0x17 << 2)
    ctx->pc = 0x1DCB38u;
    {
        const bool branch_taken_0x1dcb38 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB38u;
        // 0x1dcb3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb38) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DCB40u;
    // 0x1dcb40: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1dcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1dcb44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1dcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb48: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1dcb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb4c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1dcb4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcb50: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1dcb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb54: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1dcb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb58: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1dcb58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1dcb5c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1dcb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dcb60: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1dcb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dcb64: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1dcb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1dcb68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1dcb68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcb6c: 0x0  nop
    ctx->pc = 0x1dcb6cu;
    // NOP
    // 0x1dcb70: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1DCB70u;
    {
        const bool branch_taken_0x1dcb70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB70u;
        // 0x1dcb74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb70) {
            ctx->pc = 0x1DCB98u;
            goto label_1dcb98;
        }
    }
    ctx->pc = 0x1DCB78u;
    // 0x1dcb78: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1dcb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dcb7c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1dcb7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dcb80: 0x0  nop
    ctx->pc = 0x1dcb80u;
    // NOP
    // 0x1dcb84: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB84u;
    {
        const bool branch_taken_0x1dcb84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcb84) {
            ctx->pc = 0x1DCB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCB84u;
            // 0x1dcb88: 0xe6440000  swc1        $f4, 0x0($s2) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCB94u;
            goto label_1dcb94;
        }
    }
    ctx->pc = 0x1DCB8Cu;
    // 0x1dcb8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCB8Cu;
    {
        const bool branch_taken_0x1dcb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB8Cu;
        // 0x1dcb90: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb8c) {
            ctx->pc = 0x1DCB9Cu;
            goto label_1dcb9c;
        }
    }
    ctx->pc = 0x1DCB94u;
label_1dcb94:
    // 0x1dcb94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dcb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dcb98:
    // 0x1dcb98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1dcb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcb9c:
    // 0x1dcb9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1dcb9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dcba0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1dcba0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcba4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1dcba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dcba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBA8u;
        // 0x1dcbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBB0u;
}
