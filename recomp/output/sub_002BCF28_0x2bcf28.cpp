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

// Function: sub_002BCF28
// Address: 0x2bcf28 - 0x2bd328
void sub_002BCF28_0x2bcf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCF28_0x2bcf28");
#endif

    switch (ctx->pc) {
        case 0x2bcf64u: goto label_2bcf64;
        case 0x2bcf6cu: goto label_2bcf6c;
        case 0x2bcf74u: goto label_2bcf74;
        case 0x2bcf7cu: goto label_2bcf7c;
        case 0x2bcfa4u: goto label_2bcfa4;
        case 0x2bd07cu: goto label_2bd07c;
        case 0x2bd084u: goto label_2bd084;
        case 0x2bd0d8u: goto label_2bd0d8;
        case 0x2bd0e8u: goto label_2bd0e8;
        case 0x2bd0f8u: goto label_2bd0f8;
        case 0x2bd10cu: goto label_2bd10c;
        case 0x2bd138u: goto label_2bd138;
        case 0x2bd140u: goto label_2bd140;
        case 0x2bd150u: goto label_2bd150;
        case 0x2bd158u: goto label_2bd158;
        case 0x2bd1acu: goto label_2bd1ac;
        case 0x2bd1fcu: goto label_2bd1fc;
        case 0x2bd27cu: goto label_2bd27c;
        case 0x2bd28cu: goto label_2bd28c;
        case 0x2bd2c0u: goto label_2bd2c0;
        default: break;
    }

    ctx->pc = 0x2bcf28u;

    // 0x2bcf28: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x2bcf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x2bcf2c: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x2bcf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x2bcf30: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x2bcf30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x2bcf34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bcf34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf38: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x2bcf38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x2bcf3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2bcf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bcf40: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x2bcf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x2bcf44: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bcf44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bcf48: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x2bcf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x2bcf4c: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x2bcf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x2bcf50: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x2bcf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x2bcf54: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x2bcf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x2bcf58: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2bcf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x2bcf5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCF5Cu;
    SET_GPR_U32(ctx, 31, 0x2BCF64u);
    ctx->pc = 0x2BCF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF5Cu;
    // 0x2bcf60: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCF5Cu, 0x2BCF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF64u;
label_2bcf64:
    // 0x2bcf64: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCF64u;
    SET_GPR_U32(ctx, 31, 0x2BCF6Cu);
    ctx->pc = 0x2BCF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF64u;
    // 0x2bcf68: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCF64u, 0x2BCF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF6Cu;
label_2bcf6c:
    // 0x2bcf6c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BCF74u);
    ctx->pc = 0x2BCF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF6Cu;
    // 0x2bcf70: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCF6Cu, 0x2BCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF74u;
label_2bcf74:
    // 0x2bcf74: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2BCF74u;
    SET_GPR_U32(ctx, 31, 0x2BCF7Cu);
    ctx->pc = 0x2BCF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF74u;
    // 0x2bcf78: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2BCF74u, 0x2BCF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCF7Cu;
label_2bcf7c:
    // 0x2bcf7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bcf80: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bcf80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bcf84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bcf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcf88: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bcf88u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bcf8c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bcf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bcf90: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2bcf90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcf94: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2bcf94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x2bcf98: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x2bcf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x2bcf9c: 0xc0af91a  jal         func_2BE468
    ctx->pc = 0x2BCF9Cu;
    SET_GPR_U32(ctx, 31, 0x2BCFA4u);
    ctx->pc = 0x2BCFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCF9Cu;
    // 0x2bcfa0: 0xc46e000c  lwc1        $f14, 0xC($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE468u, 0x2BCF9Cu, 0x2BCFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCFA4u;
