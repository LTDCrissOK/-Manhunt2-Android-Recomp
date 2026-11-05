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

// Function: sub_00220EB8
// Address: 0x220eb8 - 0x220ed8
void sub_00220EB8_0x220eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220EB8_0x220eb8");
#endif

    switch (ctx->pc) {
        case 0x220ec8u: goto label_220ec8;
        default: break;
    }

    ctx->pc = 0x220eb8u;

    // 0x220eb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220ec0: 0xc088b76  jal         func_222DD8
    ctx->pc = 0x220EC0u;
    SET_GPR_U32(ctx, 31, 0x220EC8u);
    ctx->pc = 0x222DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222DD8u, 0x220EC0u, 0x220EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220EC8u;
label_220ec8:
    // 0x220ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x220ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220ECCu;
        // 0x220ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220ED4u;
    // 0x220ed4: 0x0  nop
    ctx->pc = 0x220ed4u;
    // NOP
    ctx->pc = 0x220ed8u;
}
