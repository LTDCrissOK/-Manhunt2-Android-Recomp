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

// Function: sub_003A2A90
// Address: 0x3a2a90 - 0x3a2ac0
void sub_003A2A90_0x3a2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2A90_0x3a2a90");
#endif

    switch (ctx->pc) {
        case 0x3a2a98u: goto label_3a2a98;
        default: break;
    }

    ctx->pc = 0x3a2a90u;

    // 0x3a2a90: 0x24023fff  addiu       $v0, $zero, 0x3FFF
    ctx->pc = 0x3a2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x3a2a94: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3a2a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3a2a98:
    // 0x3a2a98: 0x0  nop
    ctx->pc = 0x3a2a98u;
    // NOP
    // 0x3a2a9c: 0x0  nop
    ctx->pc = 0x3a2a9cu;
    // NOP
    // 0x3a2aa0: 0x0  nop
    ctx->pc = 0x3a2aa0u;
    // NOP
    // 0x3a2aa4: 0x0  nop
    ctx->pc = 0x3a2aa4u;
    // NOP
    // 0x3a2aa8: 0x0  nop
    ctx->pc = 0x3a2aa8u;
    // NOP
    // 0x3a2aac: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A2AACu;
    {
        const bool branch_taken_0x3a2aac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3a2aac) {
            ctx->pc = 0x3A2AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2AACu;
            // 0x3a2ab0: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2a98;
        }
    }
    ctx->pc = 0x3A2AB4u;
    // 0x3a2ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2ABCu;
    // 0x3a2abc: 0x0  nop
    ctx->pc = 0x3a2abcu;
    // NOP
    ctx->pc = 0x3a2ac0u;
}
