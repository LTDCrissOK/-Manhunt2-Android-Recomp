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

// Function: sub_001109E0
// Address: 0x1109e0 - 0x110a08
void sub_001109E0_0x1109e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001109E0_0x1109e0");
#endif

    switch (ctx->pc) {
        case 0x1109fcu: goto label_1109fc;
        default: break;
    }

    ctx->pc = 0x1109e0u;

    // 0x1109e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1109e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1109e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1109e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1109e8: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1109ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1109ECu;
    {
        const bool branch_taken_0x1109ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1109F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1109ECu;
        // 0x1109f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1109ec) {
            ctx->pc = 0x110A00u;
            goto label_110a00;
        }
    }
    ctx->pc = 0x1109F4u;
    // 0x1109f4: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x1109F4u;
    SET_GPR_U32(ctx, 31, 0x1109FCu);
    ctx->pc = 0x17F248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F248u, 0x1109F4u, 0x1109FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109FCu;
label_1109fc:
    // 0x1109fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1109fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110a00:
    // 0x110a00: 0x3e00008  jr          $ra
    ctx->pc = 0x110A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A00u;
        // 0x110a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110A08u;
}
