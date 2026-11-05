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

// Function: sub_003D9DF8
// Address: 0x3d9df8 - 0x3d9e10
void sub_003D9DF8_0x3d9df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9DF8_0x3d9df8");
#endif

    ctx->pc = 0x3d9df8u;

    // 0x3d9df8: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3d9df8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9dfc: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x3d9dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9e00: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3d9e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3d9e04: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x3d9e04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d9e08: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9E08u;
        // 0x3d9e0c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9E10u;
}
