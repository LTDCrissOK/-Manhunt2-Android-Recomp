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

// Function: sub_00254950
// Address: 0x254950 - 0x254978
void sub_00254950_0x254950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254950_0x254950");
#endif

    switch (ctx->pc) {
        case 0x254960u: goto label_254960;
        default: break;
    }

    ctx->pc = 0x254950u;

    // 0x254950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254958: 0xc095326  jal         func_254C98
    ctx->pc = 0x254958u;
    SET_GPR_U32(ctx, 31, 0x254960u);
    ctx->pc = 0x254C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C98u, 0x254958u, 0x254960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254960u;
label_254960:
    // 0x254960: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x254964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254968: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x254968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x25496c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x25496cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x254970: 0x3e00008  jr          $ra
    ctx->pc = 0x254970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254970u;
        // 0x254974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254978u;
}
