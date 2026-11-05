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

// Function: sub_001BCEB0
// Address: 0x1bceb0 - 0x1bcfd8
void sub_001BCEB0_0x1bceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCEB0_0x1bceb0");
#endif

    switch (ctx->pc) {
        case 0x1bcf60u: goto label_1bcf60;
        default: break;
    }

    ctx->pc = 0x1bceb0u;

    // 0x1bceb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bceb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1bceb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bcebc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bcebcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1bcec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bcec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bcec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bcecc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCECCu;
    {
        const bool branch_taken_0x1bcecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BCED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCECCu;
        // 0x1bced0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcecc) {
            ctx->pc = 0x1BCEE8u;
            goto label_1bcee8;
        }
    }
    ctx->pc = 0x1BCED4u;
    // 0x1bced4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bced4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bced8: 0x0  nop
    ctx->pc = 0x1bced8u;
    // NOP
    // 0x1bcedc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcedcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bcee0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BCEE0u;
    {
        const bool branch_taken_0x1bcee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcee0) {
            ctx->pc = 0x1BCF04u;
            goto label_1bcf04;
        }
    }
    ctx->pc = 0x1BCEE8u;
label_1bcee8:
    // 0x1bcee8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1bcee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1bceec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bceecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bcef0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bcef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bcef4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bcef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bcef8: 0x0  nop
    ctx->pc = 0x1bcef8u;
    // NOP
    // 0x1bcefc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bcefcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1bcf00: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bcf00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bcf04:
    // 0x1bcf04: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bcf04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1bcf08: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bcf08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1bcf0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bcf0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bcf10: 0xc620037c  lwc1        $f0, 0x37C($s1)
    ctx->pc = 0x1bcf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bcf14: 0x46011502  mul.s       $f20, $f2, $f1
    ctx->pc = 0x1bcf14u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1bcf18: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1bcf18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcf1c: 0x0  nop
    ctx->pc = 0x1bcf1cu;
    // NOP
    // 0x1bcf20: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1BCF20u;
    {
        const bool branch_taken_0x1bcf20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF20u;
        // 0x1bcf24: 0x26300210  addiu       $s0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf20) {
            ctx->pc = 0x1BCFA8u;
            goto label_1bcfa8;
        }
    }
    ctx->pc = 0x1BCF28u;
    // 0x1bcf28: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1bcf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bcf2c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1bcf2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1bcf30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bcf30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1bcf34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcf38: 0x0  nop
    ctx->pc = 0x1bcf38u;
    // NOP
    // 0x1bcf3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bcf3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bcf40: 0x0  nop
    ctx->pc = 0x1bcf40u;
    // NOP
    // 0x1bcf44: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCF44u;
    {
        const bool branch_taken_0x1bcf44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bcf44) {
            ctx->pc = 0x1BCF58u;
            goto label_1bcf58;
        }
    }
    ctx->pc = 0x1BCF4Cu;
    // 0x1bcf4c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1bcf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1bcf50: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BCF50u;
    {
        const bool branch_taken_0x1bcf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF50u;
        // 0x1bcf54: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf50) {
            ctx->pc = 0x1BCFA8u;
            goto label_1bcfa8;
        }
    }
    ctx->pc = 0x1BCF58u;
label_1bcf58:
    // 0x1bcf58: 0xc06fcc8  jal         func_1BF320
    ctx->pc = 0x1BCF58u;
    SET_GPR_U32(ctx, 31, 0x1BCF60u);
    ctx->pc = 0x1BCF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCF58u;
    // 0x1bcf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF320u, 0x1BCF58u, 0x1BCF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF60u;
label_1bcf60:
    // 0x1bcf60: 0x8e2304bc  lw          $v1, 0x4BC($s1)
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1212)));
    // 0x1bcf64: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1bcf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1bcf68: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1bcf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bcf6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCF6Cu;
    {
        const bool branch_taken_0x1bcf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCF6Cu;
        // 0x1bcf70: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcf6c) {
            ctx->pc = 0x1BCF80u;
            goto label_1bcf80;
        }
    }
    ctx->pc = 0x1BCF74u;
    // 0x1bcf74: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1bcf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bcf78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BCF78u;
    {
        const bool branch_taken_0x1bcf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf78) {
            ctx->pc = 0x1BCF84u;
            goto label_1bcf84;
        }
    }
    ctx->pc = 0x1BCF80u;
label_1bcf80:
    // 0x1bcf80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bcf84:
    // 0x1bcf84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bcf88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcf8c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCF8Cu;
    {
        const bool branch_taken_0x1bcf8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf8c) {
            ctx->pc = 0x1BCF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BCF8Cu;
            // 0x1bcf90: 0x4600a000  add.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BCFA4u;
            goto label_1bcfa4;
        }
    }
    ctx->pc = 0x1BCF94u;
    // 0x1bcf94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bcf94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bcf98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bcf98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bcf9c: 0x0  nop
    ctx->pc = 0x1bcf9cu;
    // NOP
    // 0x1bcfa0: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1bcfa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1bcfa4:
    // 0x1bcfa4: 0xe620037c  swc1        $f0, 0x37C($s1)
    ctx->pc = 0x1bcfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 892), bits); }
label_1bcfa8:
    // 0x1bcfa8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1bcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1bcfac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCFACu;
    {
        const bool branch_taken_0x1bcfac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFACu;
        // 0x1bcfb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcfac) {
            ctx->pc = 0x1BCFBCu;
            goto label_1bcfbc;
        }
    }
    ctx->pc = 0x1BCFB4u;
    // 0x1bcfb4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1bcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1bcfb8: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x1bcfb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1bcfbc:
    // 0x1bcfbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcfc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bcfc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcfc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bcfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcfc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcfcc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1bcfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bcfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCFD0u;
        // 0x1bcfd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCFD8u;
}
