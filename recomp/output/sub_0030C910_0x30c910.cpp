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

// Function: sub_0030C910
// Address: 0x30c910 - 0x30c938
void sub_0030C910_0x30c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C910_0x30c910");
#endif

    switch (ctx->pc) {
        case 0x30c92cu: goto label_30c92c;
        default: break;
    }

    ctx->pc = 0x30c910u;

    // 0x30c910: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x30c910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c914: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c918: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x30c918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c920: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x30c920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30c924: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x30C924u;
    SET_GPR_U32(ctx, 31, 0x30C92Cu);
    ctx->pc = 0x30C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C924u;
    // 0x30c928: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x30C924u, 0x30C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C92Cu;
label_30c92c:
    // 0x30c92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c930: 0x3e00008  jr          $ra
    ctx->pc = 0x30C930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C930u;
        // 0x30c934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C938u;
}
