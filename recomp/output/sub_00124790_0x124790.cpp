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

// Function: sub_00124790
// Address: 0x124790 - 0x1247b0
void sub_00124790_0x124790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124790_0x124790");
#endif

    switch (ctx->pc) {
        case 0x1247a4u: goto label_1247a4;
        default: break;
    }

    ctx->pc = 0x124790u;

    // 0x124790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x124790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x124794: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x124794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12479c: 0xc0491fc  jal         func_1247F0
    ctx->pc = 0x12479Cu;
    SET_GPR_U32(ctx, 31, 0x1247A4u);
    ctx->pc = 0x1247A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12479Cu;
    // 0x1247a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1247F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1247F0u, 0x12479Cu, 0x1247A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1247A4u;
label_1247a4:
    // 0x1247a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1247a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1247a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1247A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1247ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247A8u;
        // 0x1247ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1247A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1247B0u;
}
