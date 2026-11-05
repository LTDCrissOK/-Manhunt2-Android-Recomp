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

// Function: sub_0012C628
// Address: 0x12c628 - 0x12c668
void sub_0012C628_0x12c628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C628_0x12c628");
#endif

    switch (ctx->pc) {
        case 0x12c638u: goto label_12c638;
        default: break;
    }

    ctx->pc = 0x12c628u;

    // 0x12c628: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12c628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12c62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c630: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12c630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12c634: 0x0  nop
    ctx->pc = 0x12c634u;
    // NOP
label_12c638:
    // 0x12c638: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12c63c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12c63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c640: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C640u;
    {
        const bool branch_taken_0x12c640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C640u;
        // 0x12c644: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c640) {
            ctx->pc = 0x12C650u;
            goto label_12c650;
        }
    }
    ctx->pc = 0x12C648u;
    // 0x12c648: 0x3e00008  jr          $ra
    ctx->pc = 0x12C648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C648u;
        // 0x12c64c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C650u;
label_12c650:
    // 0x12c650: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x12c650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c654: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x12c654u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x12c658: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12C658u;
    {
        const bool branch_taken_0x12c658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C658u;
        // 0x12c65c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c658) {
            ctx->pc = 0x12C638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c638;
        }
    }
    ctx->pc = 0x12C660u;
    // 0x12c660: 0x3e00008  jr          $ra
    ctx->pc = 0x12C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C660u;
        // 0x12c664: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C668u;
}
