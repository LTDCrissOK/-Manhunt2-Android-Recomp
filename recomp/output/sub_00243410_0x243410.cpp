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

// Function: sub_00243410
// Address: 0x243410 - 0x243430
void sub_00243410_0x243410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243410_0x243410");
#endif

    switch (ctx->pc) {
        case 0x243420u: goto label_243420;
        default: break;
    }

    ctx->pc = 0x243410u;

    // 0x243410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x243414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x243418: 0xc0926f8  jal         func_249BE0
    ctx->pc = 0x243418u;
    SET_GPR_U32(ctx, 31, 0x243420u);
    ctx->pc = 0x249BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249BE0u, 0x243418u, 0x243420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x243420u;
label_243420:
    // 0x243420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243424: 0x3e00008  jr          $ra
    ctx->pc = 0x243424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243424u;
        // 0x243428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x243424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24342Cu;
    // 0x24342c: 0x0  nop
    ctx->pc = 0x24342cu;
    // NOP
    ctx->pc = 0x243430u;
}
