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

// Function: sub_001C9658
// Address: 0x1c9658 - 0x1c9780
void sub_001C9658_0x1c9658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9658_0x1c9658");
#endif

    switch (ctx->pc) {
        case 0x1c9688u: goto label_1c9688;
        case 0x1c9690u: goto label_1c9690;
        case 0x1c9738u: goto label_1c9738;
        case 0x1c975cu: goto label_1c975c;
        default: break;
    }

    ctx->pc = 0x1c9658u;

    // 0x1c9658: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c9658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c965c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1c965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1c9660: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1c9660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1c9664: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c9664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9668: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1c9668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1c966c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1c966cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c9670: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1c9670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1c9674: 0x8c830318  lw          $v1, 0x318($a0)
    ctx->pc = 0x1c9674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
    // 0x1c9678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c9678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c967c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1c967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c9680: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C9680u;
    SET_GPR_U32(ctx, 31, 0x1C9688u);
    ctx->pc = 0x1C9684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9680u;
    // 0x1c9684: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C9680u, 0x1C9688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9688u;
label_1c9688:
    // 0x1c9688: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C9688u;
    SET_GPR_U32(ctx, 31, 0x1C9690u);
    ctx->pc = 0x1C968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9688u;
    // 0x1c968c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C9688u, 0x1C9690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9690u;
label_1c9690:
    // 0x1c9690: 0x7a030070  lq          $v1, 0x70($s0)
    ctx->pc = 0x1c9690u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c9694: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1c9694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c9698: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1c9698u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c969c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1c969cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c96a0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x1c96a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x1c96a4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1c96a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1c96a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1c96a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c96ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1c96acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c96b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c96b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c96b4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1c96b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c96b8: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1c96b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c96bc: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1c96bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c96c0: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1c96c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c96c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c96c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c96c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c96c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c96cc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c96ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c96d0: 0x0  nop
    ctx->pc = 0x1c96d0u;
    // NOP
    // 0x1c96d4: 0x0  nop
    ctx->pc = 0x1c96d4u;
    // NOP
    // 0x1c96d8: 0x46000044  c1          0x44
    ctx->pc = 0x1c96d8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c96dc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1c96dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1c96e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1c96e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c96e4: 0x0  nop
    ctx->pc = 0x1c96e4u;
    // NOP
    // 0x1c96e8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1c96e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c96ec: 0x0  nop
    ctx->pc = 0x1c96ecu;
    // NOP
    // 0x1c96f0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1C96F0u;
    {
        const bool branch_taken_0x1c96f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C96F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96F0u;
        // 0x1c96f4: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c96f0) {
            ctx->pc = 0x1C971Cu;
            goto label_1c971c;
        }
    }
    ctx->pc = 0x1C96F8u;
    // 0x1c96f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c96f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c96fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c96fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9700: 0x0  nop
    ctx->pc = 0x1c9700u;
    // NOP
    // 0x1c9704: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c9704u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1c9708: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1c9708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c970c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1c970cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c9710: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c9710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c9714: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1c9714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c9718: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1c9718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c971c:
    // 0x1c971c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1c971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9720: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1c9720u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9724: 0x0  nop
    ctx->pc = 0x1c9724u;
    // NOP
    // 0x1c9728: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1C9728u;
    {
        const bool branch_taken_0x1c9728 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9728u;
        // 0x1c972c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9728) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C9730u;
    // 0x1c9730: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x1C9730u;
    SET_GPR_U32(ctx, 31, 0x1C9738u);
    ctx->pc = 0x1C9734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9730u;
    // 0x1c9734: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x1C9730u, 0x1C9738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9738u;
label_1c9738:
    // 0x1c9738: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9738u;
    {
        const bool branch_taken_0x1c9738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9738u;
        // 0x1c973c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9738) {
            ctx->pc = 0x1C9760u;
            goto label_1c9760;
        }
    }
    ctx->pc = 0x1C9740u;
    // 0x1c9740: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x1c9740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x1c9744: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c9744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9748: 0x34a53210  ori         $a1, $a1, 0x3210
    ctx->pc = 0x1c9748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)12816);
    // 0x1c974c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c974cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9754: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1C9754u;
    SET_GPR_U32(ctx, 31, 0x1C975Cu);
    ctx->pc = 0x1C9758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9754u;
    // 0x1c9758: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1C9754u, 0x1C975Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C975Cu;
label_1c975c:
    // 0x1c975c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c975cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c9760:
    // 0x1c9760: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1c9760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c9764: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1c9764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c9768: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1c9768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c976c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1c976cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1c9770: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9770u;
        // 0x1c9774: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9778u;
    // 0x1c9778: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c977c: 0x0  nop
    ctx->pc = 0x1c977cu;
    // NOP
    ctx->pc = 0x1c9780u;
}
