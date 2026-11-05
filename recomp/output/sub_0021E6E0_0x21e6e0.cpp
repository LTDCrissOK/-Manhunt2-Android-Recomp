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

// Function: sub_0021E6E0
// Address: 0x21e6e0 - 0x21e700
void sub_0021E6E0_0x21e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E6E0_0x21e6e0");
#endif

    switch (ctx->pc) {
        case 0x21e6f0u: goto label_21e6f0;
        default: break;
    }

    ctx->pc = 0x21e6e0u;

    // 0x21e6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e6e8: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x21E6E8u;
    SET_GPR_U32(ctx, 31, 0x21E6F0u);
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x21E6E8u, 0x21E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E6F0u;
label_21e6f0:
    // 0x21e6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E6F4u;
        // 0x21e6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E6FCu;
    // 0x21e6fc: 0x0  nop
    ctx->pc = 0x21e6fcu;
    // NOP
    ctx->pc = 0x21e700u;
}
