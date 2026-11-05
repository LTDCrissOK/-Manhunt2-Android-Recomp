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

// Function: sub_0035D840
// Address: 0x35d840 - 0x35d868
void sub_0035D840_0x35d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D840_0x35d840");
#endif

    switch (ctx->pc) {
        case 0x35d850u: goto label_35d850;
        default: break;
    }

    ctx->pc = 0x35d840u;

    // 0x35d840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d848: 0xc0d7608  jal         func_35D820
    ctx->pc = 0x35D848u;
    SET_GPR_U32(ctx, 31, 0x35D850u);
    ctx->pc = 0x35D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D820u, 0x35D848u, 0x35D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D850u;
label_35d850:
    // 0x35d850: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x35d850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x35d854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d858: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x35d858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35d85c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D85Cu;
        // 0x35d860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D864u;
    // 0x35d864: 0x0  nop
    ctx->pc = 0x35d864u;
    // NOP
    ctx->pc = 0x35d868u;
}