label_2bcfa4:
    // 0x2bcfa4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2bcfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcfa8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2bcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bcfac: 0x94620040  lhu         $v0, 0x40($v1)
    ctx->pc = 0x2bcfacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2bcfb0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2bcfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2bcfb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bcfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bcfb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcfb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcfbc: 0x0  nop
    ctx->pc = 0x2bcfbcu;
    // NOP
    // 0x2bcfc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcfc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcfc4: 0x94650042  lhu         $a1, 0x42($v1)
    ctx->pc = 0x2bcfc4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    // 0x2bcfc8: 0x94820062  lhu         $v0, 0x62($a0)
    ctx->pc = 0x2bcfc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 98)));
    // 0x2bcfcc: 0xc485005c  lwc1        $f5, 0x5C($a0)
    ctx->pc = 0x2bcfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bcfd0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2bcfd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bcfd4: 0x0  nop
    ctx->pc = 0x2bcfd4u;
    // NOP
    // 0x2bcfd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bcfd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bcfdc: 0x46030102  mul.s       $f4, $f0, $f3
    ctx->pc = 0x2bcfdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2bcfe0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2bcfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2bcfe4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2bcfe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2bcfe8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bcfe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bcfec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bcfecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bcff0: 0x0  nop
    ctx->pc = 0x2bcff0u;
    // NOP
    // 0x2bcff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bcff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bcff8: 0x46042834  c.lt.s      $f5, $f4
    ctx->pc = 0x2bcff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bcffc: 0x46020182  mul.s       $f6, $f0, $f2
    ctx->pc = 0x2bcffcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bd000: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD000u;
    {
        const bool branch_taken_0x2bd000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD000u;
        // 0x2bd004: 0x46030802  mul.s       $f0, $f1, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd000) {
            ctx->pc = 0x2BD018u;
            goto label_2bd018;
        }
    }
    ctx->pc = 0x2BD008u;
    // 0x2bd008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd00c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd010: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2BD010u;
    {
        const bool branch_taken_0x2bd010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD010u;
        // 0x2bd014: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd010) {
            ctx->pc = 0x2BD04Cu;
            goto label_2bd04c;
        }
    }
    ctx->pc = 0x2BD018u;
label_2bd018:
    // 0x2bd018: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x2bd018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd01c: 0x0  nop
    ctx->pc = 0x2bd01cu;
    // NOP
    // 0x2bd020: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2BD020u;
    {
        const bool branch_taken_0x2bd020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bd020) {
            ctx->pc = 0x2BD024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD020u;
            // 0x2bd024: 0x46040001  sub.s       $f0, $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD034u;
            goto label_2bd034;
        }
    }
    ctx->pc = 0x2BD028u;
    // 0x2bd028: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2bd028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd02c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2BD02Cu;
    {
        const bool branch_taken_0x2bd02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD02Cu;
        // 0x2bd030: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd02c) {
            ctx->pc = 0x2BD04Cu;
            goto label_2bd04c;
        }
    }
    ctx->pc = 0x2BD034u;
label_2bd034:
    // 0x2bd034: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd038: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd03c: 0x46042841  sub.s       $f1, $f5, $f4
    ctx->pc = 0x2bd03cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x2bd040: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2bd040u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2bd044: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2bd044u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2bd048: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bd048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd04c:
    // 0x2bd04c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x2bd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd050: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bd050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bd054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bd054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bd058: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bd058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bd05c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2bd05cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2bd060: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bd060u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bd064: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2bd064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bd068: 0x0  nop
    ctx->pc = 0x2bd068u;
    // NOP
    // 0x2bd06c: 0x450100a3  bc1t        . + 4 + (0xA3 << 2)
    ctx->pc = 0x2BD06Cu;
    {
        const bool branch_taken_0x2bd06c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD06Cu;
        // 0x2bd070: 0xe6210010  swc1        $f1, 0x10($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd06c) {
            ctx->pc = 0x2BD2FCu;
            goto label_2bd2fc;
        }
    }
    ctx->pc = 0x2BD074u;
    // 0x2bd074: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BD074u;
    SET_GPR_U32(ctx, 31, 0x2BD07Cu);
    ctx->pc = 0x2BD078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD074u;
    // 0x2bd078: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BD074u, 0x2BD07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD07Cu;
label_2bd07c:
    // 0x2bd07c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BD07Cu;
    SET_GPR_U32(ctx, 31, 0x2BD084u);
    ctx->pc = 0x2BD080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD07Cu;
    // 0x2bd080: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BD07Cu, 0x2BD084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD084u;
