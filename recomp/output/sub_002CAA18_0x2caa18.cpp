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

// Function: sub_002CAA18
// Address: 0x2caa18 - 0x2caa38
void sub_002CAA18_0x2caa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAA18_0x2caa18");
#endif

    switch (ctx->pc) {
        case 0x2caa28u: goto label_2caa28;
        default: break;
    }

    ctx->pc = 0x2caa18u;

    // 0x2caa18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caa1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caa20: 0xc0b2850  jal         func_2CA140
    ctx->pc = 0x2CAA20u;
    SET_GPR_U32(ctx, 31, 0x2CAA28u);
    ctx->pc = 0x2CA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA140u, 0x2CAA20u, 0x2CAA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAA28u;
label_2caa28:
    // 0x2caa28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2caa28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAA2Cu;
        // 0x2caa30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAA34u;
    // 0x2caa34: 0x0  nop
    ctx->pc = 0x2caa34u;
    // NOP
    ctx->pc = 0x2caa38u;
}
