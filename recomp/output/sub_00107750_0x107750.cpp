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

// Function: sub_00107750
// Address: 0x107750 - 0x107770
void sub_00107750_0x107750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107750_0x107750");
#endif

    switch (ctx->pc) {
        case 0x107760u: goto label_107760;
        default: break;
    }

    ctx->pc = 0x107750u;

    // 0x107750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107758: 0xc0f6c38  jal         func_3DB0E0
    ctx->pc = 0x107758u;
    SET_GPR_U32(ctx, 31, 0x107760u);
    ctx->pc = 0x3DB0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB0E0u, 0x107758u, 0x107760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107760u;
label_107760:
    // 0x107760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107764: 0x3e00008  jr          $ra
    ctx->pc = 0x107764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107764u;
        // 0x107768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10776Cu;
    // 0x10776c: 0x0  nop
    ctx->pc = 0x10776cu;
    // NOP
    ctx->pc = 0x107770u;
}
