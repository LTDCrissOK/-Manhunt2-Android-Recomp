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

// Function: sub_00209F08
// Address: 0x209f08 - 0x209f20
void sub_00209F08_0x209f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F08_0x209f08");
#endif

    ctx->pc = 0x209f08u;

    // 0x209f08: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x209f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x209f0c: 0x8c432b6c  lw          $v1, 0x2B6C($v0)
    ctx->pc = 0x209f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B6Cu));
    // 0x209f10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x209f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x209f14: 0x3e00008  jr          $ra
    ctx->pc = 0x209F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F14u;
        // 0x209f18: 0x80620004  lb          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F1Cu;
    // 0x209f1c: 0x0  nop
    ctx->pc = 0x209f1cu;
    // NOP
    ctx->pc = 0x209f20u;
}
