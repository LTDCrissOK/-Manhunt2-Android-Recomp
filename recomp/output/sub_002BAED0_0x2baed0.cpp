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

// Function: sub_002BAED0
// Address: 0x2baed0 - 0x2baee0
void sub_002BAED0_0x2baed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAED0_0x2baed0");
#endif

    ctx->pc = 0x2baed0u;

    // 0x2baed0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2baed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2baed4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAED4u;
        // 0x2baed8: 0x24420128  addiu       $v0, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAEDCu;
    // 0x2baedc: 0x0  nop
    ctx->pc = 0x2baedcu;
    // NOP
    ctx->pc = 0x2baee0u;
}
