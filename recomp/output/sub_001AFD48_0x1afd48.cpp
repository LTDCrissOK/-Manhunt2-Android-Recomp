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

// Function: sub_001AFD48
// Address: 0x1afd48 - 0x1afd70
void sub_001AFD48_0x1afd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFD48_0x1afd48");
#endif

    switch (ctx->pc) {
        case 0x1afd60u: goto label_1afd60;
        default: break;
    }

    ctx->pc = 0x1afd48u;

    // 0x1afd48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afd4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1afd4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afd50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afd54: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1afd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1afd58: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFD58u;
    SET_GPR_U32(ctx, 31, 0x1AFD60u);
    ctx->pc = 0x1AFD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD58u;
    // 0x1afd5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFD58u, 0x1AFD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD60u;
label_1afd60:
    // 0x1afd60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afd64: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD64u;
        // 0x1afd68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFD6Cu;
    // 0x1afd6c: 0x0  nop
    ctx->pc = 0x1afd6cu;
    // NOP
    ctx->pc = 0x1afd70u;
}
