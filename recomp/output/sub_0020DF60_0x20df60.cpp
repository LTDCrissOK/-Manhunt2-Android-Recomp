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

// Function: sub_0020DF60
// Address: 0x20df60 - 0x20e150
void sub_0020DF60_0x20df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DF60_0x20df60");
#endif

    switch (ctx->pc) {
        case 0x20df90u: goto label_20df90;
        case 0x20dfa4u: goto label_20dfa4;
        case 0x20e000u: goto label_20e000;
        case 0x20e044u: goto label_20e044;
        default: break;
    }

    ctx->pc = 0x20df60u;

    // 0x20df60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20df64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20df68: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x20df68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x20df6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20df6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20df74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20df74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df78: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20df78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20df7c: 0x24a513e8  addiu       $a1, $a1, 0x13E8
    ctx->pc = 0x20df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5096));
    // 0x20df80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20df80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20df88: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x20DF88u;
    SET_GPR_U32(ctx, 31, 0x20DF90u);
    ctx->pc = 0x20DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF88u;
    // 0x20df8c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x20DF88u, 0x20DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DF90u;
label_20df90:
    // 0x20df90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20df90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20df94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20df94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20df98: 0x24a513f0  addiu       $a1, $a1, 0x13F0
    ctx->pc = 0x20df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5104));
    // 0x20df9c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x20DF9Cu;
    SET_GPR_U32(ctx, 31, 0x20DFA4u);
    ctx->pc = 0x20DFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DF9Cu;
    // 0x20dfa0: 0x26060180  addiu       $a2, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x20DF9Cu, 0x20DFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DFA4u;
label_20dfa4:
    // 0x20dfa4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20DFA4u;
    {
        const bool branch_taken_0x20dfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFA4u;
        // 0x20dfa8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfa4) {
            ctx->pc = 0x20DFECu;
            goto label_20dfec;
        }
    }
    ctx->pc = 0x20DFACu;
    // 0x20dfac: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x20dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20dfb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20dfb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20dfb4: 0x0  nop
    ctx->pc = 0x20dfb4u;
    // NOP
    // 0x20dfb8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20dfb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20dfbc: 0x0  nop
    ctx->pc = 0x20dfbcu;
    // NOP
    // 0x20dfc0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20DFC0u;
    {
        const bool branch_taken_0x20dfc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFC0u;
        // 0x20dfc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfc0) {
            ctx->pc = 0x20DFCCu;
            goto label_20dfcc;
        }
    }
    ctx->pc = 0x20DFC8u;
    // 0x20dfc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20dfc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20dfcc:
    // 0x20dfcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DFCCu;
    {
        const bool branch_taken_0x20dfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFCCu;
        // 0x20dfd0: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfcc) {
            ctx->pc = 0x20DFDCu;
            goto label_20dfdc;
        }
    }
    ctx->pc = 0x20DFD4u;
    // 0x20dfd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20DFD4u;
    {
        const bool branch_taken_0x20dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DFD4u;
        // 0x20dfd8: 0x34422000  ori         $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dfd4) {
            ctx->pc = 0x20DFE4u;
            goto label_20dfe4;
        }
    }
    ctx->pc = 0x20DFDCu;
label_20dfdc:
    // 0x20dfdc: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x20dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x20dfe0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20dfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20dfe4:
    // 0x20dfe4: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x20dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x20dfe8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_20dfec:
    // 0x20dfec: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x20dfecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x20dff0: 0x24a513f8  addiu       $a1, $a1, 0x13F8
    ctx->pc = 0x20dff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5112));
    // 0x20dff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20dff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dff8: 0xc0b5d8e  jal         func_2D7638
    ctx->pc = 0x20DFF8u;
    SET_GPR_U32(ctx, 31, 0x20E000u);
    ctx->pc = 0x20DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DFF8u;
    // 0x20dffc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7638u, 0x20DFF8u, 0x20E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E000u;
label_20e000:
    // 0x20e000: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x20e000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e004: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20E004u;
    {
        const bool branch_taken_0x20e004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E004u;
        // 0x20e008: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e004) {
            ctx->pc = 0x20E01Cu;
            goto label_20e01c;
        }
    }
    ctx->pc = 0x20E00Cu;
    // 0x20e00c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x20e010: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20e010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20e014: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20E014u;
    {
        const bool branch_taken_0x20e014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E014u;
        // 0x20e018: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e014) {
            ctx->pc = 0x20E030u;
            goto label_20e030;
        }
    }
    ctx->pc = 0x20E01Cu;
label_20e01c:
    // 0x20e01c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20e01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x20e020: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x20e020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
    // 0x20e024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20e024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20e028: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x20e028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x20e02c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x20e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_20e030:
    // 0x20e030: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x20e030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x20e034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20e034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e038: 0x24a51408  addiu       $a1, $a1, 0x1408
    ctx->pc = 0x20e038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5128));
    // 0x20e03c: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x20E03Cu;
    SET_GPR_U32(ctx, 31, 0x20E044u);
    ctx->pc = 0x20E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E03Cu;
    // 0x20e040: 0x26060184  addiu       $a2, $s0, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x20E03Cu, 0x20E044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E044u;
