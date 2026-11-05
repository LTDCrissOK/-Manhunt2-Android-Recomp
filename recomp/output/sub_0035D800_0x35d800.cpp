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

// Function: sub_0035D800
// Address: 0x35d800 - 0x35d820
void sub_0035D800_0x35d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D800_0x35d800");
#endif

    switch (ctx->pc) {
        case 0x35d810u: goto label_35d810;
        default: break;
    }

    ctx->pc = 0x35d800u;

    // 0x35d800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d808: 0xc082ebc  jal         func_20BAF0
    ctx->pc = 0x35D808u;
    SET_GPR_U32(ctx, 31, 0x35D810u);
    ctx->pc = 0x20BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAF0u, 0x35D808u, 0x35D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D810u;
label_35d810:
    // 0x35d810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d814: 0x3e00008  jr          $ra
    ctx->pc = 0x35D814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D814u;
        // 0x35d818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D81Cu;
    // 0x35d81c: 0x0  nop
    ctx->pc = 0x35d81cu;
    // NOP
    ctx->pc = 0x35d820u;
}
