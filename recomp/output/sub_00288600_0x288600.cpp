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

// Function: sub_00288600
// Address: 0x288600 - 0x288610
void sub_00288600_0x288600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288600_0x288600");
#endif

    ctx->pc = 0x288600u;

    // 0x288600: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x288600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x288604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x288604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288608: 0x3e00008  jr          $ra
    ctx->pc = 0x288608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288608u;
        // 0x28860c: 0xac62a434  sw          $v0, -0x5BCC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943796), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288610u;
}
