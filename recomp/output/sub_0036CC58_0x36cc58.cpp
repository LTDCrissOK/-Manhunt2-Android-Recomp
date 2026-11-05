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

// Function: sub_0036CC58
// Address: 0x36cc58 - 0x36cc80
void sub_0036CC58_0x36cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CC58_0x36cc58");
#endif

    switch (ctx->pc) {
        case 0x36cc68u: goto label_36cc68;
        default: break;
    }

    ctx->pc = 0x36cc58u;

    // 0x36cc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36cc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36cc60: 0xc0db320  jal         func_36CC80
    ctx->pc = 0x36CC60u;
    SET_GPR_U32(ctx, 31, 0x36CC68u);
    ctx->pc = 0x36CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CC80u, 0x36CC60u, 0x36CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC68u;
label_36cc68:
    // 0x36cc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x36CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC6Cu;
        // 0x36cc70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CC74u;
    // 0x36cc74: 0x0  nop
    ctx->pc = 0x36cc74u;
    // NOP
    // 0x36cc78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36cc7c: 0x0  nop
    ctx->pc = 0x36cc7cu;
    // NOP
    ctx->pc = 0x36cc80u;
}
