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

// Function: sub_0029B598
// Address: 0x29b598 - 0x29b5a8
void sub_0029B598_0x29b598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B598_0x29b598");
#endif

    ctx->pc = 0x29b598u;

    // 0x29b598: 0xa087000a  sb          $a3, 0xA($a0)
    ctx->pc = 0x29b598u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x29b59c: 0xa0850008  sb          $a1, 0x8($a0)
    ctx->pc = 0x29b59cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5A0u;
        // 0x29b5a4: 0xa0860009  sb          $a2, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B5A8u;
}
