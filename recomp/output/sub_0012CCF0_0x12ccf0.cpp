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

// Function: sub_0012CCF0
// Address: 0x12ccf0 - 0x12cd90
void sub_0012CCF0_0x12ccf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CCF0_0x12ccf0");
#endif

    switch (ctx->pc) {
        case 0x12cd20u: goto label_12cd20;
        case 0x12cd28u: goto label_12cd28;
        case 0x12cd44u: goto label_12cd44;
        case 0x12cd54u: goto label_12cd54;
        case 0x12cd74u: goto label_12cd74;
        default: break;
    }

    ctx->pc = 0x12ccf0u;

    // 0x12ccf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12ccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12ccf4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12ccf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ccf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccfc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12cd00: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12cd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12cd04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12cd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12cd0c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x12cd10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12cd14: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x12cd14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x12cd18: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12CD18u;
    SET_GPR_U32(ctx, 31, 0x12CD20u);
    ctx->pc = 0x12CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD18u;
    // 0x12cd1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12CD18u, 0x12CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD20u;
label_12cd20:
    // 0x12cd20: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x12cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x12cd24: 0x0  nop
    ctx->pc = 0x12cd24u;
    // NOP
label_12cd28:
    // 0x12cd28: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x12cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x12cd2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cd30: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CD30u;
    {
        const bool branch_taken_0x12cd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD30u;
        // 0x12cd34: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd30) {
            ctx->pc = 0x12CD54u;
            goto label_12cd54;
        }
    }
    ctx->pc = 0x12CD38u;
    // 0x12cd38: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12cd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cd3c: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x12CD3Cu;
    SET_GPR_U32(ctx, 31, 0x12CD44u);
    ctx->pc = 0x12CD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD3Cu;
    // 0x12cd40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x12CD3Cu, 0x12CD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD44u;
label_12cd44:
    // 0x12cd44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CD44u;
    {
        const bool branch_taken_0x12cd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD44u;
        // 0x12cd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd44) {
            ctx->pc = 0x12CD54u;
            goto label_12cd54;
        }
    }
    ctx->pc = 0x12CD4Cu;
    // 0x12cd4c: 0xc04b316  jal         func_12CC58
    ctx->pc = 0x12CD4Cu;
    SET_GPR_U32(ctx, 31, 0x12CD54u);
    ctx->pc = 0x12CD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD4Cu;
    // 0x12cd50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CC58u, 0x12CD4Cu, 0x12CD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD54u;
label_12cd54:
    // 0x12cd54: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x12cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12cd58: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x12cd58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12cd5c: 0x2e0300ff  sltiu       $v1, $s0, 0xFF
    ctx->pc = 0x12cd5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x12cd60: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x12CD60u;
    {
        const bool branch_taken_0x12cd60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD60u;
        // 0x12cd64: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd60) {
            ctx->pc = 0x12CD28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cd28;
        }
    }
    ctx->pc = 0x12CD68u;
    // 0x12cd68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12cd68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd6c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12CD6Cu;
    SET_GPR_U32(ctx, 31, 0x12CD74u);
    ctx->pc = 0x12CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CD6Cu;
    // 0x12cd70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12CD6Cu, 0x12CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CD74u;
label_12cd74:
    // 0x12cd74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cd78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12cd78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cd7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12cd7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cd80: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12cd80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cd84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12cd84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cd88: 0x3e00008  jr          $ra
    ctx->pc = 0x12CD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CD88u;
        // 0x12cd8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CD90u;
}
