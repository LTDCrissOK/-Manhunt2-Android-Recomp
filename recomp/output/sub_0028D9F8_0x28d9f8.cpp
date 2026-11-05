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

// Function: sub_0028D9F8
// Address: 0x28d9f8 - 0x28da28
void sub_0028D9F8_0x28d9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D9F8_0x28d9f8");
#endif

    switch (ctx->pc) {
        case 0x28da08u: goto label_28da08;
        default: break;
    }

    ctx->pc = 0x28d9f8u;

    // 0x28d9f8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28d9fc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x28d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28da00: 0x2442ca10  addiu       $v0, $v0, -0x35F0
    ctx->pc = 0x28da00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x28da04: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x28da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_28da08:
    // 0x28da08: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28da08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28da0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28da10: 0x0  nop
    ctx->pc = 0x28da10u;
    // NOP
    // 0x28da14: 0x0  nop
    ctx->pc = 0x28da14u;
    // NOP
    // 0x28da18: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28DA18u;
    {
        const bool branch_taken_0x28da18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA18u;
        // 0x28da1c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da18) {
            ctx->pc = 0x28DA08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28da08;
        }
    }
    ctx->pc = 0x28DA20u;
    // 0x28da20: 0x3e00008  jr          $ra
    ctx->pc = 0x28DA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA28u;
}
