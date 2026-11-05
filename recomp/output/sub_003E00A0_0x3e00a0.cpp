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

// Function: sub_003E00A0
// Address: 0x3e00a0 - 0x3e00b0
void sub_003E00A0_0x3e00a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E00A0_0x3e00a0");
#endif

    ctx->pc = 0x3e00a0u;

    // 0x3e00a0: 0xac852048  sw          $a1, 0x2048($a0)
    ctx->pc = 0x3e00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8264), GPR_U32(ctx, 5));
    // 0x3e00a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E00A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E00A4u;
        // 0x3e00a8: 0xac802050  sw          $zero, 0x2050($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E00A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E00ACu;
    // 0x3e00ac: 0x0  nop
    ctx->pc = 0x3e00acu;
    // NOP
    ctx->pc = 0x3e00b0u;
}
