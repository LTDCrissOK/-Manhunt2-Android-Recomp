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

// Function: sub_003D1C98
// Address: 0x3d1c98 - 0x3d1cb8
void sub_003D1C98_0x3d1c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1C98_0x3d1c98");
#endif

    ctx->pc = 0x3d1c98u;

    // 0x3d1c98: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x3d1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x3d1c9c: 0x8c628e2c  lw          $v0, -0x71D4($v1)
    ctx->pc = 0x3d1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x668E2Cu));
    // 0x3d1ca0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D1CA0u;
    {
        const bool branch_taken_0x3d1ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1CA0u;
        // 0x3d1ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1ca0) {
            ctx->pc = 0x3D1CB0u;
            goto label_3d1cb0;
        }
    }
    ctx->pc = 0x3D1CA8u;
    // 0x3d1ca8: 0x80f46fa  j           func_3D1BE8
    ctx->pc = 0x3D1CA8u;
    ctx->pc = 0x3D1CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D1CA8u;
    // 0x3d1cac: 0xac628e2c  sw          $v0, -0x71D4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938156), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1BE8u, 0x3D1CA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3D1CB0u;
label_3d1cb0:
    // 0x3d1cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1CB8u;
}
