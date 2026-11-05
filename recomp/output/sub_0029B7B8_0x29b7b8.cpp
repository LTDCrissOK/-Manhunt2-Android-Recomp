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

// Function: sub_0029B7B8
// Address: 0x29b7b8 - 0x29b7c8
void sub_0029B7B8_0x29b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B7B8_0x29b7b8");
#endif

    ctx->pc = 0x29b7b8u;

    // 0x29b7b8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x29b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x29b7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29B7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B7BCu;
        // 0x29b7c0: 0x24421840  addiu       $v0, $v0, 0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B7C4u;
    // 0x29b7c4: 0x0  nop
    ctx->pc = 0x29b7c4u;
    // NOP
    ctx->pc = 0x29b7c8u;
}