label_2bd084:
    // 0x2bd084: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2bd084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd088: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2bd088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2bd08c: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x2BD08Cu;
    {
        const bool branch_taken_0x2bd08c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD08Cu;
        // 0x2bd090: 0x27b000b0  addiu       $s0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd08c) {
            ctx->pc = 0x2BD0CCu;
            goto label_2bd0cc;
        }
    }
    ctx->pc = 0x2BD094u;
    // 0x2bd094: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x2bd094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2bd098: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bd098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd09c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2bd09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd0a0: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x2bd0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2bd0a4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bd0a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd0a8: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2bd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd0ac: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x2bd0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2bd0b0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2bd0b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd0b4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2bd0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd0b8: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x2bd0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2bd0bc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2bd0bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bd0c0: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x2bd0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2bd0c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BD0C4u;
    {
        const bool branch_taken_0x2bd0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD0C4u;
        // 0x2bd0c8: 0x27b300b0  addiu       $s3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd0c4) {
            ctx->pc = 0x2BD0DCu;
            goto label_2bd0dc;
        }
    }
    ctx->pc = 0x2BD0CCu;
label_2bd0cc:
    // 0x2bd0cc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2bd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x2bd0d0: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BD0D0u;
    SET_GPR_U32(ctx, 31, 0x2BD0D8u);
    ctx->pc = 0x2BD0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0D0u;
    // 0x2bd0d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BD0D0u, 0x2BD0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0D8u;
label_2bd0d8:
    // 0x2bd0d8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2bd0d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bd0dc:
    // 0x2bd0dc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2bd0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bd0e0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2BD0E0u;
    SET_GPR_U32(ctx, 31, 0x2BD0E8u);
    ctx->pc = 0x2BD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0E0u;
    // 0x2bd0e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2BD0E0u, 0x2BD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0E8u;
label_2bd0e8:
    // 0x2bd0e8: 0x27b000f0  addiu       $s0, $sp, 0xF0
    ctx->pc = 0x2bd0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2bd0ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bd0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd0f0: 0xc0b0cc4  jal         func_2C3310
    ctx->pc = 0x2BD0F0u;
    SET_GPR_U32(ctx, 31, 0x2BD0F8u);
    ctx->pc = 0x2BD0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0F0u;
    // 0x2bd0f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3310u, 0x2BD0F0u, 0x2BD0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0F8u;
label_2bd0f8:
    // 0x2bd0f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2bd0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2bd0fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bd0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd100: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2bd100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd104: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2BD104u;
    SET_GPR_U32(ctx, 31, 0x2BD10Cu);
    ctx->pc = 0x2BD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD104u;
    // 0x2bd108: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2BD104u, 0x2BD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD10Cu;
label_2bd10c:
    // 0x2bd10c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2bd10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd110: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd110u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd114: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd118: 0x18400071  blez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x2BD118u;
    {
        const bool branch_taken_0x2bd118 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BD11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD118u;
        // 0x2bd11c: 0x24102710  addiu       $s0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd118) {
            ctx->pc = 0x2BD2E0u;
            goto label_2bd2e0;
        }
    }
    ctx->pc = 0x2BD120u;
    // 0x2bd120: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x2bd124: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x2bd124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x2bd128: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bd128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bd12c: 0x27b30130  addiu       $s3, $sp, 0x130
    ctx->pc = 0x2bd12cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bd130: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2bd130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd134: 0x0  nop
    ctx->pc = 0x2bd134u;
    // NOP
label_2bd138:
    // 0x2bd138: 0xc0af2d8  jal         func_2BCB60
    ctx->pc = 0x2BD138u;
    SET_GPR_U32(ctx, 31, 0x2BD140u);
    ctx->pc = 0x2BD13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD138u;
    // 0x2bd13c: 0x24054100  addiu       $a1, $zero, 0x4100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BCB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BCB60u, 0x2BD138u, 0x2BD140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD140u;
label_2bd140:
    // 0x2bd140: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2BD140u;
    {
        const bool branch_taken_0x2bd140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd140) {
            ctx->pc = 0x2BD284u;
            goto label_2bd284;
        }
    }
    ctx->pc = 0x2BD148u;
    // 0x2bd148: 0xc0b11ba  jal         func_2C46E8
    ctx->pc = 0x2BD148u;
    SET_GPR_U32(ctx, 31, 0x2BD150u);
    ctx->pc = 0x2BD14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD148u;
    // 0x2bd14c: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46E8u, 0x2BD148u, 0x2BD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD150u;
