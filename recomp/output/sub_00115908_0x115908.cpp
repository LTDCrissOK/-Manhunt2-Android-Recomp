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

// Function: sub_00115908
// Address: 0x115908 - 0x115928
void sub_00115908_0x115908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115908_0x115908");
#endif

    switch (ctx->pc) {
        case 0x115918u: goto label_115918;
        default: break;
    }

    ctx->pc = 0x115908u;

    // 0x115908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11590c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115910: 0xc045720  jal         func_115C80
    ctx->pc = 0x115910u;
    SET_GPR_U32(ctx, 31, 0x115918u);
    ctx->pc = 0x115C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C80u, 0x115910u, 0x115918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115918u;
label_115918:
    // 0x115918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11591c: 0x3e00008  jr          $ra
    ctx->pc = 0x11591Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11591Cu;
        // 0x115920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11591Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115924u;
    // 0x115924: 0x0  nop
    ctx->pc = 0x115924u;
    // NOP
    ctx->pc = 0x115928u;
}
