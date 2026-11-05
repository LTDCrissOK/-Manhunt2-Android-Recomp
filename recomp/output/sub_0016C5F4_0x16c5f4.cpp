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

// Function: sub_0016C5F4
// Address: 0x16c5f4 - 0x16c610
void sub_0016C5F4_0x16c5f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C5F4_0x16c5f4");
#endif

    switch (ctx->pc) {
        case 0x16c604u: goto label_16c604;
        default: break;
    }

    ctx->pc = 0x16c5f4u;

    // 0x16c5f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16c5f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x16C5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C5FCu;
        // 0x16c600: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C604u;
label_16c604:
    // 0x16c604: 0x3e00008  jr          $ra
    ctx->pc = 0x16C604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C604u;
        // 0x16c608: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C60Cu;
    // 0x16c60c: 0x0  nop
    ctx->pc = 0x16c60cu;
    // NOP
    ctx->pc = 0x16c610u;
}
