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

// Function: sub_001FBEE8
// Address: 0x1fbee8 - 0x1fbf00
void sub_001FBEE8_0x1fbee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBEE8_0x1fbee8");
#endif

    ctx->pc = 0x1fbee8u;

    // 0x1fbee8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1fbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbeec: 0xac800144  sw          $zero, 0x144($a0)
    ctx->pc = 0x1fbeecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 0));
    // 0x1fbef0: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x1fbef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x1fbef4: 0xac800114  sw          $zero, 0x114($a0)
    ctx->pc = 0x1fbef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 0));
    // 0x1fbef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEF8u;
        // 0x1fbefc: 0xac800124  sw          $zero, 0x124($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBF00u;
}
