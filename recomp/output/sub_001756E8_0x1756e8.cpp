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

// Function: sub_001756E8
// Address: 0x1756e8 - 0x175700
void sub_001756E8_0x1756e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001756E8_0x1756e8");
#endif

    ctx->pc = 0x1756e8u;

    // 0x1756e8: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1756e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1756ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1756ECu;
    {
        const bool branch_taken_0x1756ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756ECu;
        // 0x1756f0: 0xac850074  sw          $a1, 0x74($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756ec) {
            ctx->pc = 0x1756F8u;
            goto label_1756f8;
        }
    }
    ctx->pc = 0x1756F4u;
    // 0x1756f4: 0xac450224  sw          $a1, 0x224($v0)
    ctx->pc = 0x1756f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 5));
label_1756f8:
    // 0x1756f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1756F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175700u;
}
