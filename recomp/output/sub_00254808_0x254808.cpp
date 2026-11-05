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

// Function: sub_00254808
// Address: 0x254808 - 0x254828
void sub_00254808_0x254808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254808_0x254808");
#endif

    switch (ctx->pc) {
        case 0x254818u: goto label_254818;
        default: break;
    }

    ctx->pc = 0x254808u;

    // 0x254808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25480c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25480cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254810: 0xc0619b2  jal         func_1866C8
    ctx->pc = 0x254810u;
    SET_GPR_U32(ctx, 31, 0x254818u);
    ctx->pc = 0x254814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254810u;
    // 0x254814: 0x8c840ff4  lw          $a0, 0xFF4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1866C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1866C8u, 0x254810u, 0x254818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254818u;
label_254818:
    // 0x254818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25481c: 0x3e00008  jr          $ra
    ctx->pc = 0x25481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25481Cu;
        // 0x254820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254824u;
    // 0x254824: 0x0  nop
    ctx->pc = 0x254824u;
    // NOP
    ctx->pc = 0x254828u;
}
