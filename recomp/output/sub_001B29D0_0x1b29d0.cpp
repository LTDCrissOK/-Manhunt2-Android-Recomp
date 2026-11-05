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

// Function: sub_001B29D0
// Address: 0x1b29d0 - 0x1b29f0
void sub_001B29D0_0x1b29d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B29D0_0x1b29d0");
#endif

    switch (ctx->pc) {
        case 0x1b29e4u: goto label_1b29e4;
        default: break;
    }

    ctx->pc = 0x1b29d0u;

    // 0x1b29d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b29d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b29d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b29d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b29d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b29dc: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B29DCu;
    SET_GPR_U32(ctx, 31, 0x1B29E4u);
    ctx->pc = 0x1B29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29DCu;
    // 0x1b29e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B29DCu, 0x1B29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29E4u;
label_1b29e4:
    // 0x1b29e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b29e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b29e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B29E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29E8u;
        // 0x1b29ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B29E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B29F0u;
}
