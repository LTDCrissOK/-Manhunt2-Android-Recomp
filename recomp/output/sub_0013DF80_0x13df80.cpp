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

// Function: sub_0013DF80
// Address: 0x13df80 - 0x13e040
void sub_0013DF80_0x13df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DF80_0x13df80");
#endif

    switch (ctx->pc) {
        case 0x13df80u: goto label_13df80;
        case 0x13df84u: goto label_13df84;
        case 0x13df88u: goto label_13df88;
        case 0x13df8cu: goto label_13df8c;
        case 0x13df90u: goto label_13df90;
        case 0x13df94u: goto label_13df94;
        case 0x13df98u: goto label_13df98;
        case 0x13df9cu: goto label_13df9c;
        case 0x13dfa0u: goto label_13dfa0;
        case 0x13dfa4u: goto label_13dfa4;
        case 0x13dfa8u: goto label_13dfa8;
        case 0x13dfacu: goto label_13dfac;
        case 0x13dfb0u: goto label_13dfb0;
        case 0x13dfb4u: goto label_13dfb4;
        case 0x13dfb8u: goto label_13dfb8;
        case 0x13dfbcu: goto label_13dfbc;
        case 0x13dfc0u: goto label_13dfc0;
        case 0x13dfc4u: goto label_13dfc4;
        case 0x13dfc8u: goto label_13dfc8;
        case 0x13dfccu: goto label_13dfcc;
        case 0x13dfd0u: goto label_13dfd0;
        case 0x13dfd4u: goto label_13dfd4;
        case 0x13dfd8u: goto label_13dfd8;
        case 0x13dfdcu: goto label_13dfdc;
        case 0x13dfe0u: goto label_13dfe0;
        case 0x13dfe4u: goto label_13dfe4;
        case 0x13dfe8u: goto label_13dfe8;
        case 0x13dfecu: goto label_13dfec;
        case 0x13dff0u: goto label_13dff0;
        case 0x13dff4u: goto label_13dff4;
        case 0x13dff8u: goto label_13dff8;
        case 0x13dffcu: goto label_13dffc;
        case 0x13e000u: goto label_13e000;
        case 0x13e004u: goto label_13e004;
        case 0x13e008u: goto label_13e008;
        case 0x13e00cu: goto label_13e00c;
        case 0x13e010u: goto label_13e010;
        case 0x13e014u: goto label_13e014;
        case 0x13e018u: goto label_13e018;
        case 0x13e01cu: goto label_13e01c;
        case 0x13e020u: goto label_13e020;
        case 0x13e024u: goto label_13e024;
        case 0x13e028u: goto label_13e028;
        case 0x13e02cu: goto label_13e02c;
        case 0x13e030u: goto label_13e030;
        case 0x13e034u: goto label_13e034;
        case 0x13e038u: goto label_13e038;
        case 0x13e03cu: goto label_13e03c;
        default: break;
    }

    ctx->pc = 0x13df80u;

label_13df80:
    // 0x13df80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13df84:
    // 0x13df84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13df88:
    // 0x13df88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13df88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13df8c:
    // 0x13df8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13df8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13df90:
    // 0x13df90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13df90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13df94:
    // 0x13df94: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13df98:
    // 0x13df98: 0xc04f750  jal         func_13DD40
label_13df9c:
    if (ctx->pc == 0x13DF9Cu) {
        ctx->pc = 0x13DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF98u;
        // 0x13df9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DFA0u;
        goto label_13dfa0;
    }
    ctx->pc = 0x13DF98u;
    SET_GPR_U32(ctx, 31, 0x13DFA0u);
    ctx->pc = 0x13DF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DF98u;
    // 0x13df9c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x13DF98u, 0x13DFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFA0u;
label_13dfa0:
    // 0x13dfa0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13dfa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13dfa4:
    // 0x13dfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13dfa8:
    // 0x13dfa8: 0xc04f8e6  jal         func_13E398
label_13dfac:
    if (ctx->pc == 0x13DFACu) {
        ctx->pc = 0x13DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFA8u;
        // 0x13dfac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DFB0u;
        goto label_13dfb0;
    }
    ctx->pc = 0x13DFA8u;
    SET_GPR_U32(ctx, 31, 0x13DFB0u);
    ctx->pc = 0x13DFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DFA8u;
    // 0x13dfac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x13DFA8u, 0x13DFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DFB0u;
