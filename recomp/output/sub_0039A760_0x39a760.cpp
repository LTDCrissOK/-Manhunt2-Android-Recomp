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

// Function: sub_0039A760
// Address: 0x39a760 - 0x39a770
void sub_0039A760_0x39a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A760_0x39a760");
#endif

    ctx->pc = 0x39a760u;

    // 0x39a760: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a764: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x39a764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x39a768: 0x3e00008  jr          $ra
    ctx->pc = 0x39A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A768u;
        // 0x39a76c: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A770u;
}
