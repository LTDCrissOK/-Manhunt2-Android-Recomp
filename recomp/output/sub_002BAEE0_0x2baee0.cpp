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

// Function: sub_002BAEE0
// Address: 0x2baee0 - 0x2baef0
void sub_002BAEE0_0x2baee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAEE0_0x2baee0");
#endif

    ctx->pc = 0x2baee0u;

    // 0x2baee0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2baee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2baee4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEE4u;
        // 0x2baee8: 0x24420130  addiu       $v0, $v0, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAEECu;
    // 0x2baeec: 0x0  nop
    ctx->pc = 0x2baeecu;
    // NOP
    ctx->pc = 0x2baef0u;
}
