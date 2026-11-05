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

// Function: sub_002C5808
// Address: 0x2c5808 - 0x2c5828
void sub_002C5808_0x2c5808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5808_0x2c5808");
#endif

    switch (ctx->pc) {
        case 0x2c581cu: goto label_2c581c;
        default: break;
    }

    ctx->pc = 0x2c5808u;

    // 0x2c5808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c5808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c580c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c580cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5810: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c5810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c5814: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2C5814u;
    SET_GPR_U32(ctx, 31, 0x2C581Cu);
    ctx->pc = 0x2C5818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5814u;
    // 0x2c5818: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2C5814u, 0x2C581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C581Cu;
label_2c581c:
    // 0x2c581c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c581cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5820: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5820u;
        // 0x2c5824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5828u;
}
