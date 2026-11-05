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

// Function: sub_0025CFA8
// Address: 0x25cfa8 - 0x25d198
void sub_0025CFA8_0x25cfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CFA8_0x25cfa8");
#endif

    switch (ctx->pc) {
        case 0x25d060u: goto label_25d060;
        default: break;
    }

    ctx->pc = 0x25cfa8u;

    // 0x25cfa8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25cfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25cfac: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x25cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x25cfb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25cfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25cfb4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25cfb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25cfb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25cfc0: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x25cfc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x25cfc4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x25cfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x25cfc8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25cfcc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x25cfccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25cfd0: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x25cfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25cfd4: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x25cfd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cfd8: 0x0  nop
    ctx->pc = 0x25cfd8u;
    // NOP
    // 0x25cfdc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x25CFDCu;
    {
        const bool branch_taken_0x25cfdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFDCu;
        // 0x25cfe0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfdc) {
            ctx->pc = 0x25CFF0u;
            goto label_25cff0;
        }
    }
    ctx->pc = 0x25CFE4u;
    // 0x25cfe4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x25cfe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x25cfe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25CFE8u;
    {
        const bool branch_taken_0x25cfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CFE8u;
        // 0x25cfec: 0x92020002  lbu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cfe8) {
            ctx->pc = 0x25D004u;
            goto label_25d004;
        }
    }
    ctx->pc = 0x25CFF0u;
label_25cff0:
    // 0x25cff0: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x25cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cff4: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x25cff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x25cff8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x25cff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x25cffc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x25cffcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x25d000: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x25d000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_25d004:
    // 0x25d004: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x25D004u;
    {
        const bool branch_taken_0x25d004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d004) {
            ctx->pc = 0x25D008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D004u;
            // 0x25d008: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D0B4u;
            goto label_25d0b4;
        }
    }
    ctx->pc = 0x25D00Cu;
    // 0x25d00c: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x25d00cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25d010: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x25d010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x25d014: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x25D014u;
    {
        const bool branch_taken_0x25d014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x25D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D014u;
        // 0x25d018: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d014) {
            ctx->pc = 0x25D060u;
            goto label_25d060;
        }
    }
    ctx->pc = 0x25D01Cu;
    // 0x25d01c: 0x8e050034  lw          $a1, 0x34($s0)
    ctx->pc = 0x25d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25d020: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d024: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x25d024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x25d028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25d028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d02c: 0x0  nop
    ctx->pc = 0x25d02cu;
    // NOP
    // 0x25d030: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25d030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25d034: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25d034u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d038: 0x0  nop
    ctx->pc = 0x25d038u;
    // NOP
    // 0x25d03c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d03cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d040: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x25d040u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x25d044: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d048: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25d048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25d04c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x25d04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25d054: 0xaca20144  sw          $v0, 0x144($a1)
    ctx->pc = 0x25d054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 324), GPR_U32(ctx, 2));
    // 0x25d058: 0xc0c2520  jal         func_309480
    ctx->pc = 0x25D058u;
    SET_GPR_U32(ctx, 31, 0x25D060u);
    ctx->pc = 0x25D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D058u;
    // 0x25d05c: 0x8e050034  lw          $a1, 0x34($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309480u, 0x25D058u, 0x25D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D060u;
label_25d060:
    // 0x25d060: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x25d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d064: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25d064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d068: 0x0  nop
    ctx->pc = 0x25d068u;
    // NOP
    // 0x25d06c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x25d06cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d070: 0x0  nop
    ctx->pc = 0x25d070u;
    // NOP
    // 0x25d074: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x25D074u;
    {
        const bool branch_taken_0x25d074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D074u;
        // 0x25d078: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d074) {
            ctx->pc = 0x25D0B4u;
            goto label_25d0b4;
        }
    }
    ctx->pc = 0x25D07Cu;
    // 0x25d07c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25D07Cu;
    {
        const bool branch_taken_0x25d07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d07c) {
            ctx->pc = 0x25D080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D07Cu;
            // 0x25d080: 0xe63400a0  swc1        $f20, 0xA0($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D09Cu;
            goto label_25d09c;
        }
    }
    ctx->pc = 0x25D084u;
    // 0x25d084: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x25d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d088: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25d088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d08c: 0x0  nop
    ctx->pc = 0x25d08cu;
    // NOP
    // 0x25d090: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25D090u;
    {
        const bool branch_taken_0x25d090 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d090) {
            ctx->pc = 0x25D0B4u;
            goto label_25d0b4;
        }
    }
    ctx->pc = 0x25D098u;
    // 0x25d098: 0xe63400a0  swc1        $f20, 0xA0($s1)
    ctx->pc = 0x25d098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_25d09c:
    // 0x25d09c: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x25d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25d0a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d0a4: 0x0  nop
    ctx->pc = 0x25d0a4u;
    // NOP
    // 0x25d0a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25D0A8u;
    {
        const bool branch_taken_0x25d0a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d0a8) {
            ctx->pc = 0x25D0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D0A8u;
            // 0x25d0ac: 0xe62000a0  swc1        $f0, 0xA0($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D0B0u;
            goto label_25d0b0;
        }
    }
    ctx->pc = 0x25D0B0u;
