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

// Function: sub_001EBE70
// Address: 0x1ebe70 - 0x1ebf90
void sub_001EBE70_0x1ebe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE70_0x1ebe70");
#endif

    switch (ctx->pc) {
        case 0x1ebf30u: goto label_1ebf30;
        case 0x1ebf44u: goto label_1ebf44;
        case 0x1ebf58u: goto label_1ebf58;
        case 0x1ebf68u: goto label_1ebf68;
        case 0x1ebf70u: goto label_1ebf70;
        default: break;
    }

    ctx->pc = 0x1ebe70u;

    // 0x1ebe70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ebe74: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ebe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ebe78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1ebe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1ebe7c: 0x34038420  ori         $v1, $zero, 0x8420
    ctx->pc = 0x1ebe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ebe80: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x1ebe80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ebe84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ebe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ebe88: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1ebe88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ebe8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1ebe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1ebe90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ebe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ebe94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ebe94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebe98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ebe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ebe9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebea0: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1ebea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ebea4: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1ebea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebea8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1ebea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1ebeac: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1EBEACu;
    {
        const bool branch_taken_0x1ebeac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEACu;
        // 0x1ebeb0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebeac) {
            ctx->pc = 0x1EBF74u;
            goto label_1ebf74;
        }
    }
    ctx->pc = 0x1EBEB4u;
    // 0x1ebeb4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1ebeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1ebeb8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBEB8u;
    {
        const bool branch_taken_0x1ebeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ebeb8) {
            ctx->pc = 0x1EBEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBEB8u;
            // 0x1ebebc: 0x8e230044  lw          $v1, 0x44($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBED4u;
            goto label_1ebed4;
        }
    }
    ctx->pc = 0x1EBEC0u;
    // 0x1ebec0: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1ebec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1ebec4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebec8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1ebec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1ebecc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1EBECCu;
    {
        const bool branch_taken_0x1ebecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBECCu;
        // 0x1ebed0: 0xa2230000  sb          $v1, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebecc) {
            ctx->pc = 0x1EBF74u;
            goto label_1ebf74;
        }
    }
    ctx->pc = 0x1EBED4u;
label_1ebed4:
    // 0x1ebed4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ebed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ebed8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1ebed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1ebedc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebee0: 0x9043018c  lbu         $v1, 0x18C($v0)
    ctx->pc = 0x1ebee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x1ebee4: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EBEE4u;
    {
        const bool branch_taken_0x1ebee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1EBEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEE4u;
        // 0x1ebee8: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebee4) {
            ctx->pc = 0x1EBF14u;
            goto label_1ebf14;
        }
    }
    ctx->pc = 0x1EBEECu;
    // 0x1ebeec: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBEECu;
    {
        const bool branch_taken_0x1ebeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBEECu;
        // 0x1ebef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebeec) {
            ctx->pc = 0x1EBF0Cu;
            goto label_1ebf0c;
        }
    }
    ctx->pc = 0x1EBEF4u;
    // 0x1ebef4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ebef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ebef8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EBEF8u;
    {
        const bool branch_taken_0x1ebef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ebef8) {
            ctx->pc = 0x1EBEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EBEF8u;
            // 0x1ebefc: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EBF18u;
            goto label_1ebf18;
        }
    }
    ctx->pc = 0x1EBF00u;
    // 0x1ebf00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebf04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1EBF04u;
    {
        const bool branch_taken_0x1ebf04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF04u;
        // 0x1ebf08: 0xa2220048  sb          $v0, 0x48($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf04) {
            ctx->pc = 0x1EBF70u;
            goto label_1ebf70;
        }
    }
    ctx->pc = 0x1EBF0Cu;
label_1ebf0c:
    // 0x1ebf0c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EBF0Cu;
    {
        const bool branch_taken_0x1ebf0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF0Cu;
        // 0x1ebf10: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf0c) {
            ctx->pc = 0x1EBF74u;
            goto label_1ebf74;
        }
    }
    ctx->pc = 0x1EBF14u;
label_1ebf14:
    // 0x1ebf14: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1ebf14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebf18:
    // 0x1ebf18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebf18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf1c: 0x92300040  lbu         $s0, 0x40($s1)
    ctx->pc = 0x1ebf1cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1ebf20: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1ebf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1ebf24: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ebf24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ebf28: 0xc07af10  jal         func_1EBC40
    ctx->pc = 0x1EBF28u;
    SET_GPR_U32(ctx, 31, 0x1EBF30u);
    ctx->pc = 0x1EBF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF28u;
    // 0x1ebf2c: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC40u, 0x1EBF28u, 0x1EBF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF30u;
label_1ebf30:
    // 0x1ebf30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ebf30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ebf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ebf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebf3c: 0xc07af1e  jal         func_1EBC78
    ctx->pc = 0x1EBF3Cu;
    SET_GPR_U32(ctx, 31, 0x1EBF44u);
    ctx->pc = 0x1EBF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF3Cu;
    // 0x1ebf40: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC78u, 0x1EBF3Cu, 0x1EBF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF44u;
label_1ebf44:
    // 0x1ebf44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBF44u;
    {
        const bool branch_taken_0x1ebf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF44u;
        // 0x1ebf48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf44) {
            ctx->pc = 0x1EBF60u;
            goto label_1ebf60;
        }
    }
    ctx->pc = 0x1EBF4Cu;
    // 0x1ebf4c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1ebf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ebf50: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1EBF50u;
    SET_GPR_U32(ctx, 31, 0x1EBF58u);
    ctx->pc = 0x1EBF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF50u;
    // 0x1ebf54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1EBF50u, 0x1EBF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF58u;
label_1ebf58:
    // 0x1ebf58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EBF58u;
    {
        const bool branch_taken_0x1ebf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF58u;
        // 0x1ebf5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf58) {
            ctx->pc = 0x1EBF74u;
            goto label_1ebf74;
        }
    }
    ctx->pc = 0x1EBF60u;
label_1ebf60:
    // 0x1ebf60: 0xc07af8c  jal         func_1EBE30
    ctx->pc = 0x1EBF60u;
    SET_GPR_U32(ctx, 31, 0x1EBF68u);
    ctx->pc = 0x1EBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF60u;
    // 0x1ebf64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE30u, 0x1EBF60u, 0x1EBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF68u;
label_1ebf68:
    // 0x1ebf68: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1EBF68u;
    SET_GPR_U32(ctx, 31, 0x1EBF70u);
    ctx->pc = 0x1EBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBF68u;
    // 0x1ebf6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1EBF68u, 0x1EBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBF70u;
label_1ebf70:
    // 0x1ebf70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ebf70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebf74:
    // 0x1ebf74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ebf74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ebf78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ebf78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebf7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ebf7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ebf80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ebf80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ebf84: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBF84u;
        // 0x1ebf88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBF8Cu;
    // 0x1ebf8c: 0x0  nop
    ctx->pc = 0x1ebf8cu;
    // NOP
    ctx->pc = 0x1ebf90u;
}
