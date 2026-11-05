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

// Function: sub_0025D2A8
// Address: 0x25d2a8 - 0x25d390
void sub_0025D2A8_0x25d2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D2A8_0x25d2a8");
#endif

    switch (ctx->pc) {
        case 0x25d2d0u: goto label_25d2d0;
        case 0x25d2d8u: goto label_25d2d8;
        case 0x25d36cu: goto label_25d36c;
        case 0x25d374u: goto label_25d374;
        default: break;
    }

    ctx->pc = 0x25d2a8u;

    // 0x25d2a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x25d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x25d2ac: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x25d2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x25d2b0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x25d2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x25d2b4: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x25d2b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25d2b8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x25d2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x25d2bc: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x25d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x25d2c0: 0x8c910020  lw          $s1, 0x20($a0)
    ctx->pc = 0x25d2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25d2c4: 0x8cb00100  lw          $s0, 0x100($a1)
    ctx->pc = 0x25d2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x25d2c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25D2C8u;
    SET_GPR_U32(ctx, 31, 0x25D2D0u);
    ctx->pc = 0x25D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2C8u;
    // 0x25d2cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25D2C8u, 0x25D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2D0u;
label_25d2d0:
    // 0x25d2d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25D2D0u;
    SET_GPR_U32(ctx, 31, 0x25D2D8u);
    ctx->pc = 0x25D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2D0u;
    // 0x25d2d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25D2D0u, 0x25D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D2D8u;
label_25d2d8:
    // 0x25d2d8: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x25d2d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25d2dc: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x25d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25d2e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25d2e4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x25d2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x25d2e8: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x25d2e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25d2ec: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x25d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x25d2f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x25d2f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25d2f4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x25d2f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d2f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25d2f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25d2fc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x25d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25d300: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x25d300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d304: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x25d304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d308: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x25d308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25d30c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25d30cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x25d310: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x25d310u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x25d314: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x25d314u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x25d318: 0x0  nop
    ctx->pc = 0x25d318u;
    // NOP
    // 0x25d31c: 0x0  nop
    ctx->pc = 0x25d31cu;
    // NOP
    // 0x25d320: 0x46010084  c1          0x10084
    ctx->pc = 0x25d320u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x25d324: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x25d324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25d328: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d328u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d32c: 0x0  nop
    ctx->pc = 0x25d32cu;
    // NOP
    // 0x25d330: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25d330u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d334: 0x0  nop
    ctx->pc = 0x25d334u;
    // NOP
    // 0x25d338: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x25D338u;
    {
        const bool branch_taken_0x25d338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D338u;
        // 0x25d33c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d338) {
            ctx->pc = 0x25D364u;
            goto label_25d364;
        }
    }
    ctx->pc = 0x25D340u;
    // 0x25d340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d348: 0x0  nop
    ctx->pc = 0x25d348u;
    // NOP
    // 0x25d34c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x25d34cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x25d350: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d354: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x25d354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25d358: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x25d358u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d35c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25d35cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25d360: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x25d360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_25d364:
    // 0x25d364: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x25D364u;
    SET_GPR_U32(ctx, 31, 0x25D36Cu);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x25D364u, 0x25D36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D36Cu;
label_25d36c:
    // 0x25d36c: 0xc077ade  jal         func_1DEB78
    ctx->pc = 0x25D36Cu;
    SET_GPR_U32(ctx, 31, 0x25D374u);
    ctx->pc = 0x25D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D36Cu;
    // 0x25d370: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB78u, 0x25D36Cu, 0x25D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D374u;
label_25d374:
    // 0x25d374: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x25d374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25d378: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x25d378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x25d37c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x25d37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x25d380: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x25d380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25d384: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x25d384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x25d388: 0x3e00008  jr          $ra
    ctx->pc = 0x25D388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D388u;
        // 0x25d38c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D390u;
}
