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

// Function: sub_0028AEF0
// Address: 0x28aef0 - 0x28af38
void sub_0028AEF0_0x28aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AEF0_0x28aef0");
#endif

    switch (ctx->pc) {
        case 0x28af00u: goto label_28af00;
        case 0x28af10u: goto label_28af10;
        case 0x28af20u: goto label_28af20;
        default: break;
    }

    ctx->pc = 0x28aef0u;

    // 0x28aef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28aef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aef8: 0xc0a2bd2  jal         func_28AF48
    ctx->pc = 0x28AEF8u;
    SET_GPR_U32(ctx, 31, 0x28AF00u);
    ctx->pc = 0x28AF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF48u, 0x28AEF8u, 0x28AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF00u;
label_28af00:
    // 0x28af00: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28AF00u;
    {
        const bool branch_taken_0x28af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF00u;
        // 0x28af04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af00) {
            ctx->pc = 0x28AF2Cu;
            goto label_28af2c;
        }
    }
    ctx->pc = 0x28AF08u;
    // 0x28af08: 0xc0a2bce  jal         func_28AF38
    ctx->pc = 0x28AF08u;
    SET_GPR_U32(ctx, 31, 0x28AF10u);
    ctx->pc = 0x28AF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF38u, 0x28AF08u, 0x28AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF10u;
label_28af10:
    // 0x28af10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28AF10u;
    {
        const bool branch_taken_0x28af10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF10u;
        // 0x28af14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af10) {
            ctx->pc = 0x28AF2Cu;
            goto label_28af2c;
        }
    }
    ctx->pc = 0x28AF18u;
    // 0x28af18: 0xc0a2bd4  jal         func_28AF50
    ctx->pc = 0x28AF18u;
    SET_GPR_U32(ctx, 31, 0x28AF20u);
    ctx->pc = 0x28AF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AF50u, 0x28AF18u, 0x28AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AF20u;
label_28af20:
    // 0x28af20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28AF20u;
    {
        const bool branch_taken_0x28af20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF20u;
        // 0x28af24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af20) {
            ctx->pc = 0x28AF2Cu;
            goto label_28af2c;
        }
    }
    ctx->pc = 0x28AF28u;
    // 0x28af28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28af28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28af2c:
    // 0x28af2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28af2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28af30: 0x3e00008  jr          $ra
    ctx->pc = 0x28AF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF30u;
        // 0x28af34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AF38u;
}
