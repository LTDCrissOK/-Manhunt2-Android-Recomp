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

// Function: sub_00123CC8
// Address: 0x123cc8 - 0x123ce8
void sub_00123CC8_0x123cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123CC8_0x123cc8");
#endif

    switch (ctx->pc) {
        case 0x123cd8u: goto label_123cd8;
        default: break;
    }

    ctx->pc = 0x123cc8u;

    // 0x123cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x123cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x123ccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x123cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x123cd0: 0xc042fd8  jal         func_10BF60
    ctx->pc = 0x123CD0u;
    SET_GPR_U32(ctx, 31, 0x123CD8u);
    ctx->pc = 0x123CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CD0u;
    // 0x123cd4: 0x8c840078  lw          $a0, 0x78($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF60u, 0x123CD0u, 0x123CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD8u;
label_123cd8:
    // 0x123cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x123CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CDCu;
        // 0x123ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123CE4u;
    // 0x123ce4: 0x0  nop
    ctx->pc = 0x123ce4u;
    // NOP
    ctx->pc = 0x123ce8u;
}
