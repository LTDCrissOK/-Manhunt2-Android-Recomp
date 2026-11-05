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

// Function: sub_0010EA60
// Address: 0x10ea60 - 0x10ec60
void sub_0010EA60_0x10ea60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA60_0x10ea60");
#endif

    switch (ctx->pc) {
        case 0x10eb1cu: goto label_10eb1c;
        case 0x10ebf8u: goto label_10ebf8;
        default: break;
    }

    ctx->pc = 0x10ea60u;

    // 0x10ea60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ea64: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10ea68: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10ea68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x10ea6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10ea6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea70: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x10ea70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x10ea74: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10ea78: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10ea7c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10ea80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10ea84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10ea88: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10ea8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA8Cu;
    {
        const bool branch_taken_0x10ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA8Cu;
        // 0x10ea90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea8c) {
            ctx->pc = 0x10EA9Cu;
            goto label_10ea9c;
        }
    }
    ctx->pc = 0x10EA94u;
    // 0x10ea94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10EA94u;
    {
        const bool branch_taken_0x10ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA94u;
        // 0x10ea98: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea94) {
            ctx->pc = 0x10EAA8u;
            goto label_10eaa8;
        }
    }
    ctx->pc = 0x10EA9Cu;
label_10ea9c:
    // 0x10ea9c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x10ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x10eaa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10eaa4: 0x24710070  addiu       $s1, $v1, 0x70
    ctx->pc = 0x10eaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_10eaa8:
    // 0x10eaa8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x10eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10eaac: 0x24c39a08  addiu       $v1, $a2, -0x65F8
    ctx->pc = 0x10eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x10eab0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x10eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10eab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10eab8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10eabc: 0x8c650108  lw          $a1, 0x108($v1)
    ctx->pc = 0x10eabcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x10eac0: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x10eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x10eac4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10eac8: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x10eac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eacc: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x10eaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x10ead0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x10ead0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10ead4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x10ead4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ead8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x10ead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x10eadc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x10eadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eae0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x10eae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x10eae4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x10eae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10eae8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x10eae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x10eaec: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x10eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x10eaf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10eaf4: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x10eaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eaf8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x10eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x10eafc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x10eafcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x10eb00: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x10eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10eb04: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10eb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10eb08: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x10eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eb0c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x10eb0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10eb10: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x10eb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10eb14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x10EB14u;
    SET_GPR_U32(ctx, 31, 0x10EB1Cu);
    ctx->pc = 0x10EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB14u;
    // 0x10eb18: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x10EB14u, 0x10EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EB1Cu;
label_10eb1c:
    // 0x10eb1c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x10eb1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eb20: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x10eb20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10eb24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x10eb24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10eb28: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x10eb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10eb2c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10eb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10eb30: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x10eb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10eb34: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eb38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10eb38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10eb3c: 0x0  nop
    ctx->pc = 0x10eb3cu;
    // NOP
    // 0x10eb40: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x10EB40u;
    {
        const bool branch_taken_0x10eb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB40u;
        // 0x10eb44: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb40) {
            ctx->pc = 0x10EB58u;
            goto label_10eb58;
        }
    }
    ctx->pc = 0x10EB48u;
    // 0x10eb48: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10eb48u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10eb4c: 0x0  nop
    ctx->pc = 0x10eb4cu;
    // NOP
    // 0x10eb50: 0x4501003e  bc1t        . + 4 + (0x3E << 2)
    ctx->pc = 0x10EB50u;
    {
        const bool branch_taken_0x10eb50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB50u;
        // 0x10eb54: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb50) {
            ctx->pc = 0x10EC4Cu;
            goto label_10ec4c;
        }
    }
    ctx->pc = 0x10EB58u;
label_10eb58:
    // 0x10eb58: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x10eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10eb5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x10eb5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10eb60: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x10eb60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10eb64: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x10eb64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10eb68: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x10eb68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10eb6c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x10eb6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x10eb70: 0x4a0003bf  vwaitq
    ctx->pc = 0x10eb70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x10eb74: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x10eb74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10eb78: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x10eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x10eb7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x10eb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10eb80: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x10eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10eb84: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x10eb84u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x10eb88: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x10eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10eb8c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x10eb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10eb90: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x10eb90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x10eb94: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x10eb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10eb98: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x10eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10eb9c: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x10eb9cu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x10eba0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x10eba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x10eba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10eba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eba8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10eba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ebac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ebacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ebb0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x10ebb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ebb4: 0x0  nop
    ctx->pc = 0x10ebb4u;
    // NOP
    // 0x10ebb8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10EBB8u;
    {
        const bool branch_taken_0x10ebb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBB8u;
        // 0x10ebbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebb8) {
            ctx->pc = 0x10EBC8u;
            goto label_10ebc8;
        }
    }
    ctx->pc = 0x10EBC0u;
    // 0x10ebc0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10EBC0u;
    {
        const bool branch_taken_0x10ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBC0u;
        // 0x10ebc4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebc0) {
            ctx->pc = 0x10EBD8u;
            goto label_10ebd8;
        }
    }
    ctx->pc = 0x10EBC8u;
label_10ebc8:
    // 0x10ebc8: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x10ebc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ebcc: 0x0  nop
    ctx->pc = 0x10ebccu;
    // NOP
    // 0x10ebd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10EBD0u;
    {
        const bool branch_taken_0x10ebd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ebd0) {
            ctx->pc = 0x10EBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EBD0u;
            // 0x10ebd4: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EBD8u;
            goto label_10ebd8;
        }
    }
    ctx->pc = 0x10EBD8u;
label_10ebd8:
    // 0x10ebd8: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x10ebd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x10ebdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ebdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ebe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10ebe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10ebe4: 0x0  nop
    ctx->pc = 0x10ebe4u;
    // NOP
    // 0x10ebe8: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x10ebe8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x10ebec: 0x460c0304  c1          0xC0304
    ctx->pc = 0x10ebecu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x10ebf0: 0xc0e404c  jal         func_390130
    ctx->pc = 0x10EBF0u;
    SET_GPR_U32(ctx, 31, 0x10EBF8u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x10EBF0u, 0x10EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EBF8u;
label_10ebf8:
    // 0x10ebf8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x10ebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x10ebfc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x10ebfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x10ec00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ec00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ec04: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x10ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10ec08: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10ec08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10ec0c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x10ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ec10: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x10ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ec14: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x10ec14u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x10ec18: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x10ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ec1c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x10ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ec20: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x10ec20u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x10ec24: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x10ec24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ec28: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x10ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10ec2c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x10ec2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x10ec30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10ec30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ec34: 0x0  nop
    ctx->pc = 0x10ec34u;
    // NOP
    // 0x10ec38: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x10ec38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ec3c: 0x0  nop
    ctx->pc = 0x10ec3cu;
    // NOP
    // 0x10ec40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10EC40u;
    {
        const bool branch_taken_0x10ec40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ec40) {
            ctx->pc = 0x10EC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC40u;
            // 0x10ec44: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC48u;
            goto label_10ec48;
        }
    }
    ctx->pc = 0x10EC48u;
label_10ec48:
    // 0x10ec48: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x10ec48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_10ec4c:
    // 0x10ec4c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10ec4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ec50: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x10ec50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10ec54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC58u;
        // 0x10ec5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EC60u;
}
