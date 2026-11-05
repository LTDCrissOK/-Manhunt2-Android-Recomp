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

// Function: sub_00314530
// Address: 0x314530 - 0x314550
void sub_00314530_0x314530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314530_0x314530");
#endif

    switch (ctx->pc) {
        case 0x314540u: goto label_314540;
        default: break;
    }

    ctx->pc = 0x314530u;

    // 0x314530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314538: 0xc0dc0e6  jal         func_370398
    ctx->pc = 0x314538u;
    SET_GPR_U32(ctx, 31, 0x314540u);
    ctx->pc = 0x31453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314538u;
    // 0x31453c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370398u, 0x314538u, 0x314540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314540u;
label_314540:
    // 0x314540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314544: 0x3e00008  jr          $ra
    ctx->pc = 0x314544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314544u;
        // 0x314548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31454Cu;
    // 0x31454c: 0x0  nop
    ctx->pc = 0x31454cu;
    // NOP
    ctx->pc = 0x314550u;
}
