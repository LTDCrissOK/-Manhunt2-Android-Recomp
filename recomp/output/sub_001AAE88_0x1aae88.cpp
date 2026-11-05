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

// Function: sub_001AAE88
// Address: 0x1aae88 - 0x1aaea8
void sub_001AAE88_0x1aae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAE88_0x1aae88");
#endif

    switch (ctx->pc) {
        case 0x1aae98u: goto label_1aae98;
        default: break;
    }

    ctx->pc = 0x1aae88u;

    // 0x1aae88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aae8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aae90: 0xc092210  jal         func_248840
    ctx->pc = 0x1AAE90u;
    SET_GPR_U32(ctx, 31, 0x1AAE98u);
    ctx->pc = 0x248840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248840u, 0x1AAE90u, 0x1AAE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE98u;
label_1aae98:
    // 0x1aae98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aae9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE9Cu;
        // 0x1aaea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAEA4u;
    // 0x1aaea4: 0x0  nop
    ctx->pc = 0x1aaea4u;
    // NOP
    ctx->pc = 0x1aaea8u;
}
