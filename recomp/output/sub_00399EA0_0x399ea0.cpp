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

// Function: sub_00399EA0
// Address: 0x399ea0 - 0x399eb8
void sub_00399EA0_0x399ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399EA0_0x399ea0");
#endif

    ctx->pc = 0x399ea0u;

    // 0x399ea0: 0x4a20003  bltzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x399EA0u;
    {
        const bool branch_taken_0x399ea0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x399ea0) {
            ctx->pc = 0x399EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399EA0u;
            // 0x399ea4: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399EB0u;
            goto label_399eb0;
        }
    }
    ctx->pc = 0x399EA8u;
    // 0x399ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x399EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EA8u;
        // 0x399eac: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399EB0u;
label_399eb0:
    // 0x399eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x399EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EB0u;
        // 0x399eb4: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399EB8u;
}
