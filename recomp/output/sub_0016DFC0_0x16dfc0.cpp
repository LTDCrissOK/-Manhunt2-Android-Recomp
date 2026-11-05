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

// Function: sub_0016DFC0
// Address: 0x16dfc0 - 0x16e068
void sub_0016DFC0_0x16dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DFC0_0x16dfc0");
#endif

    switch (ctx->pc) {
        case 0x16dfc0u: goto label_16dfc0;
        case 0x16dfc4u: goto label_16dfc4;
        case 0x16dfc8u: goto label_16dfc8;
        case 0x16dfccu: goto label_16dfcc;
        case 0x16dfd0u: goto label_16dfd0;
        case 0x16dfd4u: goto label_16dfd4;
        case 0x16dfd8u: goto label_16dfd8;
        case 0x16dfdcu: goto label_16dfdc;
        case 0x16dfe0u: goto label_16dfe0;
        case 0x16dfe4u: goto label_16dfe4;
        case 0x16dfe8u: goto label_16dfe8;
        case 0x16dfecu: goto label_16dfec;
        case 0x16dff0u: goto label_16dff0;
        case 0x16dff4u: goto label_16dff4;
        case 0x16dff8u: goto label_16dff8;
        case 0x16dffcu: goto label_16dffc;
        case 0x16e000u: goto label_16e000;
        case 0x16e004u: goto label_16e004;
        case 0x16e008u: goto label_16e008;
        case 0x16e00cu: goto label_16e00c;
        case 0x16e010u: goto label_16e010;
        case 0x16e014u: goto label_16e014;
        case 0x16e018u: goto label_16e018;
        case 0x16e01cu: goto label_16e01c;
        case 0x16e020u: goto label_16e020;
        case 0x16e024u: goto label_16e024;
        case 0x16e028u: goto label_16e028;
        case 0x16e02cu: goto label_16e02c;
        case 0x16e030u: goto label_16e030;
        case 0x16e034u: goto label_16e034;
        case 0x16e038u: goto label_16e038;
        case 0x16e03cu: goto label_16e03c;
        case 0x16e040u: goto label_16e040;
        case 0x16e044u: goto label_16e044;
        case 0x16e048u: goto label_16e048;
        case 0x16e04cu: goto label_16e04c;
        case 0x16e050u: goto label_16e050;
        case 0x16e054u: goto label_16e054;
        case 0x16e058u: goto label_16e058;
        case 0x16e05cu: goto label_16e05c;
        case 0x16e060u: goto label_16e060;
        case 0x16e064u: goto label_16e064;
        default: break;
    }

    ctx->pc = 0x16dfc0u;

label_16dfc0:
    // 0x16dfc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16dfc4:
    // 0x16dfc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16dfc8:
    // 0x16dfc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16dfcc:
    // 0x16dfcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dfd0:
    // 0x16dfd0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_16dfd4:
    if (ctx->pc == 0x16DFD4u) {
        ctx->pc = 0x16DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFD0u;
        // 0x16dfd4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFD8u;
        goto label_16dfd8;
    }
    ctx->pc = 0x16DFD0u;
    {
        const bool branch_taken_0x16dfd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFD0u;
        // 0x16dfd4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfd0) {
            ctx->pc = 0x16DFE8u;
            goto label_16dfe8;
        }
    }
    ctx->pc = 0x16DFD8u;
label_16dfd8:
    // 0x16dfd8: 0xc05b81a  jal         func_16E068
label_16dfdc:
    if (ctx->pc == 0x16DFDCu) {
        ctx->pc = 0x16DFE0u;
        goto label_16dfe0;
    }
    ctx->pc = 0x16DFD8u;
    SET_GPR_U32(ctx, 31, 0x16DFE0u);
    ctx->pc = 0x16E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E068u, 0x16DFD8u, 0x16DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFE0u;
label_16dfe0:
    // 0x16dfe0: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_16dfe4:
    if (ctx->pc == 0x16DFE4u) {
        ctx->pc = 0x16DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFE0u;
        // 0x16dfe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFE8u;
        goto label_16dfe8;
    }
    ctx->pc = 0x16DFE0u;
    {
        const bool branch_taken_0x16dfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFE0u;
        // 0x16dfe4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfe0) {
            ctx->pc = 0x16E054u;
            goto label_16e054;
        }
    }
    ctx->pc = 0x16DFE8u;
label_16dfe8:
    // 0x16dfe8: 0xc04f9a4  jal         func_13E690
