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

// Function: sub_0030D580
// Address: 0x30d580 - 0x30d598
void sub_0030D580_0x30d580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D580_0x30d580");
#endif

    switch (ctx->pc) {
        case 0x30d58cu: goto label_30d58c;
        default: break;
    }

    ctx->pc = 0x30d580u;

    // 0x30d580: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30d580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30d584: 0x3e00008  jr          $ra
    ctx->pc = 0x30D584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D584u;
        // 0x30d588: 0x24422948  addiu       $v0, $v0, 0x2948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10568));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D58Cu;
label_30d58c:
    // 0x30d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D58Cu;
        // 0x30d590: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D594u;
    // 0x30d594: 0x0  nop
    ctx->pc = 0x30d594u;
    // NOP
    ctx->pc = 0x30d598u;
}
