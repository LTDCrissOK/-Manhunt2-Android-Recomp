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

// Function: sub_003E2670
// Address: 0x3e2670 - 0x3e26a0
void sub_003E2670_0x3e2670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2670_0x3e2670");
#endif

    switch (ctx->pc) {
        case 0x3e2688u: goto label_3e2688;
        case 0x3e2690u: goto label_3e2690;
        default: break;
    }

    ctx->pc = 0x3e2670u;

    // 0x3e2670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e2674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e2678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e2678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e267c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3e267cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3e2680: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x3E2680u;
    SET_GPR_U32(ctx, 31, 0x3E2688u);
    ctx->pc = 0x3E2684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2680u;
    // 0x3e2684: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x3E2680u, 0x3E2688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2688u;
label_3e2688:
    // 0x3e2688: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x3E2688u;
    SET_GPR_U32(ctx, 31, 0x3E2690u);
    ctx->pc = 0x3E268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2688u;
    // 0x3e268c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x3E2688u, 0x3E2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2690u;
label_3e2690:
    // 0x3e2690: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2694: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3e2694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2698: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2698u;
        // 0x3e269c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E26A0u;
}
