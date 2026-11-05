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

// Function: sub_0013AFD8
// Address: 0x13afd8 - 0x13b0c0
void sub_0013AFD8_0x13afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AFD8_0x13afd8");
#endif

    switch (ctx->pc) {
        case 0x13afd8u: goto label_13afd8;
        case 0x13afdcu: goto label_13afdc;
        case 0x13afe0u: goto label_13afe0;
        case 0x13afe4u: goto label_13afe4;
        case 0x13afe8u: goto label_13afe8;
        case 0x13afecu: goto label_13afec;
        case 0x13aff0u: goto label_13aff0;
        case 0x13aff4u: goto label_13aff4;
        case 0x13aff8u: goto label_13aff8;
        case 0x13affcu: goto label_13affc;
        case 0x13b000u: goto label_13b000;
        case 0x13b004u: goto label_13b004;
        case 0x13b008u: goto label_13b008;
        case 0x13b00cu: goto label_13b00c;
        case 0x13b010u: goto label_13b010;
        case 0x13b014u: goto label_13b014;
        case 0x13b018u: goto label_13b018;
        case 0x13b01cu: goto label_13b01c;
        case 0x13b020u: goto label_13b020;
        case 0x13b024u: goto label_13b024;
        case 0x13b028u: goto label_13b028;
        case 0x13b02cu: goto label_13b02c;
        case 0x13b030u: goto label_13b030;
        case 0x13b034u: goto label_13b034;
        case 0x13b038u: goto label_13b038;
        case 0x13b03cu: goto label_13b03c;
        case 0x13b040u: goto label_13b040;
        case 0x13b044u: goto label_13b044;
        case 0x13b048u: goto label_13b048;
        case 0x13b04cu: goto label_13b04c;
        case 0x13b050u: goto label_13b050;
        case 0x13b054u: goto label_13b054;
        case 0x13b058u: goto label_13b058;
        case 0x13b05cu: goto label_13b05c;
        case 0x13b060u: goto label_13b060;
        case 0x13b064u: goto label_13b064;
        case 0x13b068u: goto label_13b068;
        case 0x13b06cu: goto label_13b06c;
        case 0x13b070u: goto label_13b070;
        case 0x13b074u: goto label_13b074;
        case 0x13b078u: goto label_13b078;
        case 0x13b07cu: goto label_13b07c;
        case 0x13b080u: goto label_13b080;
        case 0x13b084u: goto label_13b084;
        case 0x13b088u: goto label_13b088;
        case 0x13b08cu: goto label_13b08c;
        case 0x13b090u: goto label_13b090;
        case 0x13b094u: goto label_13b094;
        case 0x13b098u: goto label_13b098;
        case 0x13b09cu: goto label_13b09c;
        case 0x13b0a0u: goto label_13b0a0;
        case 0x13b0a4u: goto label_13b0a4;
        case 0x13b0a8u: goto label_13b0a8;
        case 0x13b0acu: goto label_13b0ac;
        case 0x13b0b0u: goto label_13b0b0;
        case 0x13b0b4u: goto label_13b0b4;
        case 0x13b0b8u: goto label_13b0b8;
        case 0x13b0bcu: goto label_13b0bc;
        default: break;
    }

    ctx->pc = 0x13afd8u;

label_13afd8:
    // 0x13afd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13afdc:
    // 0x13afdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13afe0:
    // 0x13afe0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13afe4:
    // 0x13afe4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13afe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13afe8:
    // 0x13afe8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13afe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_13afec:
    // 0x13afec: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13afecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_13aff0:
    // 0x13aff0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x13aff0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13aff4:
    // 0x13aff4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13aff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13aff8:
    // 0x13aff8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13affc:
    // 0x13affc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13affcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13b000:
    // 0x13b000: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b004:
    // 0x13b004: 0xc04eb7a  jal         func_13ADE8
label_13b008:
    if (ctx->pc == 0x13B008u) {
        ctx->pc = 0x13B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B004u;
        // 0x13b008: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B00Cu;
        goto label_13b00c;
    }
    ctx->pc = 0x13B004u;
    SET_GPR_U32(ctx, 31, 0x13B00Cu);
    ctx->pc = 0x13B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B004u;
    // 0x13b008: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ADE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADE8u, 0x13B004u, 0x13B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B00Cu;
label_13b00c:
    // 0x13b00c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_13b010:
    if (ctx->pc == 0x13B010u) {
        ctx->pc = 0x13B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B00Cu;
        // 0x13b010: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B014u;
        goto label_13b014;
    }
    ctx->pc = 0x13B00Cu;
    {
        const bool branch_taken_0x13b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B00Cu;
        // 0x13b010: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b00c) {
            ctx->pc = 0x13B0A0u;
            goto label_13b0a0;
        }
    }
    ctx->pc = 0x13B014u;
label_13b014:
    // 0x13b014: 0xc04eafe  jal         func_13ABF8
label_13b018:
    if (ctx->pc == 0x13B018u) {
        ctx->pc = 0x13B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B014u;
        // 0x13b018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B01Cu;
        goto label_13b01c;
    }
    ctx->pc = 0x13B014u;
    SET_GPR_U32(ctx, 31, 0x13B01Cu);
    ctx->pc = 0x13B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B014u;
    // 0x13b018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABF8u, 0x13B014u, 0x13B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B01Cu;
