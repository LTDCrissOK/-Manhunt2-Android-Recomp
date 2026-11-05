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

// Function: sub_00154DD0
// Address: 0x154dd0 - 0x154df0
void sub_00154DD0_0x154dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154DD0_0x154dd0");
#endif

    switch (ctx->pc) {
        case 0x154de0u: goto label_154de0;
        default: break;
    }

    ctx->pc = 0x154dd0u;

    // 0x154dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154dd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154dd8: 0xc055384  jal         func_154E10
    ctx->pc = 0x154DD8u;
    SET_GPR_U32(ctx, 31, 0x154DE0u);
    ctx->pc = 0x154DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154DD8u;
    // 0x154ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E10u, 0x154DD8u, 0x154DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154DE0u;
label_154de0:
    // 0x154de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154de4: 0x3e00008  jr          $ra
    ctx->pc = 0x154DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154DE4u;
        // 0x154de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154DECu;
    // 0x154dec: 0x0  nop
    ctx->pc = 0x154decu;
    // NOP
    ctx->pc = 0x154df0u;
}
