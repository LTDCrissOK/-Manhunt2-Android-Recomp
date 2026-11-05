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

// Function: sub_003E24E8
// Address: 0x3e24e8 - 0x3e2510
void sub_003E24E8_0x3e24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E24E8_0x3e24e8");
#endif

    switch (ctx->pc) {
        case 0x3e2504u: goto label_3e2504;
        default: break;
    }

    ctx->pc = 0x3e24e8u;

    // 0x3e24e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e24ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e24ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e24f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e24f4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e24f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e24f8: 0x24422ff0  addiu       $v0, $v0, 0x2FF0
    ctx->pc = 0x3e24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12272));
    // 0x3e24fc: 0xc0a6744  jal         func_299D10
    ctx->pc = 0x3E24FCu;
    SET_GPR_U32(ctx, 31, 0x3E2504u);
    ctx->pc = 0x3E2500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E24FCu;
    // 0x3e2500: 0xac620074  sw          $v0, 0x74($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299D10u, 0x3E24FCu, 0x3E2504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2504u;
label_3e2504:
    // 0x3e2504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e2504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2508: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2508u;
        // 0x3e250c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2510u;
}
