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

// Function: sub_003E26C0
// Address: 0x3e26c0 - 0x3e26e0
void sub_003E26C0_0x3e26c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E26C0_0x3e26c0");
#endif

    switch (ctx->pc) {
        case 0x3e26d0u: goto label_3e26d0;
        default: break;
    }

    ctx->pc = 0x3e26c0u;

    // 0x3e26c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e26c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e26c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e26c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e26c8: 0xc0a7bd4  jal         func_29EF50
    ctx->pc = 0x3E26C8u;
    SET_GPR_U32(ctx, 31, 0x3E26D0u);
    ctx->pc = 0x29EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EF50u, 0x3E26C8u, 0x3E26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E26D0u;
label_3e26d0:
    // 0x3e26d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e26d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e26d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E26D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E26D4u;
        // 0x3e26d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E26D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E26DCu;
    // 0x3e26dc: 0x0  nop
    ctx->pc = 0x3e26dcu;
    // NOP
    ctx->pc = 0x3e26e0u;
}
