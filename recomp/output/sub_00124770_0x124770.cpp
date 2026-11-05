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

// Function: sub_00124770
// Address: 0x124770 - 0x124790
void sub_00124770_0x124770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124770_0x124770");
#endif

    switch (ctx->pc) {
        case 0x124784u: goto label_124784;
        default: break;
    }

    ctx->pc = 0x124770u;

    // 0x124770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124774: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x124774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12477c: 0xc0491fc  jal         func_1247F0
    ctx->pc = 0x12477Cu;
    SET_GPR_U32(ctx, 31, 0x124784u);
    ctx->pc = 0x124780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12477Cu;
    // 0x124780: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247F0u, 0x12477Cu, 0x124784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124784u;
label_124784:
    // 0x124784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124788: 0x3e00008  jr          $ra
    ctx->pc = 0x124788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124788u;
        // 0x12478c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124790u;
}