label_20e044:
    // 0x20e044: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20E044u;
    {
        const bool branch_taken_0x20e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E044u;
        // 0x20e048: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e044) {
            ctx->pc = 0x20E08Cu;
            goto label_20e08c;
        }
    }
    ctx->pc = 0x20E04Cu;
    // 0x20e04c: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x20e04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20e050: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20e050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e054: 0x0  nop
    ctx->pc = 0x20e054u;
    // NOP
    // 0x20e058: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x20e058u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20e05c: 0x0  nop
    ctx->pc = 0x20e05cu;
    // NOP
    // 0x20e060: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x20E060u;
    {
        const bool branch_taken_0x20e060 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E060u;
        // 0x20e064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e060) {
            ctx->pc = 0x20E06Cu;
            goto label_20e06c;
        }
    }
    ctx->pc = 0x20E068u;
    // 0x20e068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20e068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20e06c:
    // 0x20e06c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E06Cu;
    {
        const bool branch_taken_0x20e06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E06Cu;
        // 0x20e070: 0x8e0200c0  lw          $v0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e06c) {
            ctx->pc = 0x20E07Cu;
            goto label_20e07c;
        }
    }
    ctx->pc = 0x20E074u;
    // 0x20e074: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20E074u;
    {
        const bool branch_taken_0x20e074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E074u;
        // 0x20e078: 0x34424000  ori         $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e074) {
            ctx->pc = 0x20E084u;
            goto label_20e084;
        }
    }
    ctx->pc = 0x20E07Cu;
label_20e07c:
    // 0x20e07c: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x20e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x20e080: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20e080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20e084:
    // 0x20e084: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x20e084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x20e088: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x20e088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20e08c:
    // 0x20e08c: 0x5080002c  beql        $a0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x20E08Cu;
    {
        const bool branch_taken_0x20e08c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e08c) {
            ctx->pc = 0x20E090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E08Cu;
            // 0x20e090: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E140u;
            goto label_20e140;
        }
    }
    ctx->pc = 0x20E094u;
    // 0x20e094: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20E094u;
    {
        const bool branch_taken_0x20e094 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x20E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E094u;
        // 0x20e098: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e094) {
            ctx->pc = 0x20E0ECu;
            goto label_20e0ec;
        }
    }
    ctx->pc = 0x20E09Cu;
    // 0x20e09c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20e09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20e0a0: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x20e0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x20e0a4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E0A4u;
    {
        const bool branch_taken_0x20e0a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x20E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0A4u;
        // 0x20e0a8: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0a4) {
            ctx->pc = 0x20E0C0u;
            goto label_20e0c0;
        }
    }
    ctx->pc = 0x20E0ACu;
    // 0x20e0ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20e0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20e0b0: 0x0  nop
    ctx->pc = 0x20e0b0u;
    // NOP
    // 0x20e0b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20e0b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20e0b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20E0B8u;
    {
        const bool branch_taken_0x20e0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e0b8) {
            ctx->pc = 0x20E0D8u;
            goto label_20e0d8;
        }
    }
    ctx->pc = 0x20E0C0u;
label_20e0c0:
    // 0x20e0c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x20e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x20e0c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20e0c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20e0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20e0cc: 0x0  nop
    ctx->pc = 0x20e0ccu;
    // NOP
    // 0x20e0d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20e0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20e0d4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20e0d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20e0d8:
    // 0x20e0d8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x20e0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x20e0dc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20e0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x20e0e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20e0e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x20E0E4u;
    {
        const bool branch_taken_0x20e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0E4u;
        // 0x20e0e8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0e4) {
            ctx->pc = 0x20E138u;
            goto label_20e138;
        }
    }
    ctx->pc = 0x20E0ECu;
label_20e0ec:
    // 0x20e0ec: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20E0ECu;
    {
        const bool branch_taken_0x20e0ec = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x20E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E0ECu;
        // 0x20e0f0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e0ec) {
            ctx->pc = 0x20E108u;
            goto label_20e108;
        }
    }
    ctx->pc = 0x20E0F4u;
    // 0x20e0f4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x20e0f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20e0f8: 0x0  nop
    ctx->pc = 0x20e0f8u;
    // NOP
    // 0x20e0fc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20e0fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e100: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20E100u;
    {
        const bool branch_taken_0x20e100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E100u;
        // 0x20e104: 0xc60000d0  lwc1        $f0, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e100) {
            ctx->pc = 0x20E124u;
            goto label_20e124;
        }
    }
    ctx->pc = 0x20E108u;
label_20e108:
    // 0x20e108: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x20e108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x20e10c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20e10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20e110: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20e110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20e114: 0x0  nop
    ctx->pc = 0x20e114u;
    // NOP
    // 0x20e118: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x20e118u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x20e11c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x20e11cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x20e120: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x20e120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20e124:
    // 0x20e124: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x20e124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x20e128: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20e128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x20e12c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20e12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20e130: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20e130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20e134: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20e134u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_20e138:
    // 0x20e138: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x20e138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x20e13c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20e13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20e140:
    // 0x20e140: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20e140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20e144: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20e144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20e148: 0x3e00008  jr          $ra
    ctx->pc = 0x20E148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E148u;
        // 0x20e14c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E150u;
}
