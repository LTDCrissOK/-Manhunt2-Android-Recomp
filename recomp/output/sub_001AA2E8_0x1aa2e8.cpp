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

// Function: sub_001AA2E8
// Address: 0x1aa2e8 - 0x1aa308
void sub_001AA2E8_0x1aa2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA2E8_0x1aa2e8");
#endif

    switch (ctx->pc) {
        case 0x1aa2fcu: goto label_1aa2fc;
        default: break;
    }

    ctx->pc = 0x1aa2e8u;

    // 0x1aa2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa2ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa2f4: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AA2F4u;
    SET_GPR_U32(ctx, 31, 0x1AA2FCu);
    ctx->pc = 0x1AA2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2F4u;
    // 0x1aa2f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AA2F4u, 0x1AA2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA2FCu;
label_1aa2fc:
    // 0x1aa2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa300: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA300u;
        // 0x1aa304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA308u;
}
