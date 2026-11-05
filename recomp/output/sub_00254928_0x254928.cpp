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

// Function: sub_00254928
// Address: 0x254928 - 0x254950
void sub_00254928_0x254928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254928_0x254928");
#endif

    switch (ctx->pc) {
        case 0x254938u: goto label_254938;
        default: break;
    }

    ctx->pc = 0x254928u;

    // 0x254928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25492c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254930: 0xc095314  jal         func_254C50
    ctx->pc = 0x254930u;
    SET_GPR_U32(ctx, 31, 0x254938u);
    ctx->pc = 0x254C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C50u, 0x254930u, 0x254938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254938u;
label_254938:
    // 0x254938: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x254938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x25493c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254940: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x254940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x254944: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x254944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x254948: 0x3e00008  jr          $ra
    ctx->pc = 0x254948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254948u;
        // 0x25494c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254950u;
}
