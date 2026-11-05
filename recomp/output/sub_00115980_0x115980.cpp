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

// Function: sub_00115980
// Address: 0x115980 - 0x1159a0
void sub_00115980_0x115980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115980_0x115980");
#endif

    switch (ctx->pc) {
        case 0x115990u: goto label_115990;
        default: break;
    }

    ctx->pc = 0x115980u;

    // 0x115980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115988: 0xc045714  jal         func_115C50
    ctx->pc = 0x115988u;
    SET_GPR_U32(ctx, 31, 0x115990u);
    ctx->pc = 0x115C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C50u, 0x115988u, 0x115990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115990u;
label_115990:
    // 0x115990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115994: 0x3e00008  jr          $ra
    ctx->pc = 0x115994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115994u;
        // 0x115998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11599Cu;
    // 0x11599c: 0x0  nop
    ctx->pc = 0x11599cu;
    // NOP
    ctx->pc = 0x1159a0u;
}
