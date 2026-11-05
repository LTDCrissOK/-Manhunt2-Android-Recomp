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

// Function: sub_002ACC80
// Address: 0x2acc80 - 0x2acc98
void sub_002ACC80_0x2acc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACC80_0x2acc80");
#endif

    ctx->pc = 0x2acc80u;

    // 0x2acc80: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2acc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2acc84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2acc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2acc88: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACC88u;
        // 0x2acc8c: 0xa0622c0c  sb          $v0, 0x2C0C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 11276), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACC90u;
    // 0x2acc90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2acc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acc94: 0x0  nop
    ctx->pc = 0x2acc94u;
    // NOP
    ctx->pc = 0x2acc98u;
}
