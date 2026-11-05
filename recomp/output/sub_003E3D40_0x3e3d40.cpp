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

// Function: sub_003E3D40
// Address: 0x3e3d40 - 0x3e3d60
void sub_003E3D40_0x3e3d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3D40_0x3e3d40");
#endif

    switch (ctx->pc) {
        case 0x3e3d50u: goto label_3e3d50;
        default: break;
    }

    ctx->pc = 0x3e3d40u;

    // 0x3e3d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e3d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e3d48: 0xc0ab0f0  jal         func_2AC3C0
    ctx->pc = 0x3E3D48u;
    SET_GPR_U32(ctx, 31, 0x3E3D50u);
    ctx->pc = 0x3E3D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D48u;
    // 0x3e3d4c: 0x2484ffe8  addiu       $a0, $a0, -0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC3C0u, 0x3E3D48u, 0x3E3D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D50u;
label_3e3d50:
    // 0x3e3d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e3d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3d54: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D54u;
        // 0x3e3d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3D5Cu;
    // 0x3e3d5c: 0x0  nop
    ctx->pc = 0x3e3d5cu;
    // NOP
    ctx->pc = 0x3e3d60u;
}
