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

// Function: sub_00386368
// Address: 0x386368 - 0x386390
void sub_00386368_0x386368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386368_0x386368");
#endif

    switch (ctx->pc) {
        case 0x38637cu: goto label_38637c;
        default: break;
    }

    ctx->pc = 0x386368u;

    // 0x386368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x386368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38636c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386370: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x386370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x386374: 0xc0ef886  jal         func_3BE218
    ctx->pc = 0x386374u;
    SET_GPR_U32(ctx, 31, 0x38637Cu);
    ctx->pc = 0x386378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386374u;
    // 0x386378: 0x24840068  addiu       $a0, $a0, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE218u, 0x386374u, 0x38637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38637Cu;
label_38637c:
    // 0x38637c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38637cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x386384: 0x3e00008  jr          $ra
    ctx->pc = 0x386384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386384u;
        // 0x386388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38638Cu;
    // 0x38638c: 0x0  nop
    ctx->pc = 0x38638cu;
    // NOP
    ctx->pc = 0x386390u;
}
