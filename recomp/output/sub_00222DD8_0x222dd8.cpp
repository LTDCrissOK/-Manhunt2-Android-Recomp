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

// Function: sub_00222DD8
// Address: 0x222dd8 - 0x222e00
void sub_00222DD8_0x222dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222DD8_0x222dd8");
#endif

    switch (ctx->pc) {
        case 0x222de8u: goto label_222de8;
        default: break;
    }

    ctx->pc = 0x222dd8u;

    // 0x222dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222de0: 0xc0878a2  jal         func_21E288
    ctx->pc = 0x222DE0u;
    SET_GPR_U32(ctx, 31, 0x222DE8u);
    ctx->pc = 0x21E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E288u, 0x222DE0u, 0x222DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DE8u;
label_222de8:
    // 0x222de8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222dec: 0x3e00008  jr          $ra
    ctx->pc = 0x222DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DECu;
        // 0x222df0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222DF4u;
    // 0x222df4: 0x0  nop
    ctx->pc = 0x222df4u;
    // NOP
    // 0x222df8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x222df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222dfc: 0x0  nop
    ctx->pc = 0x222dfcu;
    // NOP
    ctx->pc = 0x222e00u;
}
