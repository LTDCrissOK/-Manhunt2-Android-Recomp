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

// Function: sub_003DAF50
// Address: 0x3daf50 - 0x3daf78
void sub_003DAF50_0x3daf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAF50_0x3daf50");
#endif

    switch (ctx->pc) {
        case 0x3daf60u: goto label_3daf60;
        case 0x3daf68u: goto label_3daf68;
        default: break;
    }

    ctx->pc = 0x3daf50u;

    // 0x3daf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daf54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daf58: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAF58u;
    SET_GPR_U32(ctx, 31, 0x3DAF60u);
    ctx->pc = 0x3DAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF58u;
    // 0x3daf5c: 0x24040690  addiu       $a0, $zero, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAF58u, 0x3DAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF60u;
label_3daf60:
    // 0x3daf60: 0xc052e32  jal         func_14B8C8
    ctx->pc = 0x3DAF60u;
    SET_GPR_U32(ctx, 31, 0x3DAF68u);
    ctx->pc = 0x3DAF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF60u;
    // 0x3daf64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B8C8u, 0x3DAF60u, 0x3DAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF68u;
label_3daf68:
    // 0x3daf68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF6Cu;
        // 0x3daf70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAF74u;
    // 0x3daf74: 0x0  nop
    ctx->pc = 0x3daf74u;
    // NOP
    ctx->pc = 0x3daf78u;
}
