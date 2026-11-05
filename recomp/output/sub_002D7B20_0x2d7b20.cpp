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

// Function: sub_002D7B20
// Address: 0x2d7b20 - 0x2d7b30
void sub_002D7B20_0x2d7b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7B20_0x2d7b20");
#endif

    ctx->pc = 0x2d7b20u;

    // 0x2d7b20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2d7b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b24: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7B24u;
        // 0x2d7b28: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7B2Cu;
    // 0x2d7b2c: 0x0  nop
    ctx->pc = 0x2d7b2cu;
    // NOP
    ctx->pc = 0x2d7b30u;
}
