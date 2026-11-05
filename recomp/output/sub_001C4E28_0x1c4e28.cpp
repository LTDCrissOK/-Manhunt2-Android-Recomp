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

// Function: sub_001C4E28
// Address: 0x1c4e28 - 0x1c4f98
void sub_001C4E28_0x1c4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4E28_0x1c4e28");
#endif

    switch (ctx->pc) {
        case 0x1c4e70u: goto label_1c4e70;
        case 0x1c4f88u: goto label_1c4f88;
        default: break;
    }

    ctx->pc = 0x1c4e28u;

    // 0x1c4e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4e2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c4e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c4e30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c4e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c4e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e38: 0x8e030318  lw          $v1, 0x318($s0)
    ctx->pc = 0x1c4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1c4e3c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1c4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c4e40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4e44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1c4e48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c4e48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4e4c: 0xfa010330  sqc2        $vf1, 0x330($s0)
    ctx->pc = 0x1c4e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 816), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4e50: 0xc6000324  lwc1        $f0, 0x324($s0)
    ctx->pc = 0x1c4e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4e54: 0x8e030318  lw          $v1, 0x318($s0)
    ctx->pc = 0x1c4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1c4e58: 0xe6000334  swc1        $f0, 0x334($s0)
    ctx->pc = 0x1c4e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x1c4e5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4e60: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c4e64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4e68: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x1C4E68u;
    SET_GPR_U32(ctx, 31, 0x1C4E70u);
    ctx->pc = 0x1C4E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4E68u;
    // 0x1c4e6c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x1C4E68u, 0x1C4E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E70u;
label_1c4e70:
    // 0x1c4e70: 0x8e030318  lw          $v1, 0x318($s0)
    ctx->pc = 0x1c4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1c4e74: 0xc46103b0  lwc1        $f1, 0x3B0($v1)
    ctx->pc = 0x1c4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4e78: 0x246203b0  addiu       $v0, $v1, 0x3B0
    ctx->pc = 0x1c4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 944));
    // 0x1c4e7c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c4e7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c4e80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c4e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4e84: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c4e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c4e88: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1c4e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4e8c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c4e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c4e90: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1c4e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4e94: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c4e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c4e98: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c4e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c4e9c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c4e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c4ea0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c4ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c4ea4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c4ea4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c4ea8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c4ea8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c4eac: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c4eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c4eb0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c4eb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c4eb4: 0x0  nop
    ctx->pc = 0x1c4eb4u;
    // NOP
    // 0x1c4eb8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1c4eb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4ebc: 0x0  nop
    ctx->pc = 0x1c4ebcu;
    // NOP
    // 0x1c4ec0: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x1C4EC0u;
    {
        const bool branch_taken_0x1c4ec0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c4ec0) {
            ctx->pc = 0x1C4EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4EC0u;
            // 0x1c4ec4: 0x8c6200bc  lw          $v0, 0xBC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4EF0u;
            goto label_1c4ef0;
        }
    }
    ctx->pc = 0x1C4EC8u;
    // 0x1c4ec8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c4ec8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ecc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1c4eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ed0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1c4ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ed4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1c4ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ed8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1c4ed8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1c4edc: 0x4a0003bf  vwaitq
    ctx->pc = 0x1c4edcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1c4ee0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1c4ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4ee4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c4ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4ee8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1C4EE8u;
    {
        const bool branch_taken_0x1c4ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4EE8u;
        // 0x1c4eec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ee8) {
            ctx->pc = 0x1C4F58u;
            goto label_1c4f58;
        }
    }
    ctx->pc = 0x1C4EF0u;
label_1c4ef0:
    // 0x1c4ef0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1c4ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x1c4ef4: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x1c4ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x1c4ef8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4EF8u;
    {
        const bool branch_taken_0x1c4ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ef8) {
            ctx->pc = 0x1C4EFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4EF8u;
            // 0x1c4efc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4F48u;
            goto label_1c4f48;
        }
    }
    ctx->pc = 0x1C4F00u;
    // 0x1c4f00: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1c4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1c4f04: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1c4f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4f08: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c4f08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4f0c: 0x0  nop
    ctx->pc = 0x1c4f0cu;
    // NOP
    // 0x1c4f10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F10u;
    {
        const bool branch_taken_0x1c4f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F10u;
        // 0x1c4f14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f10) {
            ctx->pc = 0x1C4F1Cu;
            goto label_1c4f1c;
        }
    }
    ctx->pc = 0x1C4F18u;
    // 0x1c4f18: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1c4f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1c4f1c:
    // 0x1c4f1c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4F1Cu;
    {
        const bool branch_taken_0x1c4f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4f1c) {
            ctx->pc = 0x1C4F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4F1Cu;
            // 0x1c4f20: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4F48u;
            goto label_1c4f48;
        }
    }
    ctx->pc = 0x1C4F24u;
    // 0x1c4f24: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1c4f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4f28: 0x0  nop
    ctx->pc = 0x1c4f28u;
    // NOP
    // 0x1c4f2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C4F2Cu;
    {
        const bool branch_taken_0x1c4f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F2Cu;
        // 0x1c4f30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f2c) {
            ctx->pc = 0x1C4F38u;
            goto label_1c4f38;
        }
    }
    ctx->pc = 0x1C4F34u;
    // 0x1c4f34: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1c4f38:
    // 0x1c4f38: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c4f38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4f3c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4f40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4F40u;
    {
        const bool branch_taken_0x1c4f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F40u;
        // 0x1c4f44: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f40) {
            ctx->pc = 0x1C4F58u;
            goto label_1c4f58;
        }
    }
    ctx->pc = 0x1C4F48u;
label_1c4f48:
    // 0x1c4f48: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1c4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1c4f4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c4f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4f50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c4f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4f54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c4f58:
    // 0x1c4f58: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1c4f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1c4f5c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c4f5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4f60: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1c4f60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4f64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c4f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4f68: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1c4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1c4f6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1c4f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c4f70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c4f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4f74: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1c4f74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1c4f78: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1c4f78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4f7c: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c4f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4f80: 0xc071e68  jal         func_1C79A0
    ctx->pc = 0x1C4F80u;
    SET_GPR_U32(ctx, 31, 0x1C4F88u);
    ctx->pc = 0x1C4F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4F80u;
    // 0x1c4f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C79A0u, 0x1C4F80u, 0x1C4F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4F88u;
label_1c4f88:
    // 0x1c4f88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c4f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c4f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c4f90: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F90u;
        // 0x1c4f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4F98u;
}