label_13b01c:
    // 0x13b01c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_13b020:
    // 0x13b020: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b024:
    // 0x13b024: 0x8c66a9d4  lw          $a2, -0x562C($v1)
    ctx->pc = 0x13b024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
label_13b028:
    // 0x13b028: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13b02c:
    // 0x13b02c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13b02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_13b030:
    // 0x13b030: 0x468026  xor         $s0, $v0, $a2
    ctx->pc = 0x13b030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_13b034:
    // 0x13b034: 0xc04eaf6  jal         func_13ABD8
label_13b038:
    if (ctx->pc == 0x13B038u) {
        ctx->pc = 0x13B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B034u;
        // 0x13b038: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B03Cu;
        goto label_13b03c;
    }
    ctx->pc = 0x13B034u;
    SET_GPR_U32(ctx, 31, 0x13B03Cu);
    ctx->pc = 0x13B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B034u;
    // 0x13b038: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ABD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ABD8u, 0x13B034u, 0x13B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B03Cu;
label_13b03c:
    // 0x13b03c: 0x16000019  bnez        $s0, . + 4 + (0x19 << 2)
label_13b040:
    if (ctx->pc == 0x13B040u) {
        ctx->pc = 0x13B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B03Cu;
        // 0x13b040: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B044u;
        goto label_13b044;
    }
    ctx->pc = 0x13B03Cu;
    {
        const bool branch_taken_0x13b03c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B03Cu;
        // 0x13b040: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b03c) {
            ctx->pc = 0x13B0A4u;
            goto label_13b0a4;
        }
    }
    ctx->pc = 0x13B044u;
label_13b044:
    // 0x13b044: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x13b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_13b048:
    // 0x13b048: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13b048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_13b04c:
    // 0x13b04c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x13b04cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
label_13b050:
    // 0x13b050: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13b054:
    // 0x13b054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13b058:
    // 0x13b058: 0x26319a08  addiu       $s1, $s1, -0x65F8
    ctx->pc = 0x13b058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941192));
label_13b05c:
    // 0x13b05c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13b05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13b060:
    // 0x13b060: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x13b060u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13b064:
    // 0x13b064: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x13b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_13b068:
    // 0x13b068: 0xc043cb0  jal         func_10F2C0
label_13b06c:
    if (ctx->pc == 0x13B06Cu) {
        ctx->pc = 0x13B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B068u;
        // 0x13b06c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B070u;
        goto label_13b070;
    }
    ctx->pc = 0x13B068u;
    SET_GPR_U32(ctx, 31, 0x13B070u);
    ctx->pc = 0x13B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B068u;
    // 0x13b06c: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2C0u, 0x13B068u, 0x13B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B070u;
label_13b070:
    // 0x13b070: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x13b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_13b074:
    // 0x13b074: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x13b074u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_13b078:
    // 0x13b078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13b078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13b07c:
    // 0x13b07c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x13b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13b080:
    // 0x13b080: 0x40f809  jalr        $v0
label_13b084:
    if (ctx->pc == 0x13B084u) {
        ctx->pc = 0x13B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B080u;
        // 0x13b084: 0x8e320108  lw          $s2, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B088u;
        goto label_13b088;
    }
    ctx->pc = 0x13B080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B088u);
        ctx->pc = 0x13B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B080u;
        // 0x13b084: 0x8e320108  lw          $s2, 0x108($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B080u, 0x13B088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13B088u;
label_13b088:
    // 0x13b088: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13b088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13b08c:
    // 0x13b08c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13b08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13b090:
    // 0x13b090: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x13b090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_13b094:
    // 0x13b094: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x13b094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13b098:
    // 0x13b098: 0xc04668a  jal         func_119A28
label_13b09c:
    if (ctx->pc == 0x13B09Cu) {
        ctx->pc = 0x13B09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B098u;
        // 0x13b09c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B0A0u;
        goto label_13b0a0;
    }
    ctx->pc = 0x13B098u;
    SET_GPR_U32(ctx, 31, 0x13B0A0u);
    ctx->pc = 0x13B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B098u;
    // 0x13b09c: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x13B098u, 0x13B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0A0u;
label_13b0a0:
    // 0x13b0a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13b0a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13b0a4:
    // 0x13b0a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13b0a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13b0a8:
    // 0x13b0a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13b0a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13b0ac:
    // 0x13b0ac: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13b0acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13b0b0:
    // 0x13b0b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13b0b4:
    // 0x13b0b4: 0x3e00008  jr          $ra
label_13b0b8:
    if (ctx->pc == 0x13B0B8u) {
        ctx->pc = 0x13B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0B4u;
        // 0x13b0b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13B0BCu;
        goto label_13b0bc;
    }
    ctx->pc = 0x13B0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B0B4u;
        // 0x13b0b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B0BCu;
label_13b0bc:
    // 0x13b0bc: 0x0  nop
    ctx->pc = 0x13b0bcu;
    // NOP
    ctx->pc = 0x13b0c0u;
}
