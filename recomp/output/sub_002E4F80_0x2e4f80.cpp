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

// Function: sub_002E4F80
// Address: 0x2e4f80 - 0x2e4fa8
void sub_002E4F80_0x2e4f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4F80_0x2e4f80");
#endif

    switch (ctx->pc) {
        case 0x2e4f90u: goto label_2e4f90;
        default: break;
    }

    ctx->pc = 0x2e4f80u;

    // 0x2e4f80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e4f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4f88: 0xc0a03d8  jal         func_280F60
    ctx->pc = 0x2E4F88u;
    SET_GPR_U32(ctx, 31, 0x2E4F90u);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x2E4F88u, 0x2E4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F90u;
label_2e4f90:
    // 0x2e4f90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2e4f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e4f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4f98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e4f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e4f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F9Cu;
        // 0x2e4fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4FA4u;
    // 0x2e4fa4: 0x0  nop
    ctx->pc = 0x2e4fa4u;
    // NOP
    ctx->pc = 0x2e4fa8u;
}
