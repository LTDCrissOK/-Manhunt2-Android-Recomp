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

// Function: sub_002CBFE8
// Address: 0x2cbfe8 - 0x2cbff8
void sub_002CBFE8_0x2cbfe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBFE8_0x2cbfe8");
#endif

    ctx->pc = 0x2cbfe8u;

    // 0x2cbfe8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cbfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cbfec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBFECu;
        // 0x2cbff0: 0xa040b49c  sb          $zero, -0x4B64($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294947996), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBFF4u;
    // 0x2cbff4: 0x0  nop
    ctx->pc = 0x2cbff4u;
    // NOP
    ctx->pc = 0x2cbff8u;
}
