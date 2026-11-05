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

// Function: sub_00289D98
// Address: 0x289d98 - 0x289dc0
void sub_00289D98_0x289d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289D98_0x289d98");
#endif

    switch (ctx->pc) {
        case 0x289da8u: goto label_289da8;
        case 0x289db0u: goto label_289db0;
        default: break;
    }

    ctx->pc = 0x289d98u;

    // 0x289d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289da0: 0xc0a1bbe  jal         func_286EF8
    ctx->pc = 0x289DA0u;
    SET_GPR_U32(ctx, 31, 0x289DA8u);
    ctx->pc = 0x286EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286EF8u, 0x289DA0u, 0x289DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DA8u;
label_289da8:
    // 0x289da8: 0xc0a1c1a  jal         func_287068
    ctx->pc = 0x289DA8u;
    SET_GPR_U32(ctx, 31, 0x289DB0u);
    ctx->pc = 0x287068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287068u, 0x289DA8u, 0x289DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289DB0u;
label_289db0:
    // 0x289db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289db4: 0x3e00008  jr          $ra
    ctx->pc = 0x289DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DB4u;
        // 0x289db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289DBCu;
    // 0x289dbc: 0x0  nop
    ctx->pc = 0x289dbcu;
    // NOP
    ctx->pc = 0x289dc0u;
}
