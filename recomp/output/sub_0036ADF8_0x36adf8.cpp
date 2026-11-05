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

// Function: sub_0036ADF8
// Address: 0x36adf8 - 0x36ae18
void sub_0036ADF8_0x36adf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036ADF8_0x36adf8");
#endif

    switch (ctx->pc) {
        case 0x36ae08u: goto label_36ae08;
        default: break;
    }

    ctx->pc = 0x36adf8u;

    // 0x36adf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36adf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36adfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ae00: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x36AE00u;
    SET_GPR_U32(ctx, 31, 0x36AE08u);
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x36AE00u, 0x36AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AE08u;
label_36ae08:
    // 0x36ae08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ae08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ae0c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AE0Cu;
        // 0x36ae10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AE14u;
    // 0x36ae14: 0x0  nop
    ctx->pc = 0x36ae14u;
    // NOP
    ctx->pc = 0x36ae18u;
}
