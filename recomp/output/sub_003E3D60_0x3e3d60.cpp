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

// Function: sub_003E3D60
// Address: 0x3e3d60 - 0x3e3da0
void sub_003E3D60_0x3e3d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3D60_0x3e3d60");
#endif

    switch (ctx->pc) {
        case 0x3e3d70u: goto label_3e3d70;
        default: break;
    }

    ctx->pc = 0x3e3d60u;

    // 0x3e3d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e3d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e3d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e3d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e3d68: 0xc0ab0f0  jal         func_2AC3C0
    ctx->pc = 0x3E3D68u;
    SET_GPR_U32(ctx, 31, 0x3E3D70u);
    ctx->pc = 0x3E3D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D68u;
    // 0x3e3d6c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC3C0u, 0x3E3D68u, 0x3E3D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D70u;
label_3e3d70:
    // 0x3e3d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e3d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3d74: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D74u;
        // 0x3e3d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3D7Cu;
    // 0x3e3d7c: 0x0  nop
    ctx->pc = 0x3e3d7cu;
    // NOP
    // 0x3e3d80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e3d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e3d84: 0x0  nop
    ctx->pc = 0x3e3d84u;
    // NOP
    // 0x3e3d88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e3d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e3d8c: 0x0  nop
    ctx->pc = 0x3e3d8cu;
    // NOP
    // 0x3e3d90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e3d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e3d94: 0x0  nop
    ctx->pc = 0x3e3d94u;
    // NOP
    // 0x3e3d98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e3d9c: 0x0  nop
    ctx->pc = 0x3e3d9cu;
    // NOP
    ctx->pc = 0x3e3da0u;
}
