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

// Function: sub_003A57F8
// Address: 0x3a57f8 - 0x3a5828
void sub_003A57F8_0x3a57f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A57F8_0x3a57f8");
#endif

    switch (ctx->pc) {
        case 0x3a5800u: goto label_3a5800;
        default: break;
    }

    ctx->pc = 0x3a57f8u;

    // 0x3a57f8: 0x24021fff  addiu       $v0, $zero, 0x1FFF
    ctx->pc = 0x3a57f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
    // 0x3a57fc: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3a57fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_3a5800:
    // 0x3a5800: 0x0  nop
    ctx->pc = 0x3a5800u;
    // NOP
    // 0x3a5804: 0x0  nop
    ctx->pc = 0x3a5804u;
    // NOP
    // 0x3a5808: 0x0  nop
    ctx->pc = 0x3a5808u;
    // NOP
    // 0x3a580c: 0x0  nop
    ctx->pc = 0x3a580cu;
    // NOP
    // 0x3a5810: 0x0  nop
    ctx->pc = 0x3a5810u;
    // NOP
    // 0x3a5814: 0x443fffa  bgezl       $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A5814u;
    {
        const bool branch_taken_0x3a5814 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3a5814) {
            ctx->pc = 0x3A5818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5814u;
            // 0x3a5818: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5800;
        }
    }
    ctx->pc = 0x3A581Cu;
    // 0x3a581c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5824u;
    // 0x3a5824: 0x0  nop
    ctx->pc = 0x3a5824u;
    // NOP
    ctx->pc = 0x3a5828u;
}
