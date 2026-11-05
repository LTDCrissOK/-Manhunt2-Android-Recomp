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

// Function: sub_00176418
// Address: 0x176418 - 0x176428
void sub_00176418_0x176418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176418_0x176418");
#endif

    ctx->pc = 0x176418u;

    // 0x176418: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x176418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x17641c: 0x3e00008  jr          $ra
    ctx->pc = 0x17641Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17641Cu;
        // 0x176420: 0xac8000b0  sw          $zero, 0xB0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17641Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176424u;
    // 0x176424: 0x0  nop
    ctx->pc = 0x176424u;
    // NOP
    ctx->pc = 0x176428u;
}
