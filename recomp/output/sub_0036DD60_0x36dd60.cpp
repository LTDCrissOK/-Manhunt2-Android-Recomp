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

// Function: sub_0036DD60
// Address: 0x36dd60 - 0x36dd80
void sub_0036DD60_0x36dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DD60_0x36dd60");
#endif

    switch (ctx->pc) {
        case 0x36dd74u: goto label_36dd74;
        default: break;
    }

    ctx->pc = 0x36dd60u;

    // 0x36dd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36dd64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36dd64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dd68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dd6c: 0xc0db678  jal         func_36D9E0
    ctx->pc = 0x36DD6Cu;
    SET_GPR_U32(ctx, 31, 0x36DD74u);
    ctx->pc = 0x36DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DD6Cu;
    // 0x36dd70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D9E0u, 0x36DD6Cu, 0x36DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DD74u;
label_36dd74:
    // 0x36dd74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36dd74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36dd78: 0x3e00008  jr          $ra
    ctx->pc = 0x36DD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DD78u;
        // 0x36dd7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DD80u;
}
