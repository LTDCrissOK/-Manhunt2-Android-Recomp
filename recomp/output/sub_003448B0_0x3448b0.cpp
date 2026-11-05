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

// Function: sub_003448B0
// Address: 0x3448b0 - 0x344a28
void sub_003448B0_0x3448b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003448B0_0x3448b0");
#endif

    switch (ctx->pc) {
        case 0x3448ccu: goto label_3448cc;
        case 0x344928u: goto label_344928;
        case 0x344984u: goto label_344984;
        default: break;
    }

    ctx->pc = 0x3448b0u;

    // 0x3448b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3448b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3448b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3448b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3448b8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x3448b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3448bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3448bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3448c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3448c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3448c4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3448C4u;
    SET_GPR_U32(ctx, 31, 0x3448CCu);
    ctx->pc = 0x3448C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3448C4u;
    // 0x3448c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3448C4u, 0x3448CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3448CCu;
label_3448cc:
    // 0x3448cc: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x3448ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x3448d0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3448D0u;
    {
        const bool branch_taken_0x3448d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3448D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3448D0u;
        // 0x3448d4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448d0) {
            ctx->pc = 0x3448ECu;
            goto label_3448ec;
        }
    }
    ctx->pc = 0x3448D8u;
    // 0x3448d8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3448d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3448dc: 0x0  nop
    ctx->pc = 0x3448dcu;
    // NOP
    // 0x3448e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3448e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3448e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3448E4u;
    {
        const bool branch_taken_0x3448e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3448e4) {
            ctx->pc = 0x344904u;
            goto label_344904;
        }
    }
    ctx->pc = 0x3448ECu;
label_3448ec:
    // 0x3448ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3448ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3448f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3448f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3448f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3448f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3448f8: 0x0  nop
    ctx->pc = 0x3448f8u;
    // NOP
    // 0x3448fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3448fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x344900: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x344900u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344904:
    // 0x344904: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x344904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x344908: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x344908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x34490c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34490cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344910: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344914: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344918: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x344918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x34491c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x34491cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x344920: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x344920u;
    SET_GPR_U32(ctx, 31, 0x344928u);
    ctx->pc = 0x344924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344920u;
    // 0x344924: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x344920u, 0x344928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344928u;
label_344928:
    // 0x344928: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x344928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x34492c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34492Cu;
    {
        const bool branch_taken_0x34492c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x344930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34492Cu;
        // 0x344930: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34492c) {
            ctx->pc = 0x344948u;
            goto label_344948;
        }
    }
    ctx->pc = 0x344934u;
    // 0x344934: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x344934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344938: 0x0  nop
    ctx->pc = 0x344938u;
    // NOP
    // 0x34493c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x34493cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x344940: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x344940u;
    {
        const bool branch_taken_0x344940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344940) {
            ctx->pc = 0x344960u;
            goto label_344960;
        }
    }
    ctx->pc = 0x344948u;
label_344948:
    // 0x344948: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x344948u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x34494c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344950: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x344950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344954: 0x0  nop
    ctx->pc = 0x344954u;
    // NOP
    // 0x344958: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x344958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34495c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34495cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344960:
    // 0x344960: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x344960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x344964: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x344964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x344968: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34496c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344970: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x344970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344974: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x344974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x344978: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x344978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x34497c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34497Cu;
    SET_GPR_U32(ctx, 31, 0x344984u);
    ctx->pc = 0x344980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34497Cu;
    // 0x344980: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34497Cu, 0x344984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344984u;
label_344984:
    // 0x344984: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x344984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x344988: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x344988u;
    {
        const bool branch_taken_0x344988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344988u;
        // 0x34498c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344988) {
            ctx->pc = 0x3449A4u;
            goto label_3449a4;
        }
    }
    ctx->pc = 0x344990u;
    // 0x344990: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x344990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344994: 0x0  nop
    ctx->pc = 0x344994u;
    // NOP
    // 0x344998: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x344998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34499c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34499Cu;
    {
        const bool branch_taken_0x34499c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34499c) {
            ctx->pc = 0x3449BCu;
            goto label_3449bc;
        }
    }
    ctx->pc = 0x3449A4u;
label_3449a4:
    // 0x3449a4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3449a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3449a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3449a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3449ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3449acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3449b0: 0x0  nop
    ctx->pc = 0x3449b0u;
    // NOP
    // 0x3449b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3449b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3449b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3449b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3449bc:
    // 0x3449bc: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x3449bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x3449c0: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x3449c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x3449c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3449c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3449c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3449c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3449cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3449ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3449d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3449d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3449d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3449d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3449d8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3449d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3449dc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3449dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3449e0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x3449e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3449e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3449e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3449e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3449e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3449ec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3449ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3449f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x3449f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x3449f4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x3449f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3449f8: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3449f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3449fc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x3449fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x344a00: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x344a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x344a04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x344a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x344a08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x344a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x344a0c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x344a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x344a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344a18: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x344a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x344a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x344A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A1Cu;
        // 0x344a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344A24u;
    // 0x344a24: 0x0  nop
    ctx->pc = 0x344a24u;
    // NOP
    ctx->pc = 0x344a28u;
}
