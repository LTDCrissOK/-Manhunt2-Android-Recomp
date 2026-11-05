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

// Function: sub_00341BE8
// Address: 0x341be8 - 0x341c08
void sub_00341BE8_0x341be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341BE8_0x341be8");
#endif

    switch (ctx->pc) {
        case 0x341bf8u: goto label_341bf8;
        default: break;
    }

    ctx->pc = 0x341be8u;

    // 0x341be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x341be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x341bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x341becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x341bf0: 0xc0d0702  jal         func_341C08
    ctx->pc = 0x341BF0u;
    SET_GPR_U32(ctx, 31, 0x341BF8u);
    ctx->pc = 0x341C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C08u, 0x341BF0u, 0x341BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BF8u;
label_341bf8:
    // 0x341bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x341bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x341BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341BFCu;
        // 0x341c00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C04u;
    // 0x341c04: 0x0  nop
    ctx->pc = 0x341c04u;
    // NOP
    ctx->pc = 0x341c08u;
}
