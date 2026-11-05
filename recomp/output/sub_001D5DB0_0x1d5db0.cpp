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

// Function: sub_001D5DB0
// Address: 0x1d5db0 - 0x1d5dd0
void sub_001D5DB0_0x1d5db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DB0_0x1d5db0");
#endif

    switch (ctx->pc) {
        case 0x1d5dc4u: goto label_1d5dc4;
        default: break;
    }

    ctx->pc = 0x1d5db0u;

    // 0x1d5db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5db8: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1d5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d5dbc: 0xc0742a0  jal         func_1D0A80
    ctx->pc = 0x1D5DBCu;
    SET_GPR_U32(ctx, 31, 0x1D5DC4u);
    ctx->pc = 0x1D5DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5DBCu;
    // 0x1d5dc0: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0A80u, 0x1D5DBCu, 0x1D5DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5DC4u;
label_1d5dc4:
    // 0x1d5dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DC8u;
        // 0x1d5dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5DD0u;
}
