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

// Function: sub_00191AA0
// Address: 0x191aa0 - 0x191c00
void sub_00191AA0_0x191aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191AA0_0x191aa0");
#endif

    switch (ctx->pc) {
        case 0x191ae8u: goto label_191ae8;
        case 0x191af0u: goto label_191af0;
        case 0x191b28u: goto label_191b28;
        case 0x191b84u: goto label_191b84;
        case 0x191bacu: goto label_191bac;
        case 0x191bbcu: goto label_191bbc;
        case 0x191bc4u: goto label_191bc4;
        case 0x191bdcu: goto label_191bdc;
        default: break;
    }

    ctx->pc = 0x191aa0u;

    // 0x191aa0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x191aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x191aa4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x191aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x191aa8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x191aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x191aac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x191aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x191ab0: 0x2450ef40  addiu       $s0, $v0, -0x10C0
    ctx->pc = 0x191ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963008));
    // 0x191ab4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x191ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x191ab8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x191ab8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191abc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x191abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x191ac0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x191ac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ac4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x191ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x191ac8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x191ac8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191acc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x191accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x191ad0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x191ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ad4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x191ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x191ad8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x191ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48EF44u));
    // 0x191adc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x191ADCu;
    {
        const bool branch_taken_0x191adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ADCu;
        // 0x191ae0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191adc) {
            ctx->pc = 0x191B00u;
            goto label_191b00;
        }
    }
    ctx->pc = 0x191AE4u;
    // 0x191ae4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x191ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_191ae8:
    // 0x191ae8: 0xc0f6ec0  jal         func_3DBB00
    ctx->pc = 0x191AE8u;
    SET_GPR_U32(ctx, 31, 0x191AF0u);
    ctx->pc = 0x191AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191AE8u;
    // 0x191aec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x191AE8u, 0x191AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191AF0u;
label_191af0:
    // 0x191af0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x191af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191af4: 0x0  nop
    ctx->pc = 0x191af4u;
    // NOP
    // 0x191af8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x191AF8u;
    {
        const bool branch_taken_0x191af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x191af8) {
            ctx->pc = 0x191AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191AF8u;
            // 0x191afc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191ae8;
        }
    }
    ctx->pc = 0x191B00u;
label_191b00:
    // 0x191b00: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x191b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x191b04: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x191b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x191b08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x191b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x191b0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x191b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x191b10: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x191b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x191b14: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x191b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x191b18: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x191B18u;
    {
        const bool branch_taken_0x191b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191B18u;
        // 0x191b1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191b18) {
            ctx->pc = 0x191BB0u;
            goto label_191bb0;
        }
    }
    ctx->pc = 0x191B20u;
    // 0x191b20: 0xc061a12  jal         func_186848
    ctx->pc = 0x191B20u;
    SET_GPR_U32(ctx, 31, 0x191B28u);
    ctx->pc = 0x191B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B20u;
    // 0x191b24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191B20u, 0x191B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B28u;
label_191b28:
    // 0x191b28: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x191b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x191b2c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x191b2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191b30: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x191b30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191b34: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x191b34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x191b38: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x191b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191b3c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x191b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191b40: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x191b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x191b44: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x191b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191b48: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x191b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191b4c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x191b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x191b50: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x191b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x191b54: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x191b54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x191b58: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x191b58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x191b5c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x191b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191b60: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x191b60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x191b64: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x191b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x191b68: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x191b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x191b6c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x191b6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x191b70: 0x4a0003bf  vwaitq
    ctx->pc = 0x191b70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191b74: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x191b74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x191b78: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x191b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191b7c: 0xc095368  jal         func_254DA0
    ctx->pc = 0x191B7Cu;
    SET_GPR_U32(ctx, 31, 0x191B84u);
    ctx->pc = 0x191B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191B7Cu;
    // 0x191b80: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x191B7Cu, 0x191B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191B84u;
label_191b84:
    // 0x191b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191b88: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x191b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x191b8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x191b8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191b90: 0x3c01be33  lui         $at, 0xBE33
    ctx->pc = 0x191b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48691 << 16));
    // 0x191b94: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x191b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x191b98: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x191b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x191b9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x191b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ba0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x191ba0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ba4: 0xc0416a2  jal         func_105A88
    ctx->pc = 0x191BA4u;
    SET_GPR_U32(ctx, 31, 0x191BACu);
    ctx->pc = 0x191BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BA4u;
    // 0x191ba8: 0x26a7ef40  addiu       $a3, $s5, -0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A88u, 0x191BA4u, 0x191BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BACu;
label_191bac:
    // 0x191bac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x191bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191bb0:
    // 0x191bb0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x191bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bb4: 0xc0644a0  jal         func_191280
    ctx->pc = 0x191BB4u;
    SET_GPR_U32(ctx, 31, 0x191BBCu);
    ctx->pc = 0x191BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BB4u;
    // 0x191bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191280u, 0x191BB4u, 0x191BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BBCu;
label_191bbc:
    // 0x191bbc: 0xc061a12  jal         func_186848
    ctx->pc = 0x191BBCu;
    SET_GPR_U32(ctx, 31, 0x191BC4u);
    ctx->pc = 0x191BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BBCu;
    // 0x191bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191BBCu, 0x191BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BC4u;
label_191bc4:
    // 0x191bc4: 0xac40035c  sw          $zero, 0x35C($v0)
    ctx->pc = 0x191bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 0));
    // 0x191bc8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x191bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x191bcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191BCCu;
    {
        const bool branch_taken_0x191bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BCCu;
        // 0x191bd0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191bcc) {
            ctx->pc = 0x191BE0u;
            goto label_191be0;
        }
    }
    ctx->pc = 0x191BD4u;
    // 0x191bd4: 0xc041924  jal         func_106490
    ctx->pc = 0x191BD4u;
    SET_GPR_U32(ctx, 31, 0x191BDCu);
    ctx->pc = 0x191BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BD4u;
    // 0x191bd8: 0x26a4ef40  addiu       $a0, $s5, -0x10C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294963008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106490u, 0x191BD4u, 0x191BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BDCu;
label_191bdc:
    // 0x191bdc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x191bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191be0:
    // 0x191be0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x191be0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x191be4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x191be4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191be8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x191be8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x191bec: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x191becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191bf0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x191bf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x191bf4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x191bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x191BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BF8u;
        // 0x191bfc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191C00u;
}
