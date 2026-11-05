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

// Function: sub_0010F858
// Address: 0x10f858 - 0x10f878
void sub_0010F858_0x10f858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F858_0x10f858");
#endif

    ctx->pc = 0x10f858u;

    // 0x10f858: 0x8c820120  lw          $v0, 0x120($a0)
    ctx->pc = 0x10f858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x10f85c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F85Cu;
    {
        const bool branch_taken_0x10f85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F85Cu;
        // 0x10f860: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f85c) {
            ctx->pc = 0x10F86Cu;
            goto label_10f86c;
        }
    }
    ctx->pc = 0x10F864u;
    // 0x10f864: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x10f864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945236)));
    // 0x10f868: 0xac830124  sw          $v1, 0x124($a0)
    ctx->pc = 0x10f868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 3));
label_10f86c:
    // 0x10f86c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F874u;
    // 0x10f874: 0x0  nop
    ctx->pc = 0x10f874u;
    // NOP
    ctx->pc = 0x10f878u;
}
