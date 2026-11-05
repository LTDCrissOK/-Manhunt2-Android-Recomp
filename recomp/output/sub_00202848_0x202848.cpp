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

// Function: sub_00202848
// Address: 0x202848 - 0x202870
void sub_00202848_0x202848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202848_0x202848");
#endif

    switch (ctx->pc) {
        case 0x202858u: goto label_202858;
        default: break;
    }

    ctx->pc = 0x202848u;

    // 0x202848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20284c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202850: 0xc0827c2  jal         func_209F08
    ctx->pc = 0x202850u;
    SET_GPR_U32(ctx, 31, 0x202858u);
    ctx->pc = 0x202854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202850u;
    // 0x202854: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F08u, 0x202850u, 0x202858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202858u;
label_202858:
    // 0x202858: 0x38420017  xori        $v0, $v0, 0x17
    ctx->pc = 0x202858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)23);
    // 0x20285c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202860: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x202860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x202864: 0x3e00008  jr          $ra
    ctx->pc = 0x202864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202864u;
        // 0x202868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20286Cu;
    // 0x20286c: 0x0  nop
    ctx->pc = 0x20286cu;
    // NOP
    ctx->pc = 0x202870u;
}
