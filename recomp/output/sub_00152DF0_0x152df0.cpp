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

// Function: sub_00152DF0
// Address: 0x152df0 - 0x152e10
void sub_00152DF0_0x152df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152DF0_0x152df0");
#endif

    switch (ctx->pc) {
        case 0x152e00u: goto label_152e00;
        default: break;
    }

    ctx->pc = 0x152df0u;

    // 0x152df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152df8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x152DF8u;
    SET_GPR_U32(ctx, 31, 0x152E00u);
    ctx->pc = 0x152DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DF8u;
    // 0x152dfc: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x152DF8u, 0x152E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E00u;
label_152e00:
    // 0x152e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x152e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x152e08: 0x3e00008  jr          $ra
    ctx->pc = 0x152E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E08u;
        // 0x152e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E10u;
}
