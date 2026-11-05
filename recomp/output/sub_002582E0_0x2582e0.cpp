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

// Function: sub_002582E0
// Address: 0x2582e0 - 0x258300
void sub_002582E0_0x2582e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002582E0_0x2582e0");
#endif

    switch (ctx->pc) {
        case 0x2582f0u: goto label_2582f0;
        default: break;
    }

    ctx->pc = 0x2582e0u;

    // 0x2582e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2582e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2582e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2582e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2582e8: 0xc083ba6  jal         func_20EE98
    ctx->pc = 0x2582E8u;
    SET_GPR_U32(ctx, 31, 0x2582F0u);
    ctx->pc = 0x20EE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EE98u, 0x2582E8u, 0x2582F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582F0u;
label_2582f0:
    // 0x2582f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2582f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2582f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2582F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2582F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582F4u;
        // 0x2582f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2582F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2582FCu;
    // 0x2582fc: 0x0  nop
    ctx->pc = 0x2582fcu;
    // NOP
    ctx->pc = 0x258300u;
}
