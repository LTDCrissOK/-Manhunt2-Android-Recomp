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

// Function: sub_0021E700
// Address: 0x21e700 - 0x21e720
void sub_0021E700_0x21e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E700_0x21e700");
#endif

    switch (ctx->pc) {
        case 0x21e710u: goto label_21e710;
        default: break;
    }

    ctx->pc = 0x21e700u;

    // 0x21e700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21e700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21e704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21e708: 0xc0878a2  jal         func_21E288
    ctx->pc = 0x21E708u;
    SET_GPR_U32(ctx, 31, 0x21E710u);
    ctx->pc = 0x21E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E288u, 0x21E708u, 0x21E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E710u;
label_21e710:
    // 0x21e710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e714: 0x3e00008  jr          $ra
    ctx->pc = 0x21E714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E714u;
        // 0x21e718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E71Cu;
    // 0x21e71c: 0x0  nop
    ctx->pc = 0x21e71cu;
    // NOP
    ctx->pc = 0x21e720u;
}
