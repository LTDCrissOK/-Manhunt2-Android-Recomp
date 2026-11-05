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

// Function: sub_00197648
// Address: 0x197648 - 0x1978e0
void sub_00197648_0x197648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197648_0x197648");
#endif

    switch (ctx->pc) {
        case 0x19766cu: goto label_19766c;
        case 0x19767cu: goto label_19767c;
        case 0x19768cu: goto label_19768c;
        case 0x197694u: goto label_197694;
        case 0x1976a4u: goto label_1976a4;
        case 0x1976c8u: goto label_1976c8;
        case 0x197768u: goto label_197768;
        case 0x1977a8u: goto label_1977a8;
        case 0x1977e4u: goto label_1977e4;
        case 0x1978b4u: goto label_1978b4;
        case 0x1978c4u: goto label_1978c4;
        default: break;
    }

    ctx->pc = 0x197648u;

    // 0x197648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19764c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x19764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x197650: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x197650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x197654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197658: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x197658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x19765c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x19765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x197660: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x197660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x197664: 0xc066078  jal         func_1981E0
    ctx->pc = 0x197664u;
    SET_GPR_U32(ctx, 31, 0x19766Cu);
    ctx->pc = 0x197668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197664u;
    // 0x197668: 0xc60c0090  lwc1        $f12, 0x90($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1981E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1981E0u, 0x197664u, 0x19766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19766Cu;
label_19766c:
    // 0x19766c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19766Cu;
    {
        const bool branch_taken_0x19766c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19766Cu;
        // 0x197670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19766c) {
            ctx->pc = 0x197684u;
            goto label_197684;
        }
    }
    ctx->pc = 0x197674u;
    // 0x197674: 0xc065f62  jal         func_197D88
    ctx->pc = 0x197674u;
    SET_GPR_U32(ctx, 31, 0x19767Cu);
    ctx->pc = 0x197678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197674u;
    // 0x197678: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197D88u, 0x197674u, 0x19767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19767Cu;
label_19767c:
    // 0x19767c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x19767Cu;
    {
        const bool branch_taken_0x19767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19767Cu;
        // 0x197680: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19767c) {
            ctx->pc = 0x1978C8u;
            goto label_1978c8;
        }
    }
    ctx->pc = 0x197684u;
label_197684:
    // 0x197684: 0xc061a1e  jal         func_186878
    ctx->pc = 0x197684u;
    SET_GPR_U32(ctx, 31, 0x19768Cu);
    ctx->pc = 0x197688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197684u;
    // 0x197688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197684u, 0x19768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19768Cu;
label_19768c:
    // 0x19768c: 0xc06df10  jal         func_1B7C40
    ctx->pc = 0x19768Cu;
    SET_GPR_U32(ctx, 31, 0x197694u);
    ctx->pc = 0x197690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19768Cu;
    // 0x197690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x19768Cu, 0x197694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197694u;
label_197694:
    // 0x197694: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197694u;
    {
        const bool branch_taken_0x197694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197694u;
        // 0x197698: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197694) {
            ctx->pc = 0x1976ACu;
            goto label_1976ac;
        }
    }
    ctx->pc = 0x19769Cu;
    // 0x19769c: 0xc066040  jal         func_198100
    ctx->pc = 0x19769Cu;
    SET_GPR_U32(ctx, 31, 0x1976A4u);
    ctx->pc = 0x1976A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19769Cu;
    // 0x1976a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198100u, 0x19769Cu, 0x1976A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976A4u;
label_1976a4:
    // 0x1976a4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1976A4u;
    {
        const bool branch_taken_0x1976a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976A4u;
        // 0x1976a8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976a4) {
            ctx->pc = 0x1978C8u;
            goto label_1978c8;
        }
    }
    ctx->pc = 0x1976ACu;
label_1976ac:
    // 0x1976ac: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x1976acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1976b0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1976b4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1976b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1976b8: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1976B8u;
    {
        const bool branch_taken_0x1976b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1976b8) {
            ctx->pc = 0x197770u;
            goto label_197770;
        }
    }
    ctx->pc = 0x1976C0u;
    // 0x1976c0: 0xc061a12  jal         func_186848
    ctx->pc = 0x1976C0u;
    SET_GPR_U32(ctx, 31, 0x1976C8u);
    ctx->pc = 0x1976C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1976C0u;
    // 0x1976c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1976C0u, 0x1976C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976C8u;
label_1976c8:
    // 0x1976c8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1976c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1976cc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1976ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1976d0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1976d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1976d4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1976d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1976d8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1976d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1976dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1976dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1976e0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1976e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1976e4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1976e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1976e8: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1976e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1976ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1976ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1976f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1976f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1976f4: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1976f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1976f8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1976f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1976fc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1976fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197700: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x197700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197704: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x197704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x197708: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x197708u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x19770c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19770cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x197710: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x197710u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x197714: 0x46010044  c1          0x10044
    ctx->pc = 0x197714u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x197718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19771c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19771cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197720: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x197720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197724: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x197724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x197728: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19772c: 0x0  nop
    ctx->pc = 0x19772cu;
    // NOP
    // 0x197730: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x197730u;
    {
        const bool branch_taken_0x197730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197730u;
        // 0x197734: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x197730) {
            ctx->pc = 0x197750u;
            goto label_197750;
        }
    }
    ctx->pc = 0x197738u;
    // 0x197738: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x197738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19773c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19773cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197740: 0x0  nop
    ctx->pc = 0x197740u;
    // NOP
    // 0x197744: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x197744u;
    {
        const bool branch_taken_0x197744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197744) {
            ctx->pc = 0x1978ACu;
            goto label_1978ac;
        }
    }
    ctx->pc = 0x19774Cu;
    // 0x19774c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x19774cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197750:
    // 0x197750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197754: 0x0  nop
    ctx->pc = 0x197754u;
    // NOP
    // 0x197758: 0x45000054  bc1f        . + 4 + (0x54 << 2)
    ctx->pc = 0x197758u;
    {
        const bool branch_taken_0x197758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197758) {
            ctx->pc = 0x1978ACu;
            goto label_1978ac;
        }
    }
    ctx->pc = 0x197760u;
    // 0x197760: 0xc065fda  jal         func_197F68
    ctx->pc = 0x197760u;
    SET_GPR_U32(ctx, 31, 0x197768u);
    ctx->pc = 0x197764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197760u;
    // 0x197764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F68u, 0x197760u, 0x197768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197768u;
