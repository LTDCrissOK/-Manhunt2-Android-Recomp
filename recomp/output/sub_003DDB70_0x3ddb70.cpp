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

// Function: sub_003DDB70
// Address: 0x3ddb70 - 0x3ddb88
void sub_003DDB70_0x3ddb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDB70_0x3ddb70");
#endif

    ctx->pc = 0x3ddb70u;

    // 0x3ddb70: 0xac8500c4  sw          $a1, 0xC4($a0)
    ctx->pc = 0x3ddb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
    // 0x3ddb74: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDB74u;
        // 0x3ddb78: 0xac8500c8  sw          $a1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDB7Cu;
    // 0x3ddb7c: 0x0  nop
    ctx->pc = 0x3ddb7cu;
    // NOP
    // 0x3ddb80: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3ddb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3ddb84: 0x0  nop
    ctx->pc = 0x3ddb84u;
    // NOP
    ctx->pc = 0x3ddb88u;
}
