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

// Function: sub_003BE880
// Address: 0x3be880 - 0x3be890
void sub_003BE880_0x3be880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE880_0x3be880");
#endif

    ctx->pc = 0x3be880u;

    // 0x3be880: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3be880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3be884: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE884u;
        // 0x3be888: 0x8c62cddc  lw          $v0, -0x3224($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954460)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE88Cu;
    // 0x3be88c: 0x0  nop
    ctx->pc = 0x3be88cu;
    // NOP
    ctx->pc = 0x3be890u;
}
