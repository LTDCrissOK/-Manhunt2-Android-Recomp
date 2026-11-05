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

// Function: sub_001C3DD0
// Address: 0x1c3dd0 - 0x1c3df0
void sub_001C3DD0_0x1c3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3DD0_0x1c3dd0");
#endif

    switch (ctx->pc) {
        case 0x1c3de0u: goto label_1c3de0;
        default: break;
    }

    ctx->pc = 0x1c3dd0u;

    // 0x1c3dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3dd8: 0xc04155c  jal         func_105570
    ctx->pc = 0x1C3DD8u;
    SET_GPR_U32(ctx, 31, 0x1C3DE0u);
    ctx->pc = 0x1C3DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3DD8u;
    // 0x1c3ddc: 0x8c840030  lw          $a0, 0x30($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105570u, 0x1C3DD8u, 0x1C3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3DE0u;
label_1c3de0:
    // 0x1c3de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3DE4u;
        // 0x1c3de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3DECu;
    // 0x1c3dec: 0x0  nop
    ctx->pc = 0x1c3decu;
    // NOP
    ctx->pc = 0x1c3df0u;
}
