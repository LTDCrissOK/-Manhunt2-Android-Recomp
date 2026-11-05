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

// Function: sub_0026C2E8
// Address: 0x26c2e8 - 0x26c4a8
void sub_0026C2E8_0x26c2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C2E8_0x26c2e8");
#endif

    switch (ctx->pc) {
        case 0x26c3d4u: goto label_26c3d4;
        case 0x26c3dcu: goto label_26c3dc;
        case 0x26c3ecu: goto label_26c3ec;
        case 0x26c3f4u: goto label_26c3f4;
        default: break;
    }

    ctx->pc = 0x26c2e8u;

    // 0x26c2e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26c2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26c2ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c2f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x26c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26c2f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26c2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c2f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x26c2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x26c2fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26c2fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c300: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26c300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c308: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x26c308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x26c30c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x26c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x26c310: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26c310u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26c314: 0xfa410220  sqc2        $vf1, 0x220($s2)
    ctx->pc = 0x26c314u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c318: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x26c318u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26c31c: 0xfa410230  sqc2        $vf1, 0x230($s2)
    ctx->pc = 0x26c31cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c320: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x26c320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x26c324: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26c328: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x26C328u;
    {
        const bool branch_taken_0x26c328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C328u;
        // 0x26c32c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c328) {
            ctx->pc = 0x26C3CCu;
            goto label_26c3cc;
        }
    }
    ctx->pc = 0x26C330u;
    // 0x26c330: 0x8e46025c  lw          $a2, 0x25C($s2)
    ctx->pc = 0x26c330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    // 0x26c334: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x26c334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26c338: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x26c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x26c33c: 0x24c40020  addiu       $a0, $a2, 0x20
    ctx->pc = 0x26c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x26c340: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x26c340u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x26c344: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x26c344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x26c348: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x26c348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26c34c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x26c34cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x26c350: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26c350u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c354: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x26c354u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c358: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26c358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26c35c: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x26c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c360: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x26c360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c364: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x26c364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c368: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x26c368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c36c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26c36cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26c370: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26c370u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26c374: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x26c374u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26c378: 0x0  nop
    ctx->pc = 0x26c378u;
    // NOP
    // 0x26c37c: 0x0  nop
    ctx->pc = 0x26c37cu;
    // NOP
    // 0x26c380: 0x46010084  c1          0x10084
    ctx->pc = 0x26c380u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x26c384: 0xe4c10054  swc1        $f1, 0x54($a2)
    ctx->pc = 0x26c384u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x26c388: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c38c: 0x0  nop
    ctx->pc = 0x26c38cu;
    // NOP
    // 0x26c390: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26c390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c394: 0x0  nop
    ctx->pc = 0x26c394u;
    // NOP
    // 0x26c398: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x26C398u;
    {
        const bool branch_taken_0x26c398 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C398u;
        // 0x26c39c: 0xe4c20050  swc1        $f2, 0x50($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c398) {
            ctx->pc = 0x26C484u;
            goto label_26c484;
        }
    }
    ctx->pc = 0x26C3A0u;
    // 0x26c3a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c3a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c3a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c3a8: 0x0  nop
    ctx->pc = 0x26c3a8u;
    // NOP
    // 0x26c3ac: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26c3acu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x26c3b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26c3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c3b4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26c3b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c3b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26c3b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x26c3bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26c3bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26c3c0: 0xf8c10040  sqc2        $vf1, 0x40($a2)
    ctx->pc = 0x26c3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c3c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x26C3C4u;
    {
        const bool branch_taken_0x26c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3C4u;
        // 0x26c3c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3c4) {
            ctx->pc = 0x26C488u;
            goto label_26c488;
        }
    }
    ctx->pc = 0x26C3CCu;
label_26c3cc:
    // 0x26c3cc: 0xc09afb0  jal         func_26BEC0
    ctx->pc = 0x26C3CCu;
    SET_GPR_U32(ctx, 31, 0x26C3D4u);
    ctx->pc = 0x26C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3CCu;
    // 0x26c3d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEC0u, 0x26C3CCu, 0x26C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3D4u;
label_26c3d4:
    // 0x26c3d4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x26C3D4u;
    SET_GPR_U32(ctx, 31, 0x26C3DCu);
    ctx->pc = 0x26C3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3D4u;
    // 0x26c3d8: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x26C3D4u, 0x26C3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3DCu;
label_26c3dc:
    // 0x26c3dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c3dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3e0: 0x26130030  addiu       $s3, $s0, 0x30
    ctx->pc = 0x26c3e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x26c3e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26C3E4u;
    SET_GPR_U32(ctx, 31, 0x26C3ECu);
    ctx->pc = 0x26C3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3E4u;
    // 0x26c3e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26C3E4u, 0x26C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3ECu;
label_26c3ec:
    // 0x26c3ec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26C3ECu;
    SET_GPR_U32(ctx, 31, 0x26C3F4u);
    ctx->pc = 0x26C3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C3ECu;
    // 0x26c3f0: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26C3ECu, 0x26C3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C3F4u;
label_26c3f4:
    // 0x26c3f4: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x26c3f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26c3f8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x26c3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x26c3fc: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x26c3fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26c400: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26c404: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x26c404u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x26c408: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x26c408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x26c40c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26c40cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c410: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x26c410u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26c414: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26c414u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26c418: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x26c418u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26c41c: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x26c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26c420: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x26c420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26c424: 0xc6640008  lwc1        $f4, 0x8($s3)
    ctx->pc = 0x26c424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26c428: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26c428u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x26c42c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26c42cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26c430: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x26c430u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x26c434: 0x0  nop
    ctx->pc = 0x26c434u;
    // NOP
    // 0x26c438: 0x0  nop
    ctx->pc = 0x26c438u;
    // NOP
    // 0x26c43c: 0x46010084  c1          0x10084
    ctx->pc = 0x26c43cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x26c440: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x26c440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x26c444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x26c444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c448: 0x0  nop
    ctx->pc = 0x26c448u;
    // NOP
    // 0x26c44c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x26c44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c450: 0x0  nop
    ctx->pc = 0x26c450u;
    // NOP
    // 0x26c454: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x26C454u;
    {
        const bool branch_taken_0x26c454 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C454u;
        // 0x26c458: 0xe6020050  swc1        $f2, 0x50($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c454) {
            ctx->pc = 0x26C480u;
            goto label_26c480;
        }
    }
    ctx->pc = 0x26C45Cu;
    // 0x26c45c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26c460: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26c460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26c464: 0x0  nop
    ctx->pc = 0x26c464u;
    // NOP
    // 0x26c468: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x26c468u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x26c46c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26c46cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c470: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x26c470u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x26c474: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26c474u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x26c478: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26c478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x26c47c: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x26c47cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26c480:
    // 0x26c480: 0xae50025c  sw          $s0, 0x25C($s2)
    ctx->pc = 0x26c480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 16));
label_26c484:
    // 0x26c484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26c488:
    // 0x26c488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c48c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x26c48cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x26c490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26c494: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x26c494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c498: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x26c498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26c49c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C49Cu;
        // 0x26c4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C4A4u;
    // 0x26c4a4: 0x0  nop
    ctx->pc = 0x26c4a4u;
    // NOP
    ctx->pc = 0x26c4a8u;
}
