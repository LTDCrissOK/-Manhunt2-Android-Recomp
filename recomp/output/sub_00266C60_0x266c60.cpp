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

// Function: sub_00266C60
// Address: 0x266c60 - 0x266c80
void sub_00266C60_0x266c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266C60_0x266c60");
#endif

    switch (ctx->pc) {
        case 0x266c70u: goto label_266c70;
        default: break;
    }

    ctx->pc = 0x266c60u;

    // 0x266c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x266c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x266c68: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x266C68u;
    SET_GPR_U32(ctx, 31, 0x266C70u);
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x266C68u, 0x266C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C70u;
label_266c70:
    // 0x266c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x266c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266c74: 0x3e00008  jr          $ra
    ctx->pc = 0x266C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266C74u;
        // 0x266c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266C7Cu;
    // 0x266c7c: 0x0  nop
    ctx->pc = 0x266c7cu;
    // NOP
    ctx->pc = 0x266c80u;
}