label_13dfb0:
    // 0x13dfb0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_13dfb4:
    if (ctx->pc == 0x13DFB4u) {
        ctx->pc = 0x13DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFB0u;
        // 0x13dfb4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DFB8u;
        goto label_13dfb8;
    }
    ctx->pc = 0x13DFB0u;
    {
        const bool branch_taken_0x13dfb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFB0u;
        // 0x13dfb4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dfb0) {
            ctx->pc = 0x13DFD0u;
            goto label_13dfd0;
        }
    }
    ctx->pc = 0x13DFB8u;
label_13dfb8:
    // 0x13dfb8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13dfbc:
    // 0x13dfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13dfc0:
    // 0x13dfc0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x13dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_13dfc4:
    // 0x13dfc4: 0x40f809  jalr        $v0
label_13dfc8:
    if (ctx->pc == 0x13DFC8u) {
        ctx->pc = 0x13DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFC4u;
        // 0x13dfc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DFCCu;
        goto label_13dfcc;
    }
    ctx->pc = 0x13DFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13DFCCu);
        ctx->pc = 0x13DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFC4u;
        // 0x13dfc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DFC4u, 0x13DFCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DFCCu;
label_13dfcc:
    // 0x13dfcc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_13dfd0:
    // 0x13dfd0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x13dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_13dfd4:
    // 0x13dfd4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13dfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
label_13dfd8:
    // 0x13dfd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dfd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13dfdc:
    // 0x13dfdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13dfe0:
    // 0x13dfe0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x13dfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_13dfe4:
    // 0x13dfe4: 0xac600214  sw          $zero, 0x214($v1)
    ctx->pc = 0x13dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 0));
label_13dfe8:
    // 0x13dfe8: 0xac60020c  sw          $zero, 0x20C($v1)
    ctx->pc = 0x13dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 524), GPR_U32(ctx, 0));
label_13dfec:
    // 0x13dfec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13dff0:
    // 0x13dff0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x13dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_13dff4:
    // 0x13dff4: 0x60f809  jalr        $v1
label_13dff8:
    if (ctx->pc == 0x13DFF8u) {
        ctx->pc = 0x13DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFF4u;
        // 0x13dff8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DFFCu;
        goto label_13dffc;
    }
    ctx->pc = 0x13DFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13DFFCu);
        ctx->pc = 0x13DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DFF4u;
        // 0x13dff8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DFF4u, 0x13DFFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DFFCu;
label_13dffc:
    // 0x13dffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13e000:
    // 0x13e000: 0xc04f74a  jal         func_13DD28
label_13e004:
    if (ctx->pc == 0x13E004u) {
        ctx->pc = 0x13E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E000u;
        // 0x13e004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E008u;
        goto label_13e008;
    }
    ctx->pc = 0x13E000u;
    SET_GPR_U32(ctx, 31, 0x13E008u);
    ctx->pc = 0x13E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E000u;
    // 0x13e004: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x13E000u, 0x13E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E008u;
label_13e008:
    // 0x13e008: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x13e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13e00c:
    // 0x13e00c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13e00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13e010:
    // 0x13e010: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x13e010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_13e014:
    // 0x13e014: 0x60f809  jalr        $v1
label_13e018:
    if (ctx->pc == 0x13E018u) {
        ctx->pc = 0x13E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E014u;
        // 0x13e018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E01Cu;
        goto label_13e01c;
    }
    ctx->pc = 0x13E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13E01Cu);
        ctx->pc = 0x13E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E014u;
        // 0x13e018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E014u, 0x13E01Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13E01Cu;
label_13e01c:
    // 0x13e01c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x13e01cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_13e020:
    // 0x13e020: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13e020u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13e024:
    // 0x13e024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_13e028:
    // 0x13e028: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13e028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13e02c:
    // 0x13e02c: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x13e02cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_13e030:
    // 0x13e030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e034:
    // 0x13e034: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13e034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13e038:
    // 0x13e038: 0x3e00008  jr          $ra
label_13e03c:
    if (ctx->pc == 0x13E03Cu) {
        ctx->pc = 0x13E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E038u;
        // 0x13e03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13E040u;
        goto label_fallthrough_0x13e038;
    }
    ctx->pc = 0x13E038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E038u;
        // 0x13e03c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13e038:
    ctx->pc = 0x13E040u;
}
