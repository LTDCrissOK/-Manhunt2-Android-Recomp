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

// Function: sub_0036B150
// Address: 0x36b150 - 0x36b170
void sub_0036B150_0x36b150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B150_0x36b150");
#endif

    switch (ctx->pc) {
        case 0x36b160u: goto label_36b160;
        default: break;
    }

    ctx->pc = 0x36b150u;

    // 0x36b150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36b158: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x36B158u;
    SET_GPR_U32(ctx, 31, 0x36B160u);
    ctx->pc = 0x36B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B158u;
    // 0x36b15c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x36B158u, 0x36B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B160u;
label_36b160:
    // 0x36b160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b164: 0x3e00008  jr          $ra
    ctx->pc = 0x36B164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B164u;
        // 0x36b168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B16Cu;
    // 0x36b16c: 0x0  nop
    ctx->pc = 0x36b16cu;
    // NOP
    ctx->pc = 0x36b170u;
}
