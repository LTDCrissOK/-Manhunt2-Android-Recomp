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

// Function: sub_0022F658
// Address: 0x22f658 - 0x22f660
void sub_0022F658_0x22f658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F658_0x22f658");
#endif

    ctx->pc = 0x22f658u;

    // 0x22f658: 0x3e00008  jr          $ra
    ctx->pc = 0x22F658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F658u;
        // 0x22f65c: 0xac850418  sw          $a1, 0x418($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1048), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F660u;
}
