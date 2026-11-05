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

// Function: sub_001F6F00
// Address: 0x1f6f00 - 0x1f6f10
void sub_001F6F00_0x1f6f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6F00_0x1f6f00");
#endif

    ctx->pc = 0x1f6f00u;

    // 0x1f6f00: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x1f6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x1f6f04: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F04u;
        // 0x1f6f08: 0x90629c3a  lbu         $v0, -0x63C6($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294941754)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6F0Cu;
    // 0x1f6f0c: 0x0  nop
    ctx->pc = 0x1f6f0cu;
    // NOP
    ctx->pc = 0x1f6f10u;
}
