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

// Function: sub_00261530
// Address: 0x261530 - 0x261550
void sub_00261530_0x261530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261530_0x261530");
#endif

    switch (ctx->pc) {
        case 0x261540u: goto label_261540;
        default: break;
    }

    ctx->pc = 0x261530u;

    // 0x261530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x261534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261538: 0xc0d6d70  jal         func_35B5C0
    ctx->pc = 0x261538u;
    SET_GPR_U32(ctx, 31, 0x261540u);
    ctx->pc = 0x35B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B5C0u, 0x261538u, 0x261540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261540u;
label_261540:
    // 0x261540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261544: 0x3e00008  jr          $ra
    ctx->pc = 0x261544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261544u;
        // 0x261548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26154Cu;
    // 0x26154c: 0x0  nop
    ctx->pc = 0x26154cu;
    // NOP
    ctx->pc = 0x261550u;
}
