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

// Function: sub_001B29B0
// Address: 0x1b29b0 - 0x1b29d0
void sub_001B29B0_0x1b29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B29B0_0x1b29b0");
#endif

    switch (ctx->pc) {
        case 0x1b29c4u: goto label_1b29c4;
        default: break;
    }

    ctx->pc = 0x1b29b0u;

    // 0x1b29b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b29b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b29b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b29b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b29b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b29bc: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B29BCu;
    SET_GPR_U32(ctx, 31, 0x1B29C4u);
    ctx->pc = 0x1B29C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B29BCu;
    // 0x1b29c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B29BCu, 0x1B29C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B29C4u;
label_1b29c4:
    // 0x1b29c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b29c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b29c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B29C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B29C8u;
        // 0x1b29cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B29C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B29D0u;
}
