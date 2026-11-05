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

// Function: sub_002CBFD8
// Address: 0x2cbfd8 - 0x2cbfe8
void sub_002CBFD8_0x2cbfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBFD8_0x2cbfd8");
#endif

    ctx->pc = 0x2cbfd8u;

    // 0x2cbfd8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cbfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cbfdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cbfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbfe0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFE0u;
        // 0x2cbfe4: 0xa062b49c  sb          $v0, -0x4B64($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294947996), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFE8u;
}
