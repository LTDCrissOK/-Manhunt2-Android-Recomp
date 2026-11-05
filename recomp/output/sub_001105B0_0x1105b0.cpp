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

// Function: sub_001105B0
// Address: 0x1105b0 - 0x1105d0
void sub_001105B0_0x1105b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001105B0_0x1105b0");
#endif

    switch (ctx->pc) {
        case 0x1105c0u: goto label_1105c0;
        default: break;
    }

    ctx->pc = 0x1105b0u;

    // 0x1105b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1105b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1105b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1105b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1105b8: 0xc05de86  jal         func_177A18
    ctx->pc = 0x1105B8u;
    SET_GPR_U32(ctx, 31, 0x1105C0u);
    ctx->pc = 0x1105BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1105B8u;
    // 0x1105bc: 0x8c84001c  lw          $a0, 0x1C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177A18u, 0x1105B8u, 0x1105C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1105C0u;
label_1105c0:
    // 0x1105c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1105c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1105c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1105C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1105C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1105C4u;
        // 0x1105c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1105C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1105CCu;
    // 0x1105cc: 0x0  nop
    ctx->pc = 0x1105ccu;
    // NOP
    ctx->pc = 0x1105d0u;
}
