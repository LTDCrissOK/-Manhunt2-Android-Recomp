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

// Function: sub_0010FC50
// Address: 0x10fc50 - 0x10fc68
void sub_0010FC50_0x10fc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FC50_0x10fc50");
#endif

    ctx->pc = 0x10fc50u;

    // 0x10fc50: 0x8c820268  lw          $v0, 0x268($a0)
    ctx->pc = 0x10fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x10fc54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x10fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x10fc58: 0x8c64a9d4  lw          $a0, -0x562C($v1)
    ctx->pc = 0x10fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10fc5c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x10fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x10fc60: 0x3e00008  jr          $ra
    ctx->pc = 0x10FC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC60u;
        // 0x10fc64: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FC68u;
}
