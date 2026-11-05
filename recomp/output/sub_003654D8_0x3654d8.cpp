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

// Function: sub_003654D8
// Address: 0x3654d8 - 0x365508
void sub_003654D8_0x3654d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003654D8_0x3654d8");
#endif

    switch (ctx->pc) {
        case 0x3654e8u: goto label_3654e8;
        case 0x3654f0u: goto label_3654f0;
        default: break;
    }

    ctx->pc = 0x3654d8u;

    // 0x3654d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3654d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3654dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3654dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3654e0: 0xc0d9672  jal         func_3659C8
    ctx->pc = 0x3654E0u;
    SET_GPR_U32(ctx, 31, 0x3654E8u);
    ctx->pc = 0x3659C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3659C8u, 0x3654E0u, 0x3654E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654E8u;
label_3654e8:
    // 0x3654e8: 0xc0d9772  jal         func_365DC8
    ctx->pc = 0x3654E8u;
    SET_GPR_U32(ctx, 31, 0x3654F0u);
    ctx->pc = 0x365DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365DC8u, 0x3654E8u, 0x3654F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3654F0u;
label_3654f0:
    // 0x3654f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3654f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3654f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3654F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3654F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3654F4u;
        // 0x3654f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3654F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3654FCu;
    // 0x3654fc: 0x0  nop
    ctx->pc = 0x3654fcu;
    // NOP
    // 0x365500: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x365500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x365504: 0x0  nop
    ctx->pc = 0x365504u;
    // NOP
    ctx->pc = 0x365508u;
}
