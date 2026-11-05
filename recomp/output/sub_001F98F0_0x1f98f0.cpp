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

// Function: sub_001F98F0
// Address: 0x1f98f0 - 0x1f9918
void sub_001F98F0_0x1f98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F98F0_0x1f98f0");
#endif

    switch (ctx->pc) {
        case 0x1f98f8u: goto label_1f98f8;
        default: break;
    }

    ctx->pc = 0x1f98f0u;

    // 0x1f98f0: 0x240200e5  addiu       $v0, $zero, 0xE5
    ctx->pc = 0x1f98f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 229));
    // 0x1f98f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f98f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1f98f8:
    // 0x1f98f8: 0x0  nop
    ctx->pc = 0x1f98f8u;
    // NOP
    // 0x1f98fc: 0x0  nop
    ctx->pc = 0x1f98fcu;
    // NOP
    // 0x1f9900: 0x0  nop
    ctx->pc = 0x1f9900u;
    // NOP
    // 0x1f9904: 0x0  nop
    ctx->pc = 0x1f9904u;
    // NOP
    // 0x1f9908: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F9908u;
    {
        const bool branch_taken_0x1f9908 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9908u;
        // 0x1f990c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9908) {
            ctx->pc = 0x1F98F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f98f8;
        }
    }
    ctx->pc = 0x1F9910u;
    // 0x1f9910: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9918u;
}
