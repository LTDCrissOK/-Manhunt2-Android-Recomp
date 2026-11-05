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

// Function: sub_0029B5A8
// Address: 0x29b5a8 - 0x29b5b8
void sub_0029B5A8_0x29b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B5A8_0x29b5a8");
#endif

    ctx->pc = 0x29b5a8u;

    // 0x29b5a8: 0xa087000e  sb          $a3, 0xE($a0)
    ctx->pc = 0x29b5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 14), (uint8_t)GPR_U32(ctx, 7));
    // 0x29b5ac: 0xa085000c  sb          $a1, 0xC($a0)
    ctx->pc = 0x29b5acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x29b5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29B5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5B0u;
        // 0x29b5b4: 0xa086000d  sb          $a2, 0xD($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B5B8u;
}
