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

// Function: sub_00297528
// Address: 0x297528 - 0x297548
void sub_00297528_0x297528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297528_0x297528");
#endif

    switch (ctx->pc) {
        case 0x297538u: goto label_297538;
        default: break;
    }

    ctx->pc = 0x297528u;

    // 0x297528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x297528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29752c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x297530: 0xc0a5952  jal         func_296548
    ctx->pc = 0x297530u;
    SET_GPR_U32(ctx, 31, 0x297538u);
    ctx->pc = 0x296548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296548u, 0x297530u, 0x297538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297538u;
label_297538:
    // 0x297538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29753c: 0x3e00008  jr          $ra
    ctx->pc = 0x29753Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29753Cu;
        // 0x297540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29753Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297544u;
    // 0x297544: 0x0  nop
    ctx->pc = 0x297544u;
    // NOP
    ctx->pc = 0x297548u;
}