label_25d0b0:
    // 0x25d0b0: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x25d0b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_25d0b4:
    // 0x25d0b4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x25D0B4u;
    {
        const bool branch_taken_0x25d0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d0b4) {
            ctx->pc = 0x25D0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D0B4u;
            // 0x25d0b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D17Cu;
            goto label_25d17c;
        }
    }
    ctx->pc = 0x25D0BCu;
    // 0x25d0bc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x25d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x25d0c0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x25d0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25d0c4: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x25d0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x25d0c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d0cc: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x25d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d0d0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x25d0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x25d0d4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x25d0d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25d0d8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0dc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x25d0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x25d0e0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x25d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d0e4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x25d0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x25d0e8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x25d0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d0ec: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x25d0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x25d0f0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x25d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d0f4: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x25d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d0f8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x25d0f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25d0fc: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x25d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d100: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x25d100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d104: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x25d104u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x25d108: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x25d108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d10c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x25d10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d110: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x25d110u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25d114: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x25d114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d118: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x25d118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d11c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x25d11cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25d120: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x25d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d124: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x25d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d128: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x25d128u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x25d12c: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x25d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25d130: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x25d130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x25d134: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x25d134u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25d138: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x25d138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x25d13c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25d13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25d140: 0x0  nop
    ctx->pc = 0x25d140u;
    // NOP
    // 0x25d144: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d148: 0x0  nop
    ctx->pc = 0x25d148u;
    // NOP
    // 0x25d14c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x25D14Cu;
    {
        const bool branch_taken_0x25d14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D14Cu;
        // 0x25d150: 0xc62000a0  lwc1        $f0, 0xA0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d14c) {
            ctx->pc = 0x25D170u;
            goto label_25d170;
        }
    }
    ctx->pc = 0x25D154u;
    // 0x25d154: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x25d154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d158: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x25d158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d15c: 0x0  nop
    ctx->pc = 0x25d15cu;
    // NOP
    // 0x25d160: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25D160u;
    {
        const bool branch_taken_0x25d160 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d160) {
            ctx->pc = 0x25D164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D160u;
            // 0x25d164: 0xe62100a0  swc1        $f1, 0xA0($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D174u;
            goto label_25d174;
        }
    }
    ctx->pc = 0x25D168u;
    // 0x25d168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D168u;
    {
        const bool branch_taken_0x25d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D168u;
        // 0x25d16c: 0xa2200038  sb          $zero, 0x38($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d168) {
            ctx->pc = 0x25D178u;
            goto label_25d178;
        }
    }
    ctx->pc = 0x25D170u;
label_25d170:
    // 0x25d170: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x25d170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
label_25d174:
    // 0x25d174: 0xa2200038  sb          $zero, 0x38($s1)
    ctx->pc = 0x25d174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 56), (uint8_t)GPR_U32(ctx, 0));
label_25d178:
    // 0x25d178: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25d178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_25d17c:
    // 0x25d17c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25d180: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25d180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d184: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25d184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25d188: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x25d188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25d18c: 0x3e00008  jr          $ra
    ctx->pc = 0x25D18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D18Cu;
        // 0x25d190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D194u;
    // 0x25d194: 0x0  nop
    ctx->pc = 0x25d194u;
    // NOP
    ctx->pc = 0x25d198u;
}
