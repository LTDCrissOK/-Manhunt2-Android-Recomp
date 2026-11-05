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

// Function: sub_003EC418
// Address: 0x3ec418 - 0x3ec438
void sub_003EC418_0x3ec418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC418_0x3ec418");
#endif

    switch (ctx->pc) {
        case 0x3ec428u: goto label_3ec428;
        default: break;
    }

    ctx->pc = 0x3ec418u;

    // 0x3ec418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec420: 0xc0faaf4  jal         func_3EABD0
    ctx->pc = 0x3EC420u;
    SET_GPR_U32(ctx, 31, 0x3EC428u);
    ctx->pc = 0x3EABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EABD0u, 0x3EC420u, 0x3EC428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC428u;
label_3ec428:
    // 0x3ec428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec42c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC42Cu;
        // 0x3ec430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC42Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC434u;
    // 0x3ec434: 0x0  nop
    ctx->pc = 0x3ec434u;
    // NOP
    ctx->pc = 0x3ec438u;
}
