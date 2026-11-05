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

// Function: sub_001F97F8
// Address: 0x1f97f8 - 0x1f9810
void sub_001F97F8_0x1f97f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F97F8_0x1f97f8");
#endif

    ctx->pc = 0x1f97f8u;

    // 0x1f97f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f97f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f97fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f97fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9800: 0xac8613e0  sw          $a2, 0x13E0($a0)
    ctx->pc = 0x1f9800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5088), GPR_U32(ctx, 6));
    // 0x1f9804: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9804u;
        // 0x1f9808: 0xac8513dc  sw          $a1, 0x13DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5084), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F980Cu;
    // 0x1f980c: 0x0  nop
    ctx->pc = 0x1f980cu;
    // NOP
    ctx->pc = 0x1f9810u;
}
