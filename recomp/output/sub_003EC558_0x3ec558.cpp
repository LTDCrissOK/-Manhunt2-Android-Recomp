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

// Function: sub_003EC558
// Address: 0x3ec558 - 0x3ec578
void sub_003EC558_0x3ec558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC558_0x3ec558");
#endif

    switch (ctx->pc) {
        case 0x3ec568u: goto label_3ec568;
        default: break;
    }

    ctx->pc = 0x3ec558u;

    // 0x3ec558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec560: 0xc0fae3c  jal         func_3EB8F0
    ctx->pc = 0x3EC560u;
    SET_GPR_U32(ctx, 31, 0x3EC568u);
    ctx->pc = 0x3EB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB8F0u, 0x3EC560u, 0x3EC568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC568u;
label_3ec568:
    // 0x3ec568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec56c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC56Cu;
        // 0x3ec570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC574u;
    // 0x3ec574: 0x0  nop
    ctx->pc = 0x3ec574u;
    // NOP
    ctx->pc = 0x3ec578u;
}
