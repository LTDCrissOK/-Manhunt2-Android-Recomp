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

// Function: sub_00322138
// Address: 0x322138 - 0x322148
void sub_00322138_0x322138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322138_0x322138");
#endif

    ctx->pc = 0x322138u;

    // 0x322138: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x32213c: 0x3e00008  jr          $ra
    ctx->pc = 0x32213Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32213Cu;
        // 0x322140: 0xac406d70  sw          $zero, 0x6D70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32213Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322144u;
    // 0x322144: 0x0  nop
    ctx->pc = 0x322144u;
    // NOP
    ctx->pc = 0x322148u;
}
