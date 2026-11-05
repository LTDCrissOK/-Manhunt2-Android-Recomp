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

// Function: sub_002B2438
// Address: 0x2b2438 - 0x2b2470
void sub_002B2438_0x2b2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2438_0x2b2438");
#endif

    switch (ctx->pc) {
        case 0x2b2450u: goto label_2b2450;
        default: break;
    }

    ctx->pc = 0x2b2438u;

    // 0x2b2438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b2438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b243c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2444: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b2444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b2448: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x2B2448u;
    SET_GPR_U32(ctx, 31, 0x2B2450u);
    ctx->pc = 0x2B244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2448u;
    // 0x2b244c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2B2448u, 0x2B2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2450u;
label_2b2450:
    // 0x2b2450: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2b2450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b2454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b2454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b2458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b245c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2460: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b2460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2464: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b2464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2b2468: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2468u;
        // 0x2b246c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2470u;
}
