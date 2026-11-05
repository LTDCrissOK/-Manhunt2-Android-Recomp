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

// Function: sub_00107418
// Address: 0x107418 - 0x107438
void sub_00107418_0x107418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107418_0x107418");
#endif

    switch (ctx->pc) {
        case 0x107428u: goto label_107428;
        default: break;
    }

    ctx->pc = 0x107418u;

    // 0x107418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10741c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10741cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107420: 0xc0f6b36  jal         func_3DACD8
    ctx->pc = 0x107420u;
    SET_GPR_U32(ctx, 31, 0x107428u);
    ctx->pc = 0x3DACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DACD8u, 0x107420u, 0x107428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107428u;
label_107428:
    // 0x107428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10742c: 0x3e00008  jr          $ra
    ctx->pc = 0x10742Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10742Cu;
        // 0x107430: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10742Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107434u;
    // 0x107434: 0x0  nop
    ctx->pc = 0x107434u;
    // NOP
    ctx->pc = 0x107438u;
}
