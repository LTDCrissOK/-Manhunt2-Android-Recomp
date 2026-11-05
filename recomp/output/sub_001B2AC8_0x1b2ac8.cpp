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

// Function: sub_001B2AC8
// Address: 0x1b2ac8 - 0x1b2ae8
void sub_001B2AC8_0x1b2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2AC8_0x1b2ac8");
#endif

    switch (ctx->pc) {
        case 0x1b2adcu: goto label_1b2adc;
        default: break;
    }

    ctx->pc = 0x1b2ac8u;

    // 0x1b2ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b2accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2ad4: 0xc06c6c8  jal         func_1B1B20
    ctx->pc = 0x1B2AD4u;
    SET_GPR_U32(ctx, 31, 0x1B2ADCu);
    ctx->pc = 0x1B2AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2AD4u;
    // 0x1b2ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1B20u, 0x1B2AD4u, 0x1B2ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2ADCu;
label_1b2adc:
    // 0x1b2adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AE0u;
        // 0x1b2ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2AE8u;
}
