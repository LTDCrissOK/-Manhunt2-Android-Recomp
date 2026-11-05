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

// Function: sub_001755F8
// Address: 0x1755f8 - 0x175608
void sub_001755F8_0x1755f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001755F8_0x1755f8");
#endif

    ctx->pc = 0x1755f8u;

    // 0x1755f8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1755f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1755fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1755FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755FCu;
        // 0x175600: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1755FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175604u;
    // 0x175604: 0x0  nop
    ctx->pc = 0x175604u;
    // NOP
    ctx->pc = 0x175608u;
}
