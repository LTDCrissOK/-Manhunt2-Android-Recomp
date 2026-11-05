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

// Function: sub_003D72C0
// Address: 0x3d72c0 - 0x3d72e0
void sub_003D72C0_0x3d72c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D72C0_0x3d72c0");
#endif

    ctx->pc = 0x3d72c0u;

    // 0x3d72c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D72C0u;
    {
        const bool branch_taken_0x3d72c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D72C0u;
        // 0x3d72c4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d72c0) {
            ctx->pc = 0x3D72D8u;
            goto label_3d72d8;
        }
    }
    ctx->pc = 0x3D72C8u;
    // 0x3d72c8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3d72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3d72cc: 0x244225e8  addiu       $v0, $v0, 0x25E8
    ctx->pc = 0x3d72ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9704));
    // 0x3d72d0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d72d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d72d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_3d72d8:
    // 0x3d72d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D72D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D72D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D72E0u;
}
