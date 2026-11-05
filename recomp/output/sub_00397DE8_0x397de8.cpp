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

// Function: sub_00397DE8
// Address: 0x397de8 - 0x397e18
void sub_00397DE8_0x397de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397DE8_0x397de8");
#endif

    switch (ctx->pc) {
        case 0x397df8u: goto label_397df8;
        default: break;
    }

    ctx->pc = 0x397de8u;

    // 0x397de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397df0: 0xc0ea798  jal         func_3A9E60
    ctx->pc = 0x397DF0u;
    SET_GPR_U32(ctx, 31, 0x397DF8u);
    ctx->pc = 0x3A9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9E60u, 0x397DF0u, 0x397DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397DF8u;
label_397df8:
    // 0x397df8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397dfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x397dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397e00: 0x3e00008  jr          $ra
    ctx->pc = 0x397E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E00u;
        // 0x397e04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397E08u;
    // 0x397e08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397e0c: 0x0  nop
    ctx->pc = 0x397e0cu;
    // NOP
    // 0x397e10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397e14: 0x0  nop
    ctx->pc = 0x397e14u;
    // NOP
    ctx->pc = 0x397e18u;
}
