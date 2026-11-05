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

// Function: sub_0036E540
// Address: 0x36e540 - 0x36e570
void sub_0036E540_0x36e540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E540_0x36e540");
#endif

    switch (ctx->pc) {
        case 0x36e550u: goto label_36e550;
        case 0x36e558u: goto label_36e558;
        case 0x36e560u: goto label_36e560;
        default: break;
    }

    ctx->pc = 0x36e540u;

    // 0x36e540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e548: 0xc0dcd2c  jal         func_3734B0
    ctx->pc = 0x36E548u;
    SET_GPR_U32(ctx, 31, 0x36E550u);
    ctx->pc = 0x3734B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3734B0u, 0x36E548u, 0x36E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E550u;
label_36e550:
    // 0x36e550: 0xc0db3b0  jal         func_36CEC0
    ctx->pc = 0x36E550u;
    SET_GPR_U32(ctx, 31, 0x36E558u);
    ctx->pc = 0x36CEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CEC0u, 0x36E550u, 0x36E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E558u;
label_36e558:
    // 0x36e558: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x36E558u;
    SET_GPR_U32(ctx, 31, 0x36E560u);
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x36E558u, 0x36E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E560u;
label_36e560:
    // 0x36e560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e568: 0x3e00008  jr          $ra
    ctx->pc = 0x36E568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E568u;
        // 0x36e56c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E570u;
}
