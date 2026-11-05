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

// Function: sub_00295E90
// Address: 0x295e90 - 0x295ea8
void sub_00295E90_0x295e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295E90_0x295e90");
#endif

    ctx->pc = 0x295e90u;

    // 0x295e90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x295e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x295e94: 0x8c62a8c0  lw          $v0, -0x5740($v1)
    ctx->pc = 0x295e94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA8C0u));
    // 0x295e98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x295E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E9Cu;
        // 0x295ea0: 0xac62a8c0  sw          $v0, -0x5740($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295EA4u;
    // 0x295ea4: 0x0  nop
    ctx->pc = 0x295ea4u;
    // NOP
    ctx->pc = 0x295ea8u;
}
