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

// Function: sub_0012D838
// Address: 0x12d838 - 0x12d858
void sub_0012D838_0x12d838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D838_0x12d838");
#endif

    switch (ctx->pc) {
        case 0x12d848u: goto label_12d848;
        default: break;
    }

    ctx->pc = 0x12d838u;

    // 0x12d838: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d83c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d840: 0xc04b70a  jal         func_12DC28
    ctx->pc = 0x12D840u;
    SET_GPR_U32(ctx, 31, 0x12D848u);
    ctx->pc = 0x12DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DC28u, 0x12D840u, 0x12D848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D848u;
label_12d848:
    // 0x12d848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d84c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D84Cu;
        // 0x12d850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D854u;
    // 0x12d854: 0x0  nop
    ctx->pc = 0x12d854u;
    // NOP
    ctx->pc = 0x12d858u;
}
