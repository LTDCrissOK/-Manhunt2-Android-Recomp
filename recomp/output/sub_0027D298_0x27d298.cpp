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

// Function: sub_0027D298
// Address: 0x27d298 - 0x27d2b0
void sub_0027D298_0x27d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D298_0x27d298");
#endif

    ctx->pc = 0x27d298u;

    // 0x27d298: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27d298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27d29c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D29Cu;
        // 0x27d2a0: 0x2442fcf0  addiu       $v0, $v0, -0x310 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D2A4u;
    // 0x27d2a4: 0x0  nop
    ctx->pc = 0x27d2a4u;
    // NOP
    // 0x27d2a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x27d2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x27d2ac: 0x0  nop
    ctx->pc = 0x27d2acu;
    // NOP
    ctx->pc = 0x27d2b0u;
}
