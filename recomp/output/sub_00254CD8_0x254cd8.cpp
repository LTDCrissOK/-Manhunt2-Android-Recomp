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

// Function: sub_00254CD8
// Address: 0x254cd8 - 0x254cf8
void sub_00254CD8_0x254cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254CD8_0x254cd8");
#endif

    switch (ctx->pc) {
        case 0x254ce8u: goto label_254ce8;
        default: break;
    }

    ctx->pc = 0x254cd8u;

    // 0x254cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254ce0: 0xc061fd0  jal         func_187F40
    ctx->pc = 0x254CE0u;
    SET_GPR_U32(ctx, 31, 0x254CE8u);
    ctx->pc = 0x254CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CE0u;
    // 0x254ce4: 0x8c840fe4  lw          $a0, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187F40u, 0x254CE0u, 0x254CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CE8u;
label_254ce8:
    // 0x254ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254cec: 0x3e00008  jr          $ra
    ctx->pc = 0x254CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CECu;
        // 0x254cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254CF4u;
    // 0x254cf4: 0x0  nop
    ctx->pc = 0x254cf4u;
    // NOP
    ctx->pc = 0x254cf8u;
}
