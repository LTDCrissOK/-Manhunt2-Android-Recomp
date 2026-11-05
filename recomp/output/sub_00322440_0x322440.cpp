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

// Function: sub_00322440
// Address: 0x322440 - 0x322460
void sub_00322440_0x322440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322440_0x322440");
#endif

    switch (ctx->pc) {
        case 0x322450u: goto label_322450;
        default: break;
    }

    ctx->pc = 0x322440u;

    // 0x322440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322448: 0xc0c9384  jal         func_324E10
    ctx->pc = 0x322448u;
    SET_GPR_U32(ctx, 31, 0x322450u);
    ctx->pc = 0x324E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324E10u, 0x322448u, 0x322450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322450u;
label_322450:
    // 0x322450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x322454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322458: 0x3e00008  jr          $ra
    ctx->pc = 0x322458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322458u;
        // 0x32245c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322460u;
}
