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

// Function: sub_001D5DF0
// Address: 0x1d5df0 - 0x1d5e10
void sub_001D5DF0_0x1d5df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DF0_0x1d5df0");
#endif

    switch (ctx->pc) {
        case 0x1d5e04u: goto label_1d5e04;
        default: break;
    }

    ctx->pc = 0x1d5df0u;

    // 0x1d5df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5df8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1d5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d5dfc: 0xc074286  jal         func_1D0A18
    ctx->pc = 0x1D5DFCu;
    SET_GPR_U32(ctx, 31, 0x1D5E04u);
    ctx->pc = 0x1D5E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DFCu;
    // 0x1d5e00: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A18u, 0x1D5DFCu, 0x1D5E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E04u;
label_1d5e04:
    // 0x1d5e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E08u;
        // 0x1d5e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E10u;
}
