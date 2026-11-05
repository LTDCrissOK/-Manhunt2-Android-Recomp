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

// Function: sub_0016BF70
// Address: 0x16bf70 - 0x16bf88
void sub_0016BF70_0x16bf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BF70_0x16bf70");
#endif

    ctx->pc = 0x16bf70u;

    // 0x16bf70: 0xac8001a4  sw          $zero, 0x1A4($a0)
    ctx->pc = 0x16bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 0));
    // 0x16bf74: 0xac800198  sw          $zero, 0x198($a0)
    ctx->pc = 0x16bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 0));
    // 0x16bf78: 0xac80019c  sw          $zero, 0x19C($a0)
    ctx->pc = 0x16bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 412), GPR_U32(ctx, 0));
    // 0x16bf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF7Cu;
        // 0x16bf80: 0xac8001a0  sw          $zero, 0x1A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF84u;
    // 0x16bf84: 0x0  nop
    ctx->pc = 0x16bf84u;
    // NOP
    ctx->pc = 0x16bf88u;
}
