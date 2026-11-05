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

// Function: sub_00107458
// Address: 0x107458 - 0x107478
void sub_00107458_0x107458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107458_0x107458");
#endif

    switch (ctx->pc) {
        case 0x107468u: goto label_107468;
        default: break;
    }

    ctx->pc = 0x107458u;

    // 0x107458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10745c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107460: 0xc0f6b4a  jal         func_3DAD28
    ctx->pc = 0x107460u;
    SET_GPR_U32(ctx, 31, 0x107468u);
    ctx->pc = 0x3DAD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAD28u, 0x107460u, 0x107468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107468u;
label_107468:
    // 0x107468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10746c: 0x3e00008  jr          $ra
    ctx->pc = 0x10746Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10746Cu;
        // 0x107470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10746Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107474u;
    // 0x107474: 0x0  nop
    ctx->pc = 0x107474u;
    // NOP
    ctx->pc = 0x107478u;
}
