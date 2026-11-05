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

// Function: sub_00294D50
// Address: 0x294d50 - 0x294d70
void sub_00294D50_0x294d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294D50_0x294d50");
#endif

    ctx->pc = 0x294d50u;

    // 0x294d50: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x294d50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d54: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x294d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x294d58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x294d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x294d5c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x294d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x294d60: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x294d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x294d64: 0xa0800010  sb          $zero, 0x10($a0)
    ctx->pc = 0x294d64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x294d68: 0x3e00008  jr          $ra
    ctx->pc = 0x294D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294D68u;
        // 0x294d6c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294D70u;
}
