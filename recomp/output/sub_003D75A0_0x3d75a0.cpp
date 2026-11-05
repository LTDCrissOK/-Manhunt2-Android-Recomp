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

// Function: sub_003D75A0
// Address: 0x3d75a0 - 0x3d75c0
void sub_003D75A0_0x3d75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D75A0_0x3d75a0");
#endif

    ctx->pc = 0x3d75a0u;

    // 0x3d75a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d75a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d75a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3d75a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3d75a8: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3d75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
    // 0x3d75ac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3d75acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x3d75b0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d75b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3d75b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d75b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d75b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D75B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D75B8u;
        // 0x3d75bc: 0xac87000c  sw          $a3, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D75B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D75C0u;
}
