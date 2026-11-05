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

// Function: sub_003E8440
// Address: 0x3e8440 - 0x3e8460
void sub_003E8440_0x3e8440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8440_0x3e8440");
#endif

    switch (ctx->pc) {
        case 0x3e8450u: goto label_3e8450;
        default: break;
    }

    ctx->pc = 0x3e8440u;

    // 0x3e8440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e8444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8448: 0xc0b0340  jal         func_2C0D00
    ctx->pc = 0x3E8448u;
    SET_GPR_U32(ctx, 31, 0x3E8450u);
    ctx->pc = 0x3E844Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8448u;
    // 0x3e844c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D00u, 0x3E8448u, 0x3E8450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8450u;
label_3e8450:
    // 0x3e8450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8454: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8454u;
        // 0x3e8458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E845Cu;
    // 0x3e845c: 0x0  nop
    ctx->pc = 0x3e845cu;
    // NOP
    ctx->pc = 0x3e8460u;
}
