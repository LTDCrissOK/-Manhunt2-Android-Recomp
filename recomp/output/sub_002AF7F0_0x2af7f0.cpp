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

// Function: sub_002AF7F0
// Address: 0x2af7f0 - 0x2af818
void sub_002AF7F0_0x2af7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF7F0_0x2af7f0");
#endif

    switch (ctx->pc) {
        case 0x2af7f8u: goto label_2af7f8;
        default: break;
    }

    ctx->pc = 0x2af7f0u;

    // 0x2af7f0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF7F0u;
    {
        const bool branch_taken_0x2af7f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF7F0u;
        // 0x2af7f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af7f0) {
            ctx->pc = 0x2AF810u;
            goto label_2af810;
        }
    }
    ctx->pc = 0x2AF7F8u;
label_2af7f8:
    // 0x2af7f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2af7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2af7fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2af7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2af800: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x2af800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2af804: 0x0  nop
    ctx->pc = 0x2af804u;
    // NOP
    // 0x2af808: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AF808u;
    {
        const bool branch_taken_0x2af808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF808u;
        // 0x2af80c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af808) {
            ctx->pc = 0x2AF7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af7f8;
        }
    }
    ctx->pc = 0x2AF810u;
label_2af810:
    // 0x2af810: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF818u;
}
