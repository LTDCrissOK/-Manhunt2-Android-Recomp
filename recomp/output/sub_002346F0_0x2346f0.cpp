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

// Function: sub_002346F0
// Address: 0x2346f0 - 0x2347d8
void sub_002346F0_0x2346f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002346F0_0x2346f0");
#endif

    switch (ctx->pc) {
        case 0x234708u: goto label_234708;
        default: break;
    }

    ctx->pc = 0x2346f0u;

    // 0x2346f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2346f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2346f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2346f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2346f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2346f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2346fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2346fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x234700: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x234700u;
    SET_GPR_U32(ctx, 31, 0x234708u);
    ctx->pc = 0x234704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234700u;
    // 0x234704: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x234700u, 0x234708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234708u;
label_234708:
    // 0x234708: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x234708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23470c: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x23470cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x234710: 0xc460016c  lwc1        $f0, 0x16C($v1)
    ctx->pc = 0x234710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234714: 0x2464016c  addiu       $a0, $v1, 0x16C
    ctx->pc = 0x234714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 364));
    // 0x234718: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x234718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x23471c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23471cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x234720: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x234720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x234724: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x234724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234728: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x234728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23472c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23472cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x234730: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x234730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x234734: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x234734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234738: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x234738u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23473c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x23473cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x234740: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x234740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x234744: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x234744u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x234748: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x234748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23474c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x23474cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x234750: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x234750u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x234754: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x234754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x234758: 0xc460016c  lwc1        $f0, 0x16C($v1)
    ctx->pc = 0x234758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23475c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x23475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234760: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x234760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x234764: 0x3c0140c6  lui         $at, 0x40C6
    ctx->pc = 0x234764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16582 << 16));
    // 0x234768: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x234768u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x23476c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x23476cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x234770: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x234770u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x234774: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x234774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x234778: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x234778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x23477c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23477cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x234780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x234780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234784: 0x0  nop
    ctx->pc = 0x234784u;
    // NOP
    // 0x234788: 0x0  nop
    ctx->pc = 0x234788u;
    // NOP
    // 0x23478c: 0x46000004  c1          0x4
    ctx->pc = 0x23478cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x234790: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x234790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x234794: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x234794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234798: 0x0  nop
    ctx->pc = 0x234798u;
    // NOP
    // 0x23479c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x23479Cu;
    {
        const bool branch_taken_0x23479c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23479c) {
            ctx->pc = 0x2347B0u;
            goto label_2347b0;
        }
    }
    ctx->pc = 0x2347A4u;
    // 0x2347a4: 0x7e0003b0  sq          $zero, 0x3B0($s0)
    ctx->pc = 0x2347a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 944), GPR_VEC(ctx, 0));
    // 0x2347a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2347A8u;
    {
        const bool branch_taken_0x2347a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347A8u;
        // 0x2347ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347a8) {
            ctx->pc = 0x2347C8u;
            goto label_2347c8;
        }
    }
    ctx->pc = 0x2347B0u;
label_2347b0:
    // 0x2347b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2347b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2347b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2347b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2347b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2347b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2347bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2347bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2347c0: 0xfa0103b0  sqc2        $vf1, 0x3B0($s0)
    ctx->pc = 0x2347c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 944), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2347c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2347c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2347c8:
    // 0x2347c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2347c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2347cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2347CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2347D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347CCu;
        // 0x2347d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2347CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2347D4u;
    // 0x2347d4: 0x0  nop
    ctx->pc = 0x2347d4u;
    // NOP
    ctx->pc = 0x2347d8u;
}
