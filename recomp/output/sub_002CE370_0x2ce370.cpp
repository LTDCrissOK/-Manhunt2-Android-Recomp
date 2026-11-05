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

// Function: sub_002CE370
// Address: 0x2ce370 - 0x2ce388
void sub_002CE370_0x2ce370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE370_0x2ce370");
#endif

    ctx->pc = 0x2ce370u;

    // 0x2ce370: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ce370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ce374: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE374u;
        // 0x2ce378: 0xac442c38  sw          $a0, 0x2C38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11320), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE37Cu;
    // 0x2ce37c: 0x0  nop
    ctx->pc = 0x2ce37cu;
    // NOP
    // 0x2ce380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ce380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce384: 0x0  nop
    ctx->pc = 0x2ce384u;
    // NOP
    ctx->pc = 0x2ce388u;
}
