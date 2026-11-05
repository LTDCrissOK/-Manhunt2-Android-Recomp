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

// Function: sub_00281280
// Address: 0x281280 - 0x2812a8
void sub_00281280_0x281280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281280_0x281280");
#endif

    switch (ctx->pc) {
        case 0x281290u: goto label_281290;
        case 0x281298u: goto label_281298;
        default: break;
    }

    ctx->pc = 0x281280u;

    // 0x281280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281288: 0xc0a6bf0  jal         func_29AFC0
    ctx->pc = 0x281288u;
    SET_GPR_U32(ctx, 31, 0x281290u);
    ctx->pc = 0x29AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFC0u, 0x281288u, 0x281290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281290u;
label_281290:
    // 0x281290: 0xc0a6c2a  jal         func_29B0A8
    ctx->pc = 0x281290u;
    SET_GPR_U32(ctx, 31, 0x281298u);
    ctx->pc = 0x281294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281290u;
    // 0x281294: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B0A8u, 0x281290u, 0x281298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281298u;
label_281298:
    // 0x281298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28129c: 0x3e00008  jr          $ra
    ctx->pc = 0x28129Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2812A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28129Cu;
        // 0x2812a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28129Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2812A4u;
    // 0x2812a4: 0x0  nop
    ctx->pc = 0x2812a4u;
    // NOP
    ctx->pc = 0x2812a8u;
}
