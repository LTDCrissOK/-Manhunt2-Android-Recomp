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

// Function: sub_002C6C58
// Address: 0x2c6c58 - 0x2c6dd8
void sub_002C6C58_0x2c6c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6C58_0x2c6c58");
#endif

    switch (ctx->pc) {
        case 0x2c6d6cu: goto label_2c6d6c;
        default: break;
    }

    ctx->pc = 0x2c6c58u;

    // 0x2c6c58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6c5c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c6c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6c64: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x2c6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6c68: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c6c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c6c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2c6c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c6c70: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2c6c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6c74: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2c6c74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2c6c78: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2c6c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2c6c7c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c6c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c6c80: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c6c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6c84: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2c6c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c6c88: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2c6c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c6c8c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2c6c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c6c90: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2c6c90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2c6c94: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c6c94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c6c98: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2c6c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c6c9c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2c6c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c6ca0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2c6ca0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c6ca4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2c6ca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c6ca8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2c6ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c6cac: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2c6cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2c6cb0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2c6cb0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2c6cb4: 0x4a0003bf  vwaitq
    ctx->pc = 0x2c6cb4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2c6cb8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2c6cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2c6cbc: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2c6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c6cc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cc4: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2c6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6cc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c6cc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6ccc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6cd0: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2c6cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6cd4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2c6cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c6cd8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c6cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6cdc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2c6cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2c6ce0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c6ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6ce4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2c6ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6ce8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2c6ce8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2c6cec: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6cf0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2c6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6cf4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2c6cf4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2c6cf8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6cfc: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2c6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6d00: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2c6d00u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2c6d04: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x2c6d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d08: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x2c6d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6d0c: 0x0  nop
    ctx->pc = 0x2c6d0cu;
    // NOP
    // 0x2c6d10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6D10u;
    {
        const bool branch_taken_0x2c6d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6D10u;
        // 0x2c6d14: 0x46006806  mov.s       $f0, $f13 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d10) {
            ctx->pc = 0x2C6D30u;
            goto label_2c6d30;
        }
    }
    ctx->pc = 0x2C6D18u;
    // 0x2c6d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6d1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6d20: 0x0  nop
    ctx->pc = 0x2c6d20u;
    // NOP
    // 0x2c6d24: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x2c6d24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6d28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6D28u;
    {
        const bool branch_taken_0x2c6d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d28) {
            ctx->pc = 0x2C6D40u;
            goto label_2c6d40;
        }
    }
    ctx->pc = 0x2C6D30u;
label_2c6d30:
    // 0x2c6d30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2c6d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2c6d34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6d38: 0x0  nop
    ctx->pc = 0x2c6d38u;
    // NOP
    // 0x2c6d3c: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x2c6d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c6d40:
    // 0x2c6d40: 0x0  nop
    ctx->pc = 0x2c6d40u;
    // NOP
    // 0x2c6d44: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C6D44u;
    {
        const bool branch_taken_0x2c6d44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6d44) {
            ctx->pc = 0x2C6D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C6D44u;
            // 0x2c6d48: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6D4Cu;
            goto label_2c6d4c;
        }
    }
    ctx->pc = 0x2C6D4Cu;
label_2c6d4c:
    // 0x2c6d4c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2c6d4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c6d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6d54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c6d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6d58: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2c6d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2c6d5c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c6d5cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c6d60: 0x460c0304  c1          0xC0304
    ctx->pc = 0x2c6d60u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c6d64: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C6D64u;
    SET_GPR_U32(ctx, 31, 0x2C6D6Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C6D64u, 0x2C6D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D6Cu;
label_2c6d6c:
    // 0x2c6d6c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2c6d70: 0x34212ee1  ori         $at, $at, 0x2EE1
    ctx->pc = 0x2c6d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12001);
    // 0x2c6d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c6d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6d78: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2c6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c6d7c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2c6d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6d80: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2c6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6d84: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2c6d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6d88: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2c6d88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2c6d8c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2c6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6d90: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2c6d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6d94: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2c6d94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2c6d98: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2c6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6d9c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2c6d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c6da0: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x2c6da0u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2c6da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c6da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6da8: 0x0  nop
    ctx->pc = 0x2c6da8u;
    // NOP
    // 0x2c6dac: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x2c6dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6db0: 0x0  nop
    ctx->pc = 0x2c6db0u;
    // NOP
    // 0x2c6db4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6DB4u;
    {
        const bool branch_taken_0x2c6db4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DB4u;
        // 0x2c6db8: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6db4) {
            ctx->pc = 0x2C6DC0u;
            goto label_2c6dc0;
        }
    }
    ctx->pc = 0x2C6DBCu;
    // 0x2c6dbc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x2c6dbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_2c6dc0:
    // 0x2c6dc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6DC4u;
        // 0x2c6dc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6DCCu;
    // 0x2c6dcc: 0x0  nop
    ctx->pc = 0x2c6dccu;
    // NOP
    // 0x2c6dd0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c6dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c6dd4: 0x0  nop
    ctx->pc = 0x2c6dd4u;
    // NOP
    ctx->pc = 0x2c6dd8u;
}
