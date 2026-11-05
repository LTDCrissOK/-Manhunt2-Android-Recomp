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

// Function: sub_00108BC0
// Address: 0x108bc0 - 0x108bd8
void sub_00108BC0_0x108bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108BC0_0x108bc0");
#endif

    ctx->pc = 0x108bc0u;

    // 0x108bc0: 0x90830045  lbu         $v1, 0x45($a0)
    ctx->pc = 0x108bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 69)));
    // 0x108bc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x108bc8: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x108bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x108bcc: 0xa0830050  sb          $v1, 0x50($a0)
    ctx->pc = 0x108bccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x108bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x108BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BD0u;
        // 0x108bd4: 0xa0800051  sb          $zero, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108BD8u;
}
