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

// Function: sub_0036E0F0
// Address: 0x36e0f0 - 0x36e110
void sub_0036E0F0_0x36e0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E0F0_0x36e0f0");
#endif

    switch (ctx->pc) {
        case 0x36e100u: goto label_36e100;
        default: break;
    }

    ctx->pc = 0x36e0f0u;

    // 0x36e0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e0f8: 0xc0dd1a2  jal         func_374688
    ctx->pc = 0x36E0F8u;
    SET_GPR_U32(ctx, 31, 0x36E100u);
    ctx->pc = 0x36E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E0F8u;
    // 0x36e0fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374688u, 0x36E0F8u, 0x36E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E100u;
label_36e100:
    // 0x36e100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e108: 0x3e00008  jr          $ra
    ctx->pc = 0x36E108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E108u;
        // 0x36e10c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E110u;
}
