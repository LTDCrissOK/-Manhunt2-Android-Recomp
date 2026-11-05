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

// Function: sub_002ABF60
// Address: 0x2abf60 - 0x2abf78
void sub_002ABF60_0x2abf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABF60_0x2abf60");
#endif

    ctx->pc = 0x2abf60u;

    // 0x2abf60: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2abf60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2abf64: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABF64u;
        // 0x2abf68: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABF64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF6Cu;
    // 0x2abf6c: 0x0  nop
    ctx->pc = 0x2abf6cu;
    // NOP
    // 0x2abf70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abf74: 0x0  nop
    ctx->pc = 0x2abf74u;
    // NOP
    ctx->pc = 0x2abf78u;
}
