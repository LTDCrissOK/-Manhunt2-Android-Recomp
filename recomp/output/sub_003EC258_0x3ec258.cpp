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

// Function: sub_003EC258
// Address: 0x3ec258 - 0x3ec278
void sub_003EC258_0x3ec258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC258_0x3ec258");
#endif

    switch (ctx->pc) {
        case 0x3ec268u: goto label_3ec268;
        default: break;
    }

    ctx->pc = 0x3ec258u;

    // 0x3ec258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec260: 0xc0fa664  jal         func_3E9990
    ctx->pc = 0x3EC260u;
    SET_GPR_U32(ctx, 31, 0x3EC268u);
    ctx->pc = 0x3E9990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9990u, 0x3EC260u, 0x3EC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC268u;
label_3ec268:
    // 0x3ec268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec26c: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC26Cu;
        // 0x3ec270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC274u;
    // 0x3ec274: 0x0  nop
    ctx->pc = 0x3ec274u;
    // NOP
    ctx->pc = 0x3ec278u;
}
