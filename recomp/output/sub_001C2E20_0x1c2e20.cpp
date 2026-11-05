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

// Function: sub_001C2E20
// Address: 0x1c2e20 - 0x1c3090
void sub_001C2E20_0x1c2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2E20_0x1c2e20");
#endif

    switch (ctx->pc) {
        case 0x1c2e8cu: goto label_1c2e8c;
        case 0x1c2ea8u: goto label_1c2ea8;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2ef0u: goto label_1c2ef0;
        case 0x1c2ff0u: goto label_1c2ff0;
        case 0x1c2ff8u: goto label_1c2ff8;
        case 0x1c3030u: goto label_1c3030;
        case 0x1c3038u: goto label_1c3038;
        default: break;
    }

    ctx->pc = 0x1c2e20u;

    // 0x1c2e20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c2e24: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1c2e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1c2e28: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1c2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1c2e2c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1c2e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e30: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1c2e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1c2e34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c2e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e38: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1c2e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1c2e3c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1c2e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e40: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1c2e40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c2e44: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c2e44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1c2e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1c2e4c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c2e4cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c2e50: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1c2e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1c2e54: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1c2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1c2e58: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1c2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1c2e5c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x1c2e5cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c2e60: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2E60u;
    {
        const bool branch_taken_0x1c2e60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E60u;
        // 0x1c2e64: 0xe7b50088  swc1        $f21, 0x88($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e60) {
            ctx->pc = 0x1C2E70u;
            goto label_1c2e70;
        }
    }
    ctx->pc = 0x1C2E68u;
    // 0x1c2e68: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1c2e6c: 0x24513d20  addiu       $s1, $v0, 0x3D20
    ctx->pc = 0x1c2e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15648));
label_1c2e70:
    // 0x1c2e70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c2e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c2e74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2e78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1c2e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1c2e7c: 0x4614a582  mul.s       $f22, $f20, $f20
    ctx->pc = 0x1c2e7cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1c2e80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c2e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c2e84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2E84u;
    SET_GPR_U32(ctx, 31, 0x1C2E8Cu);
    ctx->pc = 0x1C2E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E84u;
    // 0x1c2e88: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2E84u, 0x1C2E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E8Cu;
label_1c2e8c:
    // 0x1c2e8c: 0x7e400000  sq          $zero, 0x0($s2)
    ctx->pc = 0x1c2e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 0));
    // 0x1c2e90: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c2e94: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c2e98: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1c2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x1c2e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ea0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2EA0u;
    SET_GPR_U32(ctx, 31, 0x1C2EA8u);
    ctx->pc = 0x1C2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EA0u;
    // 0x1c2ea4: 0xc455c6e8  lwc1        $f21, -0x3918($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2EA0u, 0x1C2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EA8u;
label_1c2ea8:
    // 0x1c2ea8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c2eac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1c2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c2eb0: 0x24620f90  addiu       $v0, $v1, 0xF90
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
    // 0x1c2eb4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1c2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1c2eb8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1c2eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1c2ebc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1c2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1c2ec0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x1c2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x1c2ec4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x1c2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x1c2ec8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1c2ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1c2ecc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c2ed0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c2ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x1c2ed4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1c2ed4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ed8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1C2ED8u;
    {
        const bool branch_taken_0x1c2ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ED8u;
        // 0x1c2edc: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ed8) {
            ctx->pc = 0x1C2F9Cu;
            goto label_1c2f9c;
        }
    }
    ctx->pc = 0x1C2EE0u;
label_1c2ee0:
    // 0x1c2ee0: 0x1202002e  beq         $s0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C2EE0u;
    {
        const bool branch_taken_0x1c2ee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EE0u;
        // 0x1c2ee4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ee0) {
            ctx->pc = 0x1C2F9Cu;
            goto label_1c2f9c;
        }
    }
    ctx->pc = 0x1C2EE8u;
    // 0x1c2ee8: 0xc06fb64  jal         func_1BED90
    ctx->pc = 0x1C2EE8u;
    SET_GPR_U32(ctx, 31, 0x1C2EF0u);
    ctx->pc = 0x1C2EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EE8u;
    // 0x1c2eec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x1C2EE8u, 0x1C2EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EF0u;
