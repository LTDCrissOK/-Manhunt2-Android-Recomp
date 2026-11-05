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

// Function: sub_002253C0
// Address: 0x2253c0 - 0x2253d8
void sub_002253C0_0x2253c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002253C0_0x2253c0");
#endif

    ctx->pc = 0x2253c0u;

    // 0x2253c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2253c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2253c4: 0xa0800280  sb          $zero, 0x280($a0)
    ctx->pc = 0x2253c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x2253c8: 0xac820254  sw          $v0, 0x254($a0)
    ctx->pc = 0x2253c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
    // 0x2253cc: 0xac80025c  sw          $zero, 0x25C($a0)
    ctx->pc = 0x2253ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 604), GPR_U32(ctx, 0));
    // 0x2253d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2253D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2253D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2253D0u;
        // 0x2253d4: 0xac800258  sw          $zero, 0x258($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 600), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2253D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2253D8u;
}
