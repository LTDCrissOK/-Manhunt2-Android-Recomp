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

// Function: sub_00107500
// Address: 0x107500 - 0x107520
void sub_00107500_0x107500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107500_0x107500");
#endif

    switch (ctx->pc) {
        case 0x107510u: goto label_107510;
        default: break;
    }

    ctx->pc = 0x107500u;

    // 0x107500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107508: 0xc0f6b80  jal         func_3DAE00
    ctx->pc = 0x107508u;
    SET_GPR_U32(ctx, 31, 0x107510u);
    ctx->pc = 0x3DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAE00u, 0x107508u, 0x107510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107510u;
label_107510:
    // 0x107510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107514: 0x3e00008  jr          $ra
    ctx->pc = 0x107514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107514u;
        // 0x107518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10751Cu;
    // 0x10751c: 0x0  nop
    ctx->pc = 0x10751cu;
    // NOP
    ctx->pc = 0x107520u;
}
