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

// Function: sub_003D76C0
// Address: 0x3d76c0 - 0x3d76d8
void sub_003D76C0_0x3d76c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D76C0_0x3d76c0");
#endif

    ctx->pc = 0x3d76c0u;

    // 0x3d76c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3d76c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3d76c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d76c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d76c8: 0x24632600  addiu       $v1, $v1, 0x2600
    ctx->pc = 0x3d76c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9728));
    // 0x3d76cc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3d76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3d76d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D76D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D76D0u;
        // 0x3d76d4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D76D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D76D8u;
}
