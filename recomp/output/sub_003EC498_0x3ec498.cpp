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

// Function: sub_003EC498
// Address: 0x3ec498 - 0x3ec4b8
void sub_003EC498_0x3ec498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC498_0x3ec498");
#endif

    switch (ctx->pc) {
        case 0x3ec4a8u: goto label_3ec4a8;
        default: break;
    }

    ctx->pc = 0x3ec498u;

    // 0x3ec498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec49c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec4a0: 0xc0fac44  jal         func_3EB110
    ctx->pc = 0x3EC4A0u;
    SET_GPR_U32(ctx, 31, 0x3EC4A8u);
    ctx->pc = 0x3EB110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EB110u, 0x3EC4A0u, 0x3EC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC4A8u;
label_3ec4a8:
    // 0x3ec4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC4ACu;
        // 0x3ec4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC4B4u;
    // 0x3ec4b4: 0x0  nop
    ctx->pc = 0x3ec4b4u;
    // NOP
    ctx->pc = 0x3ec4b8u;
}
