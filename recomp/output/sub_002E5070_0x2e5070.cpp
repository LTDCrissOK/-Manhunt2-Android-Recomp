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

// Function: sub_002E5070
// Address: 0x2e5070 - 0x2e5098
void sub_002E5070_0x2e5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5070_0x2e5070");
#endif

    ctx->pc = 0x2e5070u;

    // 0x2e5070: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e5070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e5074: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2e5074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2e5078: 0x8c462b50  lw          $a2, 0x2B50($v0)
    ctx->pc = 0x2e5078u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x482B50u));
    // 0x2e507c: 0x8c8211b0  lw          $v0, 0x11B0($a0)
    ctx->pc = 0x2e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4528)));
    // 0x2e5080: 0x8ca32c1c  lw          $v1, 0x2C1C($a1)
    ctx->pc = 0x2e5080u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C1Cu));
    // 0x2e5084: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2e5084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2e5088: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e508c: 0xaca32c1c  sw          $v1, 0x2C1C($a1)
    ctx->pc = 0x2e508cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11292), GPR_U32(ctx, 3));
    // 0x2e5090: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5090u;
        // 0x2e5094: 0xac8611b0  sw          $a2, 0x11B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4528), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5098u;
}
