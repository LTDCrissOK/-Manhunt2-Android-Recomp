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

// Function: sub_00396018
// Address: 0x396018 - 0x396038
void sub_00396018_0x396018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396018_0x396018");
#endif

    switch (ctx->pc) {
        case 0x396028u: goto label_396028;
        default: break;
    }

    ctx->pc = 0x396018u;

    // 0x396018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39601c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39601cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396020: 0xc0e710e  jal         func_39C438
    ctx->pc = 0x396020u;
    SET_GPR_U32(ctx, 31, 0x396028u);
    ctx->pc = 0x39C438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C438u, 0x396020u, 0x396028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396028u;
label_396028:
    // 0x396028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x396028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39602c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39602cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396030: 0x3e00008  jr          $ra
    ctx->pc = 0x396030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396030u;
        // 0x396034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396038u;
}
