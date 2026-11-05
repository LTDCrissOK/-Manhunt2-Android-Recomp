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

// Function: sub_0016C5E4
// Address: 0x16c5e4 - 0x16c5f4
void sub_0016C5E4_0x16c5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C5E4_0x16c5e4");
#endif

    ctx->pc = 0x16c5e4u;

    // 0x16c5e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x16C5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5ECu;
        // 0x16c5f0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C5F4u;
}
