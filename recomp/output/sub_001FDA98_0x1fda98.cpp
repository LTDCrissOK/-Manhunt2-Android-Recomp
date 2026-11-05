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

// Function: sub_001FDA98
// Address: 0x1fda98 - 0x1fdab8
void sub_001FDA98_0x1fda98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDA98_0x1fda98");
#endif

    switch (ctx->pc) {
        case 0x1fdaacu: goto label_1fdaac;
        default: break;
    }

    ctx->pc = 0x1fda98u;

    // 0x1fda98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fda98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fda9c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fdaa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fdaa4: 0xc07fb34  jal         func_1FECD0
    ctx->pc = 0x1FDAA4u;
    SET_GPR_U32(ctx, 31, 0x1FDAACu);
    ctx->pc = 0x1FDAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDAA4u;
    // 0x1fdaa8: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECD0u, 0x1FDAA4u, 0x1FDAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDAACu;
label_1fdaac:
    // 0x1fdaac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdaacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDAB0u;
        // 0x1fdab4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDAB8u;
}
