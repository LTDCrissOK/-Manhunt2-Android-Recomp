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

// Function: sub_00225460
// Address: 0x225460 - 0x225470
void sub_00225460_0x225460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225460_0x225460");
#endif

    ctx->pc = 0x225460u;

    // 0x225460: 0xac85013c  sw          $a1, 0x13C($a0)
    ctx->pc = 0x225460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 5));
    // 0x225464: 0x3e00008  jr          $ra
    ctx->pc = 0x225464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225464u;
        // 0x225468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22546Cu;
    // 0x22546c: 0x0  nop
    ctx->pc = 0x22546cu;
    // NOP
    ctx->pc = 0x225470u;
}
