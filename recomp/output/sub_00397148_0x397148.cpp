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

// Function: sub_00397148
// Address: 0x397148 - 0x397158
void sub_00397148_0x397148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397148_0x397148");
#endif

    ctx->pc = 0x397148u;

    // 0x397148: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x397148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39714c: 0x8c6218c4  lw          $v0, 0x18C4($v1)
    ctx->pc = 0x39714cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4018C4u));
    // 0x397150: 0x3e00008  jr          $ra
    ctx->pc = 0x397150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397150u;
        // 0x397154: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397158u;
}
