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

// Function: sub_003E2ED0
// Address: 0x3e2ed0 - 0x3e2ef0
void sub_003E2ED0_0x3e2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2ED0_0x3e2ed0");
#endif

    switch (ctx->pc) {
        case 0x3e2ee4u: goto label_3e2ee4;
        default: break;
    }

    ctx->pc = 0x3e2ed0u;

    // 0x3e2ed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e2ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e2ed4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e2ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e2edc: 0xc0f8b38  jal         func_3E2CE0
    ctx->pc = 0x3E2EDCu;
    SET_GPR_U32(ctx, 31, 0x3E2EE4u);
    ctx->pc = 0x3E2EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2EDCu;
    // 0x3e2ee0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2CE0u, 0x3E2EDCu, 0x3E2EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2EE4u;
label_3e2ee4:
    // 0x3e2ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2EE8u;
        // 0x3e2eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2EF0u;
}
