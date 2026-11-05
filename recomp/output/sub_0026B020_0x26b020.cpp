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

// Function: sub_0026B020
// Address: 0x26b020 - 0x26b040
void sub_0026B020_0x26b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B020_0x26b020");
#endif

    switch (ctx->pc) {
        case 0x26b030u: goto label_26b030;
        default: break;
    }

    ctx->pc = 0x26b020u;

    // 0x26b020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26b024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26b028: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x26B028u;
    SET_GPR_U32(ctx, 31, 0x26B030u);
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x26B028u, 0x26B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B030u;
label_26b030:
    // 0x26b030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b034: 0x3e00008  jr          $ra
    ctx->pc = 0x26B034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B034u;
        // 0x26b038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B03Cu;
    // 0x26b03c: 0x0  nop
    ctx->pc = 0x26b03cu;
    // NOP
    ctx->pc = 0x26b040u;
}
