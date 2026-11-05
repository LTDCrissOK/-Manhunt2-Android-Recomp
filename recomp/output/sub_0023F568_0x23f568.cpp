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

// Function: sub_0023F568
// Address: 0x23f568 - 0x23f588
void sub_0023F568_0x23f568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F568_0x23f568");
#endif

    switch (ctx->pc) {
        case 0x23f578u: goto label_23f578;
        default: break;
    }

    ctx->pc = 0x23f568u;

    // 0x23f568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23f568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23f56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f570: 0xc096fd8  jal         func_25BF60
    ctx->pc = 0x23F570u;
    SET_GPR_U32(ctx, 31, 0x23F578u);
    ctx->pc = 0x23F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F570u;
    // 0x23f574: 0x8c840fcc  lw          $a0, 0xFCC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4044)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF60u, 0x23F570u, 0x23F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F578u;
label_23f578:
    // 0x23f578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f57c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F57Cu;
        // 0x23f580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F584u;
    // 0x23f584: 0x0  nop
    ctx->pc = 0x23f584u;
    // NOP
    ctx->pc = 0x23f588u;
}
