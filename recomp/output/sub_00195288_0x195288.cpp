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

// Function: sub_00195288
// Address: 0x195288 - 0x1953b8
void sub_00195288_0x195288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195288_0x195288");
#endif

    switch (ctx->pc) {
        case 0x1952a0u: goto label_1952a0;
        case 0x1952a8u: goto label_1952a8;
        case 0x1952b0u: goto label_1952b0;
        case 0x1952d0u: goto label_1952d0;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f8u: goto label_1952f8;
        case 0x1953a4u: goto label_1953a4;
        default: break;
    }

    ctx->pc = 0x195288u;

    // 0x195288: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x195288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19528c: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x19528cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x195290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195294: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x195294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x195298: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x195298u;
    SET_GPR_U32(ctx, 31, 0x1952A0u);
    ctx->pc = 0x19529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195298u;
    // 0x19529c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x195298u, 0x1952A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952A0u;
label_1952a0:
    // 0x1952a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1952A0u;
    SET_GPR_U32(ctx, 31, 0x1952A8u);
    ctx->pc = 0x1952A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952A0u;
    // 0x1952a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1952A0u, 0x1952A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952A8u;
label_1952a8:
    // 0x1952a8: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x1952A8u;
    SET_GPR_U32(ctx, 31, 0x1952B0u);
    ctx->pc = 0x1952ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952A8u;
    // 0x1952ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1952A8u, 0x1952B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952B0u;
label_1952b0:
    // 0x1952b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1952b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1952b4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1952b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1952b8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1952b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1952bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1952bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1952c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1952C0u;
    {
        const bool branch_taken_0x1952c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1952c0) {
            ctx->pc = 0x1952E0u;
            goto label_1952e0;
        }
    }
    ctx->pc = 0x1952C8u;
    // 0x1952c8: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x1952C8u;
    SET_GPR_U32(ctx, 31, 0x1952D0u);
    ctx->pc = 0x1952CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952C8u;
    // 0x1952cc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1952C8u, 0x1952D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952D0u;
label_1952d0:
    // 0x1952d0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1952d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1952d4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1952d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1952d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1952D8u;
    {
        const bool branch_taken_0x1952d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952d8) {
            ctx->pc = 0x1952E8u;
            goto label_1952e8;
        }
    }
    ctx->pc = 0x1952E0u;
label_1952e0:
    // 0x1952e0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1952e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1952e4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1952e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1952e8:
    // 0x1952e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1952E8u;
    SET_GPR_U32(ctx, 31, 0x1952F0u);
    ctx->pc = 0x1952ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952E8u;
    // 0x1952ec: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1952E8u, 0x1952F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952F0u;
label_1952f0:
    // 0x1952f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1952F0u;
    SET_GPR_U32(ctx, 31, 0x1952F8u);
    ctx->pc = 0x1952F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1952F0u;
    // 0x1952f4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1952F0u, 0x1952F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1952F8u;
label_1952f8:
    // 0x1952f8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1952f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1952fc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1952fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x195300: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x195300u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195304: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x195304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195308: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x195308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x19530c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19530cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195310: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x195310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x195314: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x195314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195318: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x195318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19531c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19531cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195320: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x195320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x195324: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x195324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x195328: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x195328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19532c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x19532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x195330: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x195330u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x195334: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x195334u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x195338: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x195338u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x19533c: 0x0  nop
    ctx->pc = 0x19533cu;
    // NOP
    // 0x195340: 0x0  nop
    ctx->pc = 0x195340u;
    // NOP
    // 0x195344: 0x46000044  c1          0x44
    ctx->pc = 0x195344u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x195348: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x195348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x19534c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x19534cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195350: 0x0  nop
    ctx->pc = 0x195350u;
    // NOP
    // 0x195354: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x195354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195358: 0x0  nop
    ctx->pc = 0x195358u;
    // NOP
    // 0x19535c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x19535Cu;
    {
        const bool branch_taken_0x19535c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x195360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19535Cu;
        // 0x195360: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19535c) {
            ctx->pc = 0x195388u;
            goto label_195388;
        }
    }
    ctx->pc = 0x195364u;
    // 0x195364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x195368: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19536c: 0x0  nop
    ctx->pc = 0x19536cu;
    // NOP
    // 0x195370: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x195370u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x195374: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x195374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195378: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x195378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19537c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19537cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x195380: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x195380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x195384: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x195384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_195388:
    // 0x195388: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x195388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19538c: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x19538cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195390: 0x0  nop
    ctx->pc = 0x195390u;
    // NOP
    // 0x195394: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x195394u;
    {
        const bool branch_taken_0x195394 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x195398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195394u;
        // 0x195398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195394) {
            ctx->pc = 0x1953A8u;
            goto label_1953a8;
        }
    }
    ctx->pc = 0x19539Cu;
    // 0x19539c: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x19539Cu;
    SET_GPR_U32(ctx, 31, 0x1953A4u);
    ctx->pc = 0x1953A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19539Cu;
    // 0x1953a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x19539Cu, 0x1953A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1953A4u;
label_1953a4:
    // 0x1953a4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1953a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1953a8:
    // 0x1953a8: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1953a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1953ac: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1953acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1953b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1953B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953B8u;
}
