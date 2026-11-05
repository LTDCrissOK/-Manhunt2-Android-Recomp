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

// Function: sub_00107770
// Address: 0x107770 - 0x107790
void sub_00107770_0x107770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107770_0x107770");
#endif

    switch (ctx->pc) {
        case 0x107780u: goto label_107780;
        default: break;
    }

    ctx->pc = 0x107770u;

    // 0x107770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107778: 0xc0f6c42  jal         func_3DB108
    ctx->pc = 0x107778u;
    SET_GPR_U32(ctx, 31, 0x107780u);
    ctx->pc = 0x3DB108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB108u, 0x107778u, 0x107780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107780u;
label_107780:
    // 0x107780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107784: 0x3e00008  jr          $ra
    ctx->pc = 0x107784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107784u;
        // 0x107788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10778Cu;
    // 0x10778c: 0x0  nop
    ctx->pc = 0x10778cu;
    // NOP
    ctx->pc = 0x107790u;
}
