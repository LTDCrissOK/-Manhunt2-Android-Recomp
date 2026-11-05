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

// Function: sub_0016CED8
// Address: 0x16ced8 - 0x16cf58
void sub_0016CED8_0x16ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CED8_0x16ced8");
#endif

    switch (ctx->pc) {
        case 0x16cf0cu: goto label_16cf0c;
        case 0x16cf18u: goto label_16cf18;
        case 0x16cf2cu: goto label_16cf2c;
        case 0x16cf3cu: goto label_16cf3c;
        default: break;
    }

    ctx->pc = 0x16ced8u;

    // 0x16ced8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16cedc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x16cedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16cee0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16cee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16cee4: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x16cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x16cee8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ceec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x16ceecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16cef0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16cef4: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x16cef4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16cef8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x16cef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16cefc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16CEFCu;
    {
        const bool branch_taken_0x16cefc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CEFCu;
        // 0x16cf00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cefc) {
            ctx->pc = 0x16CF40u;
            goto label_16cf40;
        }
    }
    ctx->pc = 0x16CF04u;
    // 0x16cf04: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16CF04u;
    SET_GPR_U32(ctx, 31, 0x16CF0Cu);
    ctx->pc = 0x16CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF04u;
    // 0x16cf08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16CF04u, 0x16CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF0Cu;
label_16cf0c:
    // 0x16cf0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16cf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cf10: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16CF10u;
    SET_GPR_U32(ctx, 31, 0x16CF18u);
    ctx->pc = 0x16CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF10u;
    // 0x16cf14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16CF10u, 0x16CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF18u;
label_16cf18:
    // 0x16cf18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16CF18u;
    {
        const bool branch_taken_0x16cf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF18u;
        // 0x16cf1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf18) {
            ctx->pc = 0x16CF34u;
            goto label_16cf34;
        }
    }
    ctx->pc = 0x16CF20u;
    // 0x16cf20: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x16cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x16cf24: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16CF24u;
    SET_GPR_U32(ctx, 31, 0x16CF2Cu);
    ctx->pc = 0x16CF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF24u;
    // 0x16cf28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16CF24u, 0x16CF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF2Cu;
label_16cf2c:
    // 0x16cf2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CF2Cu;
    {
        const bool branch_taken_0x16cf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF2Cu;
        // 0x16cf30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cf2c) {
            ctx->pc = 0x16CF40u;
            goto label_16cf40;
        }
    }
    ctx->pc = 0x16CF34u;
label_16cf34:
    // 0x16cf34: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16CF34u;
    SET_GPR_U32(ctx, 31, 0x16CF3Cu);
    ctx->pc = 0x16CF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CF34u;
    // 0x16cf38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16CF34u, 0x16CF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CF3Cu;
label_16cf3c:
    // 0x16cf3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16cf3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16cf40:
    // 0x16cf40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16cf40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cf44: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16cf44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16cf48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16cf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16cf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x16CF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CF4Cu;
        // 0x16cf50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CF54u;
    // 0x16cf54: 0x0  nop
    ctx->pc = 0x16cf54u;
    // NOP
    ctx->pc = 0x16cf58u;
}
