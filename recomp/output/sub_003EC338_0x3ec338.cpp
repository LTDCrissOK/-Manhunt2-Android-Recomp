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

// Function: sub_003EC338
// Address: 0x3ec338 - 0x3ec358
void sub_003EC338_0x3ec338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC338_0x3ec338");
#endif

    switch (ctx->pc) {
        case 0x3ec348u: goto label_3ec348;
        default: break;
    }

    ctx->pc = 0x3ec338u;

    // 0x3ec338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec340: 0xc0fa8a8  jal         func_3EA2A0
    ctx->pc = 0x3EC340u;
    SET_GPR_U32(ctx, 31, 0x3EC348u);
    ctx->pc = 0x3EA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EA2A0u, 0x3EC340u, 0x3EC348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC348u;
label_3ec348:
    // 0x3ec348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec34c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC34Cu;
        // 0x3ec350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC354u;
    // 0x3ec354: 0x0  nop
    ctx->pc = 0x3ec354u;
    // NOP
    ctx->pc = 0x3ec358u;
}
