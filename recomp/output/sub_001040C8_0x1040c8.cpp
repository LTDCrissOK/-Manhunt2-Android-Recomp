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

// Function: sub_001040C8
// Address: 0x1040c8 - 0x1041e8
void sub_001040C8_0x1040c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001040C8_0x1040c8");
#endif

    switch (ctx->pc) {
        case 0x1040fcu: goto label_1040fc;
        case 0x104110u: goto label_104110;
        case 0x104118u: goto label_104118;
        case 0x1041b4u: goto label_1041b4;
        case 0x1041ccu: goto label_1041cc;
        default: break;
    }

    ctx->pc = 0x1040c8u;

    // 0x1040c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1040c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1040cc: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1040ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1040d0: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1040d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1040d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1040d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1040d8: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1040d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1040dc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1040dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1040e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1040e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040e4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1040e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1040e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1040e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1040ec: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1040ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1040f0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1040f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1040f4: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x1040F4u;
    SET_GPR_U32(ctx, 31, 0x1040FCu);
    ctx->pc = 0x1040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1040F4u;
    // 0x1040f8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x1040F4u, 0x1040FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1040FCu;
label_1040fc:
    // 0x1040fc: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1040FCu;
    {
        const bool branch_taken_0x1040fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1040FCu;
        // 0x104100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1040fc) {
            ctx->pc = 0x1041CCu;
            goto label_1041cc;
        }
    }
    ctx->pc = 0x104104u;
    // 0x104104: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x104104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104108: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x104108u;
    SET_GPR_U32(ctx, 31, 0x104110u);
    ctx->pc = 0x10410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104108u;
    // 0x10410c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x104108u, 0x104110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104110u;
label_104110:
    // 0x104110: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x104110u;
    SET_GPR_U32(ctx, 31, 0x104118u);
    ctx->pc = 0x104114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104110u;
    // 0x104114: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x104110u, 0x104118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104118u;
label_104118:
    // 0x104118: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x104118u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10411c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x10411cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x104120: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x104120u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x104124: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x104128: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x104128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x10412c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x10412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x104130: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x104130u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104134: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x104134u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x104138: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x104138u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10413c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x10413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x104140: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x104140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104144: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x104144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104148: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x104148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10414c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x10414cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x104150: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x104150u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x104154: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x104154u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x104158: 0x0  nop
    ctx->pc = 0x104158u;
    // NOP
    // 0x10415c: 0x0  nop
    ctx->pc = 0x10415cu;
    // NOP
    // 0x104160: 0x46010084  c1          0x10084
    ctx->pc = 0x104160u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x104164: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x104164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x104168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x104168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10416c: 0x0  nop
    ctx->pc = 0x10416cu;
    // NOP
    // 0x104170: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x104170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104174: 0x0  nop
    ctx->pc = 0x104174u;
    // NOP
    // 0x104178: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x104178u;
    {
        const bool branch_taken_0x104178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104178u;
        // 0x10417c: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104178) {
            ctx->pc = 0x1041A4u;
            goto label_1041a4;
        }
    }
    ctx->pc = 0x104180u;
    // 0x104180: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x104180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104188: 0x0  nop
    ctx->pc = 0x104188u;
    // NOP
    // 0x10418c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x10418cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x104190: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x104190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x104194: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x104194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x104198: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x104198u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x10419c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x10419cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1041a0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1041a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1041a4:
    // 0x1041a4: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1041A4u;
    {
        const bool branch_taken_0x1041a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1041A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041A4u;
        // 0x1041a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041a4) {
            ctx->pc = 0x1041BCu;
            goto label_1041bc;
        }
    }
    ctx->pc = 0x1041ACu;
    // 0x1041ac: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x1041ACu;
    SET_GPR_U32(ctx, 31, 0x1041B4u);
    ctx->pc = 0x1041B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041ACu;
    // 0x1041b0: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x1041ACu, 0x1041B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041B4u;
label_1041b4:
    // 0x1041b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1041B4u;
    {
        const bool branch_taken_0x1041b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041B4u;
        // 0x1041b8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041b4) {
            ctx->pc = 0x1041D0u;
            goto label_1041d0;
        }
    }
    ctx->pc = 0x1041BCu;
label_1041bc:
    // 0x1041bc: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x1041bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1041c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1041c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1041c4: 0xc07789e  jal         func_1DE278
    ctx->pc = 0x1041C4u;
    SET_GPR_U32(ctx, 31, 0x1041CCu);
    ctx->pc = 0x1041C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041C4u;
    // 0x1041c8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE278u, 0x1041C4u, 0x1041CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041CCu;
label_1041cc:
    // 0x1041cc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1041ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1041d0:
    // 0x1041d0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1041d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1041d4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1041d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1041d8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1041d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1041dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1041dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1041e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1041E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041E0u;
        // 0x1041e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1041E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1041E8u;
}
