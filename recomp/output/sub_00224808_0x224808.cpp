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

// Function: sub_00224808
// Address: 0x224808 - 0x224828
void sub_00224808_0x224808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224808_0x224808");
#endif

    switch (ctx->pc) {
        case 0x224818u: goto label_224818;
        default: break;
    }

    ctx->pc = 0x224808u;

    // 0x224808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22480c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224810: 0xc08918c  jal         func_224630
    ctx->pc = 0x224810u;
    SET_GPR_U32(ctx, 31, 0x224818u);
    ctx->pc = 0x224630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224630u, 0x224810u, 0x224818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224818u;
label_224818:
    // 0x224818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22481c: 0x3e00008  jr          $ra
    ctx->pc = 0x22481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22481Cu;
        // 0x224820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224824u;
    // 0x224824: 0x0  nop
    ctx->pc = 0x224824u;
    // NOP
    ctx->pc = 0x224828u;
}
