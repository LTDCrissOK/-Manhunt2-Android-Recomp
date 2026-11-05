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

// Function: sub_0013D1E0
// Address: 0x13d1e0 - 0x13d200
void sub_0013D1E0_0x13d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D1E0_0x13d1e0");
#endif

    switch (ctx->pc) {
        case 0x13d1f0u: goto label_13d1f0;
        default: break;
    }

    ctx->pc = 0x13d1e0u;

    // 0x13d1e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d1e8: 0xc04f846  jal         func_13E118
    ctx->pc = 0x13D1E8u;
    SET_GPR_U32(ctx, 31, 0x13D1F0u);
    ctx->pc = 0x13D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D1E8u;
    // 0x13d1ec: 0x8c840218  lw          $a0, 0x218($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E118u, 0x13D1E8u, 0x13D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1F0u;
label_13d1f0:
    // 0x13d1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1F4u;
        // 0x13d1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D1FCu;
    // 0x13d1fc: 0x0  nop
    ctx->pc = 0x13d1fcu;
    // NOP
    ctx->pc = 0x13d200u;
}
