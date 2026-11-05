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

// Function: sub_003DB068
// Address: 0x3db068 - 0x3db090
void sub_003DB068_0x3db068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB068_0x3db068");
#endif

    switch (ctx->pc) {
        case 0x3db078u: goto label_3db078;
        case 0x3db080u: goto label_3db080;
        default: break;
    }

    ctx->pc = 0x3db068u;

    // 0x3db068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db070: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB070u;
    SET_GPR_U32(ctx, 31, 0x3DB078u);
    ctx->pc = 0x3DB074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB070u;
    // 0x3db074: 0x24040340  addiu       $a0, $zero, 0x340 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB070u, 0x3DB078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB078u;
label_3db078:
    // 0x3db078: 0xc055e3c  jal         func_1578F0
    ctx->pc = 0x3DB078u;
    SET_GPR_U32(ctx, 31, 0x3DB080u);
    ctx->pc = 0x3DB07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB078u;
    // 0x3db07c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1578F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578F0u, 0x3DB078u, 0x3DB080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB080u;
label_3db080:
    // 0x3db080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db084: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB084u;
        // 0x3db088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB08Cu;
    // 0x3db08c: 0x0  nop
    ctx->pc = 0x3db08cu;
    // NOP
    ctx->pc = 0x3db090u;
}
