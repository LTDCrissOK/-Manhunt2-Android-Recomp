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

// Function: sub_003D8EF0
// Address: 0x3d8ef0 - 0x3d8f08
void sub_003D8EF0_0x3d8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8EF0_0x3d8ef0");
#endif

    ctx->pc = 0x3d8ef0u;

    // 0x3d8ef0: 0xa4800012  sh          $zero, 0x12($a0)
    ctx->pc = 0x3d8ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8ef4: 0xa4800008  sh          $zero, 0x8($a0)
    ctx->pc = 0x3d8ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8ef8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3d8ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x3d8efc: 0xa4800010  sh          $zero, 0x10($a0)
    ctx->pc = 0x3d8efcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d8f00: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8F00u;
        // 0x3d8f04: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8F08u;
}
