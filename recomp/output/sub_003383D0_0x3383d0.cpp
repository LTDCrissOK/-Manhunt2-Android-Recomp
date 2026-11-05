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

// Function: sub_003383D0
// Address: 0x3383d0 - 0x3383f8
void sub_003383D0_0x3383d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003383D0_0x3383d0");
#endif

    switch (ctx->pc) {
        case 0x3383e0u: goto label_3383e0;
        case 0x3383e8u: goto label_3383e8;
        default: break;
    }

    ctx->pc = 0x3383d0u;

    // 0x3383d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3383d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3383d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3383d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3383d8: 0xc0ce09c  jal         func_338270
    ctx->pc = 0x3383D8u;
    SET_GPR_U32(ctx, 31, 0x3383E0u);
    ctx->pc = 0x338270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338270u, 0x3383D8u, 0x3383E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383E0u;
label_3383e0:
    // 0x3383e0: 0xc0ce0fe  jal         func_3383F8
    ctx->pc = 0x3383E0u;
    SET_GPR_U32(ctx, 31, 0x3383E8u);
    ctx->pc = 0x3383F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3383F8u, 0x3383E0u, 0x3383E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3383E8u;
label_3383e8:
    // 0x3383e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3383e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3383ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3383ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383ECu;
        // 0x3383f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3383F4u;
    // 0x3383f4: 0x0  nop
    ctx->pc = 0x3383f4u;
    // NOP
    ctx->pc = 0x3383f8u;
}
