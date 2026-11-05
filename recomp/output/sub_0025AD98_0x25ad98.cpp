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

// Function: sub_0025AD98
// Address: 0x25ad98 - 0x25ae20
void sub_0025AD98_0x25ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AD98_0x25ad98");
#endif

    switch (ctx->pc) {
        case 0x25adc0u: goto label_25adc0;
        case 0x25adccu: goto label_25adcc;
        case 0x25ade4u: goto label_25ade4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25ae08u: goto label_25ae08;
        default: break;
    }

    ctx->pc = 0x25ad98u;

    // 0x25ad98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25ad9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x25ad9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x25ada0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x25ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x25ada4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ada4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ada8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25ada8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adac: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x25adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x25adb0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x25adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x25adb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25adb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adb8: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x25ADB8u;
    SET_GPR_U32(ctx, 31, 0x25ADC0u);
    ctx->pc = 0x25ADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADB8u;
    // 0x25adbc: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x25ADB8u, 0x25ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADC0u;
label_25adc0:
    // 0x25adc0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x25adc4: 0xc0c326a  jal         func_30C9A8
    ctx->pc = 0x25ADC4u;
    SET_GPR_U32(ctx, 31, 0x25ADCCu);
    ctx->pc = 0x25ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADC4u;
    // 0x25adc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x25ADC4u, 0x25ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADCCu;
label_25adcc:
    // 0x25adcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25adccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25add0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x25add0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25add4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25add4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25add8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25add8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25addc: 0xc0c327c  jal         func_30C9F0
    ctx->pc = 0x25ADDCu;
    SET_GPR_U32(ctx, 31, 0x25ADE4u);
    ctx->pc = 0x25ADE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADDCu;
    // 0x25ade0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9F0u, 0x25ADDCu, 0x25ADE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADE4u;
label_25ade4:
    // 0x25ade4: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x25ade4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25ade8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25ade8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25adecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adf0: 0xc0b199e  jal         func_2C6678
    ctx->pc = 0x25ADF0u;
    SET_GPR_U32(ctx, 31, 0x25ADF8u);
    ctx->pc = 0x25ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25ADF0u;
    // 0x25adf4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6678u, 0x25ADF0u, 0x25ADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25ADF8u;
label_25adf8:
    // 0x25adf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25adf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25adfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25adfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae00: 0xc0c32a0  jal         func_30CA80
    ctx->pc = 0x25AE00u;
    SET_GPR_U32(ctx, 31, 0x25AE08u);
    ctx->pc = 0x25AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25AE00u;
    // 0x25ae04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x25AE00u, 0x25AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25AE08u;
label_25ae08:
    // 0x25ae08: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x25ae08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ae0c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x25ae0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25ae10: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x25ae10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25ae14: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x25ae14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25ae18: 0x3e00008  jr          $ra
    ctx->pc = 0x25AE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AE18u;
        // 0x25ae1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AE20u;
}
