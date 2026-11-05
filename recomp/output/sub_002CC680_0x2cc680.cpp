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

// Function: sub_002CC680
// Address: 0x2cc680 - 0x2cc6a0
void sub_002CC680_0x2cc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC680_0x2cc680");
#endif

    switch (ctx->pc) {
        case 0x2cc690u: goto label_2cc690;
        default: break;
    }

    ctx->pc = 0x2cc680u;

    // 0x2cc680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc688: 0xc0b3052  jal         func_2CC148
    ctx->pc = 0x2CC688u;
    SET_GPR_U32(ctx, 31, 0x2CC690u);
    ctx->pc = 0x2CC148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC148u, 0x2CC688u, 0x2CC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC690u;
label_2cc690:
    // 0x2cc690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc694: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC694u;
        // 0x2cc698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC69Cu;
    // 0x2cc69c: 0x0  nop
    ctx->pc = 0x2cc69cu;
    // NOP
    ctx->pc = 0x2cc6a0u;
}
