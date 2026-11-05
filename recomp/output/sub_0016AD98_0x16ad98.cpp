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

// Function: sub_0016AD98
// Address: 0x16ad98 - 0x16ae40
void sub_0016AD98_0x16ad98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AD98_0x16ad98");
#endif

    switch (ctx->pc) {
        case 0x16ae18u: goto label_16ae18;
        case 0x16ae34u: goto label_16ae34;
        default: break;
    }

    ctx->pc = 0x16ad98u;

    // 0x16ad98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ad98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ad9c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16ad9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ada0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ada0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ada4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x16ada4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16ada8: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x16ada8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x16adac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16ADACu;
    {
        const bool branch_taken_0x16adac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADACu;
        // 0x16adb0: 0x24070022  addiu       $a3, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adac) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16ADB4u;
    // 0x16adb4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x16adb8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16adbc: 0x2442eff0  addiu       $v0, $v0, -0x1010
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963184));
    // 0x16adc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16adc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16adc8: 0x800008  jr          $a0
    ctx->pc = 0x16ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ADD0u: goto label_16add0;
            case 0x16ADD8u: goto label_16add8;
            case 0x16ADE0u: goto label_16ade0;
            case 0x16ADE8u: goto label_16ade8;
            case 0x16ADF0u: goto label_16adf0;
            case 0x16ADF8u: goto label_16adf8;
            case 0x16AE00u: goto label_16ae00;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ADC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16ADD0u;
label_16add0:
    // 0x16add0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16ADD0u;
    {
        const bool branch_taken_0x16add0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADD0u;
        // 0x16add4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16add0) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16ADD8u;
label_16add8:
    // 0x16add8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16ADD8u;
    {
        const bool branch_taken_0x16add8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADD8u;
        // 0x16addc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16add8) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16ADE0u;
label_16ade0:
    // 0x16ade0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16ADE0u;
    {
        const bool branch_taken_0x16ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE0u;
        // 0x16ade4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ade0) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16ADE8u;
label_16ade8:
    // 0x16ade8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16ADE8u;
    {
        const bool branch_taken_0x16ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE8u;
        // 0x16adec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ade8) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16ADF0u;
label_16adf0:
    // 0x16adf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16ADF0u;
    {
        const bool branch_taken_0x16adf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADF0u;
        // 0x16adf4: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adf0) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16ADF8u;
label_16adf8:
    // 0x16adf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16ADF8u;
    {
        const bool branch_taken_0x16adf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADF8u;
        // 0x16adfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adf8) {
            ctx->pc = 0x16AE04u;
            goto label_16ae04;
        }
    }
    ctx->pc = 0x16AE00u;
label_16ae00:
    // 0x16ae00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16ae00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ae04:
    // 0x16ae04: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16ae08: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AE08u;
    {
        const bool branch_taken_0x16ae08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE08u;
        // 0x16ae0c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae08) {
            ctx->pc = 0x16AE20u;
            goto label_16ae20;
        }
    }
    ctx->pc = 0x16AE10u;
    // 0x16ae10: 0xc05ab90  jal         func_16AE40
    ctx->pc = 0x16AE10u;
    SET_GPR_U32(ctx, 31, 0x16AE18u);
    ctx->pc = 0x16AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE10u;
    // 0x16ae14: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AE40u, 0x16AE10u, 0x16AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE18u;
label_16ae18:
    // 0x16ae18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16AE18u;
    {
        const bool branch_taken_0x16ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE18u;
        // 0x16ae1c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae18) {
            ctx->pc = 0x16AE38u;
            goto label_16ae38;
        }
    }
    ctx->pc = 0x16AE20u;
label_16ae20:
    // 0x16ae20: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x16ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16ae24: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AE24u;
    {
        const bool branch_taken_0x16ae24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE24u;
        // 0x16ae28: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae24) {
            ctx->pc = 0x16AE34u;
            goto label_16ae34;
        }
    }
    ctx->pc = 0x16AE2Cu;
    // 0x16ae2c: 0xc05abac  jal         func_16AEB0
    ctx->pc = 0x16AE2Cu;
    SET_GPR_U32(ctx, 31, 0x16AE34u);
    ctx->pc = 0x16AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AE2Cu;
    // 0x16ae30: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AEB0u, 0x16AE2Cu, 0x16AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE34u;
label_16ae34:
    // 0x16ae34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ae34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16ae38:
    // 0x16ae38: 0x3e00008  jr          $ra
    ctx->pc = 0x16AE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE38u;
        // 0x16ae3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AE40u;
}
