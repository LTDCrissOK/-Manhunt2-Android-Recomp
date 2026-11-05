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

// Function: sub_003E00F0
// Address: 0x3e00f0 - 0x3e0110
void sub_003E00F0_0x3e00f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E00F0_0x3e00f0");
#endif

    switch (ctx->pc) {
        case 0x3e0100u: goto label_3e0100;
        default: break;
    }

    ctx->pc = 0x3e00f0u;

    // 0x3e00f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e00f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e00f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e00f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e00f8: 0xc0f7f6e  jal         func_3DFDB8
    ctx->pc = 0x3E00F8u;
    SET_GPR_U32(ctx, 31, 0x3E0100u);
    ctx->pc = 0x3DFDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFDB8u, 0x3E00F8u, 0x3E0100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0100u;
label_3e0100:
    // 0x3e0100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e0100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0104: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0104u;
        // 0x3e0108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E010Cu;
    // 0x3e010c: 0x0  nop
    ctx->pc = 0x3e010cu;
    // NOP
    ctx->pc = 0x3e0110u;
}
