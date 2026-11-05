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

// Function: sub_002C1748
// Address: 0x2c1748 - 0x2c1778
void sub_002C1748_0x2c1748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1748_0x2c1748");
#endif

    ctx->pc = 0x2c1748u;

    // 0x2c1748: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c174c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2c174cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2c1750: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2c1750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2c1754: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1754u;
        // 0x2c1758: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C175Cu;
    // 0x2c175c: 0x0  nop
    ctx->pc = 0x2c175cu;
    // NOP
    // 0x2c1760: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c1760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c1764: 0x0  nop
    ctx->pc = 0x2c1764u;
    // NOP
    // 0x2c1768: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c1768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c176c: 0x0  nop
    ctx->pc = 0x2c176cu;
    // NOP
    // 0x2c1770: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2c1770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x2c1774: 0x0  nop
    ctx->pc = 0x2c1774u;
    // NOP
    ctx->pc = 0x2c1778u;
}
