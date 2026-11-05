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

// Function: sub_0039A860
// Address: 0x39a860 - 0x39a880
void sub_0039A860_0x39a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A860_0x39a860");
#endif

    ctx->pc = 0x39a860u;

    // 0x39a860: 0x3e00008  jr          $ra
    ctx->pc = 0x39A860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A860u;
        // 0x39a864: 0xa0850048  sb          $a1, 0x48($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A868u;
    // 0x39a868: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39a86c: 0x0  nop
    ctx->pc = 0x39a86cu;
    // NOP
    // 0x39a870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a874: 0x0  nop
    ctx->pc = 0x39a874u;
    // NOP
    // 0x39a878: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39a878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39a87c: 0x0  nop
    ctx->pc = 0x39a87cu;
    // NOP
    ctx->pc = 0x39a880u;
}
