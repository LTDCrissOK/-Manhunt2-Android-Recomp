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

// Function: sub_0015A9F0
// Address: 0x15a9f0 - 0x15ab38
void sub_0015A9F0_0x15a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A9F0_0x15a9f0");
#endif

    switch (ctx->pc) {
        case 0x15aa64u: goto label_15aa64;
        case 0x15aa80u: goto label_15aa80;
        case 0x15aa98u: goto label_15aa98;
        case 0x15aad4u: goto label_15aad4;
        case 0x15aaf0u: goto label_15aaf0;
        default: break;
    }

    ctx->pc = 0x15a9f0u;

    // 0x15a9f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15a9f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15a9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15a9fc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15a9fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15aa04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15aa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15aa08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15aa0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15aa10: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15aa14: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x15aa18: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x15aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x15aa1c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15aa20: 0x92a20a20  lbu         $v0, 0xA20($s5)
    ctx->pc = 0x15aa20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2592)));
    // 0x15aa24: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x15AA24u;
    {
        const bool branch_taken_0x15aa24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA24u;
        // 0x15aa28: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa24) {
            ctx->pc = 0x15AB08u;
            goto label_15ab08;
        }
    }
    ctx->pc = 0x15AA2Cu;
    // 0x15aa2c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x15aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15aa30: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x15aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15aa34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15aa38: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x15aa38u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15aa3c: 0x12e00032  beqz        $s7, . + 4 + (0x32 << 2)
    ctx->pc = 0x15AA3Cu;
    {
        const bool branch_taken_0x15aa3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA3Cu;
        // 0x15aa40: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa3c) {
            ctx->pc = 0x15AB08u;
            goto label_15ab08;
        }
    }
    ctx->pc = 0x15AA44u;
    // 0x15aa44: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x15aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x15aa48: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15aa4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15aa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15aa50: 0x8c56020c  lw          $s6, 0x20C($v0)
    ctx->pc = 0x15aa50u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15aa54: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x15AA54u;
    {
        const bool branch_taken_0x15aa54 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA54u;
        // 0x15aa58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa54) {
            ctx->pc = 0x15AB0Cu;
            goto label_15ab0c;
        }
    }
    ctx->pc = 0x15AA5Cu;
    // 0x15aa5c: 0xc043a64  jal         func_10E990
    ctx->pc = 0x15AA5Cu;
    SET_GPR_U32(ctx, 31, 0x15AA64u);
    ctx->pc = 0x15AA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA5Cu;
    // 0x15aa60: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E990u, 0x15AA5Cu, 0x15AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA64u;
label_15aa64:
    // 0x15aa64: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x15AA64u;
    {
        const bool branch_taken_0x15aa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA64u;
        // 0x15aa68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa64) {
            ctx->pc = 0x15AB0Cu;
            goto label_15ab0c;
        }
    }
    ctx->pc = 0x15AA6Cu;
    // 0x15aa6c: 0x92a20a20  lbu         $v0, 0xA20($s5)
    ctx->pc = 0x15aa6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2592)));
    // 0x15aa70: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15AA70u;
    {
        const bool branch_taken_0x15aa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA70u;
        // 0x15aa74: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa70) {
            ctx->pc = 0x15AB0Cu;
            goto label_15ab0c;
        }
    }
    ctx->pc = 0x15AA78u;
    // 0x15aa78: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15aa7c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15aa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15aa80:
    // 0x15aa80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa84: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x15aa84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15aa88: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x15aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x15aa8c: 0x8c520320  lw          $s2, 0x320($v0)
    ctx->pc = 0x15aa8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x15aa90: 0xc044234  jal         func_1108D0
    ctx->pc = 0x15AA90u;
    SET_GPR_U32(ctx, 31, 0x15AA98u);
    ctx->pc = 0x15AA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA90u;
    // 0x15aa94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x15AA90u, 0x15AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA98u;
label_15aa98:
    // 0x15aa98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15aa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aa9c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15aaa0: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15AAA0u;
    {
        const bool branch_taken_0x15aaa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAA0u;
        // 0x15aaa4: 0x26830001  addiu       $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaa0) {
            ctx->pc = 0x15AAF4u;
            goto label_15aaf4;
        }
    }
    ctx->pc = 0x15AAA8u;
    // 0x15aaa8: 0x52200013  beql        $s1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x15AAA8u;
    {
        const bool branch_taken_0x15aaa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aaa8) {
            ctx->pc = 0x15AAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AAA8u;
            // 0x15aaac: 0x92a20a20  lbu         $v0, 0xA20($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AAF8u;
            goto label_15aaf8;
        }
    }
    ctx->pc = 0x15AAB0u;
    // 0x15aab0: 0x8ea20214  lw          $v0, 0x214($s5)
    ctx->pc = 0x15aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 532)));
    // 0x15aab4: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x15aab4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15aab8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x15AAB8u;
    {
        const bool branch_taken_0x15aab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB8u;
        // 0x15aabc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab8) {
            ctx->pc = 0x15AAF0u;
            goto label_15aaf0;
        }
    }
    ctx->pc = 0x15AAC0u;
    // 0x15aac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15aac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aac4: 0x2473b060  addiu       $s3, $v1, -0x4FA0
    ctx->pc = 0x15aac4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946912));
    // 0x15aac8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15aac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aacc: 0xc04ade6  jal         func_12B798
    ctx->pc = 0x15AACCu;
    SET_GPR_U32(ctx, 31, 0x15AAD4u);
    ctx->pc = 0x15AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AACCu;
    // 0x15aad0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B798u, 0x15AACCu, 0x15AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AAD4u;
label_15aad4:
    // 0x15aad4: 0x163e0007  bne         $s1, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x15AAD4u;
    {
        const bool branch_taken_0x15aad4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        ctx->pc = 0x15AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD4u;
        // 0x15aad8: 0x26830001  addiu       $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aad4) {
            ctx->pc = 0x15AAF4u;
            goto label_15aaf4;
        }
    }
    ctx->pc = 0x15AADCu;
    // 0x15aadc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15aadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15aae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aae4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15aae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aae8: 0xc04adf8  jal         func_12B7E0
    ctx->pc = 0x15AAE8u;
    SET_GPR_U32(ctx, 31, 0x15AAF0u);
    ctx->pc = 0x15AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AAE8u;
    // 0x15aaec: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B7E0u, 0x15AAE8u, 0x15AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AAF0u;
label_15aaf0:
    // 0x15aaf0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x15aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_15aaf4:
    // 0x15aaf4: 0x92a20a20  lbu         $v0, 0xA20($s5)
    ctx->pc = 0x15aaf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2592)));
label_15aaf8:
    // 0x15aaf8: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x15aaf8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15aafc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x15aafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15ab00: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x15AB00u;
    {
        const bool branch_taken_0x15ab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB00u;
        // 0x15ab04: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab00) {
            ctx->pc = 0x15AA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15aa80;
        }
    }
    ctx->pc = 0x15AB08u;
label_15ab08:
    // 0x15ab08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15ab08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ab0c:
    // 0x15ab0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ab0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15ab10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15ab10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ab14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15ab14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ab18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15ab18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ab1c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15ab1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15ab20: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15ab20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ab24: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x15ab24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15ab28: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x15ab28u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15ab2c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15ab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15ab30: 0x3e00008  jr          $ra
    ctx->pc = 0x15AB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB30u;
        // 0x15ab34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AB38u;
}
