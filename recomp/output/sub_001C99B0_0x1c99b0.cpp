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

// Function: sub_001C99B0
// Address: 0x1c99b0 - 0x1c99d0
void sub_001C99B0_0x1c99b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C99B0_0x1c99b0");
#endif

    ctx->pc = 0x1c99b0u;

    // 0x1c99b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c99b4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c99b8: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1c99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x1c99bc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1c99bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1c99c0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1c99c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1c99c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1c99c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1c99c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C99C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C99C8u;
        // 0x1c99cc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C99C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C99D0u;
}
