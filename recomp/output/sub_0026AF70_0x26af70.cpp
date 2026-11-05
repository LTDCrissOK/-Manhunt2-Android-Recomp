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

// Function: sub_0026AF70
// Address: 0x26af70 - 0x26af80
void sub_0026AF70_0x26af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AF70_0x26af70");
#endif

    ctx->pc = 0x26af70u;

    // 0x26af70: 0xa0800224  sb          $zero, 0x224($a0)
    ctx->pc = 0x26af70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 548), (uint8_t)GPR_U32(ctx, 0));
    // 0x26af74: 0xa0800220  sb          $zero, 0x220($a0)
    ctx->pc = 0x26af74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 544), (uint8_t)GPR_U32(ctx, 0));
    // 0x26af78: 0x3e00008  jr          $ra
    ctx->pc = 0x26AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AF78u;
        // 0x26af7c: 0xa0800223  sb          $zero, 0x223($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 547), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26AF80u;
}
