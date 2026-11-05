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

// Function: sub_00341598
// Address: 0x341598 - 0x3415a8
void sub_00341598_0x341598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341598_0x341598");
#endif

    ctx->pc = 0x341598u;

    // 0x341598: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x341598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x34159c: 0x3e00008  jr          $ra
    ctx->pc = 0x34159Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3415A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34159Cu;
        // 0x3415a0: 0xac44cf98  sw          $a0, -0x3068($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34159Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3415A4u;
    // 0x3415a4: 0x0  nop
    ctx->pc = 0x3415a4u;
    // NOP
    ctx->pc = 0x3415a8u;
}