label_197768:
    // 0x197768: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197768u;
        // 0x19776c: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197768) {
            ctx->pc = 0x1978C8u;
            goto label_1978c8;
        }
    }
    ctx->pc = 0x197770u;
label_197770:
    // 0x197770: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x197770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197774: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x197774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197778: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x197778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19777c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x197780: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x197780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197788: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x197788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19778c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x19778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197790: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x197790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197794: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x197794u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x197798: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x197798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x19779c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x19779cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1977a0: 0xc061a12  jal         func_186848
    ctx->pc = 0x1977A0u;
    SET_GPR_U32(ctx, 31, 0x1977A8u);
    ctx->pc = 0x1977A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1977A0u;
    // 0x1977a4: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1977A0u, 0x1977A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977A8u;
label_1977a8:
    // 0x1977a8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1977ac: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1977acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1977b0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1977b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1977b4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1977b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1977b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1977b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1977bc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1977bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1977c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1977c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1977c4: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1977c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1977c8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1977c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1977cc: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1977ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1977d0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1977d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1977d4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1977d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1977d8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1977d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1977dc: 0xc061a12  jal         func_186848
    ctx->pc = 0x1977DCu;
    SET_GPR_U32(ctx, 31, 0x1977E4u);
    ctx->pc = 0x1977E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1977DCu;
    // 0x1977e0: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1977DCu, 0x1977E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977E4u;
label_1977e4:
    // 0x1977e4: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1977e8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1977e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1977ec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1977ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1977f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1977f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1977f4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1977f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1977f8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1977f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1977fc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1977fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197800: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x197800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197804: 0xc7a5003c  lwc1        $f5, 0x3C($sp)
    ctx->pc = 0x197804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x197808: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x197808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x19780c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x19780cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x197810: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x197810u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x197814: 0xe7a5002c  swc1        $f5, 0x2C($sp)
    ctx->pc = 0x197814u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x197818: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x197818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19781c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x19781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197820: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x197820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x197824: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x197824u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x197828: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x197828u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x19782c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x19782cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x197830: 0x46010044  c1          0x10044
    ctx->pc = 0x197830u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x197834: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x197834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x197838: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x197838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19783c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197840: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x197840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x197844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197848: 0x0  nop
    ctx->pc = 0x197848u;
    // NOP
    // 0x19784c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19784Cu;
    {
        const bool branch_taken_0x19784c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19784Cu;
        // 0x197850: 0x27a30020  addiu       $v1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19784c) {
            ctx->pc = 0x19786Cu;
            goto label_19786c;
        }
    }
    ctx->pc = 0x197854u;
    // 0x197854: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x197854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197858: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x197858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19785c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19785cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197860: 0x0  nop
    ctx->pc = 0x197860u;
    // NOP
    // 0x197864: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x197864u;
    {
        const bool branch_taken_0x197864 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197864) {
            ctx->pc = 0x1978ACu;
            goto label_1978ac;
        }
    }
    ctx->pc = 0x19786Cu;
label_19786c:
    // 0x19786c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x197870: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x197870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197874: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x197874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197878: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x197878u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x19787c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x19787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197880: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x197880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197884: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x197884u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x197888: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x197888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19788c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x19788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197890: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x197890u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x197894: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x197894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197898: 0x0  nop
    ctx->pc = 0x197898u;
    // NOP
    // 0x19789c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19789cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1978a0: 0x0  nop
    ctx->pc = 0x1978a0u;
    // NOP
    // 0x1978a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1978A4u;
    {
        const bool branch_taken_0x1978a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1978a4) {
            ctx->pc = 0x1978BCu;
            goto label_1978bc;
        }
    }
    ctx->pc = 0x1978ACu;
label_1978ac:
    // 0x1978ac: 0xc065fa0  jal         func_197E80
    ctx->pc = 0x1978ACu;
    SET_GPR_U32(ctx, 31, 0x1978B4u);
    ctx->pc = 0x1978B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978ACu;
    // 0x1978b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197E80u, 0x1978ACu, 0x1978B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978B4u;
label_1978b4:
    // 0x1978b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1978B4u;
    {
        const bool branch_taken_0x1978b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1978B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978B4u;
        // 0x1978b8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1978b4) {
            ctx->pc = 0x1978C8u;
            goto label_1978c8;
        }
    }
    ctx->pc = 0x1978BCu;
label_1978bc:
    // 0x1978bc: 0xc065fda  jal         func_197F68
    ctx->pc = 0x1978BCu;
    SET_GPR_U32(ctx, 31, 0x1978C4u);
    ctx->pc = 0x1978C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1978BCu;
    // 0x1978c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197F68u, 0x1978BCu, 0x1978C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1978C4u;
label_1978c4:
    // 0x1978c4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1978c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1978c8:
    // 0x1978c8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1978c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1978cc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1978ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1978d0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1978d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1978d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1978D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1978D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1978D4u;
        // 0x1978d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1978D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1978DCu;
    // 0x1978dc: 0x0  nop
    ctx->pc = 0x1978dcu;
    // NOP
    ctx->pc = 0x1978e0u;
}
