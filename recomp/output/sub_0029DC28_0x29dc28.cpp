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

// Function: sub_0029DC28
// Address: 0x29dc28 - 0x29dc60
void sub_0029DC28_0x29dc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DC28_0x29dc28");
#endif

    switch (ctx->pc) {
        case 0x29dc38u: goto label_29dc38;
        default: break;
    }

    ctx->pc = 0x29dc28u;

    // 0x29dc28: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x29dc28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x29dc2c: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x29dc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x29dc30: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x29dc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x29dc34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29dc34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29dc38:
    // 0x29dc38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x29dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29dc3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29DC3Cu;
    {
        const bool branch_taken_0x29dc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC3Cu;
        // 0x29dc40: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc3c) {
            ctx->pc = 0x29DC4Cu;
            goto label_29dc4c;
        }
    }
    ctx->pc = 0x29DC44u;
    // 0x29dc44: 0x3e00008  jr          $ra
    ctx->pc = 0x29DC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC44u;
        // 0x29dc48: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DC4Cu;
label_29dc4c:
    // 0x29dc4c: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29dc4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29dc50: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29DC50u;
    {
        const bool branch_taken_0x29dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DC50u;
        // 0x29dc54: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dc50) {
            ctx->pc = 0x29DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dc38;
        }
    }
    ctx->pc = 0x29DC58u;
    // 0x29dc58: 0x3e00008  jr          $ra
    ctx->pc = 0x29DC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DC60u;
}
