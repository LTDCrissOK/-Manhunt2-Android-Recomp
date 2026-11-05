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

// Function: sub_002FC978
// Address: 0x2fc978 - 0x2fc988
void sub_002FC978_0x2fc978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC978_0x2fc978");
#endif

    ctx->pc = 0x2fc978u;

    // 0x2fc978: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fc978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fc97c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC97Cu;
        // 0x2fc980: 0xa040b820  sb          $zero, -0x47E0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294948896), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC984u;
    // 0x2fc984: 0x0  nop
    ctx->pc = 0x2fc984u;
    // NOP
    ctx->pc = 0x2fc988u;
}
