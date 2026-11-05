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

// Function: sub_001AF750
// Address: 0x1af750 - 0x1af778
void sub_001AF750_0x1af750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF750_0x1af750");
#endif

    switch (ctx->pc) {
        case 0x1af768u: goto label_1af768;
        default: break;
    }

    ctx->pc = 0x1af750u;

    // 0x1af750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af754: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1af754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1af758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af75c: 0x2406012f  addiu       $a2, $zero, 0x12F
    ctx->pc = 0x1af75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x1af760: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF760u;
    SET_GPR_U32(ctx, 31, 0x1AF768u);
    ctx->pc = 0x1AF764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF760u;
    // 0x1af764: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF760u, 0x1AF768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF768u;
label_1af768:
    // 0x1af768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af76c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF76Cu;
        // 0x1af770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF774u;
    // 0x1af774: 0x0  nop
    ctx->pc = 0x1af774u;
    // NOP
    ctx->pc = 0x1af778u;
}
