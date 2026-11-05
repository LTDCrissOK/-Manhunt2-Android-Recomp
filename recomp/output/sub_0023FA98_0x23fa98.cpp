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

// Function: sub_0023FA98
// Address: 0x23fa98 - 0x23fb48
void sub_0023FA98_0x23fa98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FA98_0x23fa98");
#endif

    switch (ctx->pc) {
        case 0x23fac8u: goto label_23fac8;
        case 0x23fad8u: goto label_23fad8;
        case 0x23fae8u: goto label_23fae8;
        case 0x23faf8u: goto label_23faf8;
        case 0x23fb14u: goto label_23fb14;
        case 0x23fb20u: goto label_23fb20;
        case 0x23fb2cu: goto label_23fb2c;
        default: break;
    }

    ctx->pc = 0x23fa98u;

    // 0x23fa98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fa98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fa9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23faa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23faa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23faa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23faa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23faa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23faa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x23faac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23faacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fab0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23fab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23fab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23fabc: 0x8e300334  lw          $s0, 0x334($s1)
    ctx->pc = 0x23fabcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x23fac0: 0xc0f7d10  jal         func_3DF440
    ctx->pc = 0x23FAC0u;
    SET_GPR_U32(ctx, 31, 0x23FAC8u);
    ctx->pc = 0x23FAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAC0u;
    // 0x23fac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF440u, 0x23FAC0u, 0x23FAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAC8u;
label_23fac8:
    // 0x23fac8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x23FAC8u;
    {
        const bool branch_taken_0x23fac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fac8) {
            ctx->pc = 0x23FACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAC8u;
            // 0x23facc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB00u;
            goto label_23fb00;
        }
    }
    ctx->pc = 0x23FAD0u;
    // 0x23fad0: 0xc0f7d1a  jal         func_3DF468
    ctx->pc = 0x23FAD0u;
    SET_GPR_U32(ctx, 31, 0x23FAD8u);
    ctx->pc = 0x23FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAD0u;
    // 0x23fad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF468u, 0x23FAD0u, 0x23FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAD8u;
label_23fad8:
    // 0x23fad8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23FAD8u;
    {
        const bool branch_taken_0x23fad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fad8) {
            ctx->pc = 0x23FADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAD8u;
            // 0x23fadc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB00u;
            goto label_23fb00;
        }
    }
    ctx->pc = 0x23FAE0u;
    // 0x23fae0: 0xc0f7d24  jal         func_3DF490
    ctx->pc = 0x23FAE0u;
    SET_GPR_U32(ctx, 31, 0x23FAE8u);
    ctx->pc = 0x23FAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAE0u;
    // 0x23fae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF490u, 0x23FAE0u, 0x23FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAE8u;
label_23fae8:
    // 0x23fae8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x23FAE8u;
    {
        const bool branch_taken_0x23fae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23fae8) {
            ctx->pc = 0x23FAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAE8u;
            // 0x23faec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB00u;
            goto label_23fb00;
        }
    }
    ctx->pc = 0x23FAF0u;
    // 0x23faf0: 0xc0f7d32  jal         func_3DF4C8
    ctx->pc = 0x23FAF0u;
    SET_GPR_U32(ctx, 31, 0x23FAF8u);
    ctx->pc = 0x23FAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FAF0u;
    // 0x23faf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF4C8u, 0x23FAF0u, 0x23FAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAF8u;
label_23faf8:
    // 0x23faf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23FAF8u;
    {
        const bool branch_taken_0x23faf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23faf8) {
            ctx->pc = 0x23FAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23FAF8u;
            // 0x23fafc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23FB00u;
            goto label_23fb00;
        }
    }
    ctx->pc = 0x23FB00u;
label_23fb00:
    // 0x23fb00: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x23FB00u;
    {
        const bool branch_taken_0x23fb00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB00u;
        // 0x23fb04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fb00) {
            ctx->pc = 0x23FB20u;
            goto label_23fb20;
        }
    }
    ctx->pc = 0x23FB08u;
    // 0x23fb08: 0x8e220334  lw          $v0, 0x334($s1)
    ctx->pc = 0x23fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x23fb0c: 0xc0915d4  jal         func_245750
    ctx->pc = 0x23FB0Cu;
    SET_GPR_U32(ctx, 31, 0x23FB14u);
    ctx->pc = 0x23FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB0Cu;
    // 0x23fb10: 0x8c4401e4  lw          $a0, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245750u, 0x23FB0Cu, 0x23FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB14u;
label_23fb14:
    // 0x23fb14: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x23fb18: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x23FB18u;
    SET_GPR_U32(ctx, 31, 0x23FB20u);
    ctx->pc = 0x23FB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB18u;
    // 0x23fb1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x23FB18u, 0x23FB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB20u;
label_23fb20:
    // 0x23fb20: 0x8e240334  lw          $a0, 0x334($s1)
    ctx->pc = 0x23fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    // 0x23fb24: 0xc06a20a  jal         func_1A8828
    ctx->pc = 0x23FB24u;
    SET_GPR_U32(ctx, 31, 0x23FB2Cu);
    ctx->pc = 0x23FB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FB24u;
    // 0x23fb28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8828u, 0x23FB24u, 0x23FB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB2Cu;
label_23fb2c:
    // 0x23fb2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23fb2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fb30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23fb30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23fb34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23fb34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fb38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23fb38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23fb3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23fb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB40u;
        // 0x23fb44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB48u;
}
