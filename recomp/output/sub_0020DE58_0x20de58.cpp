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

// Function: sub_0020DE58
// Address: 0x20de58 - 0x20de80
void sub_0020DE58_0x20de58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DE58_0x20de58");
#endif

    switch (ctx->pc) {
        case 0x20de60u: goto label_20de60;
        default: break;
    }

    ctx->pc = 0x20de58u;

    // 0x20de58: 0x248401d8  addiu       $a0, $a0, 0x1D8
    ctx->pc = 0x20de58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x20de5c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x20de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20de60:
    // 0x20de60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20de64: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20DE64u;
    {
        const bool branch_taken_0x20de64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x20DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE64u;
        // 0x20de68: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de64) {
            ctx->pc = 0x20DE70u;
            goto label_20de70;
        }
    }
    ctx->pc = 0x20DE6Cu;
    // 0x20de6c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_20de70:
    // 0x20de70: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20DE70u;
    {
        const bool branch_taken_0x20de70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DE70u;
        // 0x20de74: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20de70) {
            ctx->pc = 0x20DE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de60;
        }
    }
    ctx->pc = 0x20DE78u;
    // 0x20de78: 0x3e00008  jr          $ra
    ctx->pc = 0x20DE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DE80u;
}
