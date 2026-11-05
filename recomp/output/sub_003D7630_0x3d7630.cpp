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

// Function: sub_003D7630
// Address: 0x3d7630 - 0x3d7650
void sub_003D7630_0x3d7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7630_0x3d7630");
#endif

    ctx->pc = 0x3d7630u;

    // 0x3d7630: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d7634: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d7634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d7638: 0x244225e8  addiu       $v0, $v0, 0x25E8
    ctx->pc = 0x3d7638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9704));
    // 0x3d763c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3d763cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3d7640: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d7640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3d7644: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7644u;
        // 0x3d7648: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D764Cu;
    // 0x3d764c: 0x0  nop
    ctx->pc = 0x3d764cu;
    // NOP
    ctx->pc = 0x3d7650u;
}