label_2bd150:
    // 0x2bd150: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD150u;
    SET_GPR_U32(ctx, 31, 0x2BD158u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD150u, 0x2BD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD158u;
label_2bd158:
    // 0x2bd158: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2bd158u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd15c: 0x27b40130  addiu       $s4, $sp, 0x130
    ctx->pc = 0x2bd15cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bd160: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD160u;
    {
        const bool branch_taken_0x2bd160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd160) {
            ctx->pc = 0x2BD164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD160u;
            // 0x2bd164: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD168u;
            goto label_2bd168;
        }
    }
    ctx->pc = 0x2BD168u;
label_2bd168:
    // 0x2bd168: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd168u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd16c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD16Cu;
    {
        const bool branch_taken_0x2bd16c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD16Cu;
        // 0x2bd170: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd16c) {
            ctx->pc = 0x2BD188u;
            goto label_2bd188;
        }
    }
    ctx->pc = 0x2BD174u;
    // 0x2bd174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd178: 0x0  nop
    ctx->pc = 0x2bd178u;
    // NOP
    // 0x2bd17c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd180: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD180u;
    {
        const bool branch_taken_0x2bd180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD180u;
        // 0x2bd184: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd180) {
            ctx->pc = 0x2BD1A4u;
            goto label_2bd1a4;
        }
    }
    ctx->pc = 0x2BD188u;
label_2bd188:
    // 0x2bd188: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd18c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd194: 0x0  nop
    ctx->pc = 0x2bd194u;
    // NOP
    // 0x2bd198: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd19c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bd19cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bd1a0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2bd1a4:
    // 0x2bd1a4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD1A4u;
    SET_GPR_U32(ctx, 31, 0x2BD1ACu);
    ctx->pc = 0x2BD1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1A4u;
    // 0x2bd1a8: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD1A4u, 0x2BD1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1ACu;
label_2bd1ac:
    // 0x2bd1ac: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2bd1acu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd1b0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD1B0u;
    {
        const bool branch_taken_0x2bd1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd1b0) {
            ctx->pc = 0x2BD1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD1B0u;
            // 0x2bd1b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD1B8u;
            goto label_2bd1b8;
        }
    }
    ctx->pc = 0x2BD1B8u;
label_2bd1b8:
    // 0x2bd1b8: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd1b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd1bc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD1BCu;
    {
        const bool branch_taken_0x2bd1bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1BCu;
        // 0x2bd1c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1bc) {
            ctx->pc = 0x2BD1D8u;
            goto label_2bd1d8;
        }
    }
    ctx->pc = 0x2BD1C4u;
    // 0x2bd1c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd1c8: 0x0  nop
    ctx->pc = 0x2bd1c8u;
    // NOP
    // 0x2bd1cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd1ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd1d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD1D0u;
    {
        const bool branch_taken_0x2bd1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1D0u;
        // 0x2bd1d4: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1d0) {
            ctx->pc = 0x2BD1F4u;
            goto label_2bd1f4;
        }
    }
    ctx->pc = 0x2BD1D8u;
label_2bd1d8:
    // 0x2bd1d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd1dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd1e4: 0x0  nop
    ctx->pc = 0x2bd1e4u;
    // NOP
    // 0x2bd1e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd1e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd1ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bd1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bd1f0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2bd1f4:
    // 0x2bd1f4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2BD1F4u;
    SET_GPR_U32(ctx, 31, 0x2BD1FCu);
    ctx->pc = 0x2BD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1F4u;
    // 0x2bd1f8: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2BD1F4u, 0x2BD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1FCu;
label_2bd1fc:
    // 0x2bd1fc: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2bd1fcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2bd200: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2BD200u;
    {
        const bool branch_taken_0x2bd200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bd200) {
            ctx->pc = 0x2BD204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD200u;
            // 0x2bd204: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD208u;
            goto label_2bd208;
        }
    }
    ctx->pc = 0x2BD208u;
label_2bd208:
    // 0x2bd208: 0x1010  mfhi        $v0
    ctx->pc = 0x2bd208u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2bd20c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD20Cu;
    {
        const bool branch_taken_0x2bd20c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2BD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD20Cu;
        // 0x2bd210: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd20c) {
            ctx->pc = 0x2BD228u;
            goto label_2bd228;
        }
    }
    ctx->pc = 0x2BD214u;
    // 0x2bd214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd218: 0x0  nop
    ctx->pc = 0x2bd218u;
    // NOP
    // 0x2bd21c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd220: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BD220u;
    {
        const bool branch_taken_0x2bd220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD220u;
        // 0x2bd224: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd220) {
            ctx->pc = 0x2BD244u;
            goto label_2bd244;
        }
    }
    ctx->pc = 0x2BD228u;
