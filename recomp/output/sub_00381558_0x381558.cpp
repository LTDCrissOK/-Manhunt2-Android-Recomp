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

// Function: sub_00381558
// Address: 0x381558 - 0x381578
void sub_00381558_0x381558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381558_0x381558");
#endif

    switch (ctx->pc) {
        case 0x381568u: goto label_381568;
        default: break;
    }

    ctx->pc = 0x381558u;

    // 0x381558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38155c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381560: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x381560u;
    SET_GPR_U32(ctx, 31, 0x381568u);
    ctx->pc = 0x381564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381560u;
    // 0x381564: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x381560u, 0x381568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381568u;
label_381568:
    // 0x381568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38156c: 0x3e00008  jr          $ra
    ctx->pc = 0x38156Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38156Cu;
        // 0x381570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38156Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381574u;
    // 0x381574: 0x0  nop
    ctx->pc = 0x381574u;
    // NOP
    ctx->pc = 0x381578u;
}
