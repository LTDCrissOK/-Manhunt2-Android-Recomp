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

// Function: sub_00255430
// Address: 0x255430 - 0x255440
void sub_00255430_0x255430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255430_0x255430");
#endif

    ctx->pc = 0x255430u;

    // 0x255430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255434: 0x3e00008  jr          $ra
    ctx->pc = 0x255434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255434u;
        // 0x255438: 0xac820534  sw          $v0, 0x534($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25543Cu;
    // 0x25543c: 0x0  nop
    ctx->pc = 0x25543cu;
    // NOP
    ctx->pc = 0x255440u;
}
