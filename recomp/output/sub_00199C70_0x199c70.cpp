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

// Function: sub_00199C70
// Address: 0x199c70 - 0x199c90
void sub_00199C70_0x199c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199C70_0x199c70");
#endif

    switch (ctx->pc) {
        case 0x199c84u: goto label_199c84;
        default: break;
    }

    ctx->pc = 0x199c70u;

    // 0x199c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199c78: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x199c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x199c7c: 0xc0668ce  jal         func_19A338
    ctx->pc = 0x199C7Cu;
    SET_GPR_U32(ctx, 31, 0x199C84u);
    ctx->pc = 0x199C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C7Cu;
    // 0x199c80: 0xac400094  sw          $zero, 0x94($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A338u, 0x199C7Cu, 0x199C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C84u;
label_199c84:
    // 0x199c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c88: 0x3e00008  jr          $ra
    ctx->pc = 0x199C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C88u;
        // 0x199c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C90u;
}
