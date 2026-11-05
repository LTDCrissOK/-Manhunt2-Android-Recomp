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

// Function: sub_00115F58
// Address: 0x115f58 - 0x115f78
void sub_00115F58_0x115f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115F58_0x115f58");
#endif

    switch (ctx->pc) {
        case 0x115f68u: goto label_115f68;
        default: break;
    }

    ctx->pc = 0x115f58u;

    // 0x115f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115f60: 0xc095368  jal         func_254DA0
    ctx->pc = 0x115F60u;
    SET_GPR_U32(ctx, 31, 0x115F68u);
    ctx->pc = 0x115F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F60u;
    // 0x115f64: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x115F60u, 0x115F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F68u;
label_115f68:
    // 0x115f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x115F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F6Cu;
        // 0x115f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F74u;
    // 0x115f74: 0x0  nop
    ctx->pc = 0x115f74u;
    // NOP
    ctx->pc = 0x115f78u;
}
