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

// Function: sub_00305DA8
// Address: 0x305da8 - 0x305dc8
void sub_00305DA8_0x305da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305DA8_0x305da8");
#endif

    switch (ctx->pc) {
        case 0x305db8u: goto label_305db8;
        default: break;
    }

    ctx->pc = 0x305da8u;

    // 0x305da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x305da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x305dac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305db0: 0xc09304e  jal         func_24C138
    ctx->pc = 0x305DB0u;
    SET_GPR_U32(ctx, 31, 0x305DB8u);
    ctx->pc = 0x24C138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C138u, 0x305DB0u, 0x305DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DB8u;
label_305db8:
    // 0x305db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x305db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x305DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DBCu;
        // 0x305dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305DC4u;
    // 0x305dc4: 0x0  nop
    ctx->pc = 0x305dc4u;
    // NOP
    ctx->pc = 0x305dc8u;
}
