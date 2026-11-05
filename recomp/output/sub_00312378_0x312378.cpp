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

// Function: sub_00312378
// Address: 0x312378 - 0x312398
void sub_00312378_0x312378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312378_0x312378");
#endif

    switch (ctx->pc) {
        case 0x312388u: goto label_312388;
        default: break;
    }

    ctx->pc = 0x312378u;

    // 0x312378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31237c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31237cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312380: 0xc0c48da  jal         func_312368
    ctx->pc = 0x312380u;
    SET_GPR_U32(ctx, 31, 0x312388u);
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x312380u, 0x312388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312388u;
label_312388:
    // 0x312388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31238c: 0x3e00008  jr          $ra
    ctx->pc = 0x31238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31238Cu;
        // 0x312390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31238Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312394u;
    // 0x312394: 0x0  nop
    ctx->pc = 0x312394u;
    // NOP
    ctx->pc = 0x312398u;
}
