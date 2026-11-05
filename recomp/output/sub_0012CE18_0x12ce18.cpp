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

// Function: sub_0012CE18
// Address: 0x12ce18 - 0x12ce58
void sub_0012CE18_0x12ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CE18_0x12ce18");
#endif

    switch (ctx->pc) {
        case 0x12ce28u: goto label_12ce28;
        default: break;
    }

    ctx->pc = 0x12ce18u;

    // 0x12ce18: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x12ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x12ce1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ce1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ce20: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x12ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x12ce24: 0x0  nop
    ctx->pc = 0x12ce24u;
    // NOP
label_12ce28:
    // 0x12ce28: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12ce2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12ce30: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CE30u;
    {
        const bool branch_taken_0x12ce30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ce30) {
            ctx->pc = 0x12CE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CE30u;
            // 0x12ce34: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CE40u;
            goto label_12ce40;
        }
    }
    ctx->pc = 0x12CE38u;
    // 0x12ce38: 0x3e00008  jr          $ra
    ctx->pc = 0x12CE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE38u;
        // 0x12ce3c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CE40u;
label_12ce40:
    // 0x12ce40: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x12ce40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ce44: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x12ce44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ce48: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12CE48u;
    {
        const bool branch_taken_0x12ce48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE48u;
        // 0x12ce4c: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce48) {
            ctx->pc = 0x12CE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ce28;
        }
    }
    ctx->pc = 0x12CE50u;
    // 0x12ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x12CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CE58u;
}
