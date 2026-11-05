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

// Function: sub_00248820
// Address: 0x248820 - 0x248840
void sub_00248820_0x248820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248820_0x248820");
#endif

    switch (ctx->pc) {
        case 0x248834u: goto label_248834;
        default: break;
    }

    ctx->pc = 0x248820u;

    // 0x248820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x248824: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24882c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24882Cu;
    SET_GPR_U32(ctx, 31, 0x248834u);
    ctx->pc = 0x248830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24882Cu;
    // 0x248830: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24882Cu, 0x248834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248834u;
label_248834:
    // 0x248834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248838: 0x3e00008  jr          $ra
    ctx->pc = 0x248838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248838u;
        // 0x24883c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248840u;
}
