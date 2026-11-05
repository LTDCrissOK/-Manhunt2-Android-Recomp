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

// Function: sub_003C59D8
// Address: 0x3c59d8 - 0x3c5a00
void sub_003C59D8_0x3c59d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C59D8_0x3c59d8");
#endif

    switch (ctx->pc) {
        case 0x3c59f0u: goto label_3c59f0;
        default: break;
    }

    ctx->pc = 0x3c59d8u;

    // 0x3c59d8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c59d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c59dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c59dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c59e0: 0x8c44cddc  lw          $a0, -0x3224($v0)
    ctx->pc = 0x3c59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42CDDCu));
    // 0x3c59e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c59e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c59e8: 0xc0f1670  jal         func_3C59C0
    ctx->pc = 0x3C59E8u;
    SET_GPR_U32(ctx, 31, 0x3C59F0u);
    ctx->pc = 0x3C59C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C59C0u, 0x3C59E8u, 0x3C59F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C59F0u;
label_3c59f0:
    // 0x3c59f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c59f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c59f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3C59F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C59F4u;
        // 0x3c59f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C59F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C59FCu;
    // 0x3c59fc: 0x0  nop
    ctx->pc = 0x3c59fcu;
    // NOP
    ctx->pc = 0x3c5a00u;
}
