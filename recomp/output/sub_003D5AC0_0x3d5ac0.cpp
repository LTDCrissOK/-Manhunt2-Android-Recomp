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

// Function: sub_003D5AC0
// Address: 0x3d5ac0 - 0x3d5ad0
void sub_003D5AC0_0x3d5ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5AC0_0x3d5ac0");
#endif

    ctx->pc = 0x3d5ac0u;

    // 0x3d5ac0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3d5ac4: 0x8c62ede4  lw          $v0, -0x121C($v1)
    ctx->pc = 0x3d5ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42EDE4u));
    // 0x3d5ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5AC8u;
        // 0x3d5acc: 0xac64ede4  sw          $a0, -0x121C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294962660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5AD0u;
}
