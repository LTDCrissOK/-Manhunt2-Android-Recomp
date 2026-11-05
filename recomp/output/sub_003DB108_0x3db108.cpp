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

// Function: sub_003DB108
// Address: 0x3db108 - 0x3db130
void sub_003DB108_0x3db108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB108_0x3db108");
#endif

    switch (ctx->pc) {
        case 0x3db118u: goto label_3db118;
        case 0x3db120u: goto label_3db120;
        default: break;
    }

    ctx->pc = 0x3db108u;

    // 0x3db108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db110: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB110u;
    SET_GPR_U32(ctx, 31, 0x3DB118u);
    ctx->pc = 0x3DB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB110u;
    // 0x3db114: 0x240403b0  addiu       $a0, $zero, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB110u, 0x3DB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB118u;
label_3db118:
    // 0x3db118: 0xc058524  jal         func_161490
    ctx->pc = 0x3DB118u;
    SET_GPR_U32(ctx, 31, 0x3DB120u);
    ctx->pc = 0x3DB11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB118u;
    // 0x3db11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161490u, 0x3DB118u, 0x3DB120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB120u;
label_3db120:
    // 0x3db120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db124: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB124u;
        // 0x3db128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB12Cu;
    // 0x3db12c: 0x0  nop
    ctx->pc = 0x3db12cu;
    // NOP
    ctx->pc = 0x3db130u;
}