label_16dfec:
    if (ctx->pc == 0x16DFECu) {
        ctx->pc = 0x16DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFE8u;
        // 0x16dfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DFF0u;
        goto label_16dff0;
    }
    ctx->pc = 0x16DFE8u;
    SET_GPR_U32(ctx, 31, 0x16DFF0u);
    ctx->pc = 0x16DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFE8u;
    // 0x16dfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16DFE8u, 0x16DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFF0u;
label_16dff0:
    // 0x16dff0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x16dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16dff4:
    // 0x16dff4: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16dff8:
    // 0x16dff8: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x16dff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_16dffc:
    // 0x16dffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e000:
    // 0x16e000: 0xc04f8fc  jal         func_13E3F0
label_16e004:
    if (ctx->pc == 0x16E004u) {
        ctx->pc = 0x16E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E000u;
        // 0x16e004: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E008u;
        goto label_16e008;
    }
    ctx->pc = 0x16E000u;
    SET_GPR_U32(ctx, 31, 0x16E008u);
    ctx->pc = 0x16E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E000u;
    // 0x16e004: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E000u, 0x16E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E008u;
label_16e008:
    // 0x16e008: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_16e00c:
    // 0x16e00c: 0xc05a5fe  jal         func_1697F8
label_16e010:
    if (ctx->pc == 0x16E010u) {
        ctx->pc = 0x16E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E00Cu;
        // 0x16e010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E014u;
        goto label_16e014;
    }
    ctx->pc = 0x16E00Cu;
    SET_GPR_U32(ctx, 31, 0x16E014u);
    ctx->pc = 0x16E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E00Cu;
    // 0x16e010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16E00Cu, 0x16E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E014u;
label_16e014:
    // 0x16e014: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e018:
    // 0x16e018: 0xc0461e8  jal         func_1187A0
label_16e01c:
    if (ctx->pc == 0x16E01Cu) {
        ctx->pc = 0x16E01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E018u;
        // 0x16e01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E020u;
        goto label_16e020;
    }
    ctx->pc = 0x16E018u;
    SET_GPR_U32(ctx, 31, 0x16E020u);
    ctx->pc = 0x16E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E018u;
    // 0x16e01c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16E018u, 0x16E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E020u;
label_16e020:
    // 0x16e020: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16e020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_16e024:
    // 0x16e024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e028:
    // 0x16e028: 0xc046330  jal         func_118CC0
label_16e02c:
    if (ctx->pc == 0x16E02Cu) {
        ctx->pc = 0x16E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E028u;
        // 0x16e02c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E030u;
        goto label_16e030;
    }
    ctx->pc = 0x16E028u;
    SET_GPR_U32(ctx, 31, 0x16E030u);
    ctx->pc = 0x16E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E028u;
    // 0x16e02c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x16E028u, 0x16E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E030u;
label_16e030:
    // 0x16e030: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x16e030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_16e034:
    // 0x16e034: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16e034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e038:
    // 0x16e038: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e03c:
    // 0x16e03c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16e040:
    // 0x16e040: 0x40f809  jalr        $v0
label_16e044:
    if (ctx->pc == 0x16E044u) {
        ctx->pc = 0x16E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E040u;
        // 0x16e044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E048u;
        goto label_16e048;
    }
    ctx->pc = 0x16E040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E048u);
        ctx->pc = 0x16E044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E040u;
        // 0x16e044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E040u, 0x16E048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E048u;
label_16e048:
    // 0x16e048: 0xc05bdae  jal         func_16F6B8
label_16e04c:
    if (ctx->pc == 0x16E04Cu) {
        ctx->pc = 0x16E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E048u;
        // 0x16e04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E050u;
        goto label_16e050;
    }
    ctx->pc = 0x16E048u;
    SET_GPR_U32(ctx, 31, 0x16E050u);
    ctx->pc = 0x16E04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E048u;
    // 0x16e04c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F6B8u, 0x16E048u, 0x16E050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E050u;
label_16e050:
    // 0x16e050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e054:
    // 0x16e054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e058:
    // 0x16e058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16e058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e05c:
    // 0x16e05c: 0x3e00008  jr          $ra
label_16e060:
    if (ctx->pc == 0x16E060u) {
        ctx->pc = 0x16E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E05Cu;
        // 0x16e060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E064u;
        goto label_16e064;
    }
    ctx->pc = 0x16E05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E05Cu;
        // 0x16e060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E064u;
label_16e064:
    // 0x16e064: 0x0  nop
    ctx->pc = 0x16e064u;
    // NOP
    ctx->pc = 0x16e068u;
}
