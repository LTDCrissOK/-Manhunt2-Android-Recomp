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

// Function: sub_00107438
// Address: 0x107438 - 0x107458
void sub_00107438_0x107438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107438_0x107438");
#endif

    switch (ctx->pc) {
        case 0x107448u: goto label_107448;
        default: break;
    }

    ctx->pc = 0x107438u;

    // 0x107438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10743c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10743cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107440: 0xc0f6b40  jal         func_3DAD00
    ctx->pc = 0x107440u;
    SET_GPR_U32(ctx, 31, 0x107448u);
    ctx->pc = 0x3DAD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAD00u, 0x107440u, 0x107448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107448u;
label_107448:
    // 0x107448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10744c: 0x3e00008  jr          $ra
    ctx->pc = 0x10744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10744Cu;
        // 0x107450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10744Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107454u;
    // 0x107454: 0x0  nop
    ctx->pc = 0x107454u;
    // NOP
    ctx->pc = 0x107458u;
}
