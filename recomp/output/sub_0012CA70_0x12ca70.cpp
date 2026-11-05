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

// Function: sub_0012CA70
// Address: 0x12ca70 - 0x12ca88
void sub_0012CA70_0x12ca70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CA70_0x12ca70");
#endif

    ctx->pc = 0x12ca70u;

    // 0x12ca70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12ca74: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12CA74u;
    {
        const bool branch_taken_0x12ca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ca74) {
            ctx->pc = 0x12CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CA74u;
            // 0x12ca78: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CA7Cu;
            goto label_12ca7c;
        }
    }
    ctx->pc = 0x12CA7Cu;
label_12ca7c:
    // 0x12ca7c: 0x3e00008  jr          $ra
    ctx->pc = 0x12CA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CA84u;
    // 0x12ca84: 0x0  nop
    ctx->pc = 0x12ca84u;
    // NOP
    ctx->pc = 0x12ca88u;
}
