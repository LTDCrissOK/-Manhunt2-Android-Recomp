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

// Function: sub_001CD328
// Address: 0x1cd328 - 0x1cd338
void sub_001CD328_0x1cd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD328_0x1cd328");
#endif

    ctx->pc = 0x1cd328u;

    // 0x1cd328: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cd32c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD32Cu;
        // 0x1cd330: 0xac4489ac  sw          $a0, -0x7654($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937004), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD32Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD334u;
    // 0x1cd334: 0x0  nop
    ctx->pc = 0x1cd334u;
    // NOP
    ctx->pc = 0x1cd338u;
}
