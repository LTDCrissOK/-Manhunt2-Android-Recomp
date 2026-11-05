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

// Function: sub_0019D9B8
// Address: 0x19d9b8 - 0x19dae0
void sub_0019D9B8_0x19d9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D9B8_0x19d9b8");
#endif

    switch (ctx->pc) {
        case 0x19d9e8u: goto label_19d9e8;
        case 0x19da00u: goto label_19da00;
        case 0x19da18u: goto label_19da18;
        case 0x19da78u: goto label_19da78;
        default: break;
    }

    ctx->pc = 0x19d9b8u;

    // 0x19d9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d9bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x19d9c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x19d9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d9c8: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x19d9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19d9cc: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x19d9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19d9d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19d9d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19d9d4: 0x0  nop
    ctx->pc = 0x19d9d4u;
    // NOP
    // 0x19d9d8: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x19D9D8u;
    {
        const bool branch_taken_0x19d9d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D9D8u;
        // 0x19d9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d9d8) {
            ctx->pc = 0x19DACCu;
            goto label_19dacc;
        }
    }
    ctx->pc = 0x19D9E0u;
    // 0x19d9e0: 0xc061a26  jal         func_186898
    ctx->pc = 0x19D9E0u;
    SET_GPR_U32(ctx, 31, 0x19D9E8u);
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19D9E0u, 0x19D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D9E8u;
label_19d9e8:
    // 0x19d9e8: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x19d9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x19d9ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19d9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19d9f0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D9F0u;
    {
        const bool branch_taken_0x19d9f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d9f0) {
            ctx->pc = 0x19DA10u;
            goto label_19da10;
        }
    }
    ctx->pc = 0x19D9F8u;
    // 0x19d9f8: 0xc061a26  jal         func_186898
    ctx->pc = 0x19D9F8u;
    SET_GPR_U32(ctx, 31, 0x19DA00u);
    ctx->pc = 0x19D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D9F8u;
    // 0x19d9fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19D9F8u, 0x19DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA00u;
label_19da00:
    // 0x19da00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19da00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19da04: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x19da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x19da08: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x19DA08u;
    {
        const bool branch_taken_0x19da08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA08u;
        // 0x19da0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da08) {
            ctx->pc = 0x19DACCu;
            goto label_19dacc;
        }
    }
    ctx->pc = 0x19DA10u;
label_19da10:
    // 0x19da10: 0xc061a12  jal         func_186848
    ctx->pc = 0x19DA10u;
    SET_GPR_U32(ctx, 31, 0x19DA18u);
    ctx->pc = 0x19DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA10u;
    // 0x19da14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19DA10u, 0x19DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA18u;
label_19da18:
    // 0x19da18: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x19da1c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x19da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x19da20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x19da20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19da24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19da24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19da28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19da28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19da2c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19da30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19da30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19da34: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x19da34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19da38: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x19da38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19da3c: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x19da3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19da40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x19da40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19da44: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x19da44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19da48: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x19da48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x19da4c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x19da4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x19da50: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19da50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19da54: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x19da54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19da58: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19da58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19da5c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19da5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19da60: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19da60u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19da64: 0x4a0003bf  vwaitq
    ctx->pc = 0x19da64u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19da68: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x19da68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19da6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x19da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19da70: 0xc061a12  jal         func_186848
    ctx->pc = 0x19DA70u;
    SET_GPR_U32(ctx, 31, 0x19DA78u);
    ctx->pc = 0x19DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DA70u;
    // 0x19da74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19DA70u, 0x19DA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DA78u;
label_19da78:
    // 0x19da78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19da78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19da7c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x19da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19da80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19da80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19da84: 0x0  nop
    ctx->pc = 0x19da84u;
    // NOP
    // 0x19da88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DA88u;
    {
        const bool branch_taken_0x19da88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DA88u;
        // 0x19da8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19da88) {
            ctx->pc = 0x19DA94u;
            goto label_19da94;
        }
    }
    ctx->pc = 0x19DA90u;
    // 0x19da90: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x19da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_19da94:
    // 0x19da94: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x19da94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19da98: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x19da98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19da9c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x19da9cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19daa0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x19daa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19daa4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x19daa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19daa8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x19daa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x19daac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x19daacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19dab0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x19dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19dab4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x19dab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19dab8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19dab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19dabc: 0x0  nop
    ctx->pc = 0x19dabcu;
    // NOP
    // 0x19dac0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19DAC0u;
    {
        const bool branch_taken_0x19dac0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAC0u;
        // 0x19dac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dac0) {
            ctx->pc = 0x19DACCu;
            goto label_19dacc;
        }
    }
    ctx->pc = 0x19DAC8u;
    // 0x19dac8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19dac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19dacc:
    // 0x19dacc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19daccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dad0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19dad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19dad4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DAD4u;
        // 0x19dad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DADCu;
    // 0x19dadc: 0x0  nop
    ctx->pc = 0x19dadcu;
    // NOP
    ctx->pc = 0x19dae0u;
}
