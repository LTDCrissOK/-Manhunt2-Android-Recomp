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

// Function: sub_0033B790
// Address: 0x33b790 - 0x33b8e0
void sub_0033B790_0x33b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B790_0x33b790");
#endif

    switch (ctx->pc) {
        case 0x33b844u: goto label_33b844;
        case 0x33b85cu: goto label_33b85c;
        default: break;
    }

    ctx->pc = 0x33b790u;

    // 0x33b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b794: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33b794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33b798: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33b79c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33b7a0: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x33b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x33b7a4: 0x8c640100  lw          $a0, 0x100($v1)
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x33b7a8: 0xc4820060  lwc1        $f2, 0x60($a0)
    ctx->pc = 0x33b7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33b7ac: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x33b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x33b7b0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x33b7b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33b7b4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x33b7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b7b8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x33b7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33b7bc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x33b7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b7c0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x33b7c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33b7c4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x33b7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b7c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x33b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x33b7cc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x33b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x33b7d0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x33b7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b7d4: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x33b7d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b7d8: 0x0  nop
    ctx->pc = 0x33b7d8u;
    // NOP
    // 0x33b7dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x33B7DCu;
    {
        const bool branch_taken_0x33b7dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33b7dc) {
            ctx->pc = 0x33B7F8u;
            goto label_33b7f8;
        }
    }
    ctx->pc = 0x33B7E4u;
    // 0x33b7e4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x33b7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x33b7e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x33b7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x33b7ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33b7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b7f0: 0x0  nop
    ctx->pc = 0x33b7f0u;
    // NOP
    // 0x33b7f4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33b7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_33b7f8:
    // 0x33b7f8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33b7f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b7fc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x33b7fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33b800: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x33b800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33b804: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x33b804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33b808: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x33b808u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33b80c: 0x4a0003bf  vwaitq
    ctx->pc = 0x33b80cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x33b810: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x33b810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33b814: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x33b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33b818: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x33b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33b81c: 0x46016032  c.eq.s      $f12, $f1
    ctx->pc = 0x33b81cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b820: 0x0  nop
    ctx->pc = 0x33b820u;
    // NOP
    // 0x33b824: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33B824u;
    {
        const bool branch_taken_0x33b824 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B824u;
        // 0x33b828: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b824) {
            ctx->pc = 0x33B83Cu;
            goto label_33b83c;
        }
    }
    ctx->pc = 0x33B82Cu;
    // 0x33b82c: 0x46016832  c.eq.s      $f13, $f1
    ctx->pc = 0x33b82cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b830: 0x0  nop
    ctx->pc = 0x33b830u;
    // NOP
    // 0x33b834: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x33B834u;
    {
        const bool branch_taken_0x33b834 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x33B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B834u;
        // 0x33b838: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b834) {
            ctx->pc = 0x33B844u;
            goto label_33b844;
        }
    }
    ctx->pc = 0x33B83Cu;
label_33b83c:
    // 0x33b83c: 0xc0e404c  jal         func_390130
    ctx->pc = 0x33B83Cu;
    SET_GPR_U32(ctx, 31, 0x33B844u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x33B83Cu, 0x33B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B844u;
label_33b844:
    // 0x33b844: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x33b844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x33b848: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x33b848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x33b84c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x33b84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x33b850: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x33b850u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x33b854: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x33B854u;
    SET_GPR_U32(ctx, 31, 0x33B85Cu);
    ctx->pc = 0x33B858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B854u;
    // 0x33b858: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x33B854u, 0x33B85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B85Cu;
label_33b85c:
    // 0x33b85c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33b860: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33b860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33b864: 0xc4442b90  lwc1        $f4, 0x2B90($v0)
    ctx->pc = 0x33b864u;
    { uint32_t bits = FAST_READ32(0x482B90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33b868: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x33b868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x33b86c: 0xc4612b30  lwc1        $f1, 0x2B30($v1)
    ctx->pc = 0x33b86cu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b870: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x33b870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x33b874: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x33b874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33b878: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x33b878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x33b87c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x33b87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x33b880: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x33b880u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x33b884: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x33b884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33b888: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x33b888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x33b88c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x33b88cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x33b890: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33b890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33b894: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x33b894u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x33b898: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x33b898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x33b89c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x33b89cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x33b8a0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x33b8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x33b8a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x33b8a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x33b8a8: 0xc6022ca8  lwc1        $f2, 0x2CA8($s0)
    ctx->pc = 0x33b8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33b8ac: 0xc4832cac  lwc1        $f3, 0x2CAC($a0)
    ctx->pc = 0x33b8acu;
    { uint32_t bits = FAST_READ32(0x482CACu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33b8b0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x33b8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x33b8b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33b8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b8b8: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x33b8b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x33b8bc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x33b8bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x33b8c0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x33b8c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x33b8c4: 0xe6022ca8  swc1        $f2, 0x2CA8($s0)
    ctx->pc = 0x33b8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11432), bits); }
    // 0x33b8c8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x33b8c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x33b8cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33b8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b8d0: 0xe4832cac  swc1        $f3, 0x2CAC($a0)
    ctx->pc = 0x33b8d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CACu, _value); } while (0); }
    // 0x33b8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x33B8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B8D4u;
        // 0x33b8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B8DCu;
    // 0x33b8dc: 0x0  nop
    ctx->pc = 0x33b8dcu;
    // NOP
    ctx->pc = 0x33b8e0u;
}
