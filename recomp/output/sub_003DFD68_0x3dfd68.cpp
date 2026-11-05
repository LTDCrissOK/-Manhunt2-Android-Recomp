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

// Function: sub_003DFD68
// Address: 0x3dfd68 - 0x3dfd80
void sub_003DFD68_0x3dfd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFD68_0x3dfd68");
#endif

    ctx->pc = 0x3dfd68u;

    // 0x3dfd68: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD68u;
        // 0x3dfd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFD70u;
    // 0x3dfd70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfd74: 0x0  nop
    ctx->pc = 0x3dfd74u;
    // NOP
    // 0x3dfd78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dfd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dfd7c: 0x0  nop
    ctx->pc = 0x3dfd7cu;
    // NOP
    ctx->pc = 0x3dfd80u;
}
