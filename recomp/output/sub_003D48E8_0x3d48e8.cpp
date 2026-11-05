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

// Function: sub_003D48E8
// Address: 0x3d48e8 - 0x3d4900
void sub_003D48E8_0x3d48e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D48E8_0x3d48e8");
#endif

    switch (ctx->pc) {
        case 0x3d48f0u: goto label_3d48f0;
        case 0x3d48f4u: goto label_3d48f4;
        default: break;
    }

    ctx->pc = 0x3d48e8u;

    // 0x3d48e8: 0xc0f56a6  jal         func_3D5A98
    ctx->pc = 0x3D48E8u;
    SET_GPR_U32(ctx, 31, 0x3D48F0u);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D48E8u, 0x3D48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D48F0u;
label_3d48f0:
    // 0x3d48f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d48f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d48f4:
    // 0x3d48f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d48f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d48f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D48F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D48F8u;
        // 0x3d48fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D48F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4900u;
}
