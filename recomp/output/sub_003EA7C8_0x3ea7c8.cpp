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

// Function: sub_003EA7C8
// Address: 0x3ea7c8 - 0x3ea7e0
void sub_003EA7C8_0x3ea7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA7C8_0x3ea7c8");
#endif

    ctx->pc = 0x3ea7c8u;

    // 0x3ea7c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ea7c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ea7cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3ea7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3ea7d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3ea7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3ea7d4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x3ea7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x3ea7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EA7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7D8u;
        // 0x3ea7dc: 0xa0800008  sb          $zero, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EA7E0u;
}