label_2bd228:
    // 0x2bd228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bd228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bd22c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2bd22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2bd230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bd230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bd234: 0x0  nop
    ctx->pc = 0x2bd234u;
    // NOP
    // 0x2bd238: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2bd238u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2bd23c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2bd23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2bd240: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2bd240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2bd244:
    // 0x2bd244: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2bd244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd248: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2bd248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd24c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd250: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd254: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bd254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd258: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x2bd258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x2bd25c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd260: 0xdc490068  ld          $t1, 0x68($v0)
    ctx->pc = 0x2bd260u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2bd264: 0x94ff8  dsll        $t1, $t1, 31
    ctx->pc = 0x2bd264u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 31);
    // 0x2bd268: 0x94fff  dsra32      $t1, $t1, 31
    ctx->pc = 0x2bd268u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 31));
    // 0x2bd26c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2bd26cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2bd270: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2bd270u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2bd274: 0xc0af4ca  jal         func_2BD328
    ctx->pc = 0x2BD274u;
    SET_GPR_U32(ctx, 31, 0x2BD27Cu);
    ctx->pc = 0x2BD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD274u;
    // 0x2bd278: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD328u, 0x2BD274u, 0x2BD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD27Cu;
label_2bd27c:
    // 0x2bd27c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2BD27Cu;
    {
        const bool branch_taken_0x2bd27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BD280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD27Cu;
        // 0x2bd280: 0xc6200010  lwc1        $f0, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd27c) {
            ctx->pc = 0x2BD2C4u;
            goto label_2bd2c4;
        }
    }
    ctx->pc = 0x2BD284u;
label_2bd284:
    // 0x2bd284: 0xc0b11ba  jal         func_2C46E8
    ctx->pc = 0x2BD284u;
    SET_GPR_U32(ctx, 31, 0x2BD28Cu);
    ctx->pc = 0x2BD288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD284u;
    // 0x2bd288: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46E8u, 0x2BD284u, 0x2BD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD28Cu;
label_2bd28c:
    // 0x2bd28c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2bd28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2bd290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd294: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bd294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd298: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bd298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd29c: 0xdc690068  ld          $t1, 0x68($v1)
    ctx->pc = 0x2bd29cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2bd2a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bd2a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd2a4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bd2a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2bd2a8: 0x94ff8  dsll        $t1, $t1, 31
    ctx->pc = 0x2bd2a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 31);
    // 0x2bd2ac: 0x94fff  dsra32      $t1, $t1, 31
    ctx->pc = 0x2bd2acu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 31));
    // 0x2bd2b0: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x2bd2b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2bd2b4: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x2bd2b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x2bd2b8: 0xc0af4ca  jal         func_2BD328
    ctx->pc = 0x2BD2B8u;
    SET_GPR_U32(ctx, 31, 0x2BD2C0u);
    ctx->pc = 0x2BD2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD2B8u;
    // 0x2bd2bc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BD328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD328u, 0x2BD2B8u, 0x2BD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD2C0u;
label_2bd2c0:
    // 0x2bd2c0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2bd2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd2c4:
    // 0x2bd2c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2bd2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2bd2c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd2c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd2cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd2ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd2d0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2bd2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2bd2d4: 0x5440ff98  bnel        $v0, $zero, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2BD2D4u;
    {
        const bool branch_taken_0x2bd2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bd2d4) {
            ctx->pc = 0x2BD2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BD2D4u;
            // 0x2bd2d8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BD138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd138;
        }
    }
    ctx->pc = 0x2BD2DCu;
    // 0x2bd2dc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2bd2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2bd2e0:
    // 0x2bd2e0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bd2e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bd2e4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bd2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bd2e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bd2e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bd2ec: 0x0  nop
    ctx->pc = 0x2bd2ecu;
    // NOP
    // 0x2bd2f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2bd2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2bd2f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2bd2f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2bd2f8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2bd2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2bd2fc:
    // 0x2bd2fc: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x2bd2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2bd300: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x2bd300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x2bd304: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x2bd304u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2bd308: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x2bd308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2bd30c: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x2bd30cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2bd310: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x2bd310u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2bd314: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x2bd314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2bd318: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x2bd318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd31c: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x2bd31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd320: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD320u;
        // 0x2bd324: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD328u;
}