label_1c2ef0:
    // 0x1c2ef0: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1c2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2ef4: 0x26a201e0  addiu       $v0, $s5, 0x1E0
    ctx->pc = 0x1c2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 480));
    // 0x1c2ef8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2efc: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1c2efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c2f00: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f04: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f08: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1c2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2f0c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1c2f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c2f10: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1c2f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c2f14: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c2f14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c2f18: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c2f18u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c2f1c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c2f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c2f20: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1c2f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2f24: 0x0  nop
    ctx->pc = 0x1c2f24u;
    // NOP
    // 0x1c2f28: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x1C2F28u;
    {
        const bool branch_taken_0x1c2f28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2f28) {
            ctx->pc = 0x1C2F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F28u;
            // 0x1c2f2c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2FA0u;
            goto label_1c2fa0;
        }
    }
    ctx->pc = 0x1C2F30u;
    // 0x1c2f30: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1c2f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c2f34: 0x0  nop
    ctx->pc = 0x1c2f34u;
    // NOP
    // 0x1c2f38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2F38u;
    {
        const bool branch_taken_0x1c2f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c2f38) {
            ctx->pc = 0x1C2F48u;
            goto label_1c2f48;
        }
    }
    ctx->pc = 0x1C2F40u;
    // 0x1c2f40: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x1c2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x1c2f44: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1c2f44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1c2f48:
    // 0x1c2f48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c2f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2f4c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c2f4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f50: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c2f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f54: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c2f54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c2f58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c2f5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c2f5cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c2f60: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c2f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f64: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f68: 0x0  nop
    ctx->pc = 0x1c2f68u;
    // NOP
    // 0x1c2f6c: 0x0  nop
    ctx->pc = 0x1c2f6cu;
    // NOP
    // 0x1c2f70: 0x46000004  c1          0x4
    ctx->pc = 0x1c2f70u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c2f74: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1c2f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x1c2f78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c2f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c2f7c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c2f7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2f80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c2f80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c2f84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c2f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f88: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c2f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2f8c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c2f8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c2f90: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1c2f90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2f94: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2f98: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c2f98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2f9c:
    // 0x1c2f9c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1c2f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1c2fa0:
    // 0x1c2fa0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2FA4u;
    {
        const bool branch_taken_0x1c2fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FA4u;
        // 0x1c2fa8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fa4) {
            ctx->pc = 0x1C2FB0u;
            goto label_1c2fb0;
        }
    }
    ctx->pc = 0x1C2FACu;
    // 0x1c2fac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1c2facu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2fb0:
    // 0x1c2fb0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2FB0u;
    {
        const bool branch_taken_0x1c2fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fb0) {
            ctx->pc = 0x1C2FC0u;
            goto label_1c2fc0;
        }
    }
    ctx->pc = 0x1C2FB8u;
    // 0x1c2fb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1c2fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c2fbc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1c2fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1c2fc0:
    // 0x1c2fc0: 0x5600ffc7  bnel        $s0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1C2FC0u;
    {
        const bool branch_taken_0x1c2fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2fc0) {
            ctx->pc = 0x1C2FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2FC0u;
            // 0x1c2fc4: 0x8ea204bc  lw          $v0, 0x4BC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2ee0;
        }
    }
    ctx->pc = 0x1C2FC8u;
    // 0x1c2fc8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1c2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c2fcc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C2FCCu;
    {
        const bool branch_taken_0x1c2fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FCCu;
        // 0x1c2fd0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fcc) {
            ctx->pc = 0x1C3014u;
            goto label_1c3014;
        }
    }
    ctx->pc = 0x1C2FD4u;
    // 0x1c2fd4: 0x26c20f90  addiu       $v0, $s6, 0xF90
    ctx->pc = 0x1c2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
    // 0x1c2fd8: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1c2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1c2fdc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1c2fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2fe0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C2FE0u;
    {
        const bool branch_taken_0x1c2fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FE0u;
        // 0x1c2fe4: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2fe0) {
            ctx->pc = 0x1C3008u;
            goto label_1c3008;
        }
    }
    ctx->pc = 0x1C2FE8u;
    // 0x1c2fe8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c2fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c2fec: 0x0  nop
    ctx->pc = 0x1c2fecu;
    // NOP
label_1c2ff0:
    // 0x1c2ff0: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C2FF0u;
    SET_GPR_U32(ctx, 31, 0x1C2FF8u);
    ctx->pc = 0x1C2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FF0u;
    // 0x1c2ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C2FF0u, 0x1C2FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FF8u;
label_1c2ff8:
    // 0x1c2ff8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c2ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c2ffc: 0x0  nop
    ctx->pc = 0x1c2ffcu;
    // NOP
    // 0x1c3000: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3000u;
    {
        const bool branch_taken_0x1c3000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3000) {
            ctx->pc = 0x1C3004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3000u;
            // 0x1c3004: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2ff0;
        }
    }
    ctx->pc = 0x1C3008u;
label_1c3008:
    // 0x1c3008: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c3008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c300c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C300Cu;
    {
        const bool branch_taken_0x1c300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C300Cu;
        // 0x1c3010: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c300c) {
            ctx->pc = 0x1C3050u;
            goto label_1c3050;
        }
    }
    ctx->pc = 0x1C3014u;
label_1c3014:
    // 0x1c3014: 0x26c20f90  addiu       $v0, $s6, 0xF90
    ctx->pc = 0x1c3014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
    // 0x1c3018: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1c3018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1c301c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1c301cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3020: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3020u;
    {
        const bool branch_taken_0x1c3020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3020u;
        // 0x1c3024: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3020) {
            ctx->pc = 0x1C3048u;
            goto label_1c3048;
        }
    }
    ctx->pc = 0x1C3028u;
    // 0x1c3028: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c3028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c302c: 0x0  nop
    ctx->pc = 0x1c302cu;
    // NOP
label_1c3030:
    // 0x1c3030: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x1C3030u;
    SET_GPR_U32(ctx, 31, 0x1C3038u);
    ctx->pc = 0x1C3034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3030u;
    // 0x1c3034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x1C3030u, 0x1C3038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3038u;
label_1c3038:
    // 0x1c3038: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c303c: 0x0  nop
    ctx->pc = 0x1c303cu;
    // NOP
    // 0x1c3040: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C3040u;
    {
        const bool branch_taken_0x1c3040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3040) {
            ctx->pc = 0x1C3044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3040u;
            // 0x1c3044: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3030;
        }
    }
    ctx->pc = 0x1C3048u;
label_1c3048:
    // 0x1c3048: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1c3048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1c304c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c304cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c3050:
    // 0x1c3050: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c3050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1c3054: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3058: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1c3058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1c305c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1c305cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3060: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1c3060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3064: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1c3064u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3068: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1c3068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c306c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1c306cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3070: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1c3070u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c3074: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1c3074u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3078: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1c3078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c307c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x1c307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1c3080: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1c3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c3084: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1c3084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3088: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3088u;
        // 0x1c308c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3090u;
}
