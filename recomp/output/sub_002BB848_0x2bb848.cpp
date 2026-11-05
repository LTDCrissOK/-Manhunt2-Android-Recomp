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

// Function: sub_002BB848
// Address: 0x2bb848 - 0x2bb868
void sub_002BB848_0x2bb848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB848_0x2bb848");
#endif

    switch (ctx->pc) {
        case 0x2bb85cu: goto label_2bb85c;
        default: break;
    }

    ctx->pc = 0x2bb848u;

    // 0x2bb848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb84c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bb84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bb850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bb850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bb854: 0xc0b07a2  jal         func_2C1E88
    ctx->pc = 0x2BB854u;
    SET_GPR_U32(ctx, 31, 0x2BB85Cu);
    ctx->pc = 0x2BB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB854u;
    // 0x2bb858: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1E88u, 0x2BB854u, 0x2BB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB85Cu;
label_2bb85c:
    // 0x2bb85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb860: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB860u;
        // 0x2bb864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB868u;
}
