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

// Function: sub_00275990
// Address: 0x275990 - 0x275ac0
void sub_00275990_0x275990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275990_0x275990");
#endif

    switch (ctx->pc) {
        case 0x2759d0u: goto label_2759d0;
        case 0x2759f0u: goto label_2759f0;
        case 0x2759f8u: goto label_2759f8;
        case 0x275a00u: goto label_275a00;
        case 0x275a94u: goto label_275a94;
        default: break;
    }

    ctx->pc = 0x275990u;

    // 0x275990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x275990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x275994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275998: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x275998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27599c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x27599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2759a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2759a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2759a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2759a8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2759a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2759ac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2759acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2759b0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2759b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2759b4: 0x8e031e7c  lw          $v1, 0x1E7C($s0)
    ctx->pc = 0x2759b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7804)));
    // 0x2759b8: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2759B8u;
    {
        const bool branch_taken_0x2759b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2759BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759B8u;
        // 0x2759bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759b8) {
            ctx->pc = 0x275A98u;
            goto label_275a98;
        }
    }
    ctx->pc = 0x2759C0u;
    // 0x2759c0: 0x8e041e88  lw          $a0, 0x1E88($s0)
    ctx->pc = 0x2759c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7816)));
    // 0x2759c4: 0x26131ea0  addiu       $s3, $s0, 0x1EA0
    ctx->pc = 0x2759c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 7840));
    // 0x2759c8: 0xc09da86  jal         func_276A18
    ctx->pc = 0x2759C8u;
    SET_GPR_U32(ctx, 31, 0x2759D0u);
    ctx->pc = 0x2759CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759C8u;
    // 0x2759cc: 0xae031e78  sw          $v1, 0x1E78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 7800), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276A18u, 0x2759C8u, 0x2759D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759D0u;
label_2759d0:
    // 0x2759d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2759d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2759d4: 0x5240002c  beql        $s2, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x2759D4u;
    {
        const bool branch_taken_0x2759d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2759d4) {
            ctx->pc = 0x2759D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2759D4u;
            // 0x2759d8: 0xa2000370  sb          $zero, 0x370($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A88u;
            goto label_275a88;
        }
    }
    ctx->pc = 0x2759DCu;
    // 0x2759dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2759dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2759e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2759e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2759e4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2759E4u;
    {
        const bool branch_taken_0x2759e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2759E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2759E4u;
        // 0x2759e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2759e4) {
            ctx->pc = 0x275A84u;
            goto label_275a84;
        }
    }
    ctx->pc = 0x2759ECu;
    // 0x2759ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2759ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2759f0:
    // 0x2759f0: 0xc09d7da  jal         func_275F68
    ctx->pc = 0x2759F0u;
    SET_GPR_U32(ctx, 31, 0x2759F8u);
    ctx->pc = 0x2759F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759F0u;
    // 0x2759f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275F68u, 0x2759F0u, 0x2759F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2759F8u;
label_2759f8:
    // 0x2759f8: 0xc09d9b8  jal         func_2766E0
    ctx->pc = 0x2759F8u;
    SET_GPR_U32(ctx, 31, 0x275A00u);
    ctx->pc = 0x2759FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2759F8u;
    // 0x2759fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766E0u, 0x2759F8u, 0x275A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A00u;
label_275a00:
    // 0x275a00: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x275a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x275a04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x275a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275a08: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x275a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x275a0c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x275a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275a10: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x275a10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275a14: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x275a14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275a18: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x275a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275a1c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x275a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275a20: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x275a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275a24: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x275a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275a28: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x275a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x275a2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x275a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275a30: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x275a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275a34: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x275a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275a38: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x275a38u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275a3c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x275a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275a40: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x275a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275a44: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x275a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275a48: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x275a48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x275a4c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x275a4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x275a50: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x275a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x275a54: 0x46000004  c1          0x4
    ctx->pc = 0x275a54u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x275a58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x275a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275a5c: 0x0  nop
    ctx->pc = 0x275a5cu;
    // NOP
    // 0x275a60: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x275A60u;
    {
        const bool branch_taken_0x275a60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275a60) {
            ctx->pc = 0x275A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275A60u;
            // 0x275a64: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275A74u;
            goto label_275a74;
        }
    }
    ctx->pc = 0x275A68u;
    // 0x275a68: 0xae111e90  sw          $s1, 0x1E90($s0)
    ctx->pc = 0x275a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7824), GPR_U32(ctx, 17));
    // 0x275a6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x275a6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x275a70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x275a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_275a74:
    // 0x275a74: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x275a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x275a78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x275a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x275a7c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x275A7Cu;
    {
        const bool branch_taken_0x275a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275A7Cu;
        // 0x275a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275a7c) {
            ctx->pc = 0x2759F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2759f0;
        }
    }
    ctx->pc = 0x275A84u;
label_275a84:
    // 0x275a84: 0xa2000370  sb          $zero, 0x370($s0)
    ctx->pc = 0x275a84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
label_275a88:
    // 0x275a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275a8c: 0xc09d4fc  jal         func_2753F0
    ctx->pc = 0x275A8Cu;
    SET_GPR_U32(ctx, 31, 0x275A94u);
    ctx->pc = 0x275A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275A8Cu;
    // 0x275a90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2753F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2753F0u, 0x275A8Cu, 0x275A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275A94u;
label_275a94:
    // 0x275a94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x275a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275a98:
    // 0x275a98: 0xae001e7c  sw          $zero, 0x1E7C($s0)
    ctx->pc = 0x275a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7804), GPR_U32(ctx, 0));
    // 0x275a9c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x275a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275aa0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x275aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275aa4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x275aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x275aa8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x275aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275aac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x275aacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x275ab0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x275ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275ab4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x275ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x275AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AB8u;
        // 0x275abc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275AC0u;
}
