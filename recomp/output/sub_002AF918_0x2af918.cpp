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

// Function: sub_002AF918
// Address: 0x2af918 - 0x2af930
void sub_002AF918_0x2af918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF918_0x2af918");
#endif

    ctx->pc = 0x2af918u;

    // 0x2af918: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2af918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2af91c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2af91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2af920: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2af920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2af924: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2af924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x2af928: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF928u;
        // 0x2af92c: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF930u;
}
