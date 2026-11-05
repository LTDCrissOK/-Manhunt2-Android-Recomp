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

// Function: sub_003DAE58
// Address: 0x3dae58 - 0x3dae88
void sub_003DAE58_0x3dae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAE58_0x3dae58");
#endif

    switch (ctx->pc) {
        case 0x3dae68u: goto label_3dae68;
        case 0x3dae70u: goto label_3dae70;
        default: break;
    }

    ctx->pc = 0x3dae58u;

    // 0x3dae58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dae5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dae60: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAE60u;
    SET_GPR_U32(ctx, 31, 0x3DAE68u);
    ctx->pc = 0x3DAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE60u;
    // 0x3dae64: 0x24040b20  addiu       $a0, $zero, 0xB20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAE60u, 0x3DAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE68u;
label_3dae68:
    // 0x3dae68: 0xc050e20  jal         func_143880
    ctx->pc = 0x3DAE68u;
    SET_GPR_U32(ctx, 31, 0x3DAE70u);
    ctx->pc = 0x3DAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAE68u;
    // 0x3dae6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143880u, 0x3DAE68u, 0x3DAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAE70u;
label_3dae70:
    // 0x3dae70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dae70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dae74: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAE74u;
        // 0x3dae78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAE7Cu;
    // 0x3dae7c: 0x0  nop
    ctx->pc = 0x3dae7cu;
    // NOP
    // 0x3dae80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dae80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dae84: 0x0  nop
    ctx->pc = 0x3dae84u;
    // NOP
    ctx->pc = 0x3dae88u;
}
