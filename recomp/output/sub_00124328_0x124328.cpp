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

// Function: sub_00124328
// Address: 0x124328 - 0x124348
void sub_00124328_0x124328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124328_0x124328");
#endif

    switch (ctx->pc) {
        case 0x124338u: goto label_124338;
        default: break;
    }

    ctx->pc = 0x124328u;

    // 0x124328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12432c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x124330: 0xc0490d2  jal         func_124348
    ctx->pc = 0x124330u;
    SET_GPR_U32(ctx, 31, 0x124338u);
    ctx->pc = 0x124334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124330u;
    // 0x124334: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124348u, 0x124330u, 0x124338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124338u;
label_124338:
    // 0x124338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12433c: 0x3e00008  jr          $ra
    ctx->pc = 0x12433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12433Cu;
        // 0x124340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124344u;
    // 0x124344: 0x0  nop
    ctx->pc = 0x124344u;
    // NOP
    ctx->pc = 0x124348u;
}
