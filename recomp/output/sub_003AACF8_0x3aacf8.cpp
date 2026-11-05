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

// Function: sub_003AACF8
// Address: 0x3aacf8 - 0x3aad08
void sub_003AACF8_0x3aacf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AACF8_0x3aacf8");
#endif

    ctx->pc = 0x3aacf8u;

    // 0x3aacf8: 0xac86003c  sw          $a2, 0x3C($a0)
    ctx->pc = 0x3aacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 6));
    // 0x3aacfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3AACFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACFCu;
        // 0x3aad00: 0xac850038  sw          $a1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AACFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAD04u;
    // 0x3aad04: 0x0  nop
    ctx->pc = 0x3aad04u;
    // NOP
    ctx->pc = 0x3aad08u;
}
