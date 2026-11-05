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

// Function: sub_00302500
// Address: 0x302500 - 0x302510
void sub_00302500_0x302500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302500_0x302500");
#endif

    ctx->pc = 0x302500u;

    // 0x302500: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x302500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x302504: 0x3e00008  jr          $ra
    ctx->pc = 0x302504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302504u;
        // 0x302508: 0xa0445c44  sb          $a0, 0x5C44($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 23620), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30250Cu;
    // 0x30250c: 0x0  nop
    ctx->pc = 0x30250cu;
    // NOP
    ctx->pc = 0x302510u;
}
