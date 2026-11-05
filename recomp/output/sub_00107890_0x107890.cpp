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

// Function: sub_00107890
// Address: 0x107890 - 0x1078b0
void sub_00107890_0x107890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107890_0x107890");
#endif

    switch (ctx->pc) {
        case 0x1078a0u: goto label_1078a0;
        default: break;
    }

    ctx->pc = 0x107890u;

    // 0x107890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107898: 0xc0f6c9c  jal         func_3DB270
    ctx->pc = 0x107898u;
    SET_GPR_U32(ctx, 31, 0x1078A0u);
    ctx->pc = 0x3DB270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB270u, 0x107898u, 0x1078A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078A0u;
label_1078a0:
    // 0x1078a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1078a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1078a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1078A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1078A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1078A4u;
        // 0x1078a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1078A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1078ACu;
    // 0x1078ac: 0x0  nop
    ctx->pc = 0x1078acu;
    // NOP
    ctx->pc = 0x1078b0u;
}
