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

// Function: sub_002BCA28
// Address: 0x2bca28 - 0x2bcb60
void sub_002BCA28_0x2bca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCA28_0x2bca28");
#endif

    switch (ctx->pc) {
        case 0x2bcad8u: goto label_2bcad8;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcb20u: goto label_2bcb20;
        default: break;
    }

    ctx->pc = 0x2bca28u;

    // 0x2bca28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bca2c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2bca2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2bca30: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2bca30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2bca34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bca34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca38: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2bca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2bca3c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2bca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2bca40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bca40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca44: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2bca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2bca48: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2bca48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bca4c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2bca4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bca50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2bca50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca54: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2bca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2bca58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bca58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2bca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bca60: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2bca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bca64: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x2bca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bca68: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x2bca68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2bca6c: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x2bca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bca70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bca70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca74: 0x0  nop
    ctx->pc = 0x2bca74u;
    // NOP
    // 0x2bca78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bca78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bca7c: 0x46006502  mul.s       $f20, $f12, $f0
    ctx->pc = 0x2bca7cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2bca80: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2bca80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x2bca84: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2bca84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bca88: 0x0  nop
    ctx->pc = 0x2bca88u;
    // NOP
    // 0x2bca8c: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x2BCA8Cu;
    {
        const bool branch_taken_0x2bca8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BCA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCA8Cu;
        // 0x2bca90: 0xe6210044  swc1        $f1, 0x44($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bca8c) {
            ctx->pc = 0x2BCB38u;
            goto label_2bcb38;
        }
    }
    ctx->pc = 0x2BCA94u;
    // 0x2bca94: 0xc6250020  lwc1        $f5, 0x20($s1)
    ctx->pc = 0x2bca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bca98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bca98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca9c: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x2bca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcaa0: 0xc6240028  lwc1        $f4, 0x28($s1)
    ctx->pc = 0x2bcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bcaa4: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2bcaa4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2bcaa8: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2bcaa8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2bcaac: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x2bcaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcab0: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2bcab0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2bcab4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2bcab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcab8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2bcab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcabc: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2bcabcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2bcac0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2bcac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2bcac4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x2bcac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x2bcac8: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x2bcac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2bcacc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2bcaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2bcad0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCAD0u;
    SET_GPR_U32(ctx, 31, 0x2BCAD8u);
    ctx->pc = 0x2BCAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAD0u;
    // 0x2bcad4: 0xe6210018  swc1        $f1, 0x18($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCAD0u, 0x2BCAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAD8u;
label_2bcad8:
    // 0x2bcad8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2bcad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcadc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCADCu;
    SET_GPR_U32(ctx, 31, 0x2BCAE4u);
    ctx->pc = 0x2BCAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCADCu;
    // 0x2bcae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCADCu, 0x2BCAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAE4u;
label_2bcae4:
    // 0x2bcae4: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2bcae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2bcae8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bcae8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcaec: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bcaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bcaf0: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2bcaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2bcaf4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bcaf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bcaf8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2bcaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bcafc: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x2bcafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x2bcb00: 0x26640028  addiu       $a0, $s3, 0x28
    ctx->pc = 0x2bcb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2bcb04: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2bcb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2bcb08: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2bcb08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcb0c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2bcb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bcb10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bcb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bcb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb18: 0xc0af96a  jal         func_2BE5A8
    ctx->pc = 0x2BCB18u;
    SET_GPR_U32(ctx, 31, 0x2BCB20u);
    ctx->pc = 0x2BCB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB18u;
    // 0x2bcb1c: 0xc44c0058  lwc1        $f12, 0x58($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE5A8u, 0x2BCB18u, 0x2BCB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB20u;
label_2bcb20:
    // 0x2bcb20: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2bcb20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcb24: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x2bcb24u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bcb28: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2bcb28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcb2c: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x2bcb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bcb30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BCB30u;
    {
        const bool branch_taken_0x2bcb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BCB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB30u;
        // 0x2bcb34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bcb30) {
            ctx->pc = 0x2BCB3Cu;
            goto label_2bcb3c;
        }
    }
    ctx->pc = 0x2BCB38u;
label_2bcb38:
    // 0x2bcb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bcb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2bcb3c:
    // 0x2bcb3c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2bcb3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bcb40: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2bcb40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2bcb44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2bcb44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bcb48: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2bcb48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bcb4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2bcb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bcb50: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2bcb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bcb54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCB54u;
        // 0x2bcb58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCB5Cu;
    // 0x2bcb5c: 0x0  nop
    ctx->pc = 0x2bcb5cu;
    // NOP
    ctx->pc = 0x2bcb60u;
}
