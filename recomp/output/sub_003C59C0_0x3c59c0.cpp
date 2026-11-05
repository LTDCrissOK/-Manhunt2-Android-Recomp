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

// Function: sub_003C59C0
// Address: 0x3c59c0 - 0x3c59d8
void sub_003C59C0_0x3c59c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C59C0_0x3c59c0");
#endif

    ctx->pc = 0x3c59c0u;

    // 0x3c59c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c59c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C59C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C59C4u;
        // 0x3c59c8: 0x24421730  addiu       $v0, $v0, 0x1730 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C59C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C59CCu;
    // 0x3c59cc: 0x0  nop
    ctx->pc = 0x3c59ccu;
    // NOP
    // 0x3c59d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3c59d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3c59d4: 0x0  nop
    ctx->pc = 0x3c59d4u;
    // NOP
    ctx->pc = 0x3c59d8u;
}
