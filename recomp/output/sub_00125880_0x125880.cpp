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

// Function: sub_00125880
// Address: 0x125880 - 0x125890
void sub_00125880_0x125880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125880_0x125880");
#endif

    ctx->pc = 0x125880u;

    // 0x125880: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x125880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x125884: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x125884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x125888: 0x3e00008  jr          $ra
    ctx->pc = 0x125888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125888u;
        // 0x12588c: 0xac830824  sw          $v1, 0x824($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2084), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125890u;
}
