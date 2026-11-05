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

// Function: sub_0030AEE0
// Address: 0x30aee0 - 0x30aef0
void sub_0030AEE0_0x30aee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030AEE0_0x30aee0");
#endif

    ctx->pc = 0x30aee0u;

    // 0x30aee0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30aee4: 0x3e00008  jr          $ra
    ctx->pc = 0x30AEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AEE4u;
        // 0x30aee8: 0xac40bb70  sw          $zero, -0x4490($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294949744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AEECu;
    // 0x30aeec: 0x0  nop
    ctx->pc = 0x30aeecu;
    // NOP
    ctx->pc = 0x30aef0u;
}
