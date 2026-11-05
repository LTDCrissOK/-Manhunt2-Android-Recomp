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

// Function: sub_00107810
// Address: 0x107810 - 0x107830
void sub_00107810_0x107810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107810_0x107810");
#endif

    switch (ctx->pc) {
        case 0x107820u: goto label_107820;
        default: break;
    }

    ctx->pc = 0x107810u;

    // 0x107810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107818: 0xc0f6c74  jal         func_3DB1D0
    ctx->pc = 0x107818u;
    SET_GPR_U32(ctx, 31, 0x107820u);
    ctx->pc = 0x3DB1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB1D0u, 0x107818u, 0x107820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107820u;
label_107820:
    // 0x107820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107824: 0x3e00008  jr          $ra
    ctx->pc = 0x107824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107824u;
        // 0x107828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10782Cu;
    // 0x10782c: 0x0  nop
    ctx->pc = 0x10782cu;
    // NOP
    ctx->pc = 0x107830u;
}
