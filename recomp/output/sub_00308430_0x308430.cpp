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

// Function: sub_00308430
// Address: 0x308430 - 0x308440
void sub_00308430_0x308430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308430_0x308430");
#endif

    switch (ctx->pc) {
        case 0x308434u: goto label_308434;
        default: break;
    }

    ctx->pc = 0x308430u;

    // 0x308430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308434:
    // 0x308434: 0x3e00008  jr          $ra
    ctx->pc = 0x308434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308434u;
        // 0x308438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30843Cu;
    // 0x30843c: 0x0  nop
    ctx->pc = 0x30843cu;
    // NOP
    ctx->pc = 0x308440u;
}
