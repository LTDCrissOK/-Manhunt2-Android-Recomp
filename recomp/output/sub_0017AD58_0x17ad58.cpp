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

// Function: sub_0017AD58
// Address: 0x17ad58 - 0x17ae08
void sub_0017AD58_0x17ad58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AD58_0x17ad58");
#endif

    switch (ctx->pc) {
        case 0x17ad94u: goto label_17ad94;
        case 0x17ada4u: goto label_17ada4;
        case 0x17adb0u: goto label_17adb0;
        case 0x17adb8u: goto label_17adb8;
        case 0x17adccu: goto label_17adcc;
        case 0x17addcu: goto label_17addc;
        case 0x17ade8u: goto label_17ade8;
        default: break;
    }

    ctx->pc = 0x17ad58u;

    // 0x17ad58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ad5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ad5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ad60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ad64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ad68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ad68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17ad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17ad70: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x17ad70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17ad74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17ad78: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x17ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17ad7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ad80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ad80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad84: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x17ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ad88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ad8c: 0xc05eb06  jal         func_17AC18
    ctx->pc = 0x17AD8Cu;
    SET_GPR_U32(ctx, 31, 0x17AD94u);
    ctx->pc = 0x17AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD8Cu;
    // 0x17ad90: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17AD8Cu, 0x17AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AD94u;
label_17ad94:
    // 0x17ad94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17ad94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ad98: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x17ad98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x17ad9c: 0xc04f844  jal         func_13E110
    ctx->pc = 0x17AD9Cu;
    SET_GPR_U32(ctx, 31, 0x17ADA4u);
    ctx->pc = 0x17ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD9Cu;
    // 0x17ada0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E110u, 0x17AD9Cu, 0x17ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADA4u;
label_17ada4:
    // 0x17ada4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17ada4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ada8: 0xc04f7e0  jal         func_13DF80
    ctx->pc = 0x17ADA8u;
    SET_GPR_U32(ctx, 31, 0x17ADB0u);
    ctx->pc = 0x17ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADA8u;
    // 0x17adac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DF80u, 0x17ADA8u, 0x17ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADB0u;
label_17adb0:
    // 0x17adb0: 0xc04f844  jal         func_13E110
    ctx->pc = 0x17ADB0u;
    SET_GPR_U32(ctx, 31, 0x17ADB8u);
    ctx->pc = 0x17ADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADB0u;
    // 0x17adb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E110u, 0x17ADB0u, 0x17ADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADB8u;
label_17adb8:
    // 0x17adb8: 0xa282001c  sb          $v0, 0x1C($s4)
    ctx->pc = 0x17adb8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x17adbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17adbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17adc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17adc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17adc4: 0xc05eae8  jal         func_17ABA0
    ctx->pc = 0x17ADC4u;
    SET_GPR_U32(ctx, 31, 0x17ADCCu);
    ctx->pc = 0x17ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADC4u;
    // 0x17adc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABA0u, 0x17ADC4u, 0x17ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADCCu;
label_17adcc:
    // 0x17adcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17adccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17add0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17add0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17add4: 0xc05eaf4  jal         func_17ABD0
    ctx->pc = 0x17ADD4u;
    SET_GPR_U32(ctx, 31, 0x17ADDCu);
    ctx->pc = 0x17ADD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADD4u;
    // 0x17add8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ABD0u, 0x17ADD4u, 0x17ADDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADDCu;
label_17addc:
    // 0x17addc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17addcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ade0: 0xc05eb00  jal         func_17AC00
    ctx->pc = 0x17ADE0u;
    SET_GPR_U32(ctx, 31, 0x17ADE8u);
    ctx->pc = 0x17ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ADE0u;
    // 0x17ade4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC00u, 0x17ADE0u, 0x17ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ADE8u;
label_17ade8:
    // 0x17ade8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ade8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17adec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17adecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17adf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17adf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17adf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17adf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17adf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17adf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17adfc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17adfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ae00: 0x3e00008  jr          $ra
    ctx->pc = 0x17AE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE00u;
        // 0x17ae04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE08u;
}
